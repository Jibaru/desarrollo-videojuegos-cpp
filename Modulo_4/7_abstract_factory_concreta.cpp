/* Orc Factory */
Archer* OrcFactory::makeArcher()
{
	Archer archer = new Archer();
	archer->setLife(200);
	archer->setName("Orc");
	return archer;
}

/* ManFactory */
Archer* ManFactory::makeArcher()
{
	Archer archer = new Archer();
	archer->setLife(100);
	archer->setName("Man");
	return archer;
}