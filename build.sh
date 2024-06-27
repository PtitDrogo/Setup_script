#!/bin/bash

#Dark magic to get the path of the
SCRIPT_DIR="$( cd "$( dirname "${BASH_SOURCE[0]}" )" &> /dev/null && pwd )"


if [ $# -eq 0 ]; then
	echo "No arguments supplied, please supply a number"
    exit 1
fi

i=0
max_count=$(( $1 ))

while [ $i -lt $max_count ]; do

    mkdir ex0$i
    cd ex0$i
    cp -r "$SCRIPT_DIR/sources" "$PWD" 
    cp -r "$SCRIPT_DIR/includes" "$PWD"
    cp "$SCRIPT_DIR/Makefile" "$PWD"
    cd ..
    ((i++))
done
