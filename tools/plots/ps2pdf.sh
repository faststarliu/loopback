#!/bin/sh

for FILE in *.ps
do
    ps2pdf $FILE
done
