all: termdriver.pdf spidriver.pdf

termdriver.pdf: termdriver.tex img/* code/*.inc
	pdflatex -interaction=nonstopmode termdriver.tex

spidriver.pdf: spidriver.tex img/* code/*.inc
	pdflatex -interaction=nonstopmode spidriver.tex

code/*.inc: mkcode.py samples/*.ino
	python mkcode.py
