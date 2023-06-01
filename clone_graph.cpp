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
private:
    unordered_map<Node*,Node*>visited;
public:
    Node* cloneGraph(Node* node) 
    {
        if(!node)return NULL;
        Node* copy = new Node(node->val,{});
        visited[node]=copy;
        queue<Node*>todo;
        todo.push(node)
        while(!todo.empty())
        {
            Node* cur=todo.front();
            todo.pop();
            for(Node* neighbor:cur->Neighbors)
            {
                //cloned node nasel tar navin banvala jato
                if(visited.find[neighbor]==visited.empty())
                {
                    visited[neighbor]=new Node(neighbor->val,{});
                    todo.push(neighbor);
                }
                visited[cur]->neighbors.push_back(visited[neighbor]);
            }
        }
    }
};