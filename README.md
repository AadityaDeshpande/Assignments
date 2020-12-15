# Assignments
-------------------

 

## Part 1:

Write a class CString to represent a string object having following:

 

Data Members:

- Length of the string

- Base address of the string

 

Member functions:

- Default Constructor

- Parameterized constructor having char* parameter

- Parameterized constuctor having int and char parameters

- copy constructor

- Overload assignment operator for class CString

- Function to accept string

- Function to display string

- Destructor

 

## Part 2:

 

Write a class CEmployee having following:

 

Data members:

- Employee id (int)

- Employ Name (CString) --> Class defined in part 1

- Date of joining (CDate) --> Similar class can be defined to read/display date.

 

Member functions:

- Default and parameterized constructor

- Accept and display functions

- Destructor

 

Objective:

1. Generate the employee identity number automatically.

2. Derive a class CWageEmployee publicly from class CEmployee and compute the salary of a wage employee.

3. Make overridden functions of the CEmployee class as "virtual".

4. CEmployee pointer should be allowed to hold address of wage employee created on heap.

5. The CEmployee pointer should be able to accept and display the details of the dynamically created object.

6. Make the CEmployee class as abstract.
