#!/bin/bash


if (( $# < 2 ))
then
  #if filename is in the directory, do work
  lower < $1 > $2
else
  ECHO file1 will be read from, and file2 will be the lower case equilivant of file1
fi
