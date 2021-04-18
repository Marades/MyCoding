////
////  2581.cpp
////  algorithm_20210417
////
////  Created by 김건회 on 2021. 4. 17..
////  Copyright © 2021년 김건회. All rights reserved.
////
//
//#include <iostream>
//#include <cmath>
//using namespace std;
//int main() {
//    int M, N, min = 10000, sum = 0;
//    cin >> M >> N;
// 
//    for(int i=M; i<=N; i++) {
//        bool is_prime = true;
//        int root_n = sqrt(i);
//        for(int j=2; j<=root_n; j++) {
//            if(i % j == 0) is_prime = false;
//        }
//        if(is_prime && i != 1) {
//            sum += i;
//            if(min > i) {
//                min = i;
//            }
//        }
//    }
//    if(sum == 0) {
//        cout << -1;
//    } else {
//        cout << sum << endl << min;
//    }
//}
