#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define nl << "\n"
#define sz(x) (int)(x).size()
#define sp << " " <<
#define fo(i,n) for(i=0;i<n;i++)

using namespace std;

class TrieNode
{
    public:
        char data;
        bool isTerminal;
        TrieNode* children[26];

        TrieNode(char ch)
        {
            data= ch;
            isTerminal= false;
            for(int i = 0; i<26; i++) { children[i]= NULL;}
        }
};

class Trie
{
    public:
        TrieNode* root;

        Trie()
        {
            root = new TrieNode('\0');
        }
        
        void insertUtil(TrieNode* root, string word)
        {
            if(word.size()== 0)
            {
                root->isTerminal= true;
                return;
            }

            int index= word[0]- 'a';
            TrieNode* child;

            if(root->children[index] != NULL)
            {
                child= root->children[index];
            }
            else
            {
                child= new TrieNode(word[0]);
                root->children[index]= child;
            }

            insertUtil(child, word.substr(1));
        }
        void insert(string word) 
        {
            insertUtil(root, word);
        }
        
};

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif

    Trie* t;
    t->insert("shreyansh");
    t->insert("shree");

    
}
