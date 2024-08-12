class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        std::stack<int> stack;
int n=tokens.size();
    for (int i=0;i<n;i++) {
        if (tokens[i] == "+" || tokens[i]== "-" || tokens[i]== "*" || tokens[i]== "/") {
            // Pop the top two elements from the stack
            int operand2 = stack.top();
            stack.pop();
            int operand1 = stack.top();
            stack.pop();

            // Apply the operator and push the result back onto the stack
            if (tokens[i]== "+") {
                stack.push(operand1 + operand2);
            } else if (tokens[i]== "-") {
                stack.push(operand1 - operand2);
            } else if (tokens[i]== "*") {
                stack.push(operand1 * operand2);
            } else if (tokens[i]== "/") {
                stack.push(operand1 / operand2);
            }
        } else {
            // If the token is a number, convert it to an integer and push onto the stack
            stack.push(stoi(tokens[i]));
        }
    }

    // The final result should be the only element left on the stack
    return stack.top();
    }
};