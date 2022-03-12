#include<iostream>
//Import and use the header file constructor
#include "trie.h"

using namespace std;

//Node class constructor
Trie::Node::Node(char c)
{
    this->c = c;
    isWord = false;
    children = vector<Node*>(26);
}

//Trie Constructor
Trie::Trie()
{
    root = new Node('\0');

}

//Trie Insert function
void Trie::insert(string word)
{
    //Create a pointer and have it point it at root
    Node *curr = root;
    for (int i = 0; i < word.length(); i++)
    {
        char c = word[i];
        if (curr->children[c - 'a'] == nullptr)
        {
            curr->children[c - 'a'] = new Node(c);
        }

        curr = curr->children[c - 'a'];
    }

    //After inserting, set the end to true as it is a word
    curr->isWord = true;

}

//Trie Deconstructor
Trie::~Trie() { delete root; }


//Main function for testing
int main()
{

    cout << "Beginning of code!" << endl;

    Trie obj1;
    obj1.insert("cat");

    cout << "End of the code!" << endl;

    return 0;
};


            
            
            
            
            
            
            