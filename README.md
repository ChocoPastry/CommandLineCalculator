# Command Line Calculator

This simple command line calculator program performs basic arithmetic operations: addition, subtraction, multiplication, and division.

## Usage

To use the calculator, run the program with the desired operation and two numeric operands as command-line arguments.

1. **Addition**
    ```
    ./calculator add <operand1> <operand2>
    ```

2. **Subtraction**
    ```
    ./calculator subtract <operand1> <operand2>
    ```

3. **Multiplication**
    ```
    ./calculator multiply <operand1> <operand2>
    ```

4. **Division**
    ```
    ./calculator divide <operand1> <operand2>
    ```

Replace `<operand1>` and `<operand2>` with the numeric values you want to operate on.

## Examples

1. Addition:
    ```
    ./calculator add 5 3
    ```

2. Subtraction:
    ```
    ./calculator subtract 8 4
    ```

3. Multiplication:
    ```
    ./calculator multiply 2 6
    ```

4. Division:
    ```
    ./calculator divide 10 2
    ```

## Build

To compile the program, use a C compiler such as GCC:
```bash
gcc calculator.c -o calculator
```

## Run

After compiling, run the program with appropriate command-line arguments.
