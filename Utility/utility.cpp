#include <iostream>
#include <string>
#include <fstream>
#include <ctype.h>
//#include <stdio.h>
#include <conio.h>
#include <windows.h>
#include <cstdlib>
#include <time.h>
#include <ctime>


using namespace std;

//function  to copy a file from one location to other
void fileCopy(string file, string source, string destination)
{
    for (int i = 0; i < source.size(); i++)
    {
        if (source[i] == '\\')
            source[i] = '/';
    }
    for (int i = 0; i < destination.size(); i++)
    {
        if (destination[i] == '\\')
            destination[i] == '/';
    }
    if (source[source.size() - 1] != '/')
        source.push_back('/');
    source = source + file;
    if (destination[destination.size() - 1] != '/')
        destination.push_back('/');
    destination = destination + file;
    ifstream sourceFile(source.c_str(), ios::binary);
    if (sourceFile)
    {
        ifstream idestination(destination.c_str());
        if (idestination)
        {
            cout << file << " already exist, Do you want to replace? [Yes/No] : ";
            string choice;
            getline(cin, choice);
            if (choice == "Y" || choice == "yes" || choice == "Yes" || choice == "YES" || choice == "y")
            {
                idestination.close();
                ofstream destinationFile(destination.c_str(), ios::binary);
                string line;
                while (getline(sourceFile, line))
                {
                    destinationFile << line << endl;
                }
                destinationFile.flush();
                destinationFile.close();
                cout << endl << "File copied successfully" << endl;
            }
            else
            {
                cout << "Exiting...........";
                idestination.close();
            }
        }
        else
        {
            idestination.close();
            ofstream destinationFile(destination.c_str(), ios::binary);
            string line;
            while (getline(sourceFile, line))
            {
                destinationFile << line << endl;
            }
            destinationFile.flush();
            destinationFile.close();
            cout << endl << "File copied successfully" << endl;
        }
        sourceFile.close();
    }
    else
    {
        cout << endl << "[ERROR]:-" << endl;
        cout << "Not able to locate " << source << endl;
    }
}


//function to move a file from one location to other
void fileMove(string file, string source, string destination)
{
    for (int i = 0; i < source.size(); i++)
    {
        if (source[i] == '\\')
            source[i] = '/';
    }
    for (int i = 0; i < destination.size(); i++)
    {
        if (destination[i] == '\\')
            destination[i] = '/';
    }
    if (source[source.size() - 1] != '/')
        source.push_back('/');
    source = source + file;
    if (destination[destination.size() - 1] != '/')
        destination.push_back('/');
    destination = destination + file;
    ifstream sourceFile(source.c_str(), ios::binary);
    if (sourceFile)
    {
        ifstream idestination(destination.c_str());
        if (idestination)
        {
            cout << file << " already exist, Do you want to replace? [Yes/No] : ";
            string choice;
            getline(cin, choice);
            if (choice == "Y" || choice == "yes" || choice == "Yes" || choice == "YES" || choice == "y")
            {
                idestination.close();
                ofstream destinationFile(destination.c_str(), ios::binary);
                string line;
                while (getline(sourceFile, line))
                {
                    destinationFile << line << endl;
                }
                destinationFile.flush();
                destinationFile.close();
                sourceFile.close();
                int status = remove(source.c_str());
                if (status == 0)
                    cout << endl << "File moved successfully" << endl;
                else
                {
                    perror("[ERROR]:-\nNot able to move file due to following error");
                }
            }
            else
            {
                cout << "Exiting...........";
                idestination.close();
            }
        }
        else
        {
            idestination.close();
            ofstream destinationFile(destination.c_str(), ios::binary);
            string line;
            while (getline(sourceFile, line))
            {
                destinationFile << line << endl;;
            }
            destinationFile.flush();
            destinationFile.close();
            sourceFile.close();
            int status = remove(source.c_str());
            if (status == 0)
                cout << endl << "File moved successfully" << endl;
            else
            {
                perror("[ERROR]:-\nNot able to move file due to following error");
            }
        }
        sourceFile.close();
    }
    else
    {
        cout << endl << "[ERROR]:-" << endl;
        cout << "Not able to locate " << source << endl;
    }
}




