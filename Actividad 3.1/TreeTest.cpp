#include "TreeTest.h"

void TreeTest::Treetest()
{
    Tree tree;
    int values[] = {10, 5, 15, 3, 7, 12, 18, 2, 6, 20};

    std::cout << "Insertando los siguientes valores: \n";

    for (int i = 0; i < 10; i++) {
        std::cout << values[i] << "\n";
        tree.insertNode(values[i]);
    }
    
    std::cout << "\n\nPreorder traversal\n";
    tree.preorderTraversal();

    std::cout << "\n\nInorder traversal\n";
    tree.inorderTraversal();

    std::cout << "\n\nPostorder traversal\n";
    tree.postorderTraversal();
    std::cout << "\n";

    std::cout << "\nAncestors (6):\n";
    tree.ancestors(6);

    std::cout << "\nHeight: " << tree.height() << "\n";

    std::cout << "\nLevel by level:\n";
    tree.levelByLevel();

    std::cout << "\nWhat level am I (6): " << tree.whatlevelamI(6) << "\n";
}
