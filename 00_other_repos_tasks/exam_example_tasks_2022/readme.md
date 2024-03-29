# Задачи от изпит - 2022/2023

1. **Задача**. Да се напише функция на C++, `int analyzeArr(char *)`, която връща като резултат броя на уникалните символи в подадения като параметър символен низ или -1, ако низът не съществува.

    ---

<br>

2. **Задача**. Да се напише функция на C++, `void squareArr(int *, size_t len)`, която приема като параметър сортиран масив с дължина `len`, за който се знае, че елементите му са различни цели числа. Функцията да преобразува масива, като в него да се запишат квадратите на елементите, като те също да са сортирани.

    **Пример**:<br>
    `[-8, -3, 0, 1, 6, 8]` → `[0, 2, 9, 36, 64, 64]`

    ---

<br>

3. **Задача**. Да се напише функция на C++, със сигнатура `unsigned int getGCD(const unsigned int*, size_t)`, която като параметри приема масив от цели неотрицателни числа и дължина на масива и връща като резултат най-големия общ делител на числата в масива.

    ---

<br>

4. **Задача**. Да се напише функция на C++, `int checkNum(long N)`, която проверява дали числото `N` < 109 се дели на 3 без остатък, ако се премахне точно една, произволна, цифра от записа му. Функцията да връща позицията на първата цифра, която удовлетворява условието (брои се от едно, отляво на дясно), 0 ако такава цифра не съществува или -1 при некоректни входни данни. Да не се използва операцията `%` (деление по модул).

    ---

<br>

5. **Задача**. Да се напише функция на C++, `int checkNum(long N, unsigned int m, unsigned int l)`, която проверява дали числото `N` < 109 се дели на 4 без остатък, ако се разменят местата на цифрите под номера `m` и `l` в него (брои се от едно, отляво на дясно). Функцията да връща -1 при некоректни входни данни. Да не се използва операцията `%` (деление по модул).

    **Пояснение**: Дадено число се дели на 4, ако последните му две цифри се делят на 4.

    ---

<br>

6. **Задача**. Да се напише функция на C++, със сигнатура `bool doExist(const char* symbols, const char* word)`, която проверява дали символният низ `word`, се среща в низа `symbols`, прочетен наобратно.

    ---

<br>

7. **Задача**. Да се напише функция на C++, `char* encodeWord(char*, int N)`, която кодира подадения като параметър входен низ, като ASCII кода на всеки символ в него се увеличава точно с `N` (N ϵ [2,49]). Оригиналният низ да не се променя, а да се генерира нов низ, който да се връща като резултат. Валидни и за входния и за резултатния низ са само символи от стандартната ASCII таблица (т.е., такива с ASCII кодове между 32 и 126).

    **Пояснение**: Трябва да се превърта, т.е. ако се след кодирането трябва да се използва символ с код 127, то той става 32, 128->33 и т.н.

    ---

<br>

8. **Задача**. Да се напише функция на С++, `int CheckDate(char*)`, която да проверява дали входния параметър е коректна дата във формат `DD.MM.YYYY`. Функцията да връща отрицателно число при некоректни входни данни.

    **Пояснение**: Обърнете внимание, че `31.04.2022` не е коректна дата (април има 30 дни). Също така `29.02.2017` не е коректна дата, защото 2017 не е високосна година. Високосна е такава година, която се дели на 4, и ако се дели на 100 то тя се дели и на 400.

    ---

<br>

9. **Задача**. Да се напише функция на C++, със сигнатура `unsigned short int reverseBitwise(unsigned short int)`, която връща връща преобразувано, подаденото като параметър 16-битово число, като двоичния му запис е прочетен наобратно.
