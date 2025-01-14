#!/bin/bash

find . -iname '*.hpp' -o -iname '*.cpp' | xargs /usr/bin/clang-format-19 -i
