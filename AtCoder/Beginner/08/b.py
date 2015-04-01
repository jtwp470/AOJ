#!/usr/bin/env python3
# -*- coding: utf-8 -*-
N = int(input())
names = [input() for i in range(N)]
d = {k: 0 for k in names}  # names:0

for name in names:
    d[name] = names.count(name)

inverse = [(v, k) for k, v in d.items()]
print(max(inverse)[1])
