#!/usr/bin/env python3
# -*- coding: utf-8 -*-


class Point(object):
    def __init__(self, x, y):
        self.x = x
        self.y = y


class Maps(object):
    def __init__(self):
        self.maps = dict()

    def setMap(self, p, mass):
        if p not in self.maps:
            self.maps[p] = mass

    def getMap(self, p):
        if p in self.maps:
            return self.maps[p]
        else:
            return "Invalid"


def main():
    i = list(map(int, input().split(" ")))
    maps = []
    for i in range(i[0]):
        s = list(input())
        maps.append(s)


if __name__ == "__main__":
    sample_i = [2, 3, 10]
    sample_maps = [["S", "#", "#"],
                   [".", "#", "G"]]
    maps = Maps()
    maps.setMap(Point(0, 0), "S")
    print(maps.getMap(Point(0, 0)))
