#include "student.h"
#include <iostream>

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

//full constructor definition
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


//getter and setter definition of each variable of Student classs
void Student::setStudentID(int studentID){
    StudentID = studentID;
}

int Student::getStudentID(){
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


void Student::print(){
    cout << this->getStudentID() << " \t ";
    cout << this->getFirstName() << " \t ";
    cout << this->getLastName() << "\t ";
    cout << this->getEmailAddress() << " \t ";
    cout << this->getAge() << " \t ";
    cout << this->getDaysToCompleteEachCourse() << " \t ";
    //cout << this->degreeProgram << " \t ";
}

