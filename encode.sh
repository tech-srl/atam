#!/bin/bash

# used on mac M1, passing -arch x86_64
as $1 -o /tmp/x.o
objdump -D /tmp/x.o

