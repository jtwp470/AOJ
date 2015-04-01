#!/usr/bin/env python3
# -*- coding: utf-8 -*-
N = int(input())
hh = N / 3600
mm = N /  60
ss = (N - 3600) - (mm * 60)
print("{0:0>1}:{1:0>1}:{2:0>1}".format(hh, mm, ss))
