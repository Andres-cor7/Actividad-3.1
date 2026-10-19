#pragma once
class TreeNode
{
private:
	TreeNode* leftNode;
	TreeNode* rightNode;
	int data;
public:
	TreeNode(int noteData);
	void insert(int insertValue);
	int getData();
	TreeNode* getLeftNode();
	TreeNode* getRightNode();

};

