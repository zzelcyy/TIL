#include <stdio.h>
#include <stdlib.h>

typedef int BTData;
typedef struct _bTreeNode
{
	BTData data;
	struct _bTreeNode * left;
	struct _bTreeNode * right;
} BTreeNode;
BTreeNode * MakeBTreeNode(void)
{
	BTreeNode * nd = (BTreeNode*)malloc(sizeof(BTreeNode));
	nd->left = NULL;
	nd->right = NULL;

	return nd;
}
BTData GetData(BTreeNode * bt)
{
	return bt->data;
}
void SetData(BTreeNode * bt, BTData data)
{
	bt->data = data;
}
BTreeNode * GetLeftSubTree(BTreeNode * bt)
{
	return bt->left;
}
BTreeNode * GetRightSubTree(BTreeNode * bt)
{
	return bt->right;

}
void MakeLeftSubTree(BTreeNode * main, BTreeNode * sub)
{
	if (main->left != NULL)
		free(main->left);

	main->left = sub;
}
void MakeRightSubTree(BTreeNode * main, BTreeNode * sub)
{
	if (main->right != NULL)
		free(main->right);

	main->right = sub;
}

int main()
{
	BTreeNode * A = MakeBTreeNode();
	BTreeNode * B = MakeBTreeNode();
	BTreeNode * C = MakeBTreeNode();
	BTreeNode * D = MakeBTreeNode();
	BTreeNode * E = MakeBTreeNode();
	BTreeNode * F = MakeBTreeNode();
	BTreeNode * G = MakeBTreeNode();

	SetData(A, 1);
	SetData(B, 2);
	SetData(C, 3);
	SetData(D, 4);
	SetData(E, 5);
	SetData(F, 6);
	SetData(G, 7);

	MakeLeftSubTree(A, B);
	MakeRightSubTree(A, C);
	MakeLeftSubTree(B, D);
	MakeRightSubTree(B, E);
	MakeLeftSubTree(C, F);
	MakeRightSubTree(C, G);

	// 포화이진트리 센터화해서 출력
	printf("%4d\n", GetData(A));
	printf("%2d", GetData(GetLeftSubTree(A)));
	printf("%4d\n", GetData(GetRightSubTree(A)));
	printf("%d ", GetData(GetLeftSubTree(GetLeftSubTree(A))));
	printf("%d ", GetData(GetRightSubTree(GetLeftSubTree(A))));
	printf("%d ", GetData(GetLeftSubTree(GetRightSubTree(A))));
	printf("%d \n", GetData(GetRightSubTree(GetRightSubTree(A))));

	// 루트 노드부터 시작해 오른쪽에 있는 노드들만 출력
	printf("\n%d\n", GetData(A));
	printf("%d\n", GetData(GetRightSubTree(A)));
	printf("%d\n", GetData(GetRightSubTree(GetRightSubTree(A))));
}