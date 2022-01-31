procbar:ProcBar.c Main.c
	
	@gcc $^ -o $@
	
.PHONY:clean
clean:
	@rm -f procbar
