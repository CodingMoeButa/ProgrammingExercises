#!/usr/bin/python3
#coding=utf-8
import numpy as np
import random as rd

x = int(input('行数：'))
y = int(input('列数：'))
a = np.empty((x,y),int,'C')
for i in range(len(a)):
    for j in range(len(a[i])):
        a[i][j] = rd.randint(0,9)
print(a)