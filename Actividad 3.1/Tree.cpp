#include "Tree.h"

Tree::Tree()
{
	root = nullptr;
}

void Tree::insertNode(int insertValue)
{
	if (root == nullptr)
		root = new TreeNode(insertValue);
	else
		root->insert(insertValue);
}

void Tree::preorderTraversal()
{
	preorderHelper(root);
}

void Tree::preorderHelper(TreeNode* node)
{
	if (node == nullptr)
		return;
	std::cout << node->getData() << " " << std::endl;
	preorderHelper(node->getLeftNode());
	preorderHelper(node-> getRightNode());
}

void Tree::inorderTraversal()
{
	inorderHelper(root);
}

void Tree::inorderHelper(TreeNode* node)
{
	if (node == nullptr)
		return;
	inorderHelper(node->getLeftNode());
	std::cout << node->getData() << " \n";
	inorderHelper(node->getRightNode());
}

void Tree::postorderTraversal()
{
	postorderHelper(root);
}

void Tree::postorderHelper(TreeNode* node)
{
	if (node == nullptr)
		return;
	postorderHelper(node->getLeftNode());
	postorderHelper(node->getRightNode());
	std::cout << node->getData() << " \n";
}

int Tree::heightHelper(TreeNode* node)
{
	int h1 = 0;
	int h2 = 0;
	if (node == nullptr)
		return 0;
	h1 += heightHelper(node->getLeftNode()) + 1;
	h2 += heightHelper(node->getRightNode()) + 1;
	if (h1 > h2) {
		return h1;
	}
	return h2;
}

void Tree::levelByLevel()
{
	lBL.clear();
	levelByLevelHelper(root, 0);
	int i = 0;
	int j = 0;
	while (i < lBL.size())
	{
		j = 0;
		std::cout << "Nivel " << i << std::endl;
			while (j < lBL[i].size()) {
				std::cout << lBL[i][j] << "    " << std::endl;
				j += 1;
			}
			i += 1;
	}
}

void Tree::levelByLevelHelper(TreeNode* node, int level)
{
	if (node == nullptr)
		return;
	if (lBL.size()-1 < level || level == 0)
	{
		std::vector<std::string> Level;
		lBL.push_back(Level);
		lBL[level].push_back(std::to_string(node->getData()));
	}
	else
	{
		lBL[level].push_back(std::to_string(node->getData()));
	}
	
	levelByLevelHelper(node->getLeftNode(), level +1);
	levelByLevelHelper(node->getRightNode(), level +1);
}

void Tree::visit(int a)
{
	int option;
	std::cin >> option;
	switch (option) {
	case 1:
		std::cout << "\n\nPreorder traversal\n";
		preorderTraversal();
		break;
	case 2:
		std::cout << "\n\nInorder traversal\n";
		inorderTraversal();
		break;
	case 3:
		std::cout << "\n\nPostorder traversal\n";
		postorderTraversal();
		break;
	case 4:
		std::cout << "\n\nLevel by level traversal\n";
		levelByLevel();
		break;
	}

}

int Tree::height()
{
	return heightHelper(root);
}

void Tree::ancestors(int a)
{
	gen.clear();
	ancestorsHelper(root, a);
	int i = 0;
	while (i < gen.size())
	{
		std::cout << gen[i] << " <- ";
		i += 1;
	}
	std::cout << "Raiz" << std::endl;
}

int Tree::ancestorsHelper(TreeNode* node, int a)
{
	if (node == nullptr)
		return 0;
	if (node->getData() == a) {
		return 1;
	}
	if (ancestorsHelper(node->getLeftNode(), a) || ancestorsHelper(node->getRightNode(), a)) {
		gen.push_back(node->getData());
		return 1;
	}
	return 0;
}

int Tree::whatlevelamI(int a)
{
	return whatlevelamIHelper(root, a, 0);
}

int Tree::whatlevelamIHelper(TreeNode* node, int a, int level)
{
	if (node == nullptr)
		return -1;

	if (node->getData() == a)
		return level;

	int left = whatlevelamIHelper(node->getLeftNode(), a, level + 1);

	if (left != -1)
		return left;

	return whatlevelamIHelper(node->getRightNode(), a, level + 1);
}

