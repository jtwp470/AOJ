#!/usr/bin/env python3
# -*- coding: utf-8 -*-


def countup(t):
    cc = 0
    if t > 0:
        if t >= 10:
            cc = countup(t-10) + 1
        elif 5 <= t < 10:
            cc = countup(t-5) + 1
        else:
            cc = countup(t-1) + 1
    else:
        return cc


inp = input().split(" ")
A = int(inp[0])
B = int(inp[1])

t = abs(A - B)

print(countup(t))

