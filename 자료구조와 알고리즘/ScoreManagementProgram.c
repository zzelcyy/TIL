#include <stdio.h>

typedef struct _scoreTable {
	char name[10];
	char subject1[10];
	char subject2[10];
	char score1[2];
	char score2[2];
} scoreTable;

int main()
{
	scoreTable student[3];
	int selectMenu, selectClassNum;

	while (1)
	{
		printf("%s | %s | %s → ", "① 성적 입력", "② 성적 출력", "③ 종료");
		scanf("%d", &selectMenu);

		printf("\n");

		if (selectMenu == 1) 
		{
			printf("학번 입력 (1~3): ");
			scanf("%d", &selectClassNum);

			while (1)
			{
				if (selectClassNum != 1 && selectClassNum != 2 && selectClassNum != 3)
				{
					printf("다시 입력: ");
					scanf("%d", &selectClassNum);
				}
				else
					break;
			}

			--selectClassNum;

			printf("\n");

			printf("이름: ");
			scanf("%s", student[selectClassNum].name);
			printf("과목: ");
			scanf("%s", student[selectClassNum].subject1);
			printf("점수(무조건 A~C or F): ");
			scanf("%s", student[selectClassNum].score1);
			printf("과목: ");
			scanf("%s", student[selectClassNum].subject2);
			printf("점수(무조건 A~C or F): ");
			scanf("%s", student[selectClassNum].score2);
		}
		else if (selectMenu == 2)
		{
			printf("학번 입력 (1~3): ");
			scanf("%d", &selectClassNum);

			while (1)
			{
				if (selectClassNum != 1 && selectClassNum != 2 && selectClassNum != 3)
				{
					printf("다시 입력: ");
					scanf("%d", &selectClassNum);
				}
				else
					break;
			}

			--selectClassNum;

			printf("이름: %s\n", student[selectClassNum].name);
			printf("%s 과목의 점수 %s\n", student[selectClassNum].subject1, student[selectClassNum].score1);
			printf("%s 과목의 점수 %s\n", student[selectClassNum].subject2, student[selectClassNum].score2);
			printf("──────────────────────\n");
		}
		else if (selectMenu == 3)
		{
			printf("프로그램을 종료합니다.\n");
			break;
		}
		else
		{
			printf("다시 선택해 주세요.");
			scanf("%d", &selectMenu);
		}
		printf("\n");
	}
}