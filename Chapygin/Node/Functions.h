#pragma once

#ifndef __FUNCTIONS_H__
#define __FUNCTIONS_H__

#include <stdio.h>
#include <exception></exception>
#include "CNode.h"

CNode* createList(int, const int*); // ‘ункци€ создани€ списка.
void print(CNode *pFirst);    // ‘ункци€, осуществл€юща€ печать списка.
CNode* merge(CNode*, CNode*);  // ‘ункци€ сли€ни€ списков.
bool isSorted(CNode*); // ‘ункци€, провер€юща€, отсортирован ли список.

#endif
