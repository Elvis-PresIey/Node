#include <iostream>


struct CNode {
	int val;
	CNode* next;

	void print(CNode* pFirst);
	CNode* search(CNode* pFirst, int t);
	void insert(CNode** pFirst, CNode* a);
};