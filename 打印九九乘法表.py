#!/usr/bin/python3
#coding=utf-8

i = 1
while i <= 9:
    for j in range(1,i+1):
        print(str(j) + '*' + str(i) + '=' + str(i*j), end='\t')
    print()
    i += 1