all: termdriver.pdf

termdriver.pdf: termdriver.tex img/* code/*.inc
	pdflatex -interaction=nonstopmode termdriver.tex

code/*.inc: mkcode.py samples/*.ino
	python mkcode.py
