g++-8 -Wall -std=c++2a -c main.cc
cd data                  
g++-8 -Wall -std=c++2a -c display.cc displayimp.cc read.cc readimp.cc data1.cc        
ar rvs libdata.a display.o displayimp.o read.o readimp.o data1.o  
mv libdata.a ..             
cd ..
g++-8 main.o libdata.a 
