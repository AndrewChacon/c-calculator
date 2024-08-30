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

## To-Do List
Here are some potential improvements and features that could be added to enhance the calculator program:

- [ ] **Advanced Operations:** Implement additional operations such as exponentiation, square root, and modulus.
- [ ] **Support for Parentheses:** Add functionality to handle expressions with parentheses for more complex calculations.
- [ ] **History Feature:** Display the history of calculations performed during the session.
- [ ] **Error Handling Enhancements:** Improve error handling for invalid inputs, such as non-numeric values and invalid characters.
- [ ] **Graphical User Interface (GUI):** Develop a basic GUI version of the calculator for a better user experience.
- [ ] **Internationalization:** Add support for multiple languages to make the program accessible to a wider audience.
- [ ] **Configuration File:** Allow users to define custom operations and settings via a configuration file.
- [ ] **Unit Testing:** Introduce unit tests to ensure all calculator functionalities work correctly and handle edge cases.
## Contributing
If you have suggestions for improvements or find any bugs, please feel free to open an issue or submit a pull request.

