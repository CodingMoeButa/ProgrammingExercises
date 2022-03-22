#!/usr/bin/python3
#coding=utf-8

x = int(input())
if x<0:
    y=0
elif 0<=x and x<5:
    y=x
elif 5<=x and x<10:
    y=3*x-5
elif 10<=x and x<20:
    y=0.5*x-2
elif 20<=x:
    y=0
print(y)