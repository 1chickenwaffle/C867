#include "student.h"
#include "roster.h"
#include "degree.h"
#include <iostream>

// constructor definition
Student::Student(){
    StudentID = "";
    FirstName = "";
    LastName = "";
    EmailAddress = "";
    Age = 0;
    for(int i = 0; i < DaysToCompleteEachCourseArraySize; i++){
        DaysToCompleteEachCourse[i] = 0;
    }
    degreeProgram = UNDECIDE;
}

//full constructor definition
Student::Student(string studentID, string firstName, string lastName, string emailAddress, int age, int daysToCompleteEachCourse[], DegreeProgram degree_program){
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


//getter and setter definition of each variable of Student classs
void Student::setStudentID(string studentID){
    StudentID = studentID;
}

string Student::getStudentID(){
        return StudentID;
    
}

void Student::setFirstname(string firstName){
    FirstName = firstName;
}

string Student::getFirstName (){
    return FirstName;
}

void Student::setLastname(string lastName){
    LastName = lastName;
}

string Student::getLastName (){
    return LastName;
}

void Student::setEmailAddress(string emailAddress){
    EmailAddress = emailAddress;
}

string Student::getEmailAddress(){
    return EmailAddress;
}

void Student::setAge(int age){
    Age = age;
}

int Student::getAge(){
    return Age;
}

void Student::setDaysToCompleteEachCourse(int DaysToCompleteEachCourse[]){
    for(int i = 0; i < DaysToCompleteEachCourseArraySize; i++){
       this->DaysToCompleteEachCourse[i] =DaysToCompleteEachCourse[i];
    }
}

int* Student::getDaysToCompleteEachCourse(){
    return DaysToCompleteEachCourse;
}

void Student::setDegreeProgram(DegreeProgram programType){
    this->degreeProgram = programType;
}

DegreeProgram Student::getDegreeProgram(){
    return degreeProgram;
}


//requirement format: A1 [tab] First Name: John [tab] Last Name: Smith [tab] Age: 20 [tab]daysInCourse: {35, 40, 55} Degree Program: Security.
void Student::print(){
    cout << this->getStudentID() << " \t ";
    cout <<"First Name: "<< this->getFirstName() << " \t ";
    cout <<"Last Name: "<< this->getLastName() << "\t ";
    cout <<"Age: "<< this->getEmailAddress() << " \t "; //requirement format doesn't say need to print out email
    cout <<"Age: "<< this->getAge() << " \t ";
    int* daysArray = this->getDaysToCompleteEachCourse();
        cout <<"daysInCourse: {"
             << daysArray[0] << ", "
             << daysArray[1] << ", "
             << daysArray[2]
             << "} ";
    cout<<"Degree Program: " << degreeProgramString[this->degreeProgram] << "."<<endl;
}



