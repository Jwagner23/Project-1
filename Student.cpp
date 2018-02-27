# Project-1
#include "Student.h"
#include <iostream>
#include <fstream>

Student::Student() {
    ifstream file {gradelsit.txt};
    if(!file.is_open()) return -1;

    for(int i{}; i != Student.width; i++)
    {
        for(int j{}; j != Student.length; j++)
        {
            file >> Student.stuarr[j][i];
        }
    }

}


Student::Student(const string &cwid) {

        // TO BE COMPLETED
}



string Student::getCWID() {

        // TO BE COMPLETED

}



void Student::addCourseGrade (const string &courseName, char grade) {
    int size = Student.length;
    cout << "Input the cwid of teh student " << endl;
        cin >> cwid; //Check line for cwid name
    for (int i = 0; i <= size; i++){
        if (cwid == Student.stuarr[i][2] && &courseName == Student.stuarr[i][1]){
            Student.stuarr[i][3] = grade;
            break;
        }
    }

}



double Student::getGPA() {
    double gpa = 0;
    int temp = 0, numclasses = 0;
    int size = Student.length;
    cout << "Input the cwid of teh student " << endl;
        cin >> cwid; //Check line for cwid name
    for (int i = 0; i <= size; i++){
        if(cwid == Student.stuarr[i][2]){
            numclasses = numclasses +1;
            if (Student.stuarr[i][3] == 'A'){
                temp = temp + 4;
            }
            else if (Student.stuarr[i][3] == 'B'){
                temp = temp + 3;
            }
            else if (Student.stuarr[i][3] == 'C'){
                temp = temp + 2;
            }
            else if (Student.stuarr[i][3] == 'D'){
                temp = temp + 1;
            }
            else if (Student.stuarr[i][3] == 'F'){
                temp = temp + 0;
            }
        }
    }

    gpa = temp/numclasses;
    return gpa;
}



// print transcript in this (sample) format:

// TRANSCRIPT FOR CWID=279750343

// CS 121		C

// CS 253		B

// CS 131		B

// GPA = 2.6667

void Student::printTranscript() {

    int size = Student.length;
    cout << "Input the cwid of teh student " << endl;
        cin >> cwid; //Check line for cwid name

    cout << "Transcript for cwid = " << Student.cwid << endl;

    for (int i = 0; i <= size; i++){
        if (cwid == Student.stuarr[i][2]){
            cout << Student.stuarr[i][1] << "     " << Student.stuarr[i][3] << endl;
        }
        cout << Student::getGPA();
    }




}
