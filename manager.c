#include "manager.h"

int createProduct(Product *s){

    printf("제품명? ");
    getchar();
    scanf("%[^\n]s", s->name);
    printf("제품의 설명? ");
    getchar();
    scanf("%[^\n]s", s->explan);
    printf("중량? ");
    scanf("%s", s->weight);
    printf("판매가격? ");
    scanf("%d", &s->price);
    printf("배송방법? (1:새벽배송 /2:택배배송) ");
    scanf("%d", &s->method);
    printf("=> 추가됨!\n");

    return 1;
}


void readProduct(Product s){
    
    if(s.price == -1) return;
    
    
    printf("%s %3s %s", s.name, s.explan, s.weight);
    if(s.method==1) printf("새벽배송\n");
    else if(s.method==2) printf("택배배송\n");

}


int updateProduct(Product *s){

    printf("제품명? ");
    getchar();
    scanf("%[^\n]s", s->name);
    printf("제품의 설명? ");
    getchar();
    scanf("%[^\n]s", s->explan);
    printf("중량? ");
    getchar();
    scanf("%[^\n]s", s->weight);
    printf("판매가격? ");
    scanf("%d", &s->price);
    printf("배송방법? ");
    scanf("%d", &s->method);
    printf("=> 수정됨! \n");

    return 1;

}

int selectMenu(){
    int menu; 
    printf("\n*** Product ***\n");
    printf("1. 상품조회\n");
    printf("2. 상품추가\n");
    printf("3. 상품수정\n");
    printf("4. 상품삭제\n");
    printf("5. 파일저장\n");
    printf("6. 이름검색\n");
    printf("0. 종료\n\n");
    printf("=> 원하는 메뉴는? ");
    scanf("%d", &menu);
    return menu;
}

 

int deleteProduct(Product *s){
    s->price = -1;
    printf("=> 삭제됨! \n");

    return 1;

}

void listProducts(Product *s,int count){
    printf("No 제품명  제품의 설명  중량  판매가격  배송방법\n");
    printf("================================\n");
    for(int i=0; i<count; i++){
        if(s[i].price == -1) continue;
        printf("%d ", i+1);
        readProduct(s[i]);
    }
    printf("\n");
}


int selectDataNo(Product *s, int count){
    int no;
    listProducts(s,count);
    printf("원하는 번호는(취소 :0) ? ");
    scanf("%d",&no);
    return no;
}

