#ifndef Card_MurderWithBorrowedWeapon_h__
#define Card_MurderWithBorrowedWeapon_h__

#include <memory>
#include <vector>
#include "Card_Strategy.h"
#include "Player\Player.h"

class Card_MurderWithBorrowedWeapon : public Card_Strategy {
public:
	Card_MurderWithBorrowedWeapon(ECardSuit Suit, int number) : Card_Strategy(ECardName::MURDERWITHBORROWEDWEAPON, Suit, number) { }
	int getGoalPlayerQuantity(const std::shared_ptr<Player> & requester) const;
	std::vector<std::shared_ptr<Player>> getCandidates(const std::shared_ptr<Player> & playCardPlayer) const;
	void onUpping() const;
	void useCard(const std::shared_ptr<Player> & playCardPlayer, const std::vector<std::shared_ptr<Player>> & goalPlayer) const;
};
#endif // Card_MurderWithBorrowedWeapon_h__
