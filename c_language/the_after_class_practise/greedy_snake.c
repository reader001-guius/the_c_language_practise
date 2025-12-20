#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
#include <time.h>
#include <windows.h>

#define WIDTH 100
#define HEIGHT 40
#define SNAKEN 6

#define U 1
#define D 2
#define L 3
#define R 4

int Mode;
char ModeName[20] = "Easy";
int food_x, food_y;
int if_game_again = 1;

void HideCursor()
{
    CONSOLE_CURSOR_INFO info = {1, 0};
    SetConsoleCursorInfo(GetStdHandle(STD_OUTPUT_HANDLE), &info);
}

void gotoxy(int x, int y)
{
    COORD pos = {x, y};
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
}

int updatetime()
{
    SYSTEMTIME t;
    GetLocalTime(&t);
    return t.wMinute * 60 + t.wSecond;
}

int time_0, time_1;

void Gametime()
{
    time_1 = updatetime() - time_0;
    gotoxy(116, 8);
    printf("%d s", time_1);
}

void Init_Map()
{
    int i;
    for (i = 1; i < WIDTH; i++)
    {
        gotoxy(i, 0);  printf("O");
        gotoxy(i, 38); printf("O");
    }
    for (i = 0; i < HEIGHT - 1; i++)
    {
        gotoxy(1, i);  printf("O");
        gotoxy(99, i); printf("O");
    }

    gotoxy(108, 2);  printf("score: 0");
    gotoxy(108, 5);  printf("life: 1");
    gotoxy(108, 8);  printf("time: 0");
    gotoxy(101,12);  printf("W->up   S->down");
    gotoxy(101,14);  printf("A->left D->right");
    gotoxy(101,20);  printf("Space->pause");
    gotoxy(101,22);  printf("Mode: %s", ModeName);
}

void Produce_Food()
{
    srand(time(NULL));
    food_x = rand() % (WIDTH - 8) + 2;
    while (food_x % 2) food_x++;
    food_y = rand() % (HEIGHT - 8) + 3;

    gotoxy(food_x, food_y);
    printf("o");
}

typedef struct snake
{
    int x;
    int y;
    struct snake *next;
} snake;

snake *head;

void Init_Snake()
{
    int i;
    snake *tail = (snake*)malloc(sizeof(snake));
    tail->x = 24;
    tail->y = 8;
    tail->next = NULL;

    for (i = 1; i <= SNAKEN; i++)
    {
        head = (snake*)malloc(sizeof(snake));
        head->x = 24 + i * 2;
        head->y = 8;
        head->next = tail;
        tail = head;
    }

    while (tail)
    {
        gotoxy(tail->x, tail->y);
        printf("o");
        tail = tail->next;
    }
}

int status = R;
int score = 0;
snake *p;
snake *nexthead;

void Snake_Move()
{
    nexthead = (snake*)malloc(sizeof(snake));

    if (status == U) { nexthead->x = head->x;     nexthead->y = head->y - 1; }
    if (status == D) { nexthead->x = head->x;     nexthead->y = head->y + 1; }
    if (status == L) { nexthead->x = head->x - 2; nexthead->y = head->y; }
    if (status == R) { nexthead->x = head->x + 2; nexthead->y = head->y; }

    nexthead->next = head;
    head = nexthead;
    p = head;

    if (p->x == food_x && p->y == food_y)
    {
        score += 10;
        gotoxy(116, 2);
        printf("%d", score);
        Produce_Food();
    }
    else
    {
        while (p->next->next)
        {
            gotoxy(p->x, p->y);
            printf("o");
            p = p->next;
        }
        gotoxy(p->next->x, p->next->y);
        printf("  ");
        free(p->next);
        p->next = NULL;
    }
}

void Control_Direction()
{
    char ch = _getch();
    if (ch == 'w' && status != D) status = U;
    if (ch == 's' && status != U) status = D;
    if (ch == 'a' && status != R) status = L;
    if (ch == 'd' && status != L) status = R;
}

int Die()
{
    snake *q = head->next;
    while (q)
    {
        if (q->x == head->x && q->y == head->y)
            return 1;
        q = q->next;
    }
    if (head->x <= 1 || head->x >= 98 || head->y <= 0 || head->y >= 38)
        return 1;
    return 0;
}

int main()
{
    system("mode con cols=132 lines=40");
    system("title Snake");
    HideCursor();

    while (if_game_again)
    {
        system("cls");
        Init_Map();
        Produce_Food();
        Init_Snake();

        score = 0;
        status = R;
        time_0 = updatetime();

        while (1)
        {
            Snake_Move();

            if (_kbhit())
                Control_Direction();

            if (Die())
                break;

            Gametime();
            Sleep(100 - score / 2);
        }

        system("cls");
        printf("Game Over!\nScore: %d\n", score);
        printf("Press r to restart, q to quit\n");

        char c = _getch();
        if (c == 'q') break;
    }

    return 0;
}
