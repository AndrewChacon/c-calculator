# Simple Calculator Program

A simple calculator program written in C that performs basic arithmetic operations. This enhanced version includes improved input handling, error checking, and user experience features.

## Features

- **Basic Arithmetic Operations**: Supports addition (+), subtraction (-), multiplication (*), and division (/).
- **Division by Zero Handling**: Prevents division by zero errors and notifies the user.
- **Input Validation**: Checks for valid operators and numeric inputs, providing feedback for incorrect entries.
- **Continuous Operation Mode**: Allows multiple calculations in a single session.
- **Formatted Output**: Displays results with two decimal precision.

## How to Use

1. **Compile the Program**: Use a C compiler to compile the source code. For example, using `gcc`:
```console
gcc -o calculator calculator.c
```
2. **Run the Program:** Execute the compiled program:
```console
./calculator
```
3. **Select an Operation:** When prompted, enter one of the following operators:
    - `+` for addition
    - `-` for subtraction
    - `*` for multiplication
    - `/` for division
4. **Enter Numbers:** Provide two numbers when prompted. Ensure they are numeric values.
5. **View Results:** The program will display the result of the operation.
6. **Continue or Exit:** After each calculation, you will be asked if you want to perform another calculation. Enter `y` to continue or `n` to exit the program.

## Example Usage
```console
User@Github:~$ ./calc 
Select an operation (+, -, *, /): +
Enter two numbers: 12.5 3.4
12.50 + 3.40 = 15.90
Do you want to perform another calculation? (y/n): y
Select an operation (+, -, *, /): /
Enter two numbers: 10 0
Error: Division by zero is undefined.
Do you want to perform another calculation? (y/n): n
Calculator program terminated.
```

## Contributing
If you have suggestions for improvements or find any bugs, please feel free to open an issue or submit a pull request.

