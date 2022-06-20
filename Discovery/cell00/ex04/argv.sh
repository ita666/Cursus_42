#!/bin/bash
if (( $# < 1 )); then
echo "No arguments supplied"
fi
for i in $*; do
echo $i
done
