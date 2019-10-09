///Hernán Fbrica & Tomas Baute

#include <iostream>
#include <string.h>


using namespace std;

#include "def.h"
#include "funciones.cpp"



int main()
{
    bool rep; rep=true;

    TipoRet retorna;
    CMD_PARAM ent;

    int i; i=0;

    Sistema s;
    s=crear();

    while (rep)
    {
        ent=entrada();

        if(ent.cmd_correcto==true)
        {
            switch(ent.cmd)
            {
            case DIR:
                cout<<""<<endl;
                retorna=ret_dir(s);
                cout<<""<<endl;
                break;

            case CREATE:
                cout<<""<<endl;
                retorna=ret_create(&s, ent.parametros);
                cout<<""<<endl;
                break;

            case DELETE:
                cout<<""<<endl;
                retorna=ret_delete(&s, ent.parametros);
                cout<<""<<endl;

    Lineas auxx;
    auxx=s.cabezal_arch_D->cabezal_linea.pri;
    while(auxx!=NULL)
    {
        cout<<auxx->linea_texto<<endl;
        auxx=auxx->sig;
    }

                break;

            case UNDELETE:
                cout<<""<<endl;
                retorna=ret_undelete(&s);
                cout<<""<<endl;
                break;

            case IC:
                cout<<""<<endl;
                retorna=ret_ic(&s, ent.parametros);
                cout<<""<<endl;
                break;

            case IF:
                cout<<""<<endl;
                retorna=ret_if(&s, ent.parametros);
                cout<<""<<endl;
                break;

            case TYPE:
                cout<<""<<endl;
                retorna=ret_type(&s, ent.parametros);
                cout<<""<<endl;
                break;

            case BC:
                cout<<""<<endl;
                retorna=ret_bc(&s, ent.parametros);
                cout<<""<<endl;
                break;

            case BF:
                cout<<""<<endl;
                retorna=ret_bf(&s, ent.parametros);
                cout<<""<<endl;
                break;

            case CAT:
                cout<<""<<endl;
                retorna=ret_cat(&s, ent.parametros);
                cout<<""<<endl;
                break;
            }
        }
    }
    return 0;
}

