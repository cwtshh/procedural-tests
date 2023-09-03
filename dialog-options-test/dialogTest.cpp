#include <iostream>
#include <string>
#include <vector>

using namespace std;

enum class DialogAnswerType {
    FRIENDLY,
    NEUTRAL,
    HOSTILE
};

enum class CharacterEmotion {
    HAPPY,
    NEUTRAL,
    MAD
};


class Character{ 
    public:
        string characterName;
        CharacterEmotion emotion;
        vector<pair<CharacterEmotion, int>> emotionCal;

        Character(string characterName, CharacterEmotion emotion) {
            this->characterName = characterName;
            this->emotion = emotion;
        }

        void calculateCharHumor(DialogAnswerType emotionType) {
            switch(emotionType) {
                case DialogAnswerType::FRIENDLY:
                    emotionCal[0].first = CharacterEmotion::HAPPY;
            }
        }

        
};

class Dialog {
    public:
        string characterName;
        string text;
        string option1;
        string option2;
        string option3;

        DialogAnswerType option1Type;
        DialogAnswerType option2Type;
        DialogAnswerType option3Type;
        
        Dialog(string characterName, string text, string option1, string option2, string option3, DialogAnswerType option1Type, DialogAnswerType option2Type, DialogAnswerType option3Type) {
            this->characterName = characterName;
            this->text = text;
            this->option1 = option1;
            this->option2 = option2;
            this->option3 = option3;
            this->option1Type = option1Type;
            this->option2Type = option2Type;
            this->option3Type = option3Type;
        }

        void displayAnswers() {
            cout << characterName << ':' << "\n";
            cout << text << "\n";
            cout << "1. " << option1 << "\n";
            cout << "2. " << option2 << "\n";
            cout << "3. " << option3 << "\n";
        }

        DialogAnswerType chooseAnswer() {
            cout << "Choose an answer: ";
            int answer;
            cin >> answer;

            switch (answer) {
                case 1:
                    cout << characterName << " is happy, he will remeber that." << "\n";

                    return option1Type;

                case 2: 
                    cout << characterName << " is neutral." << "\n";
                    return option2Type;

                case 3:
                    cout << characterName << " is mad, he will remeber that." << "\n";
                    return option3Type;
                
                default:
                    cout << "Invalid answer." << "\n";
            }

        }
};


int main() {



    return 0;
}