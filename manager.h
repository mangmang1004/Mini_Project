#include <stdio.h>
#include <stdlib.h>
#include <string.h>


typedef struct{
    char name[100]; //제품명
    char explan[100]; //설명
    char weight[100]; //중량
    int price; // 판매가격
    int method; // 배송방법
} Product;

int createProduct(Product *s);
void readProduct(Product s);
int updateProduct(Product *s);
int deleteProduct(Product *s);
int selectMenu();
void listProducts(Product *s,int count); //등록되어 있는 제품의 전체 리스트를 출력하는 함수
int selectDataNo(Product *s, int count); // 원하는 번호를 선택하는 함수
void searchName(Product *s, int count); // 제품의 이름을 검색하는 함수
void saveData(Product *s, int count); // File에 데이터를 저장하는 함수
int  loadData(Product *s); // File에서 데이터를 불러오는 함수 
