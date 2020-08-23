# 구조체 (Structure)
**데이터의 그룹화!!** 쉽게 사용자 정의 자료형이다.

## 기본적인 예제

    struct Person
    {
        char name[20];
        int age;
        char address[100];
    } p1; // struct Person p1;이라는 뜻

    int main()
    {
        strcpy(p1.name, "이채은"); // 구조체 접근 방법? 구조체로 선언한 변수명과 구조체 멤버 이름 사이에 .을 찍는다
        p1.age = 18;
        strcpy(p1.address, "경기도 수원");
    }

메인 함수 안의 코드는 아래의 코드처럼 작성할 수도 있다.

    struct Person p1 = {"이채은", 18, "경기도 수원"};

## typedef
type define의 약자이다. 말 그대로 자료형을 정의한다고 받아들이면 될 듯하다. 구조체를 메인 함수 내에서 선언할 때 `typedef`를 사용하면 형태가 달라진다.

    typedef struct structName
    {
        // 구조체 멤버 선언
    } structNickname;

    int main()
    {
        structNickname varName; // varName이라는 변수를 structNickname이라는 타입으로 선언함
    }

- `structName`: 구조체 이름
- `structNickname`: 구조체 별칭
- `varName`: 변수 이름

`typedef`로 내가 자료형을 새로 정의하면 built-in type과 같이 사용할 수 있다. 변수를 편리하게 선언할 수 있게 해 준다.

## 구조체 배열
구조체로 변수를 선언한 것처럼 배열로 선언 가능하다.

### 접근 방법
`array[indexNumber].structMember`
- `array`: 배열 이름
- `indexNumber`: 배열의 인덱스 넘버
- `structMember`: 구조체 안에 선언된 멤버 이름