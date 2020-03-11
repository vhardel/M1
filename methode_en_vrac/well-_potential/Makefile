default:
	g++ -o numerov.exe numerov.cpp
	./numerov.exe
	gnuplot different_well.gnu
	latex well_potential.tex
	dvipdf well_potential.dvi
	mv well_potential.pdf well.pdf
	rm well_potential*
