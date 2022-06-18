#include <vector>
#include <string>

using namespace std;

//Header file for our trie data structure

class Trie {

    public:

        //Seperate class to make the nodes for the Trie
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

        //Node count getter
        virtual int getNodeCnt();

        //Root getter
        //virtual Node getRoot();

    private:
        Node *root;
        int NodeCount;

};