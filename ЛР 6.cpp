//C++ Бойко Александр, ПЗ 20-1
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
    cout<<endl<<"Какие площади будем считать?";
    cout<<endl<<"(1 - треугольника, 2 - прямоугольника, 3 - круга, 4 - трапеции)";
    cout<<endl<<"Ваш выбор:"<<endl<<endl;
    cin>>vibor;
    system("cls");
    if (vibor==1) nv='1';
    else if (vibor==2) nv='2';
    else if (vibor==3) nv='3';
    else if (vibor==4) nv='4';
    else
    {
         system("cls");
         cout<<"Выберите что-либо из списка:";
         goto tryagain;
    }
    switch (nv)
    {
        case '1':
		{
             system("cls");
             tip:
             cout<<endl<<"Треугольник произвольный - 1";
             cout<<endl<<"Треугольник правильный - 2";
             cout<<endl<<"Треугольник прямоугольный - 3"<<endl<<endl;
             cin>>tip;
             system("cls");
             if (tip==1) nv='1';
             else if (tip==2) nv='2';
             else if (tip==3) nv='3';
             else
             {
                 system("cls");
                 cout<<"Нормально выбирайте.";
                 goto tip;
             }
             switch (nv)
             {
                 case '1':
                 {
                      cout<<endl<<"Сторона и высота, опущенная на эту сторону - 1";
                      cout<<endl<<"Две стороны и угол между ними - 2";
                      cout<<endl<<"Три стороны - 3";
                      cout<<endl<<"Сторона и углы, приналедащие ей - 4";
                      cout<<endl<<"Три стороны и радиус вписанной окружности - 5";
                      cout<<endl<<"Три стороны и радиус описанной окружности - 6";
                      cout<<endl<<"Три угла и радиус вписанной окружности - 7"<<endl<<endl;
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
                          cout<<"Нормально выбирайте.";
                          goto tip;
                      }
                      switch (nv)
                      {
                          case '1':
                          {
                              cout<<endl<<"Введите сторону и высоту: ";
                              cin>>a>>h;
                              cout<<endl<<"S = "<<(0.5*a*h);
                              flag=1;
                          }
                          case '2':
                          {
                              cout<<endl<<"Введите стороны и угол: ";
                              cin>>a>>b>>C;
                              cout<<endl<<"S = "<<(0.5*a*b*sin(C));
                              flag=2;
                          }
                          case '3':
                          {
                              cout<<endl<<"Введите стороны: ";
                              cin>>a>>b>>c;
                              double P = 0.5*(a+b+c);
                              cout<<endl<<"S = "<<(P*sqrt(P*(P-a)*(P-b)*(P-c)));
                              flag=3;
                          }
                          case '4':
                          {
                              cout<<endl<<"Введите стороны и углы: ";
                              cin>>a>>b>>C;
                              if((2*((1/tan(B))+(1/tan(C))))==0)
                              {
                                  cout<<endl<<"Введите иные углы.";
                              }
                              else
                              {
                                  cout<<endl<<"S = "<<((a*a)/(2*((1/tan(B))+(1/tan(C)))));
                              }
                              flag=4;
                          }
                          case '5':
                          {
                              cout<<endl<<"Введите стороны и радиус: ";
                              cin>>a>>b>>c>>r;
                              cout<<endl<<"S = "<<(((a+b+c)/2)*r);
                              flag=5;
                          }
                          case '6':
                          {
                              cout<<endl<<"Введите стороны и радиус: ";
                              cin>>a>>b>>c>>R;
                              cout<<endl<<"S = "<<((a*b*c)/4*R);
                              flag=6;
                          }
                          case '7':
                          {
                              cout<<endl<<"Введите углы и радиус: ";
                              cin>>a>>b>>c>>R;
                              cout<<endl<<"S = "<<(2*R*R*sin(A)*sin(B)*sin(C));
                              flag=7;
                          }
                      }
                 }
                 case '2':
                 {
                      cout<<endl<<"Сторона - 1";
                      cout<<endl<<"Высота - 2";
                      cout<<endl<<"Радиус вписанной окружности - 3";
                      cout<<endl<<"Радиус описанной окружности - 4"<<endl<<endl;
                      cin>>vid;
                      system("cls");
                      if (vid==1) nv='1';
                      else if (vid==2) nv='2';
                      else if (vid==3) nv='3';
                      else if (vid==4) nv='4';
                      else
                      {
                          system("cls");
                          cout<<"Нормально выбирайте.";
                          goto tip;
                      }
                      switch (nv)
                      {
                          case '1':
                          {
                              cout<<endl<<"Введите сторону: ";
                              cin>>a;
                              cout<<endl<<"S = "<<(((sqrt(3))/4)*a*a);
                          }
                          case '2':
                          {
                              cout<<endl<<"Введите высоту: ";
                              cin>>h;
                              cout<<endl<<"S = "<<(((sqrt(3))/3)*h*h);
                          }
                          case '3':
                          {
                              cout<<endl<<"Введите радиус вписанной окружности: ";
                              cin>>r;
                              cout<<endl<<"S = "<<(3*sqrt(3)*r*r);
                          }
                          case '4':
                          {
                              cout<<endl<<"Введите радиус описанной окружности: ";
                              cin>>R;
                              cout<<endl<<"S = "<<(((3*sqrt(3))/4)*R*R);
                          }
                      }
                 }
                 case '3':
                 {
                      cout<<endl<<"Два катета - 1";
                      cout<<endl<<"Катет и острый угол - 2";
                      cout<<endl<<"Катет и протеволежащий острый угол - 3";
                      cout<<endl<<"Гипотенуза и острый угол - 4"<<endl<<endl;
                      cin>>vid;
                      system("cls");
                      if (vid==1) nv='1';
                      else if (vid==2) nv='2';
                      else if (vid==3) nv='3';
                      else if (vid==4) nv='4';
                      else
                      {
                          system("cls");
                          cout<<"Нормально выбирайте.";
                          goto tip;
                      }
                      switch (nv)
                      {
                          case '1':
                          {
                              cout<<endl<<"Введите катеты: ";
                              cin>>a>>b;
                              cout<<endl<<"S = "<<((1/2)*a*b);
                          }
                          case '2':
                          {
                              cout<<endl<<"Введите катет и острый угол: ";
                              cin>>a>>B;
                              cout<<endl<<"S = "<<((1/2)*a*a*tan(B));
                          }
                          case '3':
                          {
                              cout<<endl<<"Введите катет и протеволежащий острый угол: ";
                              cin>>a>>B;
                              cout<<endl<<"S = "<<((1/2)*a*a*(1/tan(B)));
                          }
                          case '4':
                          {
                              cout<<endl<<"Введите гипотенузу и острый угол: ";
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
            cout<<endl<<"Есть диагональ? (да/нет) (1/0)"<<endl<<endl;
            cin>>vid;
            system("cls");
            if (vid==0) nv='1';
            else if (vid==1) nv='2';
            else
            {
                system("cls");
                cout<<"Нормально выбирайте.";
                goto qwe;
            }
            switch (nv)
            {
                case '1':
                {
                    cout<<endl<<"Введите стороны: ";
                    cin>>a>>b;
                    cout<<endl<<"S = "<<(a*b);
                }
                case '2':
                {
                    cout<<endl<<"Введите диагональ и угол между диагоналями: ";
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
            cout<<endl<<"Через радиус - 1";
            cout<<endl<<"Через диаметр - 2";
            cout<<endl<<"Через длину - 3"<<endl<<endl;
            cin>>vid;
            system("cls");
            if (vid==1) nv='1';
            else if (vid==2) nv='2';
            else if (vid==3) nv='3';
            else
            {
                system("cls");
                cout<<"Нормально выбирайте.";
                goto qwq;
            }
            switch (nv)
            {
                case '1':
                {
                    cout<<endl<<"Введите радиус: ";
                    cin>>R;
                    cout<<endl<<"S = "<<(3.14*R*R);
                }
                case '2':
                {
                    cout<<endl<<"Введите диаметр: ";
                    cin>>d;
                    cout<<endl<<"S = "<<(3.14*((d*d)/4));
                }
                case '3':
                {
                    cout<<endl<<"Введите длину: ";
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
             cout<<endl<<"Трапеция произвольная - 1";
             cout<<endl<<"Трапеция равнобедренная - 2";
             cout<<endl<<"Трапеция равнобедренная с окружностью - 3"<<endl<<endl;
             cin>>tip;
             system("cls");
             if (tip==1) nv='1';
             else if (tip==2) nv='2';
             else if (tip==3) nv='3';
             else
             {
                 system("cls");
                 cout<<"Нормально выбирайте.";
                 goto tipp;
             }
             switch (nv)
             {
                 case '1':
                 {
                      cout<<endl<<"Основания и высота - 1";
                      cout<<endl<<"Средняя линия и высота - 2";
                      cout<<endl<<"Четыре стороны - 3";
                      cout<<endl<<"Диагонали и угол между ними - 4";
                      cout<<endl<<"Основания и углы при основании - 5";
                      cout<<endl<<"Диагонали и высота - 6";
                      cout<<endl<<"Радиус вписанной окружности и основания - 7";
                      cout<<endl<<"Перпендикулярные диагонали - 8"<<endl<<endl;
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
                          cout<<"Нормально выбирайте.";
                          goto tip;
                      }
                      switch (nv)
                      {
                          case '1':
                          {
                              cout<<endl<<"Введите основания и высоту: ";
                              cin>>a>>b>>h;
                              cout<<endl<<"S = "<<(0.5*(a+b)*h);
                          }
                          case '2':
                          {
                              cout<<endl<<"Введите среднюю линия и высоту: ";
                              cin>>m>>h;
                              cout<<endl<<"S = "<<(m*h);
                          }
                          case '3':
                          {
                              cout<<endl<<"Введите стороны: (a,b - основы, c,d - боковые)";
                              cin>>a>>b>>c>>d;
                              double P=0.5*(a+b+c);
                              cout<<endl<<"S = "<<(((a+b)/2)*sqrt(c*c-pow((((a-b)*(a-b)+c*c-d*d)/(2*(a-b))),2)));
                          }
                          case '4':
                          {
                              cout<<endl<<"Введите диагонали и угол между ними: ";
                              cin>>d1>>d2>>A;
                              cout<<endl<<"S = "<<(((d1*d2)/2)*sin(A));
                          }
                          case '5':
                          {
                              cout<<endl<<"Введите основания и углы при основании: ";
                              cin>>a>>b>>A>>B;
                              cout<<endl<<"S = "<<(((b*b-a*a)/2)*((sin(A)*sin(B))/(sin(A+B))));
                          }
                          case '6':
                          {
                              cout<<endl<<"Введите диагонали и высоту: ";
                              cin>>d1>>d2>>h;
                              cout<<endl<<"S = "<<(((sqrt(d2*d2-h*h)*sqrt(d1*d1-h*h))/2)*h);
                          }
                          case '7':
                          {
                              cout<<endl<<"Введите радиус вписанной окружности и основания: ";
                              cin>>r>>a>>b;
                              cout<<endl<<"S = "<<((a+b)*r);
                          }
                          case '8':
                          {
                              cout<<endl<<"Введите диагонали: ";
                              cin>>d1>>d2;
                              cout<<endl<<"S = "<<(0.5*d1*d2);
                          }
                      }
                 }
                 case '2':
                 {
                      cout<<endl<<"Основания и высота - 1";
                      cout<<endl<<"Три стороны - 2";
                      cout<<endl<<"Верхнее основание, боковая сторона и угол при нижнем основании - 3";
                      cout<<endl<<"Нижнее основание, боковая сторона и угол при нижнем основании - 4";
                      cout<<endl<<"Основания и угол - 5";
                      cout<<endl<<"Диагонали и угол между ними - 6";
                      cout<<endl<<"Боковая сторона, средняя линия и угол при основании - 7";
                      cout<<endl<<"Радиус вписанной окружности и угол при основании - 8"<<endl<<endl;
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
                          cout<<"Нормально выбирайте.";
                          goto tip;
                      }
                      switch (nv)
                      {
                          case '1':
                          {
                              cout<<endl<<"Введите основания и высоту: ";
                              cin>>a>>b>>h;
                              cout<<endl<<"S = "<<(((a+b)/2)*h);
                          }
                          case '2':
                          {
                              cout<<endl<<"Введите стороны: ";
                              cin>>a>>b>>c;
                              double P=((a+b+c*2)/2);
                              cout<<endl<<"S = "<<(sqrt((P-a)*(P-b)*pow((P-c),2)));
                          }
                          case '3':
                          {
                              cout<<endl<<"Введите верхнее основание, боковую сторону и угол: ";
                              cin>>a>>c>>A;
                              cout<<endl<<"S = "<<(c*sin(A)*(a+c*cos(A)));
                          }
                          case '4':
                          {
                              cout<<endl<<"Введите нижнее основание, боковую сторону и угол: ";
                              cin>>b>>c>>A;
                              cout<<endl<<"S = "<<(c*sin(A)*(b-c*cos(A)));
                          }
                          case '5':
                          {
                              cout<<endl<<"Введите основания и угол: ";
                              cin>>a>>b>>A;
                              cout<<endl<<"S = "<<(0.5*(b*b-a*a)*tan(A));
                          }
                          case '6':
                          {
                              cout<<endl<<"Введите диагонали и угол: ";
                              cin>>d>>A;
                              cout<<endl<<"S = "<<(0.5*d*d*sin(A));
                          }
                          case '7':
                          {
                              cout<<endl<<"Введите боковую сторону, среднюю линию и угол: ";
                              cin>>c>>m>>A;
                              cout<<endl<<"S = "<<(m*c*sin(A));
                          }
                          case '8':
                          {
                              cout<<endl<<"Введите радиус вписанной окружности и угол: ";
                              cin>>r>>A;
                              cout<<endl<<"S = "<<((4*r*r)/sin(A));
                          }
                      }
                 }
                 case '3':
                 {
                      cout<<endl<<"Высота (диаметр вписанной окружности) и угол при основании - 1";
                      cout<<endl<<"Основания и угол при основании - 2";
                      cout<<endl<<"Основания и радиус вписанной окружности - 3";
                      cout<<endl<<"Основания - 4";
                      cout<<endl<<"Основания и боковая сторона - 5";
                      cout<<endl<<"Основания и средняя линия - 6"<<endl<<endl;
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
                          cout<<"Нормально выбирайте.";
                          goto tip;
                      }
                      switch (nv)
                      {
                          case '1':
                          {
                              cout<<endl<<"Введите высоту и угол: ";
                              cin>>h>>A;
                              cout<<endl<<"S = "<<((h*h)/sin(A));
                          }
                          case '2':
                          {
                              cout<<endl<<"Введите основания и угол при основании: ";
                              cin>>a>>b>>A;
                              cout<<endl<<"S = "<<((a*b)/(sin(A)));
                          }
                          case '3':
                          {
                              cout<<endl<<"Введите основания и радиус вписанной окружности: ";
                              cin>>a>>b>>r;
                              cout<<endl<<"S = "<<(r*(a+b));
                          }
                          case '4':
                          {
                              cout<<endl<<"Введите основания: ";
                              cin>>a>>b;
                              cout<<endl<<"S = "<<(sqrt(a*b)*((a+b)/2));
                          }
                          case '5':
                          {
                              cout<<endl<<"Введите основания и боковую сторону: ";
                              cin>>a>>b>>c;
                              cout<<endl<<"S = "<<(c*sqrt(a*b));
                          }
                          case '6':
                          {
                              cout<<endl<<"Введите основания и среднюю линию: ";
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
