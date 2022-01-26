#basics of a rule
#<target>: <prerequisites...>
#	<commands>
#the tab is mandatory before the <commands>
#the "target" is required.  The prerequisites are optional, 
#and the commands are also optional, 
#but you have to have one or the other.

CC = g++
LD = g++
#compilador utilizado

CPPFLAGS = -Wall -std=c++14
LFLAGS = -Wall -std=c++14
#flags necessarias para compilacao



DESAFIO2 = Desafio2-LeonardoHenrique.o calculator.o
#objetos necessarios 

EXECS = desafio2
#nome do executavel do programa

.cpp.o:
	$(CC) $(CPPFLAGS) -c $<

all: $(EXECS)

desafio2: $(DESAFIO2)
	$(LD) $(LFLAGS) -o $@ $(DESAFIO2) -lm
	rm $(DESAFIO2)
#faz o executavel e depois remove os arquivos objs para manter o ambiente limpo

clean:
	rm -f *.o $(EXECS)
#apaga o executavel gerado