    #ifndef GAME_H
    #define  GAME_H
    #include <string>
    class Player
    {
        public:
            Player();
            virtual ~Player();
            void setName(std::string n);
            void setScore(int s);
            std::string getname();
            int getScore();

        protected:

        private:
        std::string name;
        int score;
    };

    #endif
