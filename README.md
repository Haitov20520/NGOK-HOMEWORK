# NGOK-HOMEWORK
#include <stdio.h>
int cofe = 1000;
int water = 10000;
int milk = 10000;
int cocao = 1000;
int money = 0;
int select = 0;
int oplata = 0;
int beznal = 0;
int nal = 0;
int setup = 0;
void latte();
void kapuch();
void amerikano();
void sysmenu();
void espresso();
void kakao();
int main()
{

    while (select != 99) {
        printf("Напитки:\n");
        printf("Американо - 1\n");
        printf("Капучино - 2\n");
        printf("Латте - 3\n");
        printf("Эсспрессо - 4\n");
        printf("Какао - 5\n");
        scanf("%d", &select);
        printf("%d\n", select);
        printf("\n");
        if (select == 3) {
            latte();
        } else if (select == 2) {
            kapuch();
        } else if (select == 1) {
            amerikano();
        } else if (select == 9) {
            sysmenu();
        } else if (select == 99) {
            printf("Кофемашина отключена, досвидания");
        } else if (select == 4) {
            espresso();
        } else if (select == 5) {
            kakao();
        } else {
            printf("Вы нажали на неверную цифру");
        }
    }
}
void sysmenu()
{

    printf("Остатки кофе:\n");
    printf("%d", cofe);
    printf("\n");
    printf("Остатки воды:\n");
    printf("%d", water);
    printf("\n");
    printf("Остатки молока:\n");
    printf("%d", milk);
    printf("\n");
    printf("Остатки какао:\n");
    printf("%d", cocao);
    printf("\n");
    printf("Деньги на счету:\n");
    printf("%d", money);
    printf("\n");
    printf("Желаете пополнить запасы и забрать деньги?\n");
    printf("Да - нажмите 1 \n");
    printf("Нет - нажмите 2 \n");
    scanf("%d", &setup);
    if (setup == 1) {
        cofe = 1000;
        water = 10000;
        milk = 10000;
        cocao = 1000;
        money = 0;
        printf("Запасы пополнены, возвращяемся в меню \n");
    } else if (setup == 2) {
        printf("Возвращяемся в меню \n");
    } else {
        printf("Вы нажали на неверную цифру");
    }
}
void latte()
{
    printf("Вы выбрали Латте, стоимость 200 руб \n");
    printf("Безнал - 1 \n");
    printf("Наличные - 2 \n");
    scanf("%d", &oplata);
    if (oplata == 1) {
        printf("Приложите вашу карту к считывателю и нажмите 1\n");
        scanf("%d", &beznal);
        if (beznal == 1) {
            cofe = cofe - 25;
            water = water - 150;
            milk = milk - 100;
            printf("Ваше кофе готово\n");
            money = money + 200;
        }

    } else if (oplata == 2) {
        printf("Внесите 200 рублей\n");
        scanf("%d", &nal);
        if (nal == 200) {
            cofe = cofe - 25;
            water = water - 150;
            milk = milk - 100;
            money = money + 200;
            printf("Ваше кофе готово\n");
        } else {
            printf("Вы ввели неверную сумму \n");
        }
    } else {
        printf("Вы нажали на неверную цифру");
    }
}
void kapuch()
{
    printf("Вы выбрали Капучино, стоимость 150 руб \n");
    printf("Безнал - 1 \n");
    printf("Наличные - 2 \n");
    scanf("%d", &oplata);
    if (oplata == 1) {
        printf("Приложите вашу карту к считывателю и нажмите 1\n");
        scanf("%d", &beznal);
        if (beznal == 1) {
            cofe = cofe - 25;
            water = water - 150;
            milk = milk - 50;
            money = money + 150;
            printf("Ваше кофе готово\n");
        }

    } else if (oplata == 2) {
        printf("Внесите 150 рублей\n");
        scanf("%d", &nal);
        if (nal == 150) {
            cofe = cofe - 25;
            water = water - 150;
            milk = milk - 50;
            money = money + 150;
            printf("Ваше кофе готово\n");
        } else {
            printf("Вы ввели неверную сумму \n");
        }
    } else {
        printf("Вы нажали на неверную цифру");
    }
}
void amerikano()
{
    printf("Вы выбрали Американо, стоимость 50 руб \n");
    printf("Безнал - 1 \n");
    printf("Наличные - 2 \n");
    scanf("%d", &oplata);
    if (oplata == 1) {
        printf("Приложите вашу карту к считывателю и нажмите 1\n");
        scanf("%d", &beznal);
        if (beznal == 1) {
            cofe = cofe - 25;
            water = water - 50;
            money = money + 50;
            printf("Ваше кофе готово\n");
        }

    } else if (oplata == 2) {
        printf("Внесите 50 рублей \n");
        scanf("%d", &nal);
        if (nal == 50) {
            cofe = cofe - 25;
            water = water - 50;
            money = money + 50;
            printf("Ваше кофе готово\n");
        } else {
            printf("Вы ввели неверную сумму \n");
        }
    } else {
        printf("Вы нажали на неверную цифру");
    }
}
void espresso()
{
    printf("Вы выбрали Эсспрессо, стоимость 100 руб \n");
    printf("Безнал - 1 \n");
    printf("Наличные - 2 \n");
    scanf("%d", &oplata);
    if (oplata == 1) {
        printf("Приложите вашу карту к считывателю и нажмите 1\n");
        scanf("%d", &beznal);
        if (beznal == 1) {
            cofe = cofe - 50;
            water = water - 100;
            money = money + 100;
            printf("Ваше кофе готово\n");
        }

    } else if (oplata == 2) {
        printf("Внесите 100 рублей\n");
        scanf("%d", &nal);
        if (nal == 100) {
            cofe = cofe - 50;
            water = water - 100;
            money = money + 100;
            printf("Ваше кофе готово\n");
        } else {
            printf("Вы ввели неверную сумму \n");
        }
    } else {
        printf("Вы нажали на неверную цифру");
    }
}
void kakao()
{
    printf("Вы выбрали Какао, стоимость 300 руб \n");
    printf("Безнал - 1 \n");
    printf("Наличные - 2 \n");
    scanf("%d", &oplata);
    if (oplata == 1) {
        printf("Приложите вашу карту к считывателю и нажмите 1\n");
        scanf("%d", &beznal);
        if (beznal == 1) {
            cocao = cocao - 50;
            milk = milk - 100;
            water = water - 100;
            money = money + 300;
            printf("Ваше кофе готово\n");
        }

    } else if (oplata == 2) {
        printf("Внесите 300 рублей\n");
        scanf("%d", &nal);
        if (nal == 300) {
            cocao = cocao - 50;
            milk = milk - 100;
            water = water - 100;
            money = money + 300;
            printf("Ваше кофе готово\n");
        } else {
            printf("Вы ввели неверную сумму \n");
        }
    } else {
        printf("Вы нажали на неверную цифру");
    }
}
Footer
© 2022 GitHub, Inc.
Footer navigation
Terms
Privacy
Security
Status
Docs
Contact GitHub
Pricing
API
Training
Blog
About
