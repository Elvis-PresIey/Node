#pragma once

#ifndef __FUNCTIONS_H__
#define __FUNCTIONS_H__

#include <stdio.h>
#include "CNode.h"

void print(CNode*);    // ‘ункци€, осуществл€юща€ печать списка.
CNode* merge(CNode*, CNode*);  // ‘ункци€ сли€ни€ списков.
bool isSorted(CNode*); // ‘ункци€, провер€юща€, отсортирован ли список.

#endif
