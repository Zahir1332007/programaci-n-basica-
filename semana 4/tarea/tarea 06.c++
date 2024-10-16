#include<iostream>
using namespace std;
int main(){
    const char*preguntas[]={
        "¿cual es la capital de francia? (A)berlin (B)madrid (C)paris (D)lisboa",
        "¿en que año el hombre llego a la luna? (A) 1965 (B) 1969 (C) 1972 (D) 1963",
        "¿cual es el elemento quimico mas abundante en la tierra? (A) oxigeno (B) carbono (C) hidrogeno (D) nitrogeno"
    };
    char respuestascorrectas[]={ 'C' , 'B' , 'A'};
    int correctas = 0;
    int incorrectas = 0;
    for( int i = 0;i<3 ;i++){
        char respuesta;
        cout<<preguntas[i]<<endl;
        cout<<"tu respuesta (A,B,C,D)"<<endl;
        cin>>respuesta;
        if(respuesta == respuestascorrectas[i]|| respuesta == respuestascorrectas[i]+ 32){
            cout<<"correcto";
            correctas++;
        }else{
            cout<<"incorrecto";
            incorrectas++;
        }
        cout<<endl;
    }
    cout<<"juego terminado"<<endl;
    cout<<"las respuestas correctas : "<<correctas<<endl;
    cout<<"las respuestas incorrectas :"<<incorrectas;
    return 0;

}