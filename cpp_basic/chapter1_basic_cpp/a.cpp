#include <iostream>  
#include <cstdio>
#include <cstring>

using namespace std;
int main(void) {
    char c1[10]="Hello"; 
    char c2[10];
    char c3[10]="Hfll";
    int n;
    strcpy(c2,c1); //c2에 c1을 대입한다. 
    n=strlen(c2); //n에 c2의 길이를 대입한다.
    cout<<n<<'\n';
    n=strcmp(c1,c3); //c1과 c3가 같은지 다른지 비교한다. 같으면 0을 출력, 만일 사전식 배열로 c1이 앞서면 1을 출력.
    cout<<n<<'\n';
    
}
