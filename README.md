Дорогие братья и сестры!<br>
Да благославит вас Господь Бог!<br>
Распространяйте Слово Божие всегда и для всех!<br>
<br>
Двойной генератор статичного бинарного файла Библии на 50 языках и докер-образа с минимальным размером благодаря инструкции "FROM scratch".
<br><br>
В результате выполнения генерации образов, можно запустить Библию таким образом:<br>
**docker run mkoldaev/bible:ru 43 1**
<br>тэг "ru" в данном случае обозначает язык Библии в соответствии с [доменным обозначением национального языка](https://en.wikipedia.org/wiki/List_of_ISO_639-1_codes "доменным обозначением национального языка").
<br>Первый аргумент "43" - это порядковый номер книги в Библии (в данном случае - Евангелие от Иоанна)
<br>Второй аргумент "1" - глава в вышеуказанной книге.
<br>Без указания второго аргумента автоматически загружается первая глава книги, указанной в первом параметре.
<br>Без указания первого аргумента загружается первая книга - Бытие.
