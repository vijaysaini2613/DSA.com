#include<iostream>
using namespace std;

void getPattern(int n) {
    for(int i=0; i<2*n-1; i++ ){
        for(int j=0; j<2*n-1; j++){
            int top = i;
            int left = j;
            int right = (2*n-2)-j;
            int down = (2*n-2)-i;
            cout<<(n-min(min(left,right),min(top,down)));
        }
        cout<<endl;
    }

}
int main(){
    int n;
    cin>>n;
    getPattern(n);

    return 0;
}