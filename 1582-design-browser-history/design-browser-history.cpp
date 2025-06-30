   class BrowserHistory {
    struct Node {
        string url;
        Node* back;
        Node* forward;
        Node(string u) : url(u), back(NULL), forward(NULL) {}
    };
    Node* current;

public:
    BrowserHistory(string homepage) {
        current = new Node(homepage);  
    }
    
    void visit(string url) {
        Node* newpage=new Node(url);
        current->forward=newpage;
        newpage->back=current;
        current=newpage;
    }
    
    string back(int steps) {
        while(steps){
            if(current->back)current=current->back;
            else break;
            steps--;
        }
        return current->url;
    }
    
    string forward(int steps) {
         while(steps){
            if(current->forward)current=current->forward;
            else break;
            steps--;
        }
        return current->url;
    }
};

/**
 * Your Node object will be instantiated and called as such:
 * Node* obj = new Node(homepage);
 * obj->visit(url);
 * string param_2 = obj->back(steps);
 * string param_3 = obj->forward(steps);
 */