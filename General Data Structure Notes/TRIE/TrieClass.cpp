/*
    Your Trie object will be instantiated and called as such:
    Trie* obj = new Trie();
    obj->insert(word);
    bool check2 = obj->search(word);
    bool check3 = obj->startsWith(prefix);
 */
#include<iostream>
using namespace std;


struct Node{
    Node* ref[26];
    bool flag=false;
    
    bool containsKey(char c){
        return ref[c-'a']!=NULL;
    }
    void put(char c, Node* node){
        ref[c-'a'] =node;
    }
    Node* get(char c){
        return ref[c-'a'];
    }
    void setEnd(){
        flag=true;
    }
    bool isEnd(){
        return flag;
    }
};


class Trie {

	private: Node* root;
public:
    /** Initialize your data structure here. */
    Trie() {
		root=new Node();
    }

    /** Inserts a word into the trie. */
    void insert(string word) {
		Node* ptr=root;
        int n=word.length();
        for(int i=0; i<n; i++){
            char c=word[i];
            if(!ptr->containsKey(c)){
                ptr->put(c,new Node());
            }
            ptr=ptr->get(c);
        }
        ptr->setEnd();
    }

    /** Returns if the word is in the trie. */
    bool search(string word) {
        Node* ptr=root;
        int n=word.length();
        for(int i=0; i<n; i++){
            char c=word[i];
            if(!ptr->containsKey(c)){
                return false;
            }
            ptr=ptr->get(c);
        }
        return ptr->isEnd();   
    }

    /** Returns if there is any word in the trie that starts with the given prefix. */
    bool startsWith(string prefix) {
        Node* ptr=root;
        int n=prefix.length();
        for(int i=0; i<n; i++){
            char c=prefix[i];
            if(!ptr->containsKey(c)){
                return false;
            }
            ptr=ptr->get(c);
        }
        return true;  
    }
};