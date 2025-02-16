# Проект: Заполнение массива значениями синуса

## Описание
Программа заполняет массив из `10^7` элементов значениями синуса на одном периоде и вычисляет их сумму.

## Компиляция и запуск

### 1. Сборка с использованием Make
# Сборка для float
make float
./sin_array_float

# Сборка для double
make double
./sin_array_double

# Очистка
make clean

### 2. Сборка с использованием CMake
mkdir build
cd build

# Для float
cmake -DUSE_DOUBLE=OFF ..
make
./sin_array_float

# Для double
cmake -DUSE_DOUBLE=ON ..
make
./sin_array_double

### Вывод программы
# Для double
-6.21725e-07
# Для float
-0.212206

