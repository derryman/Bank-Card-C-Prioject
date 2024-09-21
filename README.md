# ATM PIN Management Program

This is a simple C program designed to simulate an ATM system that allows bank customers to manage their PIN numbers. The program includes options for validating, changing, and resetting a user's PIN number.

## Features
- **Default PIN**: 1234
- **Change PIN**: The user can update the default PIN to a new one.
- **PIN Validation**: The program tracks and limits the number of incorrect PIN entries.
- **Menu-Driven Interface**: The user interacts with the program using a simple text-based menu.

## How to Use
1. The program starts with a main menu where you can:
   - Validate your current PIN
   - Change the PIN
   - Reset the PIN
   - Exit the program
2. The default PIN is set to `1234`.
3. The user is allowed multiple attempts to enter the correct PIN. After a set number of failed attempts, access is restricted.

## Requirements
- C Compiler (e.g., GCC)
  
## Compilation and Execution
To compile and run the program:

```bash
gcc assignment1.c -o atm
./atm
