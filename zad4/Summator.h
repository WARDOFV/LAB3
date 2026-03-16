#ifndef SUMMATOR_H
#define SUMMATOR_H

class Summator {
public:
    virtual int transform(int i);   // base transformation
    int sum(int N);                 // sum from 1..N
};

#endif
