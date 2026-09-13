// #include<iostream>
// using namespace std;
// int main (){
//     int a;
//     cin>>a;
//     if (a%2==0){
//         cout<<"the number is even";

//     }
//     else{
//         cout<<"the number is odd";

//     }
//     return 0;


// }

// #include <iostream>
// using namespace std;
// int main(){
//     // int a;
//     // cin>>a;
//     for (int i=1;i<19;i++){
//         cout<<"hello"<<endl;

//     }
//     return 0;

// }
// #include <iostream>
// using namespace std;
// int main(){
    
//     int sum=0;
// int i;
//     for (i=0;i<=10;i++){
//         sum+=i;
       

//     } cout<<sum<<endl;
//     return 0;
// }
// sum of first 10 even numbers;
// #include <iostream>
// using namespace std;
// int main(){
//     int n=0;
//     int i;
//     for (int i=0;i<=10;i++){
//         n+=1;
//      cout<<n<<endl;
// }
//     return 0;

// }
// #include <iostream>
// using namespace std;
// int main (){
//     int n=0;

//     for (int i =0;i<=20;i++){
    

    
//     if (i%2==0){
//         cout<<i<<endl;
//         n+=i;
//     }

    
    
// }
// cout<<n;
//     return 0;
// }


// #include<iostream>
// using namespace std;
// int findSum(int m, int n){
//     int result =m+n;
//     return result;
// }
// int main(){
//     int a=3;
//     int b=;
//     int res=findSum(a,b);
//     cout<<res;
// }

// #include <iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int arr[n];
//     for (int i=0;i<n;i++){
//         cin>>arr[i];

//     }
//     for (int i=0;i<n;i++){
//         cout<<arr[i]<<" ";

//     }return 0;
// }
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int arr[n];
//     for (int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     int sum =0;
//     for (int i=0;i<n;i++){
//         sum=sum+arr[i];
//         cout<<arr[i]<<" ";

// }
// cout<<sum<<endl;
// return 0;
// }

// #include<iostream>
// using namespace std;
// int main (){
//     int n;
//     cin>>n;
//     int i;
//     int j;
    
//     while(i<=n){
//         j=1;
//         while (j<=n){
//             cout<<j;
//             j++;
//         }cout<<endl;
//         i=i+1;

//     }return 0;
// }

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int i,j;
//     while (i<=n){
//         j=1;
//         while (j<=n){
//             cout<<n+j;
//             j++;

//         }i+=1;
//         cout<<endl;

//     }return 0;
// }
// trangle pattern:
// #include <iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int i,j;
//     while (i<=n){
//         j=1;
//         while (j<=i){
//             cout<<i;
//             j++;

//         }i+=1;
//         cout<<endl;
//     }return 0;
// }

#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int i,j;
    int count =1;
    while (i<=n){
         j=1;
         while (j<=n){
            cout<<count;
            j++;
            count++;
         }i+=1;
            cout<<endl;

    }return 0;
}