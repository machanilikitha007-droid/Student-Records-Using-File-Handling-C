# Student Records Using File Handling in C

## Project Description

A simple C program that demonstrates file handling by storing student details in a text file. The program accepts the student's roll number, name, and marks and saves the information in `students.txt`.

## Features

- Enter student details
- Create and open a text file
- Store student records in a file
- Use `fprintf()` to write data
- Use `fclose()` to close the file
- Append new records without deleting existing data

## Technologies Used

- C
- File Handling
- Structures
- `FILE`
- `fopen()`
- `fprintf()`
- `fclose()`

## How to Run

1. Create a file named `student_records_file.c`.
2. Compile the program using a C compiler.
3. Run the compiled program.
4. A file named `students.txt` will be created in the project folder.

Example using GCC:

```bash
gcc student_records_file.c -o student_records_file
./student_records_file

===== Student Records Using File Handling =====
Enter Roll Number: 101
Enter Name: Likitha
Enter Marks: 88.5

Student record saved successfully!
Data is stored in students.txt

Roll Number: 101
Name: Likitha
Marks: 88.50
-------------------------
Author

M.Likitha
