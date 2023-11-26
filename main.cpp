#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int opcion;
    int m;
    double h;
    double g = 9.81;
    int n;
    double f;
    double x;
    cout<<"Ingresa la posicion x a evaluar: ";
    cin>>x;
    f = (pow(tan(x),2))*((-7/24)*(sin(pow(x,3)/3))+0.38)*8;
    cout<<"Ingresa la masa del carro en kilogramos: ";
    cin>>m;
    n = -1/m;
    cout<<"\nIngresa la altura a evaluar en metros: ";
    cin>>h;
    if (h==0){
        h+=1;
    }
    do {
        cout << "1) Con friccion  2) Sin friccion \n";
        cin >> opcion;
        switch (opcion) {
            case 1: {
                cout << "Calculos con friccion \n";
                int option;
                cout << "\n1) Energia cinetica   2) Energia potencial   3) Velocidad   4) Perdidas de energia por friccion   5) Todos lo valores \n";
                cin >> option;
                double k;
                cout<<"Ingresa el coeficiente de friccion: ";
                cin>>k;
                    switch (option) {
                        do { 
                            case 1: {   
                                int resp;
                                cout<<"Conoce la velocidad? \n";
                                cout<<"1) Si   2) No \n";
                                cin>>resp;
                                switch (resp) {
                                    case 1: {
                                        int Ec;
                                        int v;
                                        cout<<"Ingrese la velocidad en m/s: ";
                                        cin>>v;
                                        cout << "\nEnergia cinetica: ";
                                        Ec = (0.5 * (m) * pow(v, 2))-k*m*g*h;
                                        cout << Ec <<" J";
                                        cin.get();
                                        break;
                                    }
                                    case 2: {
                                        int Ec;
                                        int v;
                                        v = sqrt((2*n*(f*h*n*g-k))/n);
                                        cout<<"Energia cinetica: ";
                                        Ec = (0.5 * (m) * pow(v, 2))-k*m*g*h;
                                        cout<<Ec<<" J";
                                        cin.get();
                                        break;
                                    }

                                }
                                break;
                            }
                            case 2: {
                                int Ep;
                                cout << "Energia potencial: ";
                                Ep = m * g * h;
                                cout << Ep <<" J";
                                cin.get();
                                break;
                            }
                            case 3: {
                                int v;
                                cout << "Velocidad: ";
                                v = sqrt((2*n*(f*h*n*g-k))/n);
                                cout << v <<" m/s";
                                cin.get();
                                break;
                            }
                            case 4: {
                                int pe;
                                int resp;
                                cout<<"Conoce la velocidad? \n";
                                cout<<"1) Si   2) No";
                                cin>>resp;
                                switch (resp) {
                                    case 1:{
                                        int v;
                                        cout<<"Ingrese la velocidad en m/s: ";
                                        cin>>v;
                                        cout << "\nPerdida de energia: ";
                                        pe = (m*g*h+0.5*m*pow(v,2))-(m*g*h+0.5*m*pow(v,2)-k*m*g*h);
                                        cout << pe <<" J";
                                        cin.get();
                                        break;
                                    }
                                    case 2:{
                                        int v;
                                        v = sqrt((2*n*(f*h*n*g-k))/n);
                                        cout << "\nPerdida de energia: ";
                                        pe = (m*g*h+0.5*m*pow(v,2))-(m*g*h+0.5*m*pow(v,2)-k*m*g*h);
                                        cout << pe <<" J";
                                        cin.get();
                                        break;
                                    }
                                }
                                break;
                            }
                            case 5: {
                                int Ep;
                                cout << "Energia potencial: ";
                                Ep = m * g * h;
                                cout << Ep <<" J";
                                int v;
                                cout<<"\nVelocidad: ";
                                v = sqrt((2*n*(f*h*n*g-k))/n);
                                cout<< v <<" m/s";
                                int Ec;
                                cout << "\nEnergia cinetica: ";
                                Ec = (0.5 * (m) * pow(v, 2))-k*m*g*h;
                                cout << Ec <<" J";
                                int pe;
                                cout << "\nPerdida de energia: ";
                                pe = (m*g*h+0.5*m*pow(v,2))-(m*g*h+0.5*m*pow(v,2)-k*m*g*h);
                                cout << pe <<" J";
                                cin.get();
                                break;
                            }
                            default:
                                cout << "Opcion no valida. Intenetelo de nuevo \n";
                        } while (option != 1 && option != 2 && option != 3 && option != 4 && option != 5);
                    }
                break;
            }
            case 2: {
                cout << "Calculos sin friccion \n";
                int opt;
                cout << "1) Energia cinetica   2) Energia potencial   3) Velocidad   4) Todas las anteriores \n";
                cin >> opt;
                switch(opt) {
                    do {
                        case 1: {   
                            int resp;
                            cout<<"Conoce la velocidad? \n";
                            cout<<"1) Si   2) No\n";
                            cin>>resp;
                            switch (resp) {
                                case 1: {
                                    int Ec;
                                    int v;
                                    cout<<"Ingrese la velocidad en m/s: ";
                                    cin>>v;
                                    cout << "\nEnergia cinetica: ";
                                    Ec = 0.5 * (m) * pow(v, 2);
                                    cout << Ec <<" J";
                                    cin.get();
                                    break;
                                }
                                case 2: {
                                    int Ec;
                                    int v;
                                    v = sqrt(2*g*h);
                                    cout<<"Energia cinetica: ";
                                    Ec = 0.5*m*pow(v,2);
                                    cout<<Ec<<" J";
                                    cin.get();
                                    break;
                                }

                            }
                            break;
                        }
                        case 2: {
                            int Ep;
                            cout << "Energia potencial: ";
                            Ep = m * g * h;
                            cout << Ep <<" J";
                            cin.get();
                            break;
                        }
                        case 3: {
                            int v;
                            cout << "Velocidad: ";
                            v = sqrt(2*g*h);
                            cout << v <<" m/s";
                            cin.get();
                            break;
                        }
                        case 4:{                            
                            int Ep;
                            cout << "Energia potencial: ";
                            Ep = m * g * h;
                            cout << Ep <<" J";
                            int Ec;
                            int v;
                            cout << "\nVelocidad: ";
                            v = sqrt(2*g*h);
                            cout << v <<" m/s";
                            cout << "\nEnergia cinetica: ";
                            Ec = 0.5 * (m) * pow(v, 2);
                            cout << Ec <<" J";
                            cin.get();
                            break;
                        }
                        default:
                            cout << "Opcion no valida. Intentelo de nuevo \n";
                    } while (opt != 1 && opt != 2 && opt != 3 && opt != 4);
                }
                break;
            }
            default:
                cout << "Opcion no valida. Intentelo de nuevo.\n";
        }
    } while (opcion != 1 && opcion != 2);
    cin.get();
    return 0;
}