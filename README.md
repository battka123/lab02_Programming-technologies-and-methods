# Homework_02
## Part I
### #Task_1
Создал пустой репозиторий **lab02_Programming-technologies-and-methods** на *github.com*.
В терминале создал папку mkdir `projects && cd projects` и `mkdir lab02 && cd lab02`.
### #Task_2
Следуя инструкции, создал первый коммит:
```
sudo apt-get update
sudo apt install git
git init
git config —global user.name battka123
git config —global user.email i.suschin@yandex.ru
git config -e —global (^X для выхода) // Проверить конфиг
git remote add origin https://github.com/battka123/lab02_Programming-technologies-and-methods-.git
touch README.md
git status
git add README.md
git commit -m"added README.md"
git push origin master (ввожу логин, пароль - токкен, при его создании выбрал командную строку repo)
```
### #Task_3
Создал файл **hello_world.cpp** `touch hello_world.cpp`.
Реализовал программу на С++ плохим стилем. `cat «_EOF_>hello_world.cpp`.
```
#include <iostream>
using namespace std;
int main()
{
cout«"Hello World";
return 0;
}
_EOF_
```
### #Task_4
Добавляю в локальную копию репозитория `git add hello_world.cpp`.
### #Task_5
Закоммитил `git commit -m "Bad Hello!"`.
### #Task_6
Меняю код согласно заданию в редакторе `nano sudo nano hello_world.cpp`.
```
#include <iostream>
#include <string>
int main(){
std::string name;
std::cout«"Input your name: ";
std::cin»name;
std::cout«"Hello world from "«name«"!\n";
return 0;
}
```
В редакторе (^O (записать)-> /home/ivan/projects/lab02/hello_world.cpp (путь)-> Y (другое имя)-> Y (перезаписать)).
### #Task_7
Обновил отслживаемые файл `git add -u hello_world.cpp`.
Делаю коммит `git commit -m "smart hello =)"`.
### #Task_8
Запушу `git push -u origin master`.
### #Task_9
Проверка `git log`. Убедился, что он добавлен в репозиторий.

## Part II
### #Task_1
Создаю локальную ветку `git checkout -b "patch1"` и автоматически туда перехожу.
### #Task_2
Изменяю файл с помощью `sudo nano hello_world.cpp`.
### #Task_3
Делаю коммит, пуш и проверку:
```
git add -A
git commit -m "Normal hello"
git push origin patch1
git log (чтобы проверить)
```
### #Task_4
Проверил доступность ветки patch1 `git branch`.
### #Task_5-8
Создал pull-request `hub pull-request`. Добавил код в комментарии. Запушил и закоммитил. Изменения произошли.
### #Task 9-12
Выполнил слияние PR `git merge origin/patch1` и удалил patch1 `git push origin —delete patch1`.
Выполнил `get pull`. Через `git log` посмотрел историю. Через `git branch -D patch1` удалил локальную ветку patch1.

## Part III

### #Task1-9
Создаю локальную ветку `git checkout -b "patch2"` и автоматически туда перехожу.
Установил clang-format `sudo apt install clang-format`.
Использовал `clang-format -style=Mozilla hello_world.cpp`. 
Скопировал то, что вывел и заменил, что в файлике с кодом. Закомитил, запушил и создал пулл.
В ветке master поменял комментарии в коде. Появилась ошибка при `hub pull-request`.
Через `git pull --rebase origin main` понял, что точно ошибка. Исправлял её:
`git add -A`,
`git rebase --continue`.
Сделал ` force-push git push --force push origin patch2`.
Через `git pull --rebase origin main` убедился, что не ругается. И вмержил пулл реквест.

