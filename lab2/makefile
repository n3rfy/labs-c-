task1:
	g++ $@.cpp -o $@ 
task2:
	g++ $@.cpp -o $@
task3:
	g++ $@.cpp -o $@
task4:
	g++ $@.cpp -o $@
task5:
	g++ $@.cpp -o $@
task6:
	g++ -c $@_main.cpp
	g++ -c $@_func.cpp
	g++ $@_main.o $@_func.o -o $@
task7:
	g++ -c $@_main.cpp
	g++ -c $@_func.cpp
	g++ $@_main.o $@_func.o -o $@
task8:
	g++ -c $@_main.cpp
	g++ -c $@_func.cpp
	g++ $@_main.o $@_func.o -o $@
task9:
	g++ -c $@_main.cpp
	g++ -c $@_func.cpp
	g++ $@_main.o $@_func.o -o $@
task10:
	g++ -c task9_main.cpp
	g++ -c task9_func.cpp
	ar rvs $@_lib.lib task9_func.o
	g++ task9_main.o task10_lib.lib -o $@
clean:
	rm *.o | rm *.lib | rm task? | rm task?? 
