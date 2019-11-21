void inv_identity(int (*rowStart)[10])
{
    for (int (*rowPtr)[10] = rowStart;  // get address of start of row
            rowPtr != rowStart + 10;    
            ++rowPtr)                   // move rowPtr 10 ints up 
        for (int *colStart = *rowPtr, *colPtr = *rowPtr; 
                colPtr != colStart + 10;
                ++colPtr)               // move colPtr 1 int up
            *colPtr = (rowPtr - rowStart) == (colPtr - colStart) ? 0 : 1;
                                        // 'vertical' distance equal to 
                                        // 'horizontal' distance means diagonal
}
