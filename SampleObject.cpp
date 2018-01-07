//
// Created by Rahul Yadav on 07/01/18.
//

#include "SampleObject.h"

SampleObject::SampleObject() {

}

int SampleObject::getId() {
    return this->id;
}

void SampleObject::setId(int id) {
    this->id = id;
}

void SampleObject::setName(char name) {
    this->name = name;

}

char SampleObject::getName() {
    return this->name;
}