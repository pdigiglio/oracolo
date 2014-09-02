
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 25 /* number of answers answers */
#define L 160 /* number of chars for each answer answer */

int main ( void ) {
	
	/* seme per il numero casuale */
	srand( time( NULL )  );

	char risposte[N][L] = {
	  "Forse!",
		"Dipende dall'allineamento dei pianeti",
		"Quarantatre!",
		"Se te lo dicessi io, non impareresti nulla, sfaticato!",
		"Rosso di sera... che ci lascia lo zampino",
		"Un'auto blu... anzi, un taxi blu!",
		"Lavali, lavali, lavali col fuoco!!",
		"Selvaggi!",
		"I pasticcini stimolano la diuresi e proteggono dalla morte per caduta massi",
		"La luuuuuna neeeeeerah",
		"Bambla bombla bambla bara'tttttolo",
		"In Perù Gerry vola",
		"Chiedi a Batman (tel: +24 087 257689@f4 [per le chiamate a Gorham City potebbe esserti addebbitato il debito pubblico italiano])",
		"La risposta è nelle tue mutande",
		"Nulla è ciò che appare",
		"Ma che domanda del cazzo è questa?! Vaffanculo stronzo! Sparati!",
		"Muciaccia, nello sgabuzzino, con della colla vinilica",
		"Guarda negli occhi una capra e dille \"ti amo\"",
		"Avevo la risposta ma me l'hanno fregata gli alieni D:",
		"Cazzo in culo non fa figli ma fa male se lo pigli",
		"Sì",
		"No",
		"Come... come... come 'na catapulta!",
		"L'occasione rende l'uomo negro (ma anche il pesto!)",
		"Perché secondo la meccanica quantistica il gatto non è vivo né morto"
	};

	printf( "\n >> PRORACOLO: questo programma possiede la risposta ad ogni domanda!\n" );

	char c = '\0';
	while( 1 ) {
		printf( "Fai una domanda al Proracolo! [CTRL-D per uscire]\n> " );

		/* read input */
		do {
			c = getchar();
			if ( c == EOF ) {
				printf( "\nCiao sfigato!\n" );
				return 0;
			}
				
			/* till i don't break line */
		} while ( c != '\n' );

		printf( "\n%s\n\n", *( risposte + rand() % N ) );
	}

	return 0;
}
