#include <iostream>
#include <fstream>
#include "SampleObject.h"

using namespace std;

#define FILENAME "/Users/rahul/sample.bin"


int main() {
    // std::cout << "Hello, World!";
    SampleObject *aSample = new SampleObject();
    aSample->setId(21);
    aSample->setName('r');
    fstream file;
    file.open(FILENAME, ios::out | ios::binary);
    if (!file) {
        cout << "Error in creating file...\n";
        return -1;
    }
    file.write((char *) &aSample, sizeof(aSample));
    file.close();
    SampleObject *oSample = new SampleObject();
    file.open(FILENAME, ios::in | ios::binary);
    if (!file) {
        cout << "Error in opening file...\n";
        return -1;
    }

    if (file.read((char *) &oSample, sizeof(oSample))) {
        cout << endl << endl;
        cout << "Data extracted from file..\n";
        cout << "The id is  " << oSample->getId();
        cout << "The name is " << oSample->getName();
        //print the object

    } else {
        cout << "Error in reading data from file...\n";
        return -1;
    }
    file.close();

    delete oSample;
    delete aSample;
    //delete oSample;

    return 0;
}