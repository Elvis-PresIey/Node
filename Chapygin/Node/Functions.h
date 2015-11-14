#pragma once

#ifndef __FUNCTIONS_H__
#define __FUNCTIONS_H__

#include <stdio.h>
#include <exception></exception>
#include "CNode.h"

CNode* createList(int count, const int* vals) {
  if (count <= 0) return 0;
  CNode *head = new CNode;
  head->val = vals[0];
  CNode *prev = head;
  for (int i = 1; i < count; ++i) {
    CNode *node = new CNode;
    node->val = vals[i];
    prev->next = node;
    prev = node;
  }
  prev->next = 0;
  return head;
}
bool isSorted(CNode* head) {
	if (!head) return true;
	int prevVal = head -> val;
	while (head -> next) {
		prevVal = head -> val;
		head = head -> next;
		if (prevVal > head -> val) return false;
	}
	return true;
}
CNode* merge(CNode* p1, CNode* p2) {
	if ((!p1) && (!p2)) throw std::exception("Empty Lists :(");
	if (!isSorted(p1) || !isSorted(p2)) throw std::exception("At least one of the lists is unsorted :(");
	if (!p1) return p2;
	if (!p2) return p1;
	CNode* resultHead = NULL;
	CNode* resP = NULL;
	if ((p1 -> val) <= (p2 -> val)) {
		resP = p1;
		p1 = p1 -> next;
	} else {
		resP = p2;
		p2 = p2 -> next;
	}
	resultHead = resP;
	while (p1 && p2) {
		if ((p1 -> val) < (p2 -> val)) {
			resP -> next = p1;
			p1 = p1 -> next;
		} else {
			resP -> next = p2;
			p2 = p2 -> next;
		}
		resP = resP -> next;
	}
	if (p1) resP -> next = p1;
	if (p2) resP -> next = p2;
	return resultHead;
}

#endif
