    #ifndef GAME_H
    #define  GAME_H
    #include "player.h"

    class GAME
    {
        public:
            Game();
            virtual ~Game();
            void play;
            void play(std::string n1, int s1, std::string n2, int s2);

        protected:

        private:
        Player player1;
        Player player2;

    };

    #endif
