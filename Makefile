all: termdriver.pdf spidriver.pdf i2cdriver.pdf

termdriver.pdf: termdriver.tex img/* code/*.inc
	# pdflatex -interaction=nonstopmode termdriver.tex
	latexmk -pdf -silent termdriver.tex

spidriver.pdf: spidriver.tex img/* code/*.inc
	# pdflatex -interaction=nonstopmode spidriver.tex
	latexmk -pdf -silent spidriver.tex

i2cdriver.pdf: i2cdriver.tex img/* code/*.inc
	# pdflatex -interaction=nonstopmode spidriver.tex
	latexmk -pdf -silent i2cdriver.tex

code/*.inc: mkcode.py samples/*.ino
	python mkcode.py
