// // #include<bits/stdc++.h>
// // using namespace std;
// // int main(){
// //     int t;
// //     cin>>t;
// //     while(t--){

// //         string s;
// //         cin>>s;
// //         int breaki;
// //         char breaks;
// //         for(int i=1;i<s.length()-1;i++){
// //             if(s[i]==s[i+1]){
// //                 breaki=i;
// //                 breaks=s[i];

// //                 break;
// //             }
            
// //         }

// //         string a="abcdefghijklmnopqrstuvwxyz";
         
// //         char andar;

// //         for(int i=0;i<a.length();i++){
// //             if(breaks!=a[i]){
// //                 andar=a[i];
// //                 break;

// //             }
// //         }
// //         string fal="";

// //         for(int i =0;i<breaki;i++){
// //             fal[i]=s[i]
// //         }

// //         fal[breaki+1]=andar;

// //         for(int i =breaki+2;i<s.length()+2;i++){
// //             fal[i]=s[i-1];
// //         }

        

// //         cout<<fal;


        



        



// // //     }   
// // // }

// // #include<bits/stdc++.h>
// // using namespace std;

// // int main() {
// //     int t;
// //     cin >> t;
// //     while (t--) {
// //         string s;
// //         cin >> s;
// //         int breaki = -1;
// //         char breaks;


// //         for (int i = 0; i < s.length() - 1; i++) {
// //             if (s[i] == s[i + 1]) {
// //                 breaki = i;
// //                 breaks = s[i];
// //                 break;
// //             }
// //         }


// //         if (breaki == -1) {
// //             cout << s << endl;
// //             continue;
// //         }

   
// //         string a = "abcdefghijklmnopqrstuvwxyz";
// //         char andar;
// //         for (char c : a) {
// //             if (breaks != c) {
// //                 andar = c;
// //                 break;
// //             }
// //         }

  
// //         string fal = s.substr(0, breaki + 1) + andar + s.substr(breaki + 2);

// //         cout << fal << endl;
// //     }
// //     return 0;
// // }

// #include<bits/stdc++.h>
// using namespace std;

// int main() {
//     int t;
//     cin >> t;
//     while (t--) {
//         string s;
//         cin >> s;
//         int breaki = -1;
//         char breaks;

//         // Find the first pair of consecutive identical characters
//         for (int i = 0; i < s.length() - 1; i++) {
//             if (s[i] == s[i + 1]) {
//                 breaki = i;
//                 breaks = s[i];
//                 break;
//             }
//         }

//         // If no such pair is found, simply print the original string
//         if (breaki == -1) {
//             cout << s << endl;
//             continue;
//         }

//         // Find a character different from the repeated character
//         string a = "abcdefghijklmnopqrstuvwxyz";
//         char andar;
//         for (char c : a) {
//             if (breaks != c) {
//                 andar = c;
//                 break;
//             }
//         }

//         // Construct the modified string
//         string fal = s.substr(0, breaki + 1) + andar + s.substr(breaki + 2);

//         cout << fal << endl;
//     }
//     return 0;
// }


#include <iostream>
#include <string>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        string s;
        cin >> s;

        int breaki = -1;
        char breaks;

        // Find the first pair of consecutive characters
        for (int i = 0; i < s.length() - 1; i++) {
            if (s[i] == s[i + 1]) {
                breaki = i;
                breaks = s[i];
                break;
            }
        }

        // If no consecutive characters found, handle it appropriately (e.g., print original string or an error message)
        if (breaki == -1) {
            cout << s << endl;
            continue;
        }

        string a = "abcdefghijklmnopqrstuvwxyz";
        char andar;

        // Find the next character in the alphabet
        for (int i = 0; i < a.length(); i++) {
            if (breaks != a[i]) {
                andar = a[i];
                break;
            }
        }

        // Create a new string with the correct size
        string fal(s.length() + 1, ' ');

        // Construct the new string
        for (int i = 0; i < breaki; i++) {
            fal[i] = s[i];
        }
        fal[breaki + 1] = andar;
        for (int i = breaki + 2; i < s.length() + 1; i++) {
            fal[i] = s[i - 1];
        }

        cout << fal << endl;
    }
    return 0;
}

