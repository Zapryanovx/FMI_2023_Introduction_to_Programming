# Задачи
---
### 1. Да се напише функция, която приема стринг с произволна дължина text*, символ symbol и индекс i и връща нов стринг, за който е заделено точно количество памет, в който е вмъкнат symbol в text на позиция i

Вход:
```
Hello,y friend!
m
6
```
Изход:
```
Hello,my friend!
```
---
### 2. Да се напише функция, която приема стринг с произволна дължина и връща като резултат нов стринг, за който е заделено точно количество памет - последната дума от подадения.

Вход:
```
What is your name
```
Изход:
```
name
```
---
### 3. Да се напише функция, която приема стринг с произволна дължина *text* и символ symbol и връща нов стринг, за който е заделено точно количество памет, в който text не съдържа symbol .

Вход:
```
Hello, my friend!
e
```
Изход:
```
Hllo, my frind!
```
---
### 4. Да се напише фунцкия, която приема стринг с произволна дължина *text* и връща бройката на всички специални символи в него (под специален символ разбираме , . ; ! ? :)

Вход:
```
Hello, my friend!
```
Изход:
```
2
```
---
### 5. Да се напише фунцкия, която приема стринг, съставен само от главни букви, с произволна дължина *text* и връща дали стрингът е съставен само от различни букви.

Вход:
```
ABCD
```
Изход:
```
true
```
Вход:
```
AAA
```
Изход:
```
false
```
---
## Базови фунцкии

### strLen()
```
int strLen(const char* str)
{
	if (!str)
		return 0;

	int result = 0;
	while (*str)
	{
		result++;
		str++;
	}
	return result;
}
```
### strCopy()
```
void strCopy(const char* source, char* dest)
{
	if (!source || !dest)
		return;
	while (*source)
	{
		*dest = *source;
		dest++;
		source++;
	}
	*dest = '\0';
}
```
### strCat() 
```
void strCat(char* first, const char* second)
{
	if (!first || !second)
		return;
	
	size_t firstLen = myStrlen(first);
	first += firstLen;
	myStrcpy(second, first);
}
```