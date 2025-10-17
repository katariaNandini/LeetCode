/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> neighbors;
    Node() {
        val = 0;
        neighbors = vector<Node*>();
    }
    Node(int _val) {
        val = _val;
        neighbors = vector<Node*>();
    }
    Node(int _val, vector<Node*> _neighbors) {
        val = _val;
        neighbors = _neighbors;
    }
};
*/

class Solution {
public:
void dfs(Node * node,Node * clone,unordered_map<Node*,Node*>&mp){
    for(auto it:node->neighbors){
        if(mp.find(it)==mp.end()){
            Node * clone_n=new Node(it->val);
            clone->neighbors.push_back(clone_n);
            mp[it]=clone_n;
            dfs(it,clone_n,mp);
        }
        else {
            clone->neighbors.push_back(mp[it]);

        }
    }
}
    Node* cloneGraph(Node* node) {
        if(!node) return NULL;
        Node * clone_node=new Node(node->val);
        unordered_map<Node*,Node*> mp;
        mp[node]=clone_node;
        dfs(node,clone_node,mp);
        return clone_node;
    }
};