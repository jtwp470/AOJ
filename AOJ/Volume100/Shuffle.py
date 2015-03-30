#!/usr/bin/env python3
# -*- coding: utf-8 -*-
def shuffle(s, h):
    return s[h:] + s[0:h]

h = list()
s = input()

while s != "-":
    s = list(s)
    m = int(input())

    h = [int(input()) for i in range(m)]

    for i in h:
        s = shuffle(s, i)

    for i in s:
        print(i, end="")
    print()
    s = input()
