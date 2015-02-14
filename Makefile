all:
	gcc -o main sample.c
clean:
	rm main
run:
	make clean && make all && ./main
