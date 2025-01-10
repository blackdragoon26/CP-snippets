// // // #include <bits/stdc++.h>
// // // #include <cmath>
// // // using namespace std;
// // // int main()
// // // {
// // //     int t;
// // //     cin >> t;
// // //     while (t--)
// // //     {
// // //         int centrex;
// // //         int centrey;
// // //         cin >> centrex;
// // //         cin >> centrey;
// // //         int numofpoints;
// // //         cin >> numofpoints;

// // //         // int radius = 10;

// // //         // for (int x = centrex - radius; x <= centrex + radius; x++)
// // //         // {
// // //         //     for (int y = centrey - radius; y <= centrey + radius; y++)
// // //         //     {

// // //         //         // if ((pow((centrex - x), 2)) + (pow((centrey - y), 2)) == pow(radius, 2))
// // //         //         // {

// // //         //         //     cout << x << " " << y << endl;
// // //         //         //     numofpoints--;
// // //         //         // }
// // //         //         //  if (numofpoints == 0)
// // //         //         // {
// // //         //         //     goto label1;
// // //         //         // }

// // //         //     }
// // //         // }

// // //         // label1:

// // //         int x,y;

// // //         int anglestep = 2* M_PI / numofpoints;
// // //         int radius = 10;
// // //         for(int i = 0; i < numofpoints; i++){
// // //             cout<<centrex+radius*cos(i*anglestep)<<" "<<centrey+radius*sin(i*anglestep)<<endl;

// // //         }
// // //     }
// // // }
// // #include <iostream>
// // #include <vector>
// // #include <cmath>

// // using namespace std;

// // struct Point {
// //     double x, y;
// // };

// // vector<Point> inscribePolygon(int n, Point center, double radius) {
// //     vector<Point> vertices;
// //     double angleStep = 2 * 3.14 / n;  // Central angle between vertices

// //     for (int i = 0; i < n; ++i) {
// //         double angle = i * angleStep;
// //         double x = center.x + radius * cos(angle);
// //         double y = center.y + radius * sin(angle);
// //         vertices.push_back({x, y});
// //     }

// //     return vertices;
// // }

// // int main() {
// //     Point center = {0.0, 0.0}; // Center of the circle
// //     double radius = 5.0;       // Radius of the circle
// //     int n = 6;                 // Number of sides (e.g., 6 for a hexagon)

// //     vector<Point> vertices = inscribePolygon(n, center, radius);

// //     // Output the vertices
// //     cout << "Vertices of the inscribed polygon:" << endl;
// //     for (const auto& vertex : vertices) {
// //         cout << "(" << vertex.x << ", " << vertex.y << ")" << endl;
// //     }

// //     return 0;
// // }
// #include <iostream>
// #include <vector>
// #include <cmath>
// #include <cstdlib>

// using namespace std;

// struct Point {
//     int x, y;
// };

// vector<Point> findPolygonVertices(int h, int k, int r, int n) {
//     vector<Point> vertices;

//     for (int i = 0; i < n; ++i) {

//         double theta = (2 * M_PI * i) / n;

//         int x = h + round(r * cos(theta));
//         int y = k + round(r * sin(theta));

//         vertices.push_back({x, y});
//     }

//     return vertices;
// }

// int main() {

//     int t;
//     cin>>t;
//     while(t--){

//     int h,k;
//     cin>>h;
//     cin>>k;
//     int r = 10;

//     int n;
//     cin>>n;

//     vector<Point> vertices = findPolygonVertices(h, k, r, n);

//     if(n=1){
//         cout<<h<<" "<<k<<"\n";
//     }
//     else{

//     for (const auto& vertex : vertices) {

//         cout << "(" << vertex.x << ", " << vertex.y << ")\n";
//     }}

//     }
// }

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int xc;
        int yc;
        int k;
        cin >> xc;
        cin >> yc;
        cin >> k;

        if (k % 2 == 0)
        {
            for (int i = 1; i <= k; i=i+1)
            {
                if(i%2==0){
                     cout << xc << " " << yc + i << "\n";
                }
                else{

               
                cout<< xc << " " << yc - i << "\n";}
            }
        }
        else
        {

            cout << xc << " " << yc << "\n";
            for (int i = 2; i < k+2; i=i+1)
            {
                cout << xc << " " << yc + i << "\n";
                cout<< xc << " " << yc - i << "\n";
            }
        }
    }
}
