all: hwk2 clean

hwk2: main.o course.o student.o enrollment.o
	g++ -o hwk2 main.o course.o student.o enrollment.o

main.o: courses.h students.h enrollments.h
	g++ -c main.cpp

course.o: courses.h
	g++ -c course.cpp

student.o: students.h
	g++ -c student.cpp

enrollment.o: enrollments.h
	g++ -c enrollment.cpp

clean:
	rm *.o