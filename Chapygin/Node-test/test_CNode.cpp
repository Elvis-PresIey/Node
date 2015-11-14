#include "gtest\gtest.h"
#include "CNode.h"
#include "Functions.h"

TEST(CNode, throws_when_lists_are_null) {
	CNode* head1 = NULL;
	CNode* head2 = NULL;
	ASSERT_ANY_THROW(merge(head1, head2));
}

TEST(CNode, throws_when_list_is_unsorted) {
	const int kListSize = 5;
	int vals1[kListSize];
	int vals2[kListSize];
	for (int i = 0; i < kListSize; i++) {
		if (i % 2) vals1[i] = i;
		else vals1[i] = -i;
		vals2[i] = i + 5;
	}
	CNode* head1 = createList(kListSize, vals1);
	CNode* head2 = createList(kListSize, vals2);
	ASSERT_ANY_THROW(merge(head1, head2));
}

TEST(CNode, can_merge_when_one_of_lists_is_empty) {
	const int kListSize = 5;
	int vals[kListSize];
	for (int i = 0; i < kListSize; i++)
		vals[i] = i + 5;
	CNode* head1 = createList(kListSize, vals);
	CNode* head2 = NULL;
	CNode* expectedHead = merge(head1, head2);

	int k = 0;
	while (expectedHead != NULL) {
		EXPECT_EQ(vals[k], expectedHead -> val);
		k++;
		expectedHead = expectedHead -> next;
	}
	EXPECT_EQ(kListSize, k);
}

TEST(CNode, can_merge_lists) {
	const int kListSize1 = 5;
	int vals1[kListSize1];
	for (int i = 0; i < kListSize1; i++)
		vals1[i] = i + 5;

	const int kListSize2 =10;
	int vals2[kListSize2];
	for (int i = 0; i < kListSize2; i++)
		vals2[i] = i + 5;

	const int kListSizeExpected = kListSize1 + kListSize2;
	int valsExpected[kListSizeExpected];
	for (int i = 0; i < kListSize1; i++)
		valsExpected[i] = vals1[i];
	for (int i = kListSize1; i < kListSizeExpected; i++)
		valsExpected[i] = vals2[i - kListSize1];

	for (int i = 0; i < kListSizeExpected; i++) {
		for (int j = i; j < kListSizeExpected; j++)
			if (valsExpected[j] < valsExpected[i]) {
				int tmp = valsExpected[j];
				valsExpected[j] = valsExpected[i];
				valsExpected[i] = tmp;
		}
	}

	CNode* head1 = createList(kListSize1, vals1);
	CNode* head2 = createList(kListSize2, vals2);
	CNode* headResult = merge(head1, head2);

	int k = 0;
	while (headResult != 0) {
		EXPECT_EQ(valsExpected[k], headResult -> val);
		k++;
		headResult = headResult -> next;
	}
	EXPECT_EQ(kListSizeExpected, k);
}
