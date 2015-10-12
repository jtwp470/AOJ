#!/usr/bin/env python3
# -*- coding: utf-8 -*-
n = int(input())
r = [int(k) for k in str(n)]
r.append(n)
print(sum(r))
