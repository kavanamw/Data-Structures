#ifndef MANIP_H
#define MANIP_H

// Author: Matthew Kavanagh
// Source File: manip.h
// Description: A set of functions where you should manipulate
// the passed parameters to change the object in a specific way, 
// so that Pointers_test.h passes all tests.

#include "Pointers.h"

// A little something to get you going
void manip1(Pointers* p){
  *(p->getA()) = 10;
}

void manip2(Pointers* p){
  *(p->getB()) = 45;
}

void manip3(Pointers* p){
  *(p->getB()) = *(p->getA());
}

void manip4(Pointers* p, int* other){
   p->setB(other);
}

void manip5(Pointers* p, int* other){

   *(p->getB()) = 45;
   p->setC();
}

void manip6(Pointers* p){
  *(p->getB()+2) = 10;
}

void manip7(Pointers* p){
  *(p->getB()) = 15;
}

void manip8(Pointers* p){
  //*(p->getC()) = 199;
}

void manip9(Pointers* p, int* other){
  p->setB(other);
}

void manip10(Pointers* p){
  // TODO: Fill me in
}

#endif
