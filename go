#!/bin/sh

python mkcode.py
pdflatex -interaction=nonstopmode termdriver.tex
