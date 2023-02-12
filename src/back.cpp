#include <iostream>
#include <string>
int cad, arrhy, cdmyo, vad, endo = 0; 

//Use when adding to counts to everything
void AddAll() 
{
    cad++; 
    arrhy++;
    cdmyo++;
    vad++;
    endo++; 
}
using namespace std;

int main()
{
    //bools that automatically add the conditions to the results
    bool hasCAD, hasEndo, hasBlood = false; 
    string input; 

    cout << "Does your family have a history of heart conditions?\n";
    cout << "Yes\n"; 
    cout << "No\n"; 
        
    getline(cin, input);
    
    cout << "Do you have more estrogen or testerone?\n";
    cout << "Yes\n"; 
    cout << "No\n"; 
        
    getline(cin, input);
    
    if(input == "Yes")
        AddAll(); 
    
    cout << "What is your resting heart rate?\n";
    cout << "A) Under 60 bpm\n"; 
    cout << "B) Between 60 - 100 bpm\n"; 
    cout << "C) Over 100 bpm\n\n"; 
    cout << "If you don't have access to a cuff, place your index and middle finger";
    cout << "of your hand on the inner wrist of the other arm, just below the base";
    cout << "of the thumb. As long as you feel your pulse, count the number of taps";
    cout << " you feel in 10 seconds and multiply that number by six to find your heart";
    cout << " rate.\n";
    getline(cin, input);
    
    if(input == "C")
            AddAll(); 
        
    cout << "Do you have a lab report?\n";
    cout << "Yes\n"; 
    cout << "No\n"; 

    getline(cin, input);
    
    if(input == "Yes")
        {
            hasBlood = true; 
            
            cout << "Choose the range which encompasses your low-density lipoprotein cholesterol level:\n";
            cout << "A) Under 100 mg/dL\n"; 
            cout << "B) From 100 - 130 mg/dL\n"; 
            cout << "C) Over 130 mg/dL\n"; 
            
            getline(cin, input);
            
            if(input == "B")
                AddAll(); 
            else if(input == "C")
                {
                    AddAll(); 
                    AddAll(); 
                    AddAll(); 
                    AddAll(); 
                }
                
            cout << "Choose the range which encompasses your triglycerides level:\n";
            cout << "A) 149 mg/dL and under\n"; 
            cout << "B) 150+ mg/dL\n"; 
            
            getline(cin, input);
            
            if(input == "B")
                AddAll(); 
                
            cout << "Choose the range which encompasses your lipoprotein level:\n";
            cout << "A) Under 27 mg/dL\n"; 
            cout << "B) 28 - 32 mg/dL\n"; 
            cout << "C) Above 32 mg/dL\n"; 
            getline(cin, input);
            
            if(input == "C")
                AddAll(); 
                
            cout << "Choose the range which encompasses your fibrinogen level:\n";
            cout << "A) Under 280 mg/dL\n"; 
            cout << "B) 280-300 mg/dL\n"; 
            cout << "C) More than 300 mg/dL\n"; 
            
            getline(cin, input);
            
            if(input == "C")
                AddAll(); 
                
            cout << "Choose the range which encompasses your fasting glucose level:\n";
            cout << "A) Under 110 mg/dL\n"; 
            cout << "B) More than 110 mg/dL\n"; 
            
            getline(cin, input);
            
            if(input == "B")
                AddAll(); 
        }
    
    
    //Add for all
    cout << "Do frequently smoke or drink?\n";
    cout << "Yes\n"; 
    cout << "No\n"; 

    getline(cin, input);
    
    if(input == "Yes")
            AddAll(); 
                
    ////counter for cad, arrhy, and vad
    cout << "Do frequently experience chest pain?\n";
    cout << "Yes\n"; 
    cout << "No\n";
    
    getline(cin, input);
    
    if(hasBlood != true)
        {
            cout << "Do you frequently engage in physical activity?" << endl; 
            cout << "Yes\n" << endl; 
            cout << "No\n" << endl; 
            getline(cin, input); 
            
            if(input == "No")
                AddAll(); 
                
            cout << "Do you frequently eat fruits and vegetables?\n"; 
            cout << "Yes\n" << endl; 
            cout << "No\n" << endl; 
            getline(cin, input); 
            
            if(input == "No")
                AddAll(); 
        }
        
    //Immediately set hasEndo to true if Y
    cout << "Do frequently receive dry coughs or coughing fits?\n";
    cout << "Yes\n"; 
    cout << "No\n";
    
    getline(cin, input); 
    
    if(input == "Yes")
    {
            hasEndo = true;
            endo++;
    }       
    ////Immediately set hasCAD to true if Y
    cout << "Do frequently experience numbness in your limbs?\n";
    cout << "Yes\n"; 
    cout << "No\n";
    
    getline(cin, input);
    
    if(input == "Yes")
    {
        hasCAD = true; 
        cad++;
    }    
    ////counter for arrh, cardiomyo, and vad
    cout << "Do experience shortness of breath?\n";
    cout << "Yes\n"; 
    cout << "No\n";
    
    getline(cin, input);
    
    if(input == "Yes")
    {
        arrhy++;
        cdmyo++;  
        vad++; 
    }
            
    ////counter for endocraditis and vad
    cout << "Do frequently fatigue?\n";
    cout << "Yes\n"; 
    cout << "No\n";
    
    getline(cin, input);
    
    if(input == "Yes")
    {
        endo++;
        vad++; 
    }
    ////Immediately set cad to true if Y
    cout << "Do frequently experience pain in your limbs?\n";
    cout << "Yes\n"; 
    cout << "No\n";
    
    getline(cin, input);
    
    if(input == "Yes")
    {
        hasCAD = true; 
        cad++;
    }
    ////counter for arrhy, cardiomyo, and vad
    cout << "Do frequently experience an irregular heartbeat?\n";
    cout << "Yes\n"; 
    cout << "No\n";
    
    getline(cin, input);
    
    if(input == "Yes")
    {
        arrhy++;
        cdmyo++;
        vad++;
    }
    
    ////counter for arrhythmia, cardiomyo
    cout << "Do frequently experience dizziness?\n";
    cout << "Yes\n"; 
    cout << "No\n";
    
    getline(cin, input); 
    
    if(input == "Yes")
    {
        arrhy++;
        cdmyo++;
    }
    ////counter for cad and vad
    cout << "Do frequently experience neausea?\n";
    cout << "Yes\n"; 
    cout << "No\n";
    
    getline(cin, input);
    
    if(input == "Yes")
    {
        cad++; 
        vad++;
    }
    
    //endo = 14+, cad = 15+, vad = 14+, arrhy = 14+, cdmyo = 10+ 
    if((hasCAD || hasEndo == false) && ((endo < 13) && (cad < 14) && (vad < 13) && (arrhy < 13) && (cdmyo < 9)))
    {
        cout << "You do not appear to be at risk for any heart conditions. \n";
        cout << "If you have any health concerns, please consult the resources in \n";
        cout << "the next page.\n";
    }
    else if ((hasEndo == true) || (endo > 14))    
    {
        cout << "Based on your results you're at risk for endocarditis.\n";
        cout << "Endocarditis is the inflammation of the inner lining of the\n";
        cout << " heart's chambers and valves. Symptoms of endocarditis can \n";
        cout << " include achiving jionts and muscles, chest pain, and fatigue.\n";
    }
    else if ((hasCAD == true) || (cad > 14))
    {
        cout << "Based on your results you're at risk for coronary artery disease. \n";
        cout << "Coronary artery disease is caused by plaque buildup in the walls of\n";
        cout << " the arteries. Symptoms of coronary artery disease are chest pain\n";
        cout << " light-headedness, discomfort in limbs, and heart attacks. Over time,\n";
        cout << " the disease can weaken the heart muscle, which can lead to heart failure.\n";
    }
    else if (vad > 14)
    {
        cout << "Based on your results you're at risk for valvular heart disease. \n";
        cout << "Valvular heart disease occurs when any valve in the heart has damage\n";
        cout << " or is diseased. Symptoms include shortness of breath, dizziness, and \n";
        cout << "chest pain.\n"; 
    }
    else if(cdmyo > 15)
    {
        cout << "Based on your results you're at risk for cardiomyopathy. \n";
        cout << "Valvular heart disease occurs when any valve in the heart has damage\n";
        cout << " or is diseased. Symptoms include shortness of breath, dizziness, and \n";
        cout << "chest pain.\n"; 
    }
    else if (arrhy > 14)
    {
        cout << "Based on your results you're at risk for arrhythmia. \n";
        cout << "Arrhythmia is an irregular heartbeat. Symptoms include chest pain, \n";
        cout << "shortness of breath, and dizziness. \n";
        cout << "chest pain.\n";
    }
    return 0;
}
