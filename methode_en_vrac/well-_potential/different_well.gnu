set term epslatex color standalone
set output 'well_potential.tex'
unset key

plot 'well_potential_1_solution.dat' w l, 'well_potential_2_solution.dat' w l, 'well_potential_3_solution.dat' w l, 'well_potential_4_solution.dat' w l, 'well_potential_5_solution.dat' w l, 'well_potential_6_solution.dat' w l, 'well_potential_7_solution.dat' w l, 'well_potential_8_solution.dat' w l, 'well_potential_9_solution.dat' w l, 'well_potential_10_solution.dat' w l
