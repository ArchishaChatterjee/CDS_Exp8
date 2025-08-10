# EXPERIMENT 8: Matrix Operations in C++

## Aim
- To study and implement basic matrix operations in C++:
  1. Input matrix values from the user
  2. Addition of matrices
  3. Multiplication of matrices
  4. Sum of diagonals
  5. Transpose of a matrix

## Tools Used
- Programiz Online Compiler or Visual Studio (VS)

## Theory

### Matrices in C++
A matrix is a two-dimensional array that stores elements in rows and columns. Matrix operations are widely used in computer graphics, scientific computing, and data processing.

### Common Matrix Operations:
- **Addition**: Adding corresponding elements of two matrices of the same dimension.
- **Multiplication**: The element in the resulting matrix is the sum of the products of corresponding elements from rows of the first matrix and columns of the second.
- **Sum of Diagonals**: Adding elements lying on the primary and secondary diagonals.
- **Transpose**: Flipping the matrix over its diagonal (rows become columns, columns become rows).

---

## Algorithm

### 1. Input Matrix Values from User
1. Start  
2. Declare a 2D array  
3. Use nested loops to input values row by row  
4. Display the matrix  

### 2. Addition of Matrices
1. Start  
2. Input two matrices of the same dimension  
3. Add corresponding elements and store them in a result matrix  
4. Display the result  

### 3. Multiplication of Matrices
1. Start  
2. Input dimensions and elements of two matrices  
3. Check if multiplication is possible (`columns of first == rows of second`)  
4. Multiply using nested loops and store in the result matrix  
5. Display the result  

### 4. Sum of Diagonals
1. Start  
2. For a square matrix, add elements where row index == column index (primary diagonal)  
3. For secondary diagonal, add elements where row index + column index == size - 1  
4. Display both sums  

### 5. Transpose of a Matrix
1. Start  
2. For each element `a[i][j]`, assign it to `b[j][i]` in the transpose matrix  
3. Display the transposed matrix  

---

## Functions
- `cin` and `cout` for input/output  
- Nested `for` loops for iterating over matrix elements  
- Use of conditional statements to identify diagonal elements  
- 2D array indexing to store and retrieve matrix values  

---

## Conclusion
Through this lab, I learned how to perform different matrix operations in C++. I understood how to use nested loops to handle two-dimensional arrays, how mathematical formulas apply in matrix operations, and the importance of correctly managing dimensions when working with matrices.
