# STUDENTS_DATABSE_SYSTEM
This repository contains a Student Grade Management System in C for efficiently managing and calculating grades in a class.

Student Grade Management System
This is a Student Grade Management System implemented in the C programming language. The program allows you to manage and calculate grades for a class of students. It uses arrays and pointers to store and manipulate student data.

Specifications
The program can manage the grades of up to 50 students.
For each student, the following information is stored:
Student name (as a string)
Student ID (an integer)
Assignment scores (an array of 5 integers)
Midterm exam score (an integer)
Final exam score (an integer)
A function is implemented to input student information, including name, ID, assignment scores, midterm score, and final exam score.
The final grade for each student is calculated based on the following weights:
Assignments: 20%
Midterm Exam: 30%
Final Exam: 50%
The program calculates and displays the following statistics for the class:
Average assignment scores
Average midterm score
Average final exam score
The student with the highest final grade
The student with the lowest final grade
The final grades in descending order
Implementation Details
The program utilizes dynamic memory allocation to handle different class sizes. This means that the number of students can be set at runtime, allowing for flexibility.
Error handling is implemented to handle invalid input values. For example, if a negative score, non-numeric input, or an exceeding maximum allowed score is provided, appropriate error messages will be displayed to the user.
