Wildcard session week 6
======

## Exercise 41
### Listings
### 1 main.cc
- Seperate input from output 
- Contractions of cout 
### 2 showchar.cc
- Use a switch to check

### 3 charcount.h
- include iosfwd header since we only need declarations
- dont include tuple header
- can use signed char -> ASCII 7 bit encoding?
- enumvalues on different lines
- rawCapacity only used in implementation of members
    - CharCount scope resolution not necessary when already in class header
    - note it doesnt change data members hence needs `const` qualifier
- Comment is wrong, function doesnt return anything
- unsigned char not necessary
- transform[] is more important hence should go in 'first' private part

# 5 destructor and 13 enlarge
We use new[] and delete[] and not the operator new way of rawCapacity. We note
that in our implementation a memory leak occurs when using rawCapacity, as there
is no matching operator delete call.

# 13 enlarge.cc
Is this a correct way to transfer the elems of the old array? To use a pointer
loop and then at the end reset the pointer to the beginning of the array. 
