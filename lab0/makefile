CC=gcc

MAIN_SOURCES=Main.c
MAIN_OBJECTS=$(MAIN_SOURCES:.c=.o)

LIB=funcs.a
LIB_SOURCES=CompareStrings.c CreatePersons.c PrintPersons.c Sort.c
LIB_OBJECTS=$(LIB_SOURCES:.c=.o)

DEPS=SomeHeader.h

test: 
	./app -person --fn Daniil --ln Ogloblin --mn Igorevich --age 50 -person --fn Sergey --ln Sergeev --mn Sergeevich --age 40 -person --fn Dmitriy --ln Andropenko --mn Kolyevich --age 111 -person --fn Daniil --ln Andinro --mn Romanovich --age 20

all: app 
	
app: $(LIB) $(MAIN_OBJECTS)
	$(CC) -lm -o $@ $(MAIN_OBJECTS) $<
funcs.a: $(LIB_OBJECTS) 
	ar rcs $@ $^
libs: $(LIB) 

clean:
	rm *.o | rm *.a | rm app
