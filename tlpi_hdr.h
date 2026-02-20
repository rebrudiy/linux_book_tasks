#ifndef TLPI_HDR_H
#define TLPI_HDR_H /* Предотвращает случайное двойное включение */

#include <sys/types.h> /* Определения типов, используемые многими программами */
#include <stdio.h>     /* Стандартные функции ввода-вывода */
#include <stdlib.h>    /* EXIT_SUCCESS/EXIT_FAILURE и общие библиотечные функции */
#include <unistd.h>    /* Прототипы многих системных вызовов */
#include <errno.h>     /* Объявление errno и коды ошибок */
#include <string.h>    /* Наиболее используемые функции обработки строк */
#include "get_num.h"   /* Объявление getInt() и getLong() */
#include "error_functions.h" /* Объявление наших функций обработки ошибок */

typedef enum { FALSE, TRUE } Boolean;

#define min(m, n) ((m) < (n) ? (m) : (n))
#define max(m, n) ((m) > (n) ? (m) : (n))

#endif
