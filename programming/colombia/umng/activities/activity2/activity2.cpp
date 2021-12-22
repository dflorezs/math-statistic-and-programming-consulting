#include<iostream>
#include<stdlib.h>
#include<time.h>
#include<vector>
#include<math.h>
#include<unistd.h>
#define BEGIND 1
#define END 501
#define SIZE 50
using namespace std;

class Azar{
    public:
        Azar(){
        }

        vector<int> generateData(){
            int randomNumber;
            srand(time(NULL));
            for (int i = 0; i < SIZE; i++){
                randomNumber = 1 + rand() % (BEGIND - END);
                data.push_back(randomNumber);
            }
            return data;
        }

        float average(){
            int sum = 0;
            for (int i = 0; i < SIZE; i++) sum += data[i];
            return sum / SIZE;
        }

        float standardDeviation(){
            float variance, av;
            int sum = 0;
            av = average();
            for (int i= 0; i < SIZE; i++) {
                sum += pow((data[i] - av), 2);
            }
            variance = sum / SIZE;
            return sqrt(variance);
        }

        int minimum(){
            int min = data[0];
            for (int i = 0; i < SIZE; i++) if (min > data[i]) min = data[i];
            return min;            
        }

        int maximum(){
            int max = data[0];
            for ( int i = 0; i < SIZE; i++) if (max < data[i]) max = data[i];
            return max;
        }

        void showData(){
            cout<<"******DATA FRAME******"<<endl<<endl;
            for (int i = 0; i < SIZE; i += 5) cout<<"|"<<data[i]<<"|"<<data[i+1]<<"|"<<data[i+2]<<"|"<<data[i+3]<<"|"<<data[i+4]<<"|"<<endl;
        	cout<<endl;
		}

        void showStandardDeviation(){
            cout<<"La desviacion estandar poblacional del conjunto de datos es: "<<standardDeviation()<<endl;
        }

        void showMaximum(){
            cout<<"El mayor dato es: "<<maximum()<<endl;
        }

        void showMinimum(){
            cout<<"El menor dato es: "<<minimum()<<endl;
        }

        void showAverage(){
            cout<<"El promedio es: "<<average()<<endl;
        }
    
    private:
    vector<int> data;
};

int main(){
    int opc;
    Azar a;
    do{
    cout<<"**********MENU PRINCIPAL**********"<<endl;
    cout<<"1. Generar datos"<<endl;
    cout<<"0. Salir"<<endl;
    cin>>opc;
    system("cls");    
    switch (opc){
    case 1:
        a.generateData();
        a.showData();
        sleep(8);
        system("cls");
        while (opc != 0){
            cout<<"**********MENU DE OPERACIONES**********"<<endl;
            cout<<"2. Desviacion estandar"<<endl;
            cout<<"3. Mayor"<<endl;
            cout<<"4. Menor"<<endl;
            cout<<"5. Promedio"<<endl;
            cout<<"0. Salir"<<endl;
            cin>>opc;
            system("cls");    
            
            switch (opc){
            case 2:
            	a.showData();
                a.standardDeviation();
                a.showStandardDeviation();
                sleep(5);
                system("cls");
                break;
            case 3:
            	a.showData();
                a.maximum();
                a.showMaximum();
                sleep(5);
                system("cls");
                break;
            case 4:
            	a.showData();
                a.minimum();
                a.showMinimum();
                sleep(5);
                system("cls");                
                break;
            case 5:
            	a.showData();
                a.average();
                a.showAverage();
                sleep(5);
                system("cls");
                break;
            case 0:
                break;
            default:
                cout<<"Opcion invalida"<<endl;
                sleep(3);
                system("cls");
                break;
            }
        }
        break;
    case 0:
        break;
    default:
        cout<<"Opcion invalida"<<endl;
        sleep(3);
        system("cls");
        break;
    }
    }while(opc != 0);
    return 0;
}
