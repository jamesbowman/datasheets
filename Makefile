all: termdriver.pdf spidriver.pdf i2cdriver.pdf i2cdriver-cn.pdf

termdriver.pdf: termdriver.tex img/* code/*.inc
	# pdflatex -interaction=nonstopmode termdriver.tex
	latexmk -pdf -silent termdriver.tex

spidriver.pdf: spidriver.tex img/* code/*.inc
	# pdflatex -interaction=nonstopmode spidriver.tex
	latexmk -pdf -silent spidriver.tex

i2cdriver.pdf: i2cdriver.tex img/* code/*.inc i2csphinx.tex
	# pdflatex -interaction=nonstopmode i2cdriver.tex
	latexmk -pdf -silent i2cdriver.tex

i2cdriver-cn.pdf: i2cdriver-cn.tex img/* code/*.inc i2csphinx.tex
	pdflatex -interaction=nonstopmode i2cdriver-cn.tex
	# latexmk -pdf -silent i2cdriver-cn.tex

code/*.inc: mkcode.py samples/*.ino
	python mkcode.py

I2CD=$(HOME)/git/i2cdriver/python/_build/latex

i2csphinx.tex: $(I2CD)/i2cdriver.tex
	sed -n '/AAAAAAAA/,/BBBBBBB/p' $(I2CD)/i2cdriver.tex | grep -v AAAAAAAA | grep -v BBBBBBBB > i2csphinx.tex
