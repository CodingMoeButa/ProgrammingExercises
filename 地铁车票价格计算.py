#!/usr/bin/python3
#coding=utf-8

per_num = int(input())
sta_num = int(input())
if 1<=sta_num and sta_num<=4:
    print(3*per_num)
elif 5<=sta_num and sta_num<=9:
    print(4*per_num)
elif per_num>9:
    print(5*per_num)
else:
    print('error')