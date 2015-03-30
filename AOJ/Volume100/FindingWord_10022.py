#!/usr/bin/env python3
# -*- coding: utf-8 -*-
w = input().lower()
a = ""

a = input().lower()
t = list()
while a != "end_of_text":
    t += a.split(" ")
    a = input().lower()

cnt = 0

for i in t:
    if w == i:
        cnt += 1
print(cnt)
