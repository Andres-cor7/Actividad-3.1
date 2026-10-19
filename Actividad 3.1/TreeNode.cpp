#include "TreeNode.h"

TreeNode::TreeNode(int nodeData)
{
	data = nodeData;
	leftNode = rightNode = nullptr;
}

void TreeNode::insert(int insertValue)
{
	if (insertValue < data) {
		if (leftNode == nullptr) {
			leftNode = new TreeNode(insertValue);
		}
		else {
			leftNode->insert(insertValue);
		}
	}
	else if (insertValue > data) {
		if (rightNode == nullptr)
			rightNode = new TreeNode(insertValue);
		else
			rightNode->insert(insertValue);
	}

}

int TreeNode::getData()
{
	return data;
}

TreeNode* TreeNode::getLeftNode()
{
	return leftNode;
}

TreeNode* TreeNode::getRightNode()
{
	return rightNode;
}
