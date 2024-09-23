#include <iostream>
#include <cmath>

void printBranch(int spaces, int branchWidth) {
    for (int i = 0; i < spaces; ++i) std::cout << " ";
    for (int i = 0; i < branchWidth; ++i) std::cout << "*";
    std::cout << std::endl;
}

void printTree(int height) {
    int max_width = 2 * height - 1;
    int branchWidth = 1;

    // Print branches
    for (int i = 0; i < height; ++i) {
        int spaces = (max_width - branchWidth) / 2;
        printBranch(spaces, branchWidth);
        branchWidth += 2;
    }

    // Print trunk
    int trunkWidth = height / 3;
    if (trunkWidth % 2 == 0) trunkWidth++; // Ensure odd trunk width for symmetry
    int trunkHeight = height / 3;
    int spaces = (max_width - trunkWidth) / 2;

    for (int i = 0; i < trunkHeight; ++i) {
        printBranch(spaces, trunkWidth);
    }
}

int main() {
    int height;
    std::cout << "Enter the height of the tree: ";
    std::cin >> height;
    if (height < 3) {
        std::cout << "Tree height must be at least 3!" << std::endl;
        return 1;
    }

    printTree(height);
    return 0;
}
