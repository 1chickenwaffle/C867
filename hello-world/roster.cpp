#include "roster.h"

//parse student Data, one at a time
void parse(string studentData){
    //extract data until next comma
    
    //extract student id
    int rhs = studentData.find(",");
    string id = studentData.substr(0, rhs -1);
    
    //extract first name
    int lhs = rhs + 1;
    rhs = studentData.find(",",lhs);
    string firstName = studentData.substr(lhs, rhs-lhs);
    
    //extract last name
    lhs = rhs + 1;
    rhs = studentData.find(",",lhs);
    string lastName = studentData.substr(lhs, rhs-lhs);
    
    //extract email
    lhs = rhs + 1;
    rhs = studentData.find(",",lhs);
    string email = studentData.substr(lhs, rhs-lhs);
    
    //extract age string and convert to int
    lhs = rhs + 1;
    rhs = studentData.find(",",lhs);
    int age = stoi(studentData.substr(lhs, rhs-lhs));
    
    //extract number of days to complete 3 course in string type then convert to int
    lhs = rhs + 1;
    rhs = studentData.find(",",lhs);
    int day1 = stoi(studentData.substr(lhs, rhs-lhs));
    lhs = rhs + 1;
    rhs = studentData.find(",",lhs);
    int day2 = stoi(studentData.substr(lhs, rhs-lhs));
    lhs = rhs + 1;
    rhs = studentData.find(",",lhs);
    int day3 = stoi(studentData.substr(lhs, rhs-lhs));
    
    //extract degree, compare string to SECURITY/NETWORK/SOFTWARE then assign to dprogram
    DegreeProgram dprogram = UNDECIDE;//default value
    lhs = rhs + 1;
    rhs = studentData.length()+ 1 - lhs;
    string stringProgram = studentData.substr(lhs, rhs-lhs);
    if (stringProgram == "SECURITY"){
        dprogram = SECURITY;
    }else if (stringProgram == "NETWORK"){
        dprogram = NETWORK;
    }else if (stringProgram == "SOFTWARE"){
        dprogram = SOFTWARE;
    }
    
    
};
