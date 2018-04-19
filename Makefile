ram:
	gcc -std=gnu99 -O0 -w ram_size.c -o ram
	./ram

cline:
	gcc -std=gnu99 -O3 -w cache_line.c -o cline
	./cline

csize:
	gcc -std=gnu99 -O3 -w cache_size.c -o csize
	./csize

casso:
	gcc -std=gnu99 -O3 -w cache_asso.c -o casso
	./casso



