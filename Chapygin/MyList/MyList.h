#ifndef GTEST_MYLIST_MYLIST_H
#define GTEST_MYLIST_MYLIST_H

#include <stdlib.h>
#include <exception>
#include "CNode.h"

CNode* CreateList(int count, const int* vals);

bool isSorted(CNode* head);

CNode* merge(CNode* p1, CNode* p2);

#endif  // GTEST_MYLIST_MYLIST_H
