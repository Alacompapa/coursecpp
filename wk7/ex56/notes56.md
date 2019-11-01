Converting between Human-readable (ASCII) letters and our own binary format. The binary format maps the letters A, C, G, and T to all two-bit numbers. 
Since the smallest amount of memory that can be accessed is a byte (8 bits), we will have 4 letters per byte. 


### Binary format
The binary format doesn't matter as long as we are consistent. So I propose simply to use alphabetical ordering.
```
00 : A
01 : C
10 : G
11 : T
```

### Human-readable vs Binary 
To conclude if the input is human-readable or binary we could add a header section to the binary file which tells the program it is a DNA binary sequence file.
Like we reserve the first 100 bytes for that and then when the program reads that we know its our binary format.

### ACAA vs ACA problem

### Seeking vs no-seeking


### Pseudo-code
