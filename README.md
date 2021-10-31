# keygen
## Задание 2 по дисциплине "Защита программ и данных"
Репозиторий содержит:
* `PZ2` - программа, для которой необходимо написать генератор ключей;
* `keygen` - исполняемый файл генератора ключей;
* `keygen.cpp` - исходный код генератора ключей.

Сборка `keygen.cpp`:
  
    g++ keygen.cpp -o keygen

При запуске `keygen` программа потребует ввести имя. После ввода имени будет выведен сгенерированный код, если имени нет в списке забанненых имен. В противном случае будет выведено соответствующее сообщение. Полученный код вместе с именем можно использовать для успешной работы программы `PZ2`.

Пример работы:

    ./keygen
    Please, enter name: Konstantin
    Generated code: 3085
    ./PZ2
    Greetings! Please, enter your name: 
    Konstantin
    Enter your code:
    3085
    Hello, Konstantin!
