#!/usr/bin/env python3
# -*- coding: utf-8 -*-
N = int(input())
a = [int(i) for i in input().split(" ")]
a.sort()

for i in range(N):
    while a[i] % 2 == 0:
        a[i] /= 2
print(len(set(a)))
