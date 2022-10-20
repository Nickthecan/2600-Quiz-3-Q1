/*pointers to functions
    -pass functions as arguments
    -table of structures
        -employee's number
        -employee's name
        -employee's phone number
        -employee's salary
    -wanna search for a particular employee number
    -several ways to write it
        -searchEmployeeByNumber() - will do less than or greater than table value
        -searchEmployeeByName() - will do string compares to table value
        - will duplicate code
    -can write one search command
        -searchEmployeeTable()    
*/

#include <stdio.h> 

#include <stddef.h> 

typedef struct { 

    long number; 
    char *name; 
    char *phone; 
    double salary; 

} Employee, *PtrToEmployee; 

typedef const Employee *PtrToConstEmployee; 
