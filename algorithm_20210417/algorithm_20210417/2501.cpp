////
////  main.cpp
////  algorithm_20210417
////
////  Created by 김건회 on 2021. 4. 17..
////  Copyright © 2021년 김건회. All rights reserved.
////
//
//#include <iostream>
//#include <vector>
//
//using namespace std;
//int main() {
//    int N, K;
//    vector<int> n_list;
//    cin >> N >> K;
//    
//    for(int i=1; i<=N/2; i++) {
//        if(N % i == 0) {
//            n_list.push_back(i);
//        }
//    }
//    n_list.push_back(N);
//    
//    if(n_list.size() < K) {
//        cout << 0;
//    } else {
//        cout << n_list[K-1];
//    }
//}
