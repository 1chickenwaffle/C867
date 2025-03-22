#include "student.h"

// constructor definition
Student::Student(){
    StudentID = 0;
    FirstName = "";
    LastName = "";
    EmailAddress = "";
    Age = 0;
    for(int i = 0; i < DaysToCompleteEachCourseArraySize; i++){
        DaysToCompleteEachCourse[i] = 0;
    }
    degreeProgram = UNDECIDE;
}

//constructor using all the input paramenter
Student::Student(int studentID, string firstName, string lastName, string emailAddress, int age, int daysToCompleteEachCourse[], DegreeProgram degree_program){
    StudentID = studentID;
    FirstName = firstName;
    LastName = lastName;
    EmailAddress = emailAddress;
    Age = age;
    for(int i = 0; i < DaysToCompleteEachCourseArraySize; i++){
        DaysToCompleteEachCourse[i] = daysToCompleteEachCourse[i];
    }
    degreeProgram = degree_program;
}
