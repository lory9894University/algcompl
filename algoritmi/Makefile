CFLAGS = -Wpedantic -ggdb


all: permutazioni permutazioniRip disposizioni

permutazioni: permutazioni.c
	$(CC) permutazioni.c  $(LDFLAGS) -o permutazioni

permutazioniRip: permutazioniRip.c
	$(CC) permutazioniRip.c $(CFLAGS) $(LDFLAGS) -o permutazioniRip

disposizioni: disposizioni.c
	$(CC) disposizioni.c  $(LDFLAGS) -o disposizioni

run_disposizioni: disposizioni
	./disposizioni


run_permutazioni: permutazioni
	./permutazioni

run_permutazioniRip: permutazioniRip
	./permutazioniRip

clean:
	rm -f *.o $(TARGET) *~


