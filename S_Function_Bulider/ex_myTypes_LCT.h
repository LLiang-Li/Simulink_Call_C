#ifndef _MY_TYPES_H_
#define _MY_TYPES_H_

typedef struct {
  double sig1;
  double sig2;
} sigStructType;

typedef struct {
  double param1;
  double param2;
  double param3;
} paramStructType;

void myFcn(const sigStructType *in, const paramStructType *params, sigStructType *out);

#endif