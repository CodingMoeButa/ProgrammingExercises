#!/usr/bin/python3

def slcsl(s1, s2, debug:bool=False) -> float:
    assert type(s1)==type(s2), 'Type Not Same'
    l = [[-1]*(len(s1)+1) for y in range(len(s2)+1)]
    for y in range(len(s2), -1, -1):
        for x in range(len(s1), -1, -1):
            if x==len(s1) or y==len(s2):
                l[y][x] = 0
            elif s1[x] == s2[y]:
                l[y][x] = l[y+1][x+1] + 1
            elif l[y][x+1] >= l[y+1][x]:
                l[y][x] = l[y][x+1]
            else:
                l[y][x] = l[y+1][x]
            if debug:
                for i in range(len(l)):
                    for j in range(len(l[i])):
                        print(l[i][j], end='\t')
                    print()
                print()
    if min(len(s1),len(s2)) == 0:
        return 1
    else:
        return l[0][0] / min(len(s1),len(s2))

def slcslBenchmark(n):
    import random
    import time
    a = b = ''
    for i in range(n):
        a += str(random.randint(0,9))
        b += str(random.randint(0,9))
    start = time.time()
    print(slcsl(a,b))
    end = time.time()
    print(end - start)

if __name__ == '__main__':
    print(slcsl('', '', True))