#include<bits/stdc++.h>
using namespace std;
class Solution {
    public:
        int romanToInt(string s) {
            int p = 0;
            for (int i = s.size() - 1; i >= 0; i = --i) {
                switch (s[i]) {
    
                case 'I':
    
                    p += 1;
                    break;
    
                case 'V':
                    switch (s[max(i - 1, 0)]) {
                    case 'I':
                        p += 4;
                        --i;
                        break;
                    default:
                        p += 5;
                        break;
                    }
    
                    break;
    
                case 'X':
                    switch (s[max(i - 1, 0)]) {
                    case 'I':
                        p += 9;
                        --i;
                        break;
                    default:
                        p += 10;
                        break;
                    }
    
                    break;
    
                case 'L':
                    switch (s[max(i - 1, 0)]) {
                    case 'X':
                        p += 40;
                        --i;
                        break;
                    default:
                        p += 50;
                        break;
                    }
    
                    break;
                case 'C':
                    switch (s[max(i - 1, 0)]) {
                    case 'X':
                        p += 90;
                        --i;
                        break;
                    default:
                        p += 100;
                        break;
                    }
    
                    break;
                case 'D':
                    switch (s[max(i - 1, 0)]) {
                    case 'C':
                        p += 400;
                        --i;
                        break;
                    default:
                        p += 500;
                        break;
                    }
    
                    break;
                case 'M':
                    switch (s[max(i - 1, 0)]) {
                    case 'C':
                        p += 900;
                        --i;
                        break;
                    default:
                        p += 1000;
                        break;
                    }
    
                    break;
                }
            }
            return p;
        }
    };

int main(){
    string s;
    cin>>s;
    
    Solution solution;
    cout<<solution.romanToInt(s);

}