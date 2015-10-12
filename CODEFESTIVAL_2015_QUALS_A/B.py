#!/usr/bin/env python3
# -*- coding: utf-8 -*-
if __name__ == "__main__":
    N = int(input())
    S = list()
    A = [int(k) for k in input().split(" ")]
    for k in A:
        S = S + [k] + S
        # print(S)
    print(sum(S))
