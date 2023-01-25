#include <iostream>
#include <windows.h>
#include <conio.h>
#include <string.h>
#include "Timeofday.h"
#include "Client.cpp"
#include <ctime> // must include this header file to use time function
#include <string>
#include <stdio.h>
#include <stdlib.h>

int main()
{
    system("cls");

cout << "\t\t\t<============================================= Добро пожаловать!  ==========================================>" << endl;
cout << "\t\t\t<============================================= Я виртуальный помощник ==========================================>" << endl;
cout << "\t\t\t<============================================= Меня зовут Алексей ==========================================>" << endl;
cout << "\t\t\t<============================================= Я здесь, чтобы помочь вам ==========================================>" << endl << endl;

char password[20]; //принимать пароль
char ch[100]; // получать команды от пользователя

do
{
    cout << "=======================" << endl;
    cout << "| Введите свой логин |" << endl;
    cout << "| Введите свой пароль |" << endl;
    cout << "=======================" << endl << endl;
    string phrase = "| Введите свой логин |";
    string phrase = "введите свой пароль";
    string command = "espeak \"" + phrase + "\"";
    const char* charCommand = command.c_str();
    system(charCommand);

    cout << "=======================" << endl;
    cout << "| Введите новый логин |" << endl;
    cout << "| Введите новый пароль |" << endl;
    cout << "=======================" << endl << endl;
    string phrase = "| Введите новый логин |";
    string phrase = "введите новый пароль";
    string command = "espeak \"" + phrase + "\"";
    const char* charCommand = command.c_str();
    system(charCommand);
    cout << "Поздравляем! Регистрация прошла успешно! " << endl;


    gets(password);

    STARTUPINFO startInfo = { 0 };
    PROCESS_INFORMATION processInfo = { 0 };

    if (strcmp(password, "chauhan") == 0) {
        cout << "\n<==================================================================================================>\n\n";
        wishme();
        do {
            cout << "\n<==================================================================================================>\n\n";
            cout << endl << "Как я могу вам помочь...." << endl << endl;

            string phrase = "Как я могу вам помочь";
            string command = "espeak \"" + phrase + "\"";
            const char* charCommand = command.c_str();
            system(charCommand);

            cout << "Ваш запрос ===> ";
            gets(ch);
            cout << endl;
            cout << "Здесь результат вашего запроса ===> ";

            if (strcmp(ch, "Привет!") == 0 || strcmp(ch, "Эй!") == 0 || strcmp(ch, "Здраствуйте!") == 0) {
                cout << "Здраствуйте....." << endl;
                string phrase = "Здраствуйте";
                string command = "espeak \"" + phrase + "\"";
                const char* charCommand = command.c_str();
                system(charCommand);
            }

            else if (strcmp(ch, "Пока") == 0 || strcmp(ch, "стоп") == 0 || strcmp(ch, "выход") == 0) {
                cout << "Досвидания, хорошего дня !!!!" << endl;
                string phrase = "Досвидания, хорошего дня";
                string command = "espeak \"" + phrase + "\"";
                const char* charCommand = command.c_str();
                system(charCommand);
                exit(0);
            }

            else if (strcmp(ch, "кто ты ?") == 0 || strcmp(ch, "расскажи мне о себе") == 0 || strcmp(ch, "о") == 0) {
                cout << "Я виртуальный помощник !!!" << endl;
                string phrase = "Я виртуальный помощник";
                string command = "espeak \"" + phrase + "\"";
                const char* charCommand = command.c_str();
                system(charCommand);
            }

            else if (strcmp(ch, "Как ваши дела ?") == 0 || strcmp(ch, "как вы ?") == 0 || strcmp(ch, "Как прошёл ваш день ?") == 0) {
                cout << "Я хорошо, чем я могу вам помочь.." << endl;
                string phrase = "I'm good sir, tell me how can i help you";
                string command = "espeak \"" + phrase + "\"";
                const char* charCommand = command.c_str();
                system(charCommand);
            }

            else if (strcmp(ch, "время") == 0 || strcmp(ch, "дата") == 0) {
                // make function to show date and time
                datetime();
            }
            else {
                cout << "Извините, не могу понять ваш запрос, пожалуйста, попробуйте снова !!!" << endl;
                string phrase = "Извините, не могу понять ваш запрос, пожалуйста, попробуйте снова..";
                string command = "espeak \"" + phrase + "\"";
                const char* charCommand = command.c_str();
                system(charCommand);
            }


        } while (1);
    }
    else
    {
        system("cls");

        cout << "\t\t\t<============================= Добро пожаловать!=============================>" << endl;
        cout << "\t\t\t<============================= Я ваш виртуальный помощник =============================>" << endl;
        cout << "\t\t\t<============================= Меня зовут Алексей =============================>" << endl;
        cout << "\t\t\t<============================= Я здесь для того, чтобы вам помочь =============================>" << endl
            << endl;

        cout << "======================" << endl;
        cout << "X Неправильный пароль X" << endl;
        cout << "======================" << endl
            << endl;
        string phrase = "Неправильный пароль, Пожалуйста, ввердите правильный пароль";
        string command = "espeak \"" + phrase + "\"";
        const char* charCommand = command.c_str();
        system(charCommand);
    
    }
} while (1);


return 0;
}