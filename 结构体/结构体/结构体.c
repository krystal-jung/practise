#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main() {
//struct Student {
//	// 这些内部包含的内容, 称为 "成员" / "属性" / "字段" 
//	int id;         // 学号
//	char name[10];  // 姓名
//	int age;        // 年龄
//	double score;   // 分数
//};
//typedef struct Student Student;

typedef struct Student {
	int id;         // 学号
	char name[1024];  // 姓名
	int age;        // 年龄
	double score;   // 分数
} Student;
Student student = { 1, "zhangsan", 20, 95.5 };
	printf("%d\n", student.id);
	printf("%s\n", student.name);
	printf("%d\n", student.age);
	printf("%f\n", student.score);
	getchar();
	return 0;
}