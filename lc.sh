#!/bin/bash

for filename in *.txt
do
  if [ -f "$filename"]
  then
    #if filename is in the directory, do work
    #cat file.txt | cprogram
  else
    #script should print a usage statement to the screen along with documentation on how to use lc
  fi
done
