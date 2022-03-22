#!/usr/bin/python3
#coding=utf-8

print(('*'*7+'\n')*4)

for n in range(1,8,2):
    print('*'*n)
print()

for n in range(1,8,2):
    print(('*'*n).center(7))
print()

for n in range(7,0,-2):
    print(('*'*n).center(7))
print()

for n in range(1,8,2):
    print('*'*n)
for n in range(5,0,-2):
    print('*'*n)
print()

for n in range(1,8,2):
    print(('*'*n).center(7))
for n in range(5,0,-2):
    print(('*'*n).center(7))