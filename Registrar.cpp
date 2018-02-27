# Project-1
#include <string>

#include <iostream>

#include <fstream>

#include <stdexcept>

#include "Registrar.h"



using namespace std;



// Load information from a text file with the given filename

// THIS FUNCTION IS COMPLETE

void Registrar::readTextfile(string filename) {

        ifstream myfile(filename);



        if (myfile.is_open()) {

                cout << "Successfully opened file " << filename << endl;

                string courseName;

                string cwid;

                char grade;

                while (myfile >> courseName >> cwid >> grade) {

                        // cout << cwid << " " << grade << endl;

                        addLine(courseName, cwid, grade);

                }

                myfile.close();

        }

        else

                throw invalid_argument("Could not open file " + filename);

}



// return Student object corresponding to a given CWID

// getStudent must throw an exception if cwid is invalid

Student& Registrar::getStudent(string cwid) const {
    for(int i =0; i != Student.length+1; i++){
        if (cwid == Student.stuarr[i][2]){
            break;
        }
        else if (i==250,000 && cwid != Sudent.stuarr[i][2]){
            throw invalid_argument("That is not a valid cwid");
        }


    }

}



// process a line from the text file

void Registrar::addLine(string courseName, string cwid, char grade) {
    for (int i = 0; i != Student.length; i++){
        if (Student.stuarr[i][1] == nullptr){
            Student.stuarr[i][1] = grade;
            Student.stuarr[i][2] = cwid;
            Student.stuarr[i][3] = grade;
        }//Stores new data into the array.

    }




}
