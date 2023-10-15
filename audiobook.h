#pragma once
#include "book.h"

class AudioBook : public Book{
    private: 
        string voiceActor;
        string prompt;
    public: 
        void setVoiceActor(string v){
            voiceActor = v;
        }

        
        string getVoiceActor(){
            return voiceActor;
        }
/**
        string getPrompt(){
            if (prompt == "Audiobook" || prompt == "audiobook")
            {
                string va;
                cout <<"Type Voice Actor's name: "<<endl;
                cin >> va;
                setVoiceActor(va);        
            }
        }
**/
        string printDescription(){
            cout <<" Voice Actor: "<< voiceActor;
        }

};