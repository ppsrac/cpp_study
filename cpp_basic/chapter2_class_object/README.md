# 클래스와 객체
## 객체의 캡슐화(encapsulation)
객체는 그 안의 성분을 감싸고 있다. 우리는 그 안의 성분을 다 아는 것이 아닌 일부만 알고 있다. 

## 객체의 구성
객체는 각각의 고유한 상태(`status`)와 행동(`behavior`)로 구성된다. 이는 C++에서는 멤버 변수와 함수에 대응된다.
<br/>
<br/>
C++에서 객체를 정의하는 방법으로는 클래스를 이용하는 방법이다. 클래스는 객체를 정의하는 설계도를 의미한다. 인스턴스(`Instance`)는 클래스를 통해 만들어진 객체를 의미한다. 

## 클래스 만들기
클래스의 선언은 클래스 키워드와 이름으로 선언한다. 
```cpp
class Circle{//클래스 선언부
public:
    ...
    double getArea();
};//반드시 세미콜론을 뒤에 붙여줘야 한다.
double Circle::getArea(){//구현부
    return ...;
}
```
## 생성자
클래스를 초기화할 때는 생성자라는 함수를 이용해 초기화할 수 있다. 예를 들어 위의 `Circle`이라는 클래스를 생각해보자. 원은 반지름과 그의 중심 좌표를 통해 표현할 수 있다. 따라서, 반지름을 초기화하거나 중심 좌표를 지정해주어야 하는데 이 때 사용된다. 생성자의 특징은 다음과 같다. 
* 생성자의 목적은 객체가 생성될 때 필요한 초기 작업을 하기 위함이다. 
  * 멤버 변수의 값을 특정 값으로 설정
  * 메모리 동적 할당
  * 네트워크 연결 등
* 생성자 함수는 각 객체가 생성되는 시점에 유일하게 실행된다.
* 생성자 함수의 이름은 클래스 이름과 동일하게 작성되어야 한다. 
* 생성자 함수는 리턴 타입이 없다.

```cpp
class Circle{
public:
    int radius;//멤버 변수 선언
    int x,y;
    Circle();//생성자 형성,딱히 멤버 변수를 초기화할 input이 주어지지 않으면 radius,x,y=1,0,0으로 초기화
    Circle(int r,int cx, int cy);//radius=r, x=cx, y=cy로 초기화
    double getArea();
};

Circle::Circle(){//생성자 함수 
    radius=1;
    x=0;
    y=0;
}

Circle::Circle(int r, int cx, int cy){//생성자 함수
    radius=r;
    x=cx;
    y=cy;
}

double Circle::getArea(){
    return 3.141592*radius*radius;
}

int main(void) {
    freopen("input.txt","r",stdin);
    Circle a(20,1,5);
    cout<<a.getArea();
}

```
### 위임 생성자(`delegating constructor`)
위의 예시에서 `Circle::Circle` 생성자는 중복된다. C++11부터는 이를 하나로 합칠 수 있으며 위의 `Circle`생성자가 아래 생성자의 일부로 표현할 수 있다. 위의 생성자를 위임 생성자, 아래 생성자를 타깃 생성자라고 한다. 

```cpp
Circle::Circle():Circle(1,0,0){};
Circle::Circle(int r, int cx, int cy){
    ...
}
```
### 생성자와 멤버 변수의 초기화

멤버 변수의 초기화에는 크게 3가지 방법이 있다. 
* 생성자 코드에서 멤버 변수 초기화<br/>
```cpp
Circle::Circle(){radius=1,x=0,y=0}
Circle::Circle(int r, int cx, int cy){radius=r, x=cx, y=cy}
```
* 생성자 서두에 초깃값으로 초기화
```cpp
Circle::Circle():radius(1),cx(0),cy(0){}
Circle::Circle(int r, int cx, int cy):radius(r),x(cx),y(cy){}
```
* 클래스 선언부에 직접 초기화
```cpp
Class Circle{
    int radius=1;
    int x=0,y=0;
}
```
### 생성자의 필요성

생성자는 클래스를 만들 경우 반드시 필요하다. 굳이 생성자를 따로 생성하지 않더라도 아무 변수도 초기화하지 않는 기본 생성자를 생성하게 된다. 
