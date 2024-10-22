## Описание проекта

Данный проект включает реализацию функций библиотеки `string.h`, а также частичную реализацию функции `sprintf` и дополнительные функции для обработки строк на языке C. Библиотека разработана в соответствии со стандартом C11 и ориентирована на работу с z-строками в кодировке ASCII.

### Часть 1. Реализация функций библиотеки string.h

- Код написан с соблюдением принципов структурного программирования и Google Style.
- Библиотека скомпилирована в статическую библиотеку с именем `s21_string.a`, заголовочный файл `s21_string.h`.
- Все функции покрыты unit-тестами с использованием библиотеки Check, тесты проверяют соответствие с реализацией стандартной библиотеки `string.h`.
- Отчет по покрытию генерируется в формате HTML.

### Часть 2. Частичная реализация функции sprintf

- Реализована функция `sprintf`, поддерживающая частичное форматирование:
  - Спецификаторы: `c`, `d`, `f`, `s`, `u`, `%`.
  - Флаги: `-`, `+`, ` ` (пробел).
  - Ширина: (число).
  - Точность: `.(число)`.
  - Длина: `h`, `l`.

### Часть 3. Дополнительно. Реализация некоторых модификаторов формата функции sprintf

- Реализованы дополнительные спецификаторы и флаги для `sprintf`:
  - Спецификаторы: `g`, `G`, `e`, `E`, `x`, `X`, `o`, `p`.
  - Флаги: `#`, `0`.
  - Ширина: `*`.
  - Точность: `.*`.
  - Длина: `L`.

### Часть 4. Дополнительно. Реализация функции sscanf

- Реализована функция `sscanf`, поддерживающая полное форматирование с учетом всех спецификаторов, флагов и модификаторов.

### Часть 5. Дополнительно. Реализация специальных функций обработки строк

- Реализованы дополнительные функции обработки строк из класса String.

## Установка и запуск

1. Клонируйте репозиторий проекта:
   ```bash
   git clone https://github.com/KovikaSA/String.git
   ```

2. Перейдите в директорию проекта:
   ```bash
   cd <путь к проекту>
   ```

3. Для сборки для сборки библиотеки используйте make:
   ```bash
   make
   ```

## Тестирование

  Тесты для утилит можно запустить с помощью следующих команд:
  ```bash
  make test
  ```

  Чтобы сгенерировать отчет по покрытию, выполните команду 
  ```bash
  make gcov_report
  ```
