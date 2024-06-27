#!/bin/bash

#this is my own personnal path, you will have to change this !
PATH_FILES="/home/tfreydie/projects/random imports/Innit_script/"

if [ $# -eq 0 ]; then
	echo "No arguments supplied, please supply a number"
    exit 1
fi

i=0
max_count=$(( $1 ))

while [ $i -lt $max_count ]; do

    mkdir ex0$i
    cd ex0$i
    cp -r "$PATH_FILES/sources" "$PWD" 
    cp -r "$PATH_FILES/includes" "$PWD"
    cp "$PATH_FILES/Makefile" "$PWD"
    cd ..
    ((i++))
done
