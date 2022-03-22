#!/usr/bin/python3
#coding=utf-8

s = input()
u,l,d,o=0,0,0,0
for c in s:
    if c.isupper():
        u += 1
    elif c.islower():
        l += 1
    elif c.isdigit():
        d += 1
    else:
        o += 1
print(u,l,d,o)