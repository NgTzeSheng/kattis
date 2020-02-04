// Although a binary tree structure, it was solved by patterns, not really doing level order traversal.
// We understand that if the numerator > denominator, it is a right node, denominator > numerator (left node), == is the root.
//
// To get to the parent, we take the larger of the two and subtract the other. 
// e.g. 3/2 -> 1/2 (parent)
//
// By drawing out the sequence numbers of the tree, we notice the following:
//            1
//      2           3
//   4    5       6    7

// If you are a left node, your number sequence is twice of your parent's number sequence.
// If you are a right node, your number sequence is twice of your parent's number sequnce plus one.

// We first determine if the rational number is a left / right, then we find it's parent
// and through a recursive function, repeat until numerator == denominator (root).
// Each step along the way, we either multiply by 2 or multiply by 2 and plus 1.

// When the function reaches the root, it will evaluate all the operations.
// i.e. Starting at 1 (root), it will either (1 * 2) or (1 * 2 + 1), up until the rational number, thereby getting it's number sequence.

#include <iostream>

using namespace std;

int f_n(int p, int q);

int main()
{
    int p;
    cin >> p;
    for (int i = 0; i < p; i++)
    {
        int n, p, q;
        cin >> n >> p;
        cin.ignore();
        cin >> q;
        cout << n << ' ';
        cout << f_n(p, q) << endl;
    }
    
    return 0;
}

int f_n(int p, int q)
{
    if (p == q)
    {
        return 1;
    }
    else if (p > q) // right
    {
        p -= q;
        return 1 + 2 * f_n(p, q);
    }
    else
    {
        q -= p;
        return 2 * f_n(p, q);
    }
}
