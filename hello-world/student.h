#include <string>
#include "degree.h"
using namespace std;




class Student {
public:
    const static int DaysToCompleteEachCourseArraySize = 3;
private:
    int StudentID;
    string FirstName;
    string LastName;
    string EmailAddress;
    int Age;
    int DaysToCompleteEachCourse [DaysToCompleteEachCourseArraySize]; // array of number of days to complete each course
    DegreeProgram degreeProgram; //enum degree program that contains 4 attribute
    
public:
    //constructor with dafault value
    Student();
    //constructor using all the input paramenters
    Student(int studentID, string firstName, string lastName, string emailAddress, int age, int daysToCompleteEachCourse[], DegreeProgram degree_program);

    
    
    //getter and setter definition of each variable of Student classs
    void setStudentID(int studentID){
        StudentID = studentID;
    }
    
    int getStudentID(){
        return StudentID;
    }
    
    void setFirstname(string firstName){
        FirstName = firstName;
    }
    
    string getFirstName (){
        return FirstName;
    }
    
    void setLastname(string lastName){
        LastName = lastName;
    }
    
    string getLastName (){
        return LastName;
    }
    
    void setEmailAddress(string emailAddress){
        EmailAddress = emailAddress;
    }
    
    string getEmailAddress(){
        return EmailAddress;
    }
    
    void setAge(int age){
        Age = age;
    }
    
    int getAge(){
        return Age;
    }
    
    void setDaysToCompleteEachCourse(int DaysToCompleteEachCourse[]){
        for(int i = 0; i < DaysToCompleteEachCourseArraySize; i++){
           this->DaysToCompleteEachCourse[i] =DaysToCompleteEachCourse[i];
        }
    }
    
    int getSetDaysToCompleteEachCourse(int index){
        return DaysToCompleteEachCourse[index];
    }
    
    void setDegreeProgram(DegreeProgram programType){
        this->degreeProgram = programType;
    }
    
    DegreeProgram getDegreeProgram(){
        return degreeProgram;
    }
    
    
};
