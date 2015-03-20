#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/*shuffle is based on
  Fisher-Yates algorithm
 */

char *generate_deck(){
  char *deck;
  int i, n;
  n = 52;
  deck = malloc(n *sizeof(deck));
  if(deck == NULL){
    return NULL;
  }
  for (i = 1; i<=n; i++){
    deck[i] = i;
  }
  return deck;
}

static int initialize_rand(int n){
  srand(time(NULL));
  int limit = RAND_MAX - RAND_MAX % n;
  int rnd;
  do {
    rnd = rand();
  } while (rnd >= limit);
  return rnd %n;
}

char *shuffle_deck(char cards[]){
  int n = 52;
  int i, j, t;
  
  for(i = n; i > 0; i--){
      j = initialize_rand(i + 1);
      t =  cards[j];
      cards[j] = cards[i];
      cards[i] = t; 
  }
  return cards;
}

void draw_hand(){
  printf("Welcome to blackjack numbnuts\n");
  printf("This is a test \n");
}

void print_cards(char cards[]){
  int n = 52;
  int i;
  printf("Randomized Deck\n");
  for(i = 1; i <= n; i++){
    printf("%4d\n", cards[i]);
  }
}


int main(int argc, char* argv[]){
  char *deck;
  char *shuffled;
  deck = generate_deck();
  shuffled = shuffle_deck(deck);
  draw_hand();
  print_cards(shuffled);
  free(deck);
  return 0;
}
