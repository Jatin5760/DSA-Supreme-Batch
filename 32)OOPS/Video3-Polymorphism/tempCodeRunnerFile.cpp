 Animal *p;
    vector<Animal*>Animals;

        Animals.push_back(new Dog());
        Animals.push_back(new Cat());
        Animals.push_back(new Animal());
        Animals.push_back(new Dog());
        Animals.push_back(new Cat());

        for(int i = 0; i<Animals.size(); i++){
            p = Animals[i];
            p->speak();
        }