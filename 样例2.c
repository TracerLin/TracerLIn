//
//  main.c
//  测试2
//
//  Created by 林汐 on 2020/2/8.
//  Copyright © 2020年 林汐lay. All rights reserved.
//

#include<stdio.h>
#include<string.h>

int hangzi(char num[])//年龄汉字转数字
{
    if (strcmp("零", num) == 0) return 0;
    if (strcmp("一", num) == 0) return 1;
    if (strcmp("二", num) == 0) return 2;
    if (strcmp("三", num) == 0) return 3;
    if (strcmp("四", num) == 0) return 4;
    if (strcmp("五", num) == 0) return 5;
    if (strcmp("六", num) == 0) return 6;
    if (strcmp("七", num) == 0) return 7;
    if (strcmp("八", num) == 0) return 8;
    if (strcmp("九", num) == 0) return 9;
    if (strcmp("十", num) == 0) return 10;
    else{
        return 0;
    }
}
int hangzi1(char num[])//钱汉字转数字
{
    if (strcmp("零", num) == 0) return 0;
    if (strcmp("一", num) == 0) return 1;
    if (strcmp("二", num) == 0) return 2;
    if (strcmp("三", num) == 0) return 3;
    if (strcmp("四", num) == 0) return 4;
    if (strcmp("五", num) == 0) return 5;
    if (strcmp("六", num) == 0) return 6;
    if (strcmp("七", num) == 0) return 7;
    if (strcmp("八", num) == 0) return 8;
    if (strcmp("九", num) == 0) return 9;
    if (strcmp("十", num) == 0) return 10;
    else{
        return 0;
    }
}

//将数字变为汉字
void shuzi(int a)
{
    if (a == 0) printf("零");
    if (a == 1) printf("一");
    if (a == 2) printf("二");
    if (a == 3) printf("三");
    if (a == 4) printf("四");
    if (a == 5) printf("五");
    if (a == 6) printf("六");
    if (a == 7) printf("七");
    if (a == 8) printf("八");
    if (a == 9) printf("九");
    if (a == 10) printf("十");
}

void change(int a)
{
    void shuzi(int b);
    int x, y;
    if (a <= 10) shuzi(a);
    //输入为个位数
    else if (a > 10 && a < 20) {
        printf("十");
        x = a % 10;
        shuzi(x);
    }
    //输入为大于10小于20
    else if (a >= 20 && a % 10 == 0) {
        y = a / 10;
        shuzi(y);
        printf("十");
    }
    else {
        x = a / 10;
        shuzi(x);
        printf("十");
        y = a % 10;
        shuzi(y);
    }
}



int main()
{
    int hangzi(char num[]);
    int hangzi1(char num[]);
    void shuzi(int a);
    char a[50], b[50], c[50], d[50],x[50],y[50],z[50];
    char a1[50], b1[50], c1[50], d1[50],x1[50],y1[50],z1[50];
    char p1[50],p2[50],p3[50],p4[50],p5[50],p6[50],p7[50],p8[50],p9[50],p10[50];
    int money,k,k1;
    int age=0;
    scanf("%s %s %s %s", a, b, c, d);
    scanf("%s %s %s %s", a1, b1, c1, d1);
    age=hangzi(d);
    money = hangzi1(d1);
    for(int a;a<100;a++) {
        scanf("%s %s", x, y);
        if (strcmp(x, "看看") == 0 && strcmp(y, "小杨零花钱") == 0){
            shuzi(money);
            break;
        }
        
        if (strcmp(x, "小杨年龄") == 0) {
            if (strcmp(y, "增加") == 0) {
                scanf("%s", z);
                k = hangzi(z);
                money += k;
            }
            if (strcmp(y, "减少") == 0) {
                scanf("%s", z);
                k = hangzi(z);
                money -= k;
            }
            
        }
        if (strcmp(x1, "小杨零花钱") == 0) {
            if (strcmp(y1, "增加") == 0) {
                scanf("%s", z1);
                k1 = hangzi1(z1);
                money ++;
            }
            if (strcmp(y1, "减少") == 0) {
                scanf("%s", z1);
                k1 = hangzi1(z1);
                money --;
            }
            
        }//进行增减

        
    }
    
    scanf("%s %s %s %s %s %s %s %s %s %s", p1, p2, p3, p4, p5, p6, p7, p8, p9, p10);
    age=hangzi(p4);
    money=hangzi1(p7);
    shuzi(money);
    if(age>*p4){
        printf("%s\n",&money);
    }else{
        printf("无");
    }

    printf("\n");
}


