# JetBrainsInstrumentTask

Решение в папке "Predetermined cpp" соответствует заданию.
(Запуск ./configure генерирует Makefile, запуск ./run выполняет make и затем запускает результат.)

Решение в папке "All auto" отличается автоматической генерацией .cpp файла.
Это даёт полезную возможность автоматического взятия имени (а также ещё части сигнатуры) native-метода из автоматически сгенерированного хедера.
(Запуск осуществляется так же, однако ./configure генерирует не только Makefile, но также .class файл, хедер и .cpp файл.)