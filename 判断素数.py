#!/usr/bin/python3
#coding=utf-8

def isPrime(n):
    if n < 2:
        return True
    i = 2
    while i*i <= n:
        if n%i == 0:
            return False
        i += 1
    return True

n = int(input())
if isPrime(n):
    print(str(n)+'是素数')
else:
    print(str(n)+'不是素数')