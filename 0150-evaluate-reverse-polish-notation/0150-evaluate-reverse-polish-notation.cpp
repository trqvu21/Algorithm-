//https://leetcode.com/problems/evaluate-reverse-polish-notation/description/?envType=problem-list-v2&envId=w5srjw5v
class Solution {
public:
    int evalRPN(vector<string>& tokens) {
   stack<int> kq;
   for(string t : tokens){
    if(t == "+" || t == "-" || t == "*" || t == "/"){
        int b = kq.top(); kq.pop();
        int a = kq.top(); kq.pop();
        if(t == "+")
            kq.push(a+b);
        else if(t == "-")
            kq.push(a-b);
        else if(t == "*")
            kq.push(a*b);
    else    kq.push(a/b);
    } else { kq.push(stoi(t));
    }
    }
        return kq.top();
   }

};