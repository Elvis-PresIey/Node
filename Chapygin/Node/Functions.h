#pragma once

#ifndef __FUNCTIONS_H__
#define __FUNCTIONS_H__

#include <stdio.h>
#include <exception></exception>
#include "CNode.h"

CNode* createList(int, const int*); // ������� �������� ������.
void print(CNode *pFirst);    // �������, �������������� ������ ������.
CNode* merge(CNode*, CNode*);  // ������� ������� �������.
bool isSorted(CNode*); // �������, �����������, ������������ �� ������.

#endif
