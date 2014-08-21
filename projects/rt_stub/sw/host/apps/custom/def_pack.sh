#!/bin/bash

read -p " " x

declare -i y=0
declare -i z=0 

y = $((x - 4)) 
z = $((y / 32))

echo "$z"

