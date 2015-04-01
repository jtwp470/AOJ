#!/usr/bin/env python3
# -*- coding: utf-8 -*-
# A: センター採点
N = input()
c = input()

counts = []
cc = 0
for i in range(1, 5):
    for j in c:
        if i == int(j):
            cc += 1
    counts.append(cc)
    cc = 0

print("{maximum} {minimum}".format(maximum=max(counts), minimum=min(counts)))
