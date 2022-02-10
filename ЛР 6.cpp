#include <math.h>
#include <iostream.h>
#include <conio.h>

int main()
{
    setlocale(LC_CTYPE, "Russian");
    float vibor,vid,tip,a,b,c,h,l,R,B,C,r,A,d,m,d1,d2;
    char nv = '4';
    short int flag=0;
    tryagain:
    cout<<endl<<"Êàêèå ïëîùàäè áóäåì ñ÷èòàòü?";
    cout<<endl<<"(1 - òðåóãîëüíèêà, 2 - ïðÿìîóãîëüíèêà, 3 - êðóãà, 4 - òðàïåöèè)";
    cout<<endl<<"Âàø âûáîð:"<<endl<<endl;
    cin>>vibor;
    system("cls");
    if (vibor==1) nv='1';
    else if (vibor==2) nv='2';
    else if (vibor==3) nv='3';
    else if (vibor==4) nv='4';
    else
    {
         system("cls");
         cout<<"Âûáåðèòå ÷òî-ëèáî èç ñïèñêà:";
         goto tryagain;
    }
    switch (nv)
    {
        case '1':
		{
             system("cls");
             tip:
             cout<<endl<<"Òðåóãîëüíèê ïðîèçâîëüíûé - 1";
             cout<<endl<<"Òðåóãîëüíèê ïðàâèëüíûé - 2";
             cout<<endl<<"Òðåóãîëüíèê ïðÿìîóãîëüíûé - 3"<<endl<<endl;
             cin>>tip;
             system("cls");
             if (tip==1) nv='1';
             else if (tip==2) nv='2';
             else if (tip==3) nv='3';
             else
             {
                 system("cls");
                 cout<<"Íîðìàëüíî âûáèðàéòå.";
                 goto tip;
             }
             switch (nv)
             {
                 case '1':
                 {
                      cout<<endl<<"Ñòîðîíà è âûñîòà, îïóùåííàÿ íà ýòó ñòîðîíó - 1";
                      cout<<endl<<"Äâå ñòîðîíû è óãîë ìåæäó íèìè - 2";
                      cout<<endl<<"Òðè ñòîðîíû - 3";
                      cout<<endl<<"Ñòîðîíà è óãëû, ïðèíàëåäàùèå åé - 4";
                      cout<<endl<<"Òðè ñòîðîíû è ðàäèóñ âïèñàííîé îêðóæíîñòè - 5";
                      cout<<endl<<"Òðè ñòîðîíû è ðàäèóñ îïèñàííîé îêðóæíîñòè - 6";
                      cout<<endl<<"Òðè óãëà è ðàäèóñ âïèñàííîé îêðóæíîñòè - 7"<<endl<<endl;
                      cin>>vid;
                      system("cls");
                      if (vid==1) nv='1';
                      else if (vid==2) nv='2';
                      else if (vid==3) nv='3';
                      else if (vid==4) nv='4';
                      else if (vid==5) nv='5';
                      else if (vid==6) nv='6';
                      else if (vid==7) nv='7';
                      else
                      {
                          system("cls");
                          cout<<"Íîðìàëüíî âûáèðàéòå.";
                          goto tip;
                      }
                      switch (nv)
                      {
                          case '1':
                          {
                              cout<<endl<<"Ââåäèòå ñòîðîíó è âûñîòó: ";
                              cin>>a>>h;
                              cout<<endl<<"S = "<<(0.5*a*h);
                              flag=1;
                          }
                          case '2':
                          {
                              cout<<endl<<"Ââåäèòå ñòîðîíû è óãîë: ";
                              cin>>a>>b>>C;
                              cout<<endl<<"S = "<<(0.5*a*b*sin(C));
                              flag=2;
                          }
                          case '3':
                          {
                              cout<<endl<<"Ââåäèòå ñòîðîíû: ";
                              cin>>a>>b>>c;
                              double P = 0.5*(a+b+c);
                              cout<<endl<<"S = "<<(P*sqrt(P*(P-a)*(P-b)*(P-c)));
                              flag=3;
                          }
                          case '4':
                          {
                              cout<<endl<<"Ââåäèòå ñòîðîíû è óãëû: ";
                              cin>>a>>b>>C;
                              if((2*((1/tan(B))+(1/tan(C))))==0)
                              {
                                  cout<<endl<<"Ââåäèòå èíûå óãëû.";
                              }
                              else
                              {
                                  cout<<endl<<"S = "<<((a*a)/(2*((1/tan(B))+(1/tan(C)))));
                              }
                              flag=4;
                          }
                          case '5':
                          {
                              cout<<endl<<"Ââåäèòå ñòîðîíû è ðàäèóñ: ";
                              cin>>a>>b>>c>>r;
                              cout<<endl<<"S = "<<(((a+b+c)/2)*r);
                              flag=5;
                          }
                          case '6':
                          {
                              cout<<endl<<"Ââåäèòå ñòîðîíû è ðàäèóñ: ";
                              cin>>a>>b>>c>>R;
                              cout<<endl<<"S = "<<((a*b*c)/4*R);
                              flag=6;
                          }
                          case '7':
                          {
                              cout<<endl<<"Ââåäèòå óãëû è ðàäèóñ: ";
                              cin>>a>>b>>c>>R;
                              cout<<endl<<"S = "<<(2*R*R*sin(A)*sin(B)*sin(C));
                              flag=7;
                          }
                      }
                 }
                 case '2':
                 {
                      cout<<endl<<"Ñòîðîíà - 1";
                      cout<<endl<<"Âûñîòà - 2";
                      cout<<endl<<"Ðàäèóñ âïèñàííîé îêðóæíîñòè - 3";
                      cout<<endl<<"Ðàäèóñ îïèñàííîé îêðóæíîñòè - 4"<<endl<<endl;
                      cin>>vid;
                      system("cls");
                      if (vid==1) nv='1';
                      else if (vid==2) nv='2';
                      else if (vid==3) nv='3';
                      else if (vid==4) nv='4';
                      else
                      {
                          system("cls");
                          cout<<"Íîðìàëüíî âûáèðàéòå.";
                          goto tip;
                      }
                      switch (nv)
                      {
                          case '1':
                          {
                              cout<<endl<<"Ââåäèòå ñòîðîíó: ";
                              cin>>a;
                              cout<<endl<<"S = "<<(((sqrt(3))/4)*a*a);
                          }
                          case '2':
                          {
                              cout<<endl<<"Ââåäèòå âûñîòó: ";
                              cin>>h;
                              cout<<endl<<"S = "<<(((sqrt(3))/3)*h*h);
                          }
                          case '3':
                          {
                              cout<<endl<<"Ââåäèòå ðàäèóñ âïèñàííîé îêðóæíîñòè: ";
                              cin>>r;
                              cout<<endl<<"S = "<<(3*sqrt(3)*r*r);
                          }
                          case '4':
                          {
                              cout<<endl<<"Ââåäèòå ðàäèóñ îïèñàííîé îêðóæíîñòè: ";
                              cin>>R;
                              cout<<endl<<"S = "<<(((3*sqrt(3))/4)*R*R);
                          }
                      }
                 }
                 case '3':
                 {
                      cout<<endl<<"Äâà êàòåòà - 1";
                      cout<<endl<<"Êàòåò è îñòðûé óãîë - 2";
                      cout<<endl<<"Êàòåò è ïðîòåâîëåæàùèé îñòðûé óãîë - 3";
                      cout<<endl<<"Ãèïîòåíóçà è îñòðûé óãîë - 4"<<endl<<endl;
                      cin>>vid;
                      system("cls");
                      if (vid==1) nv='1';
                      else if (vid==2) nv='2';
                      else if (vid==3) nv='3';
                      else if (vid==4) nv='4';
                      else
                      {
                          system("cls");
                          cout<<"Íîðìàëüíî âûáèðàéòå.";
                          goto tip;
                      }
                      switch (nv)
                      {
                          case '1':
                          {
                              cout<<endl<<"Ââåäèòå êàòåòû: ";
                              cin>>a>>b;
                              cout<<endl<<"S = "<<((1/2)*a*b);
                          }
                          case '2':
                          {
                              cout<<endl<<"Ââåäèòå êàòåò è îñòðûé óãîë: ";
                              cin>>a>>B;
                              cout<<endl<<"S = "<<((1/2)*a*a*tan(B));
                          }
                          case '3':
                          {
                              cout<<endl<<"Ââåäèòå êàòåò è ïðîòåâîëåæàùèé îñòðûé óãîë: ";
                              cin>>a>>B;
                              cout<<endl<<"S = "<<((1/2)*a*a*(1/tan(B)));
                          }
                          case '4':
                          {
                              cout<<endl<<"Ââåäèòå ãèïîòåíóçó è îñòðûé óãîë: ";
                              cin>>c>>B;
                              cout<<endl<<"S = "<<((1/2)*c*c*sin(B)*cos(B));
                          }
                      }
                  }
             }
             flag=1;
		     break;
		}
		case '2':
		{
            qwe:
            cout<<endl<<"Åñòü äèàãîíàëü? (äà/íåò) (1/0)"<<endl<<endl;
            cin>>vid;
            system("cls");
            if (vid==0) nv='1';
            else if (vid==1) nv='2';
            else
            {
                system("cls");
                cout<<"Íîðìàëüíî âûáèðàéòå.";
                goto qwe;
            }
            switch (nv)
            {
                case '1':
                {
                    cout<<endl<<"Ââåäèòå ñòîðîíû: ";
                    cin>>a>>b;
                    cout<<endl<<"S = "<<(a*b);
                }
                case '2':
                {
                    cout<<endl<<"Ââåäèòå äèàãîíàëü è óãîë ìåæäó äèàãîíàëÿìè: ";
                    cin>>d>>A;
                    cout<<endl<<"S = "<<(((d*d)/2)*sin(A));
                }
            }
			flag=2;
			break;
		}
		case '3':
		{
            qwq:
            cout<<endl<<"×åðåç ðàäèóñ - 1";
            cout<<endl<<"×åðåç äèàìåòð - 2";
            cout<<endl<<"×åðåç äëèíó - 3"<<endl<<endl;
            cin>>vid;
            system("cls");
            if (vid==1) nv='1';
            else if (vid==2) nv='2';
            else if (vid==3) nv='3';
            else
            {
                system("cls");
                cout<<"Íîðìàëüíî âûáèðàéòå.";
                goto qwq;
            }
            switch (nv)
            {
                case '1':
                {
                    cout<<endl<<"Ââåäèòå ðàäèóñ: ";
                    cin>>R;
                    cout<<endl<<"S = "<<(3.14*R*R);
                }
                case '2':
                {
                    cout<<endl<<"Ââåäèòå äèàìåòð: ";
                    cin>>d;
                    cout<<endl<<"S = "<<(3.14*((d*d)/4));
                }
                case '3':
                {
                    cout<<endl<<"Ââåäèòå äëèíó: ";
                    cin>>l;
                    cout<<endl<<"S = "<<(3.14*((l*l)/4));
                }
            }
			flag=3;
			break;
		}
		case '4':
		{
			system("cls");
             tipp:
             cout<<endl<<"Òðàïåöèÿ ïðîèçâîëüíàÿ - 1";
             cout<<endl<<"Òðàïåöèÿ ðàâíîáåäðåííàÿ - 2";
             cout<<endl<<"Òðàïåöèÿ ðàâíîáåäðåííàÿ ñ îêðóæíîñòüþ - 3"<<endl<<endl;
             cin>>tip;
             system("cls");
             if (tip==1) nv='1';
             else if (tip==2) nv='2';
             else if (tip==3) nv='3';
             else
             {
                 system("cls");
                 cout<<"Íîðìàëüíî âûáèðàéòå.";
                 goto tipp;
             }
             switch (nv)
             {
                 case '1':
                 {
                      cout<<endl<<"Îñíîâàíèÿ è âûñîòà - 1";
                      cout<<endl<<"Ñðåäíÿÿ ëèíèÿ è âûñîòà - 2";
                      cout<<endl<<"×åòûðå ñòîðîíû - 3";
                      cout<<endl<<"Äèàãîíàëè è óãîë ìåæäó íèìè - 4";
                      cout<<endl<<"Îñíîâàíèÿ è óãëû ïðè îñíîâàíèè - 5";
                      cout<<endl<<"Äèàãîíàëè è âûñîòà - 6";
                      cout<<endl<<"Ðàäèóñ âïèñàííîé îêðóæíîñòè è îñíîâàíèÿ - 7";
                      cout<<endl<<"Ïåðïåíäèêóëÿðíûå äèàãîíàëè - 8"<<endl<<endl;
                      cin>>vid;
                      system("cls");
                      if (vid==1) nv='1';
                      else if (vid==2) nv='2';
                      else if (vid==3) nv='3';
                      else if (vid==4) nv='4';
                      else if (vid==5) nv='5';
                      else if (vid==6) nv='6';
                      else if (vid==7) nv='7';
                      else
                      {
                          system("cls");
                          cout<<"Íîðìàëüíî âûáèðàéòå.";
                          goto tip;
                      }
                      switch (nv)
                      {
                          case '1':
                          {
                              cout<<endl<<"Ââåäèòå îñíîâàíèÿ è âûñîòó: ";
                              cin>>a>>b>>h;
                              cout<<endl<<"S = "<<(0.5*(a+b)*h);
                          }
                          case '2':
                          {
                              cout<<endl<<"Ââåäèòå ñðåäíþþ ëèíèÿ è âûñîòó: ";
                              cin>>m>>h;
                              cout<<endl<<"S = "<<(m*h);
                          }
                          case '3':
                          {
                              cout<<endl<<"Ââåäèòå ñòîðîíû: (a,b - îñíîâû, c,d - áîêîâûå)";
                              cin>>a>>b>>c>>d;
                              double P=0.5*(a+b+c);
                              cout<<endl<<"S = "<<(((a+b)/2)*sqrt(c*c-pow((((a-b)*(a-b)+c*c-d*d)/(2*(a-b))),2)));
                          }
                          case '4':
                          {
                              cout<<endl<<"Ââåäèòå äèàãîíàëè è óãîë ìåæäó íèìè: ";
                              cin>>d1>>d2>>A;
                              cout<<endl<<"S = "<<(((d1*d2)/2)*sin(A));
                          }
                          case '5':
                          {
                              cout<<endl<<"Ââåäèòå îñíîâàíèÿ è óãëû ïðè îñíîâàíèè: ";
                              cin>>a>>b>>A>>B;
                              cout<<endl<<"S = "<<(((b*b-a*a)/2)*((sin(A)*sin(B))/(sin(A+B))));
                          }
                          case '6':
                          {
                              cout<<endl<<"Ââåäèòå äèàãîíàëè è âûñîòó: ";
                              cin>>d1>>d2>>h;
                              cout<<endl<<"S = "<<(((sqrt(d2*d2-h*h)*sqrt(d1*d1-h*h))/2)*h);
                          }
                          case '7':
                          {
                              cout<<endl<<"Ââåäèòå ðàäèóñ âïèñàííîé îêðóæíîñòè è îñíîâàíèÿ: ";
                              cin>>r>>a>>b;
                              cout<<endl<<"S = "<<((a+b)*r);
                          }
                          case '8':
                          {
                              cout<<endl<<"Ââåäèòå äèàãîíàëè: ";
                              cin>>d1>>d2;
                              cout<<endl<<"S = "<<(0.5*d1*d2);
                          }
                      }
                 }
                 case '2':
                 {
                      cout<<endl<<"Îñíîâàíèÿ è âûñîòà - 1";
                      cout<<endl<<"Òðè ñòîðîíû - 2";
                      cout<<endl<<"Âåðõíåå îñíîâàíèå, áîêîâàÿ ñòîðîíà è óãîë ïðè íèæíåì îñíîâàíèè - 3";
                      cout<<endl<<"Íèæíåå îñíîâàíèå, áîêîâàÿ ñòîðîíà è óãîë ïðè íèæíåì îñíîâàíèè - 4";
                      cout<<endl<<"Îñíîâàíèÿ è óãîë - 5";
                      cout<<endl<<"Äèàãîíàëè è óãîë ìåæäó íèìè - 6";
                      cout<<endl<<"Áîêîâàÿ ñòîðîíà, ñðåäíÿÿ ëèíèÿ è óãîë ïðè îñíîâàíèè - 7";
                      cout<<endl<<"Ðàäèóñ âïèñàííîé îêðóæíîñòè è óãîë ïðè îñíîâàíèè - 8"<<endl<<endl;
                      cin>>vid;
                      system("cls");
                      if (vid==1) nv='1';
                      else if (vid==2) nv='2';
                      else if (vid==3) nv='3';
                      else if (vid==4) nv='4';
                      else if (vid==3) nv='5';
                      else if (vid==4) nv='6';
                      else if (vid==3) nv='7';
                      else if (vid==4) nv='8';
                      else
                      {
                          system("cls");
                          cout<<"Íîðìàëüíî âûáèðàéòå.";
                          goto tip;
                      }
                      switch (nv)
                      {
                          case '1':
                          {
                              cout<<endl<<"Ââåäèòå îñíîâàíèÿ è âûñîòó: ";
                              cin>>a>>b>>h;
                              cout<<endl<<"S = "<<(((a+b)/2)*h);
                          }
                          case '2':
                          {
                              cout<<endl<<"Ââåäèòå ñòîðîíû: ";
                              cin>>a>>b>>c;
                              double P=((a+b+c*2)/2);
                              cout<<endl<<"S = "<<(sqrt((P-a)*(P-b)*pow((P-c),2)));
                          }
                          case '3':
                          {
                              cout<<endl<<"Ââåäèòå âåðõíåå îñíîâàíèå, áîêîâóþ ñòîðîíó è óãîë: ";
                              cin>>a>>c>>A;
                              cout<<endl<<"S = "<<(c*sin(A)*(a+c*cos(A)));
                          }
                          case '4':
                          {
                              cout<<endl<<"Ââåäèòå íèæíåå îñíîâàíèå, áîêîâóþ ñòîðîíó è óãîë: ";
                              cin>>b>>c>>A;
                              cout<<endl<<"S = "<<(c*sin(A)*(b-c*cos(A)));
                          }
                          case '5':
                          {
                              cout<<endl<<"Ââåäèòå îñíîâàíèÿ è óãîë: ";
                              cin>>a>>b>>A;
                              cout<<endl<<"S = "<<(0.5*(b*b-a*a)*tan(A));
                          }
                          case '6':
                          {
                              cout<<endl<<"Ââåäèòå äèàãîíàëè è óãîë: ";
                              cin>>d>>A;
                              cout<<endl<<"S = "<<(0.5*d*d*sin(A));
                          }
                          case '7':
                          {
                              cout<<endl<<"Ââåäèòå áîêîâóþ ñòîðîíó, ñðåäíþþ ëèíèþ è óãîë: ";
                              cin>>c>>m>>A;
                              cout<<endl<<"S = "<<(m*c*sin(A));
                          }
                          case '8':
                          {
                              cout<<endl<<"Ââåäèòå ðàäèóñ âïèñàííîé îêðóæíîñòè è óãîë: ";
                              cin>>r>>A;
                              cout<<endl<<"S = "<<((4*r*r)/sin(A));
                          }
                      }
                 }
                 case '3':
                 {
                      cout<<endl<<"Âûñîòà (äèàìåòð âïèñàííîé îêðóæíîñòè) è óãîë ïðè îñíîâàíèè - 1";
                      cout<<endl<<"Îñíîâàíèÿ è óãîë ïðè îñíîâàíèè - 2";
                      cout<<endl<<"Îñíîâàíèÿ è ðàäèóñ âïèñàííîé îêðóæíîñòè - 3";
                      cout<<endl<<"Îñíîâàíèÿ - 4";
                      cout<<endl<<"Îñíîâàíèÿ è áîêîâàÿ ñòîðîíà - 5";
                      cout<<endl<<"Îñíîâàíèÿ è ñðåäíÿÿ ëèíèÿ - 6"<<endl<<endl;
                      cin>>vid;
                      system("cls");
                      if (vid==1) nv='1';
                      else if (vid==2) nv='2';
                      else if (vid==3) nv='3';
                      else if (vid==4) nv='4';
                      else if (vid==3) nv='5';
                      else if (vid==4) nv='6';
                      else
                      {
                          system("cls");
                          cout<<"Íîðìàëüíî âûáèðàéòå.";
                          goto tip;
                      }
                      switch (nv)
                      {
                          case '1':
                          {
                              cout<<endl<<"Ââåäèòå âûñîòó è óãîë: ";
                              cin>>h>>A;
                              cout<<endl<<"S = "<<((h*h)/sin(A));
                          }
                          case '2':
                          {
                              cout<<endl<<"Ââåäèòå îñíîâàíèÿ è óãîë ïðè îñíîâàíèè: ";
                              cin>>a>>b>>A;
                              cout<<endl<<"S = "<<((a*b)/(sin(A)));
                          }
                          case '3':
                          {
                              cout<<endl<<"Ââåäèòå îñíîâàíèÿ è ðàäèóñ âïèñàííîé îêðóæíîñòè: ";
                              cin>>a>>b>>r;
                              cout<<endl<<"S = "<<(r*(a+b));
                          }
                          case '4':
                          {
                              cout<<endl<<"Ââåäèòå îñíîâàíèÿ: ";
                              cin>>a>>b;
                              cout<<endl<<"S = "<<(sqrt(a*b)*((a+b)/2));
                          }
                          case '5':
                          {
                              cout<<endl<<"Ââåäèòå îñíîâàíèÿ è áîêîâóþ ñòîðîíó: ";
                              cin>>a>>b>>c;
                              cout<<endl<<"S = "<<(c*sqrt(a*b));
                          }
                          case '6':
                          {
                              cout<<endl<<"Ââåäèòå îñíîâàíèÿ è ñðåäíþþ ëèíèþ: ";
                              cin>>a>>b>>m;
                              cout<<endl<<"S = "<<(m*sqrt(a*b));
                          }
                      }
                  }
             }
             flag=4;
		     break;
		 }
    }
    getch();
    return 0;
}