int main()
{
    setlocale(LC_ALL, "italian"); 
    cout << "==============================================" << endl;
    cout << "|  premi 0 per Scaricare l'ultimo update     |" << endl;
    cout << "|  premi 1 per Ibernare/Riavviare/Spegnere   |" << endl;
    cout << "|  premi 2 per never gonna give you up       |" << endl;
    cout << "|  premi 3 per numeri randomici              |" << endl;
    cout << "|  premi 4 per Aprire sound	             |" << endl;
    cout << "|  premi 5 per Chiudere Discord              |" << endl;
    cout << "|  premi 6 per Riavvio forzato Steam         |" << endl;   
    cout << "|  premi 7 per Copia e sposta                |" << endl; 
    cout << "|  premi 8 per uscire                        |" << endl;
    cout << "==============================================" << endl;

	int sc;
    int sas;
    int num=0;
    cout << "inserisci cosa vuoi fare ";
    cin >> sas;

        
        switch (sas) {
        	case 0:
        		system ("start chrome.exe https://github.com/RiccardoSilvestri/RiccardoPublic/raw/main/Utility/utility.exe");
        		Sleep(10000);
        		break;
        case 1:
        	cout << " 1- Ibernare "<< endl;
        	cout << " 2- Spegnere "<< endl;
        	cout << " 3- Riavviare "<< endl;
        	cin>>sc;
if(sc==1){
	system("shutdown -h");
}
if(sc==2){
	system("shutdown.exe /s /t 00");
}
if(sc==3){
	system("shutdown -r -t 00");
}

            break;
            
            
        case 2:
        	system ("start chrome.exe https://youtu.be/dQw4w9WgXcQ?t=0");
        	break;
        	
             case 3:
        	srand(time(0));
				
				cout<<"quanti numeri?"<< endl;
				cin >>num;
		
	for (int i = 0; i < num; i++)
	{
		cout << rand() % num;
	}
	Sleep(10000);
        	break;
        	case 4:
        		system ("control mmsys.cpl sounds");
        		Sleep(10000);
        		break;
        		
        		case 5:

        			system ("taskkill /IM Discord.exe /F");
        			Sleep(10000);
					break;
        			
       
	case 6:

        			system ("taskkill /IM steamwebhelper.exe /F");
        			system ("taskkill /IM steam.exe /F");
        			
        			Sleep(4000);
					system ("start  steam://rungameid");
					Sleep(10000);
        			break;
        			

	    case 7:

            string choice;
            string fileName, source, destination;
            cout << "Select option:- \n1. Copy file \n2. Move file \n>>"; getline(cin, choice);
            for (int i = 0; i < choice.size(); i++)
            {
                if (isupper(choice[i]))
                {
                    tolower(choice[i]);
                }
            }
            if (choice == "1" || choice == "copy" || choice == "copy file" || choice == "copy file from one location to another")
            {
                cout << "Enter file name: "; getline(cin, fileName);
                cout << "Enter location of file: "; getline(cin, source);
                cout << "Enter destination: "; getline(cin, destination);
                fileCopy(fileName, source, destination);
            }
            else if (choice == "2" || choice == "move" || choice == "move file" || choice == "move file from one location to another")
            {
                cout << "Enter file name: "; getline(cin, fileName);
                cout << "Enter location of file: "; getline(cin, source);
                cout << "Enter destination: "; getline(cin, destination);
                fileMove(fileName, source, destination);
            }
            else
            {
                cout << endl << "There is no such option \"" << choice << "\"" << endl;
            }
            _getch();
            Sleep(10000);
        break;
        




        }


}
