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
//		//������Ϊ��ʱ
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
//	void levelOrder(BinaryTreeNode* p) {//ǰ��ݹ����
//		if (p != NULL)
//		{
//			cout << p->data << endl;
//			levelOrder(p->lNode);
//			levelOrder(p->rNode);
//		}
//	}
//	void inOrder(BinaryTreeNode* p) {//����ݹ����
//		if (p != NULL)
//		{
//
//			inOrder(p->lNode);
//			cout << p->data << endl;
//			inOrder(p->rNode);
//		}
//	}
//	void PostOrder(BinaryTreeNode* p) {//�ݹ����
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
//			if (p->data == x) break;//�ҵ����˳�ѭ��
//			else if (p->data < x) {
//				pre = p;
//				p = p->rNode;//�����ǰ���ֵ�������ҵ�ֵС����������������Ȼ��һ��ָ��һ��
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
//		//�ҵ��˰���ɾ��
//		//1.����ҵ�����������Ҷ�ӽ��
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
//		//��Ϊ1�Ľ��
//		
//		//ֻ���Һ���
//		else if (p->lNode == 0 && p->rNode != 0 )
//		{
//			if (pre->lNode == p) {
//				pre->lNode = p->rNode;
//			}
//			else {
//				pre->rNode = p->rNode;
//			}
//		}
//		//ֻ������
//		else if (p->lNode != 0 && p->rNode == 0)
//		{
//			if (pre->lNode == p) {
//				pre->lNode = p->lNode;
//			}
//			else {
//				pre->rNode = p->lNode;
//			}
//		}
//		//�����Ӷ���
//		else {
//			//�ҵ����������            ����������С
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
//			//����xû�Ҷ����ˣ���ô�˳�
//			//��ʱx��������������
//
//
//			//ע�����p�������������ӽ�������ӽ����ôpre���ҵ���ֵ�ĸ����
//			//���Ǽ���p���Ǹ�����ôpre��NULL
//			p->data = n->data;
//
//			if (pre == NULL) {
//				p->data = n->data;
//				if (n->rNode == 0 && n->lNode == 0)
//				{
//					//��ôɾ��n����
//					p->lNode = NULL;
//				}
//				//��Ϊ1�Ľ��
//
//				//ֻ������
//				else if (n->lNode != 0 && n->rNode == 0)
//				{
//					p->lNode = n->lNode;
//				}
//
//			}
//			else {
//				//1.����ҵ�����������Ҷ�ӽ��
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
//				//��Ϊ1�Ľ��
//
//				//ֻ���Һ���
//				else if (n->lNode == 0 && n->rNode != 0)
//				{
//					if (pre->lNode == n) {
//						pre->lNode = n->rNode;
//					}
//					else {
//						pre->rNode = n->rNode;
//					}
//				}
//				//ֻ������
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