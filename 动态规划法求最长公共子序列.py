#!/usr/bin/python3

def lcs(s1, s2, debug:bool=False):
    assert type(s1)==type(s2), 'Type Not Same'
    l = [[-1]*(len(s1)+1) for y in range(len(s2)+1)]
    t = [[-1]*(len(s1)+1) for y in range(len(s2)+1)]
    for y in range(len(s2), -1, -1):
        for x in range(len(s1), -1, -1):
            if x==len(s1) or y==len(s2):
                l[y][x] = 0
            elif s1[x] == s2[y]:
                l[y][x] = l[y+1][x+1] + 1
                t[y][x] = 0
            elif l[y][x+1] >= l[y+1][x]:
                l[y][x] = l[y][x+1]
                t[y][x] = 1
            else:
                l[y][x] = l[y+1][x]
                t[y][x] = 2
            if debug:
                for i in range(len(l)):
                    for j in range(len(l[i])):
                        print(l[i][j], t[i][j], sep=', ', end='\t')
                    print()
                print()
    x = y = 0
    s = type(s1)()
    while t[y][x] > -1:
        if debug:
            print((x,y), (l[y][x],t[y][x]), end=' ')
        if t[y][x] == 0:
            if debug:
                print(s1[x], end='')
            s += s1[x]
            x += 1
            y += 1
        elif t[y][x] == 1:
            x += 1
        elif t[y][x] == 2:
            y += 1
        if debug:
            print()
    return s

if __name__ == '__main__':
    s = lcs('BDCABA', 'ABCBDAB', True)
    print(len(s), s)
    s = lcs(['z','x','y','x','y','z'], ['x','y','y','z','x'], True)
    print(len(s), s)