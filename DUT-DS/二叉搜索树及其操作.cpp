//#define _CRT_SECURE_NO_WARNINGS 1
//#include<iostream>
//using namespace std;
//class BinaryTreeNode {
//public:
//	int data;
//	BinaryTreeNode* lNode;
//	BinaryTreeNode* rNode;
//	BinaryTreeNode(int dt = 0, BinaryTreeNode* lch = 0, BinaryTreeNode* rch = 0) {
//		data = dt;
//		lNode = lch;
//		rNode = rch;
//	}
//};
//class BinarySearchTree
//{
//
//public:
//	BinaryTreeNode* root;
//
//	BinarySearchTree() { root = NULL; }
//	void insert(int x) {
//		BinaryTreeNode* s = new BinaryTreeNode(x);
//		if (root == 0) {
//			root = s;
//			return;
//		}
//		//当树不为空时
//		BinaryTreeNode* p;
//		p = root;
//		while (p)
//		{
//			if (p->data < x)
//			{
//				if (p->rNode)
//				{
//					p = p->rNode;
//				}
//				else {
//					p->rNode = s;
//					return;
//
//				}
//			}
//			else {
//				if (p->lNode)
//				{
//					p = p->lNode;
//				}
//				else {
//					p->lNode = s;
//					return;
//				}
//			}
//		}
//	}
//	void levelOrder(BinaryTreeNode* p) {//前序递归遍历
//		if (p != NULL)
//		{
//			cout << p->data << endl;
//			levelOrder(p->lNode);
//			levelOrder(p->rNode);
//		}
//	}
//	void inOrder(BinaryTreeNode* p) {//中序递归遍历
//		if (p != NULL)
//		{
//
//			inOrder(p->lNode);
//			cout << p->data << endl;
//			inOrder(p->rNode);
//		}
//	}
//	void PostOrder(BinaryTreeNode* p) {//递归遍历
//		if (p != NULL)
//		{
//
//			PostOrder(p->lNode);
//			PostOrder(p->rNode);
//			cout << p->data << endl;
//		}
//	}
//	bool del(int x)
//	{
//		BinaryTreeNode* pre, *p;
//		pre = 0; p = root;
//		while (p) {
//			if (p->data == x) break;//找到了退出循环
//			else if (p->data < x) {
//				pre = p;
//				p = p->rNode;//如果当前结点值比所想找的值小，就往右子树动，然后一对指针一起动
//			}
//			else {
//				pre = p;
//				p = p->lNode;
//			}
//			
//		}
//		if (p == 0) {
//			return false;
//		}
//		//找到了把它删了
//		//1.如果找到后这个结点是叶子结点
//		if (p->rNode == 0 && p->lNode == 0)
//		{
//			if (pre->lNode == p) {
//				pre->lNode = NULL;
//			}
//			else {
//				pre->rNode = NULL;
//			}
//		
//		}
//		//度为1的结点
//		
//		//只有右孩子
//		else if (p->lNode == 0 && p->rNode != 0 )
//		{
//			if (pre->lNode == p) {
//				pre->lNode = p->rNode;
//			}
//			else {
//				pre->rNode = p->rNode;
//			}
//		}
//		//只有左孩子
//		else if (p->lNode != 0 && p->rNode == 0)
//		{
//			if (pre->lNode == p) {
//				pre->lNode = p->lNode;
//			}
//			else {
//				pre->rNode = p->lNode;
//			}
//		}
//		//两孩子都有
//		else {
//			//找到左子树最大            或右子树最小
//			pre = NULL;
//			BinaryTreeNode* n = p->lNode;
//			while (n) {
//				if (n->rNode) {
//					pre = n;
//					n = n->rNode;
//				}
//				else {
//					break;
//				}
//			}
//			//现在x没右儿子了，那么退出
//			//此时x就是右子树最大的
//
//
//			//注意假如p的左子树（左子结点无右子结点那么pre是找到的值的父结点
//			//但是假如p就是根，那么pre是NULL
//			p->data = n->data;
//
//			if (pre == NULL) {
//				p->data = n->data;
//				if (n->rNode == 0 && n->lNode == 0)
//				{
//					//那么删了n就行
//					p->lNode = NULL;
//				}
//				//度为1的结点
//
//				//只有左孩子
//				else if (n->lNode != 0 && n->rNode == 0)
//				{
//					p->lNode = n->lNode;
//				}
//
//			}
//			else {
//				//1.如果找到后这个结点是叶子结点
//				if (n->rNode == 0 && n->lNode == 0)
//				{
//					if (pre->lNode == n) {
//						pre->lNode = NULL;
//					}
//					else {
//						pre->rNode = NULL;
//					}
//
//				}
//				//度为1的结点
//
//				//只有右孩子
//				else if (n->lNode == 0 && n->rNode != 0)
//				{
//					if (pre->lNode == n) {
//						pre->lNode = n->rNode;
//					}
//					else {
//						pre->rNode = n->rNode;
//					}
//				}
//				//只有左孩子
//				else if (n->lNode != 0 && n->rNode == 0)
//				{
//					if (pre->lNode == n) {
//						pre->lNode = n->lNode;
//					}
//					else {
//						pre->rNode = n->lNode;
//					}
//				}
//			}
//		}
//	}
//};
//int main()
//{
//	BinarySearchTree* n = new BinarySearchTree();
//	n->insert(6);
//	n->insert(5);
//	n->insert(4);
//	n->insert(10);
//	n->insert(8);
//	n->insert(9);
//	//          6  
//	//      5     10
//	//   4      8
////	//            9
//	n->inOrder(n->root);
//	n->del(5);
//	cout << "--------------" << endl;
//	n->inOrder(n->root);
//}