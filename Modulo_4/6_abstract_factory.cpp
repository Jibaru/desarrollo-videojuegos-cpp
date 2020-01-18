/****/
Game game;
SoldierFactory* factory;

if(ifSelectedMan){
	factory = new ManFactory();
} else {
	factory = new OrcFactory();
}

game->createSoldiers(factory);

/****/

/* Game Implementation */
vector<Soldier*> Game::createSoldiers(SoldierFactory* factory)
{
	vector<Soldier*> soldiers;
	for(int i = 0; i < 5; i++){
		soldiers.push_back(factory->makeArcher());
		soldiers.push_back(factory->makeRider());
	}
	return soldiers;
}