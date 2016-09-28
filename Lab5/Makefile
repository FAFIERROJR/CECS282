#Makefile for Lab 5

CPP = testMain.cpp Employee.cpp Staff.cpp Education.cpp Faculty.cpp Parttime.cpp Date.cpp
MAIN = testMain.exe

build: ${CPP}
	g++ ${CPP} -o ${MAIN} 

run: build
	./${MAIN}

clean:
	rm -f ${MAIN}

.PHONY:
	all build run clean