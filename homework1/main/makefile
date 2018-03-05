VPATH=.:../Insert:../Delete:../Find:../Reverse
val=insert_head.o insert_tail.o insert_pos.o\
	Delete_head.o Delete_tail.o Delete_pos.o\
	find_val.o    reverse.o  main.o

main:$(val)
	gcc -o main $(val)
main.o:
insert_head.o:
insert_tail.o:
insert_pos.o:
Delete_head.o:
Delete_tail.o:
Delete_pos.o:
find_val.o:
reverse.o:

clean:
	rm *.o main
