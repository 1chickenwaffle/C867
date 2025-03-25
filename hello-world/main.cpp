#include <iostream>
#include <string>
#include "student.h"
#include "roster.h"
using namespace std;

int main(){
    const int numOfStudent = 5;
    
    Roster roster;
    
    //student data table, modified the last one to be me
    const string studentData[] =
        {"A1,John,Smith,John1989@gm ail.com,20,30,35,40,SECURITY",
        "A2,Suzan,Erickson,Erickson_1990@gmailcom,19,50,30,40,NETWORK",
        "A3,Jack,Napoli,The_lawyer99yahoo.com,19,20,40,33,SOFTWARE",
        "A4,Erin,Black,Erin.black@comcast.net,22,50,58,40,SECURITY",
        "A5,Shuyi,Huang,shuang10@wgu.edu,33,11,3,7,SOFTWARE"};
 
    //parse each set of data in StudentData
    //add each Student object to classRosterArray
    for(int i = 0; i < numOfStudent; i++) {
        roster.parse(studentData[i]);
    }
    

    cout << "test printALL() function" << endl;
    roster.printALL();
//The printAll() function should loop through all the students in classRosterArray and call the print() function for each student.
//A1 [tab] First Name: John [tab] Last Name: Smith [tab] Age: 20 [tab]daysInCourse: {35, 40, 55} Degree Program: Security.
// function output:
//    A1      First Name: John      Last Name: Smith     Age: 20      daysInCourse: {30, 35, 35} Degree Program: SECURITY.
//    A2      First Name: Suzan      Last Name: Erickson     Age: 19      daysInCourse: {50, 30, 30} Degree Program: NETWORK.
//    A3      First Name: Jack      Last Name: Napoli     Age: 19      daysInCourse: {20, 40, 40} Degree Program: SOFTWARE.
//    A4      First Name: Erin      Last Name: Black     Age: 22      daysInCourse: {50, 58, 58} Degree Program: SECURITY.
//    A5      First Name: Shuyi      Last Name: Huang     Age: 33      daysInCourse: {11, 3, 3} Degree Program: SOFTWARE.
    cout << endl << "test remove(string studentID) function"<< endl;
    cout << "attempt to remove student A2" << endl;
    roster.remove("A2");
    roster.printALL();
    cout << "attempt to remove student A2 again and expect to have error message" << endl;
    roster.remove("A2");
    cout <<"attempt to delete student A6, expect to have error message" << endl;
    roster.remove("A6");
    
    return 0;
}

