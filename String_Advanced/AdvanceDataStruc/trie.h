#include <vector>
#include <string>

using namespace std;

//Header file for our trie data structure

class Trie {

    public:
        class Node {
            
            public:
                char c = c;
                bool isWord = false;
                vector<Node*> children;

                //Node Constructor
                Node(char c);
        };

        //Trie Constructor
        Trie();

        //Trie Deconstructor
        virtual ~Trie();

        //Insert function for Trie
        virtual void insert(string word);

    private:
        Node *root;

};