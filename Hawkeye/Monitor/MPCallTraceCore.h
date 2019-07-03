//
//  MPCallTraceCore.h
//  Hawkeye
//
//  Created by Ma,Peng on 2019/7/3.
//  Copyright © 2019 Ma,Peng. All rights reserved.
//

#ifndef MPCallTraceCore_h
#define MPCallTraceCore_h

#include <stdio.h>
#include <objc/objc.h>

typedef struct {
    __unsafe_unretained Class cls;
    SEL sel;
    uint64_t time; // us (1/1000 ms)
    int depth;
} mpCallRecord;

extern void mpCallTraceStart();
extern void mpCallTraceStop();

extern void mpCallConfigMinTime(uint64_t us); //default 1000
extern void mpCallConfigMaxDepth(int depth);  //default 3

extern mpCallRecord *mpGetCallRecords(int *num);
extern void mpClearCallRecords();


#endif /* MPCallTraceCore_h */
