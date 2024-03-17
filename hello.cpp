 #include <iostream>
using namespace std;
int main() {
    int n;
    int cnt=0;
    cin>>n;

    for(int i=1; i<=n; i++){
        cout<<"이 숫자는 "<<i;
        if(i%2!=0 || i%3!=0 || i%5!=0 ){
            cout<<"친근 하지 않은 수"<<endl;
            cnt++;
            continue;
        }
        cout<<"친근한 수"<<endl;
    }
    cout<<cnt;
    return 0;
}