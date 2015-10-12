#!/usr/bin/env python3
# -*- coding: utf-8 -*-
def solver(n, t, pos):
    count = 0
    res = False
    while pos < n and count < 300:
        if pos == n-1:
            res = True
            break
        else:
            pos += t[pos]
            count += 1
    print("YES" if res else "NO")


def main():
    n = int(input())
    t = [int(k) for k in input().split(" ")]
    m = int(input())
    d = [int(input()) for _ in range(m)]
    for k in d:
        solver(n, t, k)


if __name__ == "__main__":
    main()
