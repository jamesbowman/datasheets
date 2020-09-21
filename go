#!/bin/sh

cp ../cuflow/*.tikz .
# pdflatex -interaction=nonstopmode i2cdriver.tex ; exit
make gameduino-3x-dazzler.pdf # i2cdriver.pdf spidriver.pdf
cp spidriver.pdf $HOME/git/excamera/spidriver.com/
cp i2cdriver.pdf $HOME/git/excamera/i2cdriver.com/
