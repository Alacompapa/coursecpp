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
Question: Is this a correct way to transfer the elems of the old array? To use 
a pointer loop and then at the end reset the pointer to the beginning of the 
array. 


## Exercise 42
### 15 ex42.txt
- "\n" should be a character constant i.e. '\n'

## Exercise 43
### 17 destructor.cc
- iostream shouldnt be included in the destructor but in the internal header

## Exercise 44
### 22 enlarge.cc
- delete mismatch, since we use `operator new` in `rawPointers`

## 26 reserve.cc
- Memory leak can be avoided by `operator delete`ing the `tmp` array

## 27 resize.cc
- resizing to a larger amount -> initialize new strings
- resizing to a smaller amount -> delete excess strings
- reserving to a larger amount -> get more raw memory
- reserving to a smaller amount -> dont do anything

## 29 strings.h
- Question: do you mean `static` or `const`?


## Exercise 43
We should only cast to `void *` when calling `qsort`. What we were doing was
trying to fit our data to the mold of `qsort`. Instead we should have tried to
to only cast our parameters when calling `qsort` and then be able to keep
our variables and data in a familiar form. So using 
