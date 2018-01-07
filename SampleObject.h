//
// Created by Rahul Yadav on 07/01/18.
//

#ifndef SAMPLE_SAMPLEOBJECT_H
#define SAMPLE_SAMPLEOBJECT_H


class SampleObject {

private:
    char name;
    int id;

public:
    SampleObject();

    void setId(int id);

    void setName(char name);

    char getName();

    int getId();

};


#endif //SAMPLE_SAMPLEOBJECT_H
