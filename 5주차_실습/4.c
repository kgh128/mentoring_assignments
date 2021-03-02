#include <stdio.h>
#include <stdlib.h>

struct info {
	char name[20]; // 이름
	double score; // 평점 평균
	int credit; // 취득 학점
};

void input_data(struct info *student, int num) {
	for (int i = 0; i < num; i++) {
		printf("이름: ");
		scanf("%s", student[i].name);
		getchar();
		printf("평점 평균: ");
		scanf("%lf", &student[i].score);
		getchar();
		printf("취득 학점: ");
		scanf("%d", &student[i].credit);
		getchar();
		system("clear");
	}
}

void scholarship(struct info *student, int num) {
	printf("========장학생========\n");
	for (int i = 0; i < num; i++) {
		if ((student[i].credit >= 20) && (student[i].score >= 4.3)) 
			printf("%s %g점 %d학점\n", student[i].name, student[i].score, student[i].credit);
	}
}

int main(void) {
	struct info student[5]; // 5명의 학생
	input_data(student, 5); // 이름, 평덤 평균, 취득 학점을 입력받는 함수
	scholarship(student, 5); // 장학생의 이름, 평점 평균, 취득 학점을 출력하는 함수
	return 0;
}

