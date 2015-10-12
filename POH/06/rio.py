#!/usr/bin/env python3
# -*- coding: utf-8 -*-
def solver(t, s):
    x = 0  # お湯
    y = 0  # 粉末
    for a, b in zip(t, s):
        if a == 1:
            x += b
        elif a == 2:
            y += b
        else:
            x = x - b * x / (x + y)
            y = y - b * y / (x + y)

    print(int(100 * y / (x + y)))


if __name__ == "__main__":
    n = int(input())
    t = []
    s = []
    for _ in range(n):
        k = input().split(" ")
        t.append(int(k[0]))
        s.append(int(k[1]))
    solver(t, s)
