SAMDIR=~/samtools/
GCC=gcc
OPTN=-lz

.PHONY: all

all: bamflag sjcount

$(SAMDIR)libbam.a:
	# You need to install samtools
	# Get it by svn:
	# svn co https://samtools.svn.sourceforge.net/svnroot/samtools/trunk/samtools
	# enter the dir and type 'make all'
	# don't forget to update the SAMDIR varibale in this makefile
	exit 1	

progressbar.o:	progressbar.c progressbar.h
	$(GCC) -c progressbar.c 

node.o: node.c node.h
	$(GCC) -c node.c

list.o: list.c list.h
	gcc -c list.c

bamflag: bamflag.c progressbar.o $(SAMDIR)libbam.a node.o
	$(GCC) $(OPTN) -I $(SAMDIR) bamflag.c progressbar.o node.o $(SAMDIR)libbam.a -o bamflag

sjcount: sjcount.c progressbar.o list.o $(SAMDIR)libbam.a
	$(GCC) $(OPTN) -I $(SAMDIR) sjcount.c progressbar.o list.o $(SAMDIR)libbam.a -o sjcount

clean:
	rm -f -r progressbar.o node.o list.o bamflag sjcount
