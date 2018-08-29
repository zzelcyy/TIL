## 입출력 스트림 객체
C언어에서 `printf`와 `scanf`로 처음 배우기 시작했던 것처럼 C++에서도 입출력을 먼저 배운다. 출력은 `cout`, 입력은 `cin`.

    cout << "Hello, C++!" // Hello, C++이 출력됨

    int a; // 입력받을 변수에 자료형을 지정해 줌
    cin >> a; // 변수 a에 입력받음

C언어에서의 표준입출력 함수를 사용하기 위해 전처리문으로 `<stdio.h>`를 작성했었다. C++에서는 `<iostream>`을 사용한다.

    #include <iostream>
    using namespace std;

    int main()
    {
        int a = 4;
        char b = 'e';
        float c = 3.5;
        int d;

        cout << "정수 입력\n";
        cin >> d // d에 입력받는다. 57을 입력받았다고 가정.

        cout << a << '\n' << b << '\n' << c << '\n' << d << '\n'

        return 0;
    }

    /* 실행 결과
    4
    e
    3.5
    57 */

C언어와 다른 점이 있다면 `using namespace std;`라는 구문이 추가되었다는 것이다. `std`는 C언어에서의 `stdio.h`의 std와 같은 `standard`, 즉 표준이라는 뜻을 가진다. 그러면 여기서 `namespace`란 무엇일까?

네임스페이스는 내부 식별자(형식, 함수, 변수 등의 이름)에 범위를 제공하는 선언적 영역이다. 식별자에 범위를 지정해 식별자 간의 충돌을 막는 역할을 한다.