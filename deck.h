#ifndef DECK_H
#define DECK_H

#include <stdlib.h>

/**
 * enum kind_e - Enumerates card suits.
 * @SPADE: refers to spades suit.
 * @HEART: refers to hearts suit.
 * @CLUB: refers to clubs suit.
 * @DIAMOND: refers to diamonds suit.
 */
typedef enum kind_e
{
	SPADE = 0,
	HEART,
	CLUB,
	DIAMOND
} kind_t;

/**
 * struct card_s - The playing card
 *
 * @value: Card value
 * From "Ace" to "King"
 * @kind: refers to kind of the card
 */
typedef struct card_s
{
	const char *value;
	const kind_t kind;
} card_t;

/**
 * struct deck_node_s - Deck of card
 *
 * @card: Refers to the card of the node
 * @prev: Refers to the previous node of the list
 * @next: Refers to the next node of the list
 */
typedef struct deck_node_s
{
	const card_t *card;
	struct deck_node_s *prev;
	struct deck_node_s *next;
} deck_node_t;

void sort_deck(deck_node_t **deck);

#endif /* DECK_H */
