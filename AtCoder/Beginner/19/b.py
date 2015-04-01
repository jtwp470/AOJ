#!/usr/bin/env python3
# -*- coding: utf-8 -*-
s = input()
l = len(s)
s += ' '
out = ''
start = 0
count = 1
for x in range(1, l+1):
    if s[start] == s[x]:
        count += 1
    else:
        out += s[start] + str(count)
        start = x
        count = 1

print(out)
