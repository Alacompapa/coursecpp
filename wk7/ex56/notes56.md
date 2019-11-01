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
The only place where we will face this problem is at the end of the file, as that is the only place where we will ever read in 3 letters.
So what if we, when at EOF, 'reverse read' a byte back and check that against the byte we read in the 'right way'.

__Example__
Two situations at end of file:
```         
        bases           
(1) ... TTTT ACAA
(2) ... TTTT ACA 
```
In (1) we read `ACAA` as last pair.
In (2) we read `ACA` as last pair, the remaining bits will be filled by zeros.
So both will be read as `00 01 00 00`. That's a problem.

When we reverse read (1), two bytes back, we get `AACA` or `00 00 01 00`.
When we reverse read (2), two bytes back, we get `ACAT` or `00 01 00 11`.

It is immediately obvious that the reverse read and normally read bytes dont match (for humans). But it shouldn't be hard to write code to check this.

### Seeking vs no-seeking

### Pseudo-code
