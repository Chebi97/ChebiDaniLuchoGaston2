/*
 * B.h
 */

#ifndef INCLUDE_B_H_
#define INCLUDE_B_H_


#include "A.h"
#include "C.h"

class C;

class B {
private:
  A* a;
  C* c;
public:
  void who() { std::cout << 'B';}
};



#endif /* INCLUDE_B_H_ */
