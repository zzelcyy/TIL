## String
### 문법
- 문자 리터럴들은 큰따옴표나 작은따옴표에 감싸진 형식을 취한다.
- 문자열은 String을 사용하여 바로 생성할 수 있다.

        String(thing)
    + thing: 문자열로 변환될 수 있는 모든 것
- ECMAScript 2015 이후, 문자열 리터럴들은 템플릿 스트링이 될 수 있다.
- 긴 문자열을 여러 줄로 나눠 작성하는 방법
    + '+' 연산자로 묶기

            let longString = "This is a very long string which needs " +
            "to wrap across multiple lines because " + "otherwise my code is unreadable.";
    + 각 줄의 끝에 문자열이 계속 연결된다는 표시인 백슬래시를 사용한다. 백슬래시 뒤에는 어떤 공백이나 문자열이 오지 않아야 한다.

            let longString = "This is a very long string which needs \
            to wrap across multiple lines because \
            otherwise my code is unreadable.";
    위 두 가지 방법으로 작성한 코드의 결과는 같다.
### 문자 접근(Character access)
- charAt() 메서드

        return 'cat'.charAt(1); // "a"
- 문자열을 배열과 같은 오브젝트로 취급하여 문자에 해당하는 숫자 인덱스 사용

        return 'cat'[1]; // returns "a"