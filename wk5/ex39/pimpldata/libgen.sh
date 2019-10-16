g++ -c main.cc
cd data                  
g++ -c display.cc displayimp.cc read.cc readimp.cc data1.cc        
ar rvs libdata.a display.o displayimp.o read.o readimp.o data1.o  
mv libdata.a ..             
cd ..
g++ main.o libdata.a 