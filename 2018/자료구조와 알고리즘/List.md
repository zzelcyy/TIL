# LIST
### 목차
1. 리스트
    1. 배열을 이용한 리스트
2. 연결리스트
    1. 연결리스트의 정렬 삽입의 구현
    2. 원형 연결 리스트
    3. 양방향 연결 리스트
## 리스트
### 배열을 이용한 리스트
## 연결리스트
- **연결 리스트(linked list)**: 각 노드가 **데이터**와 **포인터**를 가지고 한 줄로 연결되어 있는 방식. 노드의 포인터가 다음이나 이전의 노드와의 연결을 담당한다.
    - 종류: 단일 연결 리스트, 이중 연결 리스트, 원형 연결 리스트 등
    - 장점: 늘어선 노드의 중간 지점에서도 자료의 추가와 삭제가 가능, 필요할 때마다 저장공간을 요구하므로 효율적인 메모리 관리 가능
    - 단점: 배열이나 트리 구조와는 달리 특정 위치의 데이터를 검색해 내는 데에 걸리는 시간이 O(n)
- 단일 연결 리스트: 각 노드에 자료 공간과 한 개의 포인터 공간이 있고, 각 노드의 포인터가 다음 노드를 가리킨다.
![단일 연결 리스트](https://upload.wikimedia.org/wikipedia/commons/thumb/9/9c/Single_linked_list.png/400px-Single_linked_list.png)
- 이중 연결 리스트: 이중 연결 리스트의 구조는 단일 연결 리스트와 비슷하지만, 포인터 공간이 두 개가 있고 각각의 포인터는 앞의 노드와 뒤의 노드를 가리킨다.
![이중 연결 리스트](https://upload.wikimedia.org/wikipedia/commons/thumb/c/ca/Doubly_linked_list.png/400px-Doubly_linked_list.png)
- 원형 연결 리스트: 원형 연결 리스트는 일반적인 연결 리스트에 마지막 노드와 처음 노드를 연결시켜 원형으로 만든 구조이다.
![원형 연결 리스트](https://upload.wikimedia.org/wikipedia/commons/thumb/9/98/Circurlar_linked_list.png/400px-Circurlar_linked_list.png)
### 연결 리스트의 정렬 삽입의 구현
``` c
void SetSortRule(List * plist, int (*comp)(LData d1, LData d2))
{
    plist->comp = comp; // List의 멤버 comp(정렬의 기준을 등록하는 역할)를 새로운 기준으로 초기화
}

void SInsert(List * plist, LData data)
{
    Node * newNode(Node*)malloc(sizeof(Node)); // 새 노드 생성
    Node * pred = plist->head; // pred는 더미 노드를 가리킴
    newNode->data = data; // 새 노드에 데이터 저장

    while(pred->next != NULL && plist->comp(data, pred->next->data) != 0)
    {
        pred = pred->next; // 다음 노드로 이동
    }

    newNode->next = pred->next; // 새 노드의 오른쪽을 연결;
    pred->next = newNode;

    (plist->numOfData)++; // 저장된 데이터의 수 하나 증가
}
```
#### 오름차순 정렬 함수
``` c
int WhoIsPreede(int d1, int d2)
{
    if(d1 < d2)
        return 0; // d1이 정렬 순서상 앞선다.
    else
        return 1; // d2가 정렬 순서상 앞서거나 같다.
}
```
#### 적용 예시
``` c
#include <stdio.h>
#include "DLinkedList.h"

int WhoIsPrecede(int d1, int d2)
{
    if (d1 < d2)
        return 0;
    else
        return 1;
}

int main()
{
    List list;
    int data;
    ListInit(&list);

    SetSortRule(&list, WhoIsPrecede); // 정렬 기준 등록

    LInsert(&list, 11); LInsert(&list, 11);
    LInsert(&list, 22); LInsert(&list, 22);
    LInsert(&list, 33);

    printf("현재 데이터의 수: %d \n", LCount(&list));

    if(LFirst(&list, &data))
    {
        printf("%d ", data);

        while(LNext(&list, &data))
            printf("%d ", data);
    }
    printf("\n\n");

    if(LFirst(&list, &data))
    {
        if(data == 22)
            LRemove(&list);

        while(LNext(&list, &data))
        {
            if(data == 22)
                LRemove(&list);
        }
    }

    printf("현재 데이터의 수: %d \n", LCount(&list));

    if(LFirst(&list, &data))
    {
        printf("%d ", data);

        while(LNext(&list, &data))
            printf("%d ", data);
    }
    printf("\n\n");
    return 0;
}
```
##### 실행 결과

    현재 데이터의 수: 5
    11 11 22 22 33

    현재 데이터의 수: 3
    11 11 33

### 원형 연결 리스트
### 양방향 연결 리스트