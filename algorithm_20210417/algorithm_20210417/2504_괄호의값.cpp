//
//  2504.cpp
//  algorithm_20210417
//
//  Created by 김건회 on 2021. 4. 18..
//  Copyright © 2021년 김건회. All rights reserved.
//

#include <iostream>
#include <stack>
using namespace std;

int main() {
    string input;
    cin >> input;
    
    stack<string> s, test_s;
    
    for(int i=0, len=input.length(); i<len; i++) {
        if(test_s.empty()) {
            test_s.push(input.substr(i, 1));
        } else {
            string top = test_s.top();
            if(top.compare("(") == 0 && input.substr(i, 1).compare(")") == 0) {
                test_s.pop();
            } else if(top.compare("[") == 0 && input.substr(i, 1).compare("]") == 0) {
                test_s.pop();
            } else {
                test_s.push(input.substr(i, 1));
            }
        }
    }
    if(test_s.size() != 0) {
        cout << 0;
        return 0;
    }
    
    for(int i=0, len=input.length(); i<len; i++) {
        if(s.empty()) {
            s.push(input.substr(i, 1));
        } else {
            string top = s.top();
            int temp_num = 1;
            
            if(top.compare("(") != 0 && top.compare("[") != 0 && (input.substr(i, 1).compare(")") == 0 || input.substr(i, 1).compare("]") == 0)) {
                temp_num = stoi(top);
                s.pop();
                
                if(s.empty()) break;
                else top = s.top();
            }
            if(top.compare("(") == 0 && input.substr(i, 1).compare(")") == 0) {
                temp_num *= 2;
                s.pop();
                if(!s.empty() && s.top().compare("(") != 0 && s.top().compare("[") != 0) {
                    temp_num += stoi(s.top());
                    s.pop();
                }
                s.push(to_string(temp_num));
            } else if(top.compare("[") == 0 && input.substr(i, 1).compare("]") == 0) {
                temp_num *= 3;
                s.pop();
                if(!s.empty() && s.top().compare("(") != 0 && s.top().compare("[") != 0) {
                    temp_num += stoi(s.top());
                    s.pop();
                }
                s.push(to_string(temp_num));
            } else {
                s.push(input.substr(i, 1));
            }
        }
    }
    
    if(s.size() == 1) {
        cout << stoi(s.top());
    } else {
        cout << 0;
    }
}
