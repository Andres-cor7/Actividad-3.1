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
	Tree(); //Complejidad O(1) (La creación por default es inmediata porque no recorre elementos, solo asigna un puntero)
	void insertNode(int insertValue); //Complejidad O(n) peor caso (Necesita recorrer n elementos), si esta balanceado el arbol, es O(log n)
	void preorderTraversal(); //Complejidad O(n) (Necesita recorrer n elementos)
	void preorderHelper(TreeNode* node); //Complejidad O(n) (Necesita recorrer n elementos)
	void inorderTraversal(); //Complejidad O(n) (Necesita recorrer n elementos)
	void inorderHelper(TreeNode* node); //Complejidad O(n) (Necesita recorrer n elementos)
	void postorderTraversal();//Complejidad O(n) (Necesita recorrer n elementos)
	void postorderHelper(TreeNode* node); //Complejidad O(n) (Necesita recorrer n elementos)
	int heightHelper(TreeNode* node); //Complejidad O(n) (Necesita recorrer n elementos)
	void levelByLevel(); //Complejidad O(n) (Necesita recorrer n elementos)
	void levelByLevelHelper(TreeNode* node, int level); //Complejidad O(n) (Necesita recorrer n elementos)

	void visit(int a); //Complejidad O(n) (Necesita recorrer n elementos)
	int height();//Complejidad O(n) (Necesita recorrer n elementos)
	void ancestors(int a); //Complejidad O(n) (Necesita recorrer n elementos)
	int ancestorsHelper(TreeNode* node, int a); //Complejidad O(n) (Necesita recorrer n elementos)
	int whatlevelamI(int a); //Complejidad O(n) (Necesita recorrer n elementos)
	int whatlevelamIHelper(TreeNode* node, int a, int level); //Complejidad O(n) (Necesita recorrer n elementos)
};

