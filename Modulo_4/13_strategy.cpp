GamePlayer bad_player = new GamePlayer(new RandomMovement());
GamePlayer good_player = new GamePlayer(new IAMovement());

bad_player->doBestMove();
good_player->doBestMove();