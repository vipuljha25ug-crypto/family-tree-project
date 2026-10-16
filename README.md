# Family Tree Project in C

## About the Project
This project is a simple family tree management program written in C. It collects information about seven family members, stores their names and ages using dynamically allocated memory, establishes family relationships, and displays the family tree.

## Features
- Collects names and ages of seven family members.
- Uses a `Person` structure to store individual information.
- Dynamically allocates memory for family member records.
- Links parents with their children.
- Displays family relationships, including parents and grandparents.
- Frees dynamically allocated memory after execution.

## Family Members
The program includes:
- Paternal Grandfather
- Paternal Grandmother
- Maternal Grandfather
- Maternal Grandmother
- Father
- Mother
- Yourself

## Technologies Used
- C Programming Language
- GCC Compiler
- Git and GitHub
- Visual Studio Code

## How to Compile and Run

### 1. Compile the program
```bash
gcc family_tree.c -o family_tree
```

### 2. Run the program on Windows PowerShell
```powershell
.\family_tree.exe
```

The program will ask you to enter the name and age of each family member and then display the family relationships.

## Memory Management
The project uses dynamic memory allocation and releases allocated memory after printing the family tree to avoid memory leaks.

## Author
Vipul Jha

## License
This project is intended for educational purposes.
