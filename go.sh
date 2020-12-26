#!/bin/bash
g++ $1.cpp -o $1
result=$?
if [ $result = 0 ]
then
	echo -e "compile successfully"
	./$1
	rm $1
else
	echo -e "compile failed"
fi
