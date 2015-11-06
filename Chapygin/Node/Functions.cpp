#include "Functions.h"

void print(CNode *pFirst) {
	while (pFirst != NULL) {
		printf("%d", pFirst -> val);
		if (!(pFirst -> next))
			printf(".\n\n");
		else
			printf(", ");
		pFirst = pFirst -> next;
	}
}

CNode* merge(CNode* p1, CNode* p2) {
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
