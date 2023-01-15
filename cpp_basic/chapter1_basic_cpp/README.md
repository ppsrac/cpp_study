# C++ 프로그래밍의 기본

먼저, C++프로그래밍에서 기본적인 출력 코드부터 시작해보자. 

`Hello, world!`를 출력하는 코드는 다음과 같다. 
```cpp
#include <iostream>
using namespace std;
int main(){
    cout<<"Hello\n";
    return 0;
}
```
C++에서의 주석은 `//`혹은 `/* */`을 사용하는 두가지 방법이 있다. 
```cpp
#include <iostream>
using namespace std;
int main(){
    cout<<"Hello\n"; \\Hello, world를 출력한다. 
    return 0;
}
```
## main 함수
C++에서 정한 main 함수의 표준 리턴 타입은 int형이다. void 형을 쓸 수 있지만 이는 표준은 아니다. main 함수의 리턴 타입이 int형이므로 `return 0;`와 같은 리턴 값이 있어야 하나 생략해도 괜찮다. 
<br/>
<br/>
우리는 화면 출력을 사용할 때 `std::cout`을 이용한다. 여기서 `std`는 `namespace`의 일종으로 `cout`의 `namespace`가 `std`임을 의미한다. 
<br/>
<br/>
`<<`연산자의 경우 대입 연산자로 오른쪽에 있는 것을 왼쪽 객체에 대입하는 것을 의미한다. 여러개의 `<<` 연산자를 이용하여 출력할 수도 있다. 
<br/>
<br/>
`std::endl`과 `\n`은 다음 줄로 넘어갈 때 쓰는 것으로 `endl`은 조작자, `\n`은 개행문자이다. 

## namespace와 std::

`namespace`는 프로그램에서 변수, 함수, 클래스 등의 충돌을 막기 위해 `namespace`를 사용한다. 앞에서 사용한 `std::`의 경우 표준 `namespace`이다. 
<br/>
<br/>
`namespace`의 경우 생략할 수 있는데 앞에 `using std::cout`과 같은 명령어를 붙여주면 `cout`에 대해서만 `std::`를 생략할 수 있고 나머지 경우에서는 `using namespace std`와 같은 지시어를 사용해야 한다. 

## 입력 받기
C++에서 입력을 받는 것 또한 `cout` 명령어를 사용한다. 사각형의 넓이를 구하는 코드를 구현한다고 생각해보자. 
<br/>
<br/>
```cpp
#include <iostream>
using namespace std;
int main(){
    cout<<"사각형의 높이와 밑변 길이를 입력해야 합니다.\n";
    int a,b;
    cout<<"먼저 높이를 입력하세요\n";
    cin>>a;
    cout<<"밑변 길이를 입력하세요\n";
    cin>>b;
    cout<<"사각형의 면적은 "<<a*b<<"입니다.\n";
    return 0;
}
```
`cin`의 경우 반대로 입력받은 것을 변수로 넘겨줘야 하기 때문에 대입 연산자의 방향이 반대인 `>>`을 사용한다. `cin`은 enter키를 칠 때 비로소 변수에 키 값이 전달되게 된다. 
<br/>
<br/>
혹은 다음과 같이 사용하여도 입력이 된다. 
```cpp
#include <iostream>
using namespace std;
int main(){
    cout<<"사각형의 높이와 밑변 길이를 입력해야 합니다.\n";
    int a,b;
    cin>>a>>b;
    cout<<"사각형의 면적은 "<<a*b<<"입니다.\n";
    return 0;
}
```
`cin`연산자에는 여러개의 `>>`연산자를 이용하여 여러개의 값을 입력받을 수 있다. 
<br/>
<br/>
C++의 경우 중간에 변수 선언을 사용할 수 있다. 

## 키보드로 문자열 입력

### C++의 문자열

1. C 스트링

C 스트링은 `\0`으로 끝나는 `char` 배열을 의미한다. 예를 들어 
```cpp
char name1[6]={'G','R','A','C','E','\0'} \ ;
char name2[5]={'G','R','A','C','E'} \이건 그냥 배열;
```
"Grace"는 'G','r','a','c','e','\0'로 이루어진 리터럴(literal)이다. 우리는 문자열 배열에 바로 리터럴을 대입해도 된다.
```cpp
char name3[6]="Grace";
char name4[]="Grace";
```
밑의 `name4`의 경우 배열의 크기가 6으로 자동으로 설정된다. 배열의 크기는 반드시 리터럴의 크기보다 1이상 커야 하며 나머지는 모두 `\0`으로 설정된다. 
<br/>
<br/>
문자열을 사용할 때 C언어에서 사용했던 `strcpy,strlen,strcmp` 또한 사용할 수 있으며 `#include <cstring>`처럼 선언해주어야 한다. 

```cpp

#include <cstring>

int n=strlen("Hello");

```