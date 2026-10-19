#pragma once
#include "TreeNode.h"
#include <iostream>
#include <string>
#include <vector>
class Tree
{
private:
	TreeNode* root;
	std::vector<std::vector<std::string>> lBL;
	std::vector<int> gen;
	int count = 0;
public:
	Tree();
	void insertNode(int insertValue);
	void preorderTraversal();
	void preorderHelper(TreeNode* node);
	void inorderTraversal();
	void inorderHelper(TreeNode* node);
	void postorderTraversal();
	void postorderHelper(TreeNode* node);
	int heightHelper(TreeNode* node);
	void levelByLevel();
	void levelByLevelHelper(TreeNode* node, int level);

	void visit(int a);
	int height();
	void ancestors(int a);
	int ancestorsHelper(TreeNode* node, int a);
	int whatlevelamI(int a);
	int whatlevelamIHelper(TreeNode* node, int a, int level);
		

};

