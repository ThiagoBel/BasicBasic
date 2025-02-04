#include <iostream>
#include <string>
#include <fstream>
#include <windows.h>
#include <cstdlib>
#include <algorithm>

using namespace std;

// bool arquivocmd(const string& namesys) {
//     ifstream cmdler(namesys + ".bb.txt");
//     string linha;

//     while (getline(cmdler, linha)) {
//         cout << linha << endl;
//     }
//     transform(linha.begin(), linha.end(), linha.begin(), ::tolower);

//     if (linha.find("print: ") == 0) {
//         string resultadoprint = linha.substr(7);

//         cout << resultadoprint << endl;
//     }
// }

int main()
{
    system("title BasicBasic");
    char buf[256];
    GetCurrentDirectoryA(sizeof(buf), buf);

    const char *username = getenv("USERNAME");
    string disco = "Cpp:/>";
    string user;

    bool secretvalor = false;
    bool secretvalor2 = false;
    bool secretvalor3 = false;
    bool secretmemeaspas = false;

    bool memoriaasm = false;

    int secretmeme;

    string defscript;
    string defscriptCPP;
    string defscriptC;
    string defscriptJAVA;
    string defscriptPYTHON;
    string defscriptASM;
    string defscriptHTML;
    string defscriptHTM;

    string defapp;
    string deffile;

    string othercmd;
    string othercmd2;

    cout << "Oi " << username << "!\n";
    while (true)
    {
        cout << disco;
        getline(cin, user);

        transform(user.begin(), user.end(), user.begin(), ::tolower);

        if (user == "help" || user == "ajuda")
        {
            cout << "---------------------------\n";
            cout << "def.script cpp* - Definir um script de C++.\n";
            cout << "def.script c* - Definir um script de C.\n";
            cout << "def.script python* - Definir um script de Python.\n";
            cout << "def.script java* - Definir um script de Java.\n";
            cout << "def.script html* - Definir um script de HTML.\n";
            cout << "def.script htm* - Definir um script de HTM.\n";
            cout << "---------------------------\n";
            cout << "def.app app* - Definir um aplicativo.\n";
            cout << "---------------------------\n";
            cout << "init.compile.script cpp* - Compilar o script definido de C++.\n";
            cout << "init.compile.script c* - Compilar o script definido de C.\n";
            cout << "init.compile.script python* - Compilar o script definido de Python.\n";
            cout << "init.compile.script java* - Compilar o script definido de Java.\n";
            cout << "init.compile.script html* - Compilar o script definido de HTML.\n";
            cout << "init.compile.script htm* - Compilar o script definido de HTM.\n";
            cout << "---------------------------\n";
            cout << "init.app app* - Iniciar um aplicativo.\n";
            cout << "---------------------------\n";
            cout << "exit - sair do terminal.\n";
            cout << "exitf - sair do terminal mais rapidamente.\n";
            cout << "dir - Mostrar os arquivos no diretorio atual.\n";
            cout << "mkdir ... - Criar uma pasta.\n";
            cout << "show ... - Mostrar o resultado da string.\n";
            cout << "clear - Limpa a tela (cls).\n";
            cout << "tasklist - Mostra uma lista de processos em execucao.\n";
            cout << "info - Mostra todas as informacoes possiveis do seu computador.\n";
            cout << "newfile ... - Cria um arquivo(coloque a extencao no final).\n";
            cout << "color ... - Muda a cor do terminal.\n";
            cout << "credits - Mostra os creditos.\n";
            cout << "---------------------------\n";
            cout << "darkmode - Modo escuro.\n";
            cout << "lightmode - Modo claro.\n";
            cout << "romancemode - Modo romance.\n";
            cout << "horrormode - Modo horror.\n";
            cout << "---------------------------\n";
            cout << "show.defscript* - Mostra o caminho atual.\n";
            cout << "show.path* - Mostra o caminho atual.\n";
            cout << "show.defscriptCPP* - Mostra o nome do script C++.\n";
            cout << "show.defscriptC* - Mostra o nome do script C.\n";
            cout << "show.defscriptPYTHON* - Mostra o nome do script Python.\n";
            cout << "show.defscriptJAVA* - Mostra o nome do script Java.\n";
            cout << "show.defscriptHTML* - Mostra o nome do script HTML.\n";
            cout << "show.defscriptHTM* - Mostra o nome do script HTM.\n";
            cout << "---------------------------\n";
            cout << "git commit - Registra alteracoes no repositorio local.\n";
            cout << "git status - Mostra o estado atual dos arquivos no repositorio.\n";
            cout << "git clone - Cria uma copia local de um repositorio remoto.\n";
            cout << "git push - Envia alteracoes locais para o repositorio remoto.\n";
            cout << "---------------------------\n";
            cout << "version.bb - Mostrar a versao do BasicBasic.\n";
            cout << "version.cpp* - Mostra a versao do C++ (g++).\n";
            cout << "version.c* - Mostra a versao do C (gcc).\n";
            cout << "version.python* - Mostra a versao do Python.\n";
            cout << "version.java* - Mostra a versao do Java(Javac nao incluido).\n";
            cout << "version.javac* - Mostra a versao do Javac(Java nao incluido).\n";
            cout << "version.java.all* - Mostra a versao do Java e do Javac.\n";
            cout << "---------------------------\n";
            cout << "g++ --version - Mostra a versao do C++.\n";
            cout << "gcc --version - Mostra a versao do C.\n";
            cout << "python --version - Mostra a versao do Python.\n";
            cout << "java --version - Mostra a versao do Java.\n";
            cout << "javac --version - Mostra a versao do Javac.\n";
            cout << "bb --version - Mostra a versao do BasicBasic.\n";
            cout << "---------------------------\n";
            cout << "other.cmd* - Imita o Prompt De Comandos (CMD).\n";
            cout << "other.cmd-loop* - Imita o Prompt De Comandos (CMD) mas em loop.\n";
            cout << "other.cmd-diret*>... - Imita o Prompt De Comandos (CMD) mas é direto.\n";
            cout << "---------------------------\n";
            cout << "cpp ... - Compila o C++(Cria um arquivo .exe).\n";
            cout << "c ... - Compila o C(Cria um arquivo .exe).\n";
            cout << "java ... - Compila o Java(Cria um arquivo .class).\n";
            cout << "py ... - Compila o Python.\n";
            cout << "html ... - Compila o HTML.\n";
            cout << "htm ... - Compila o HTM.\n";
            cout << "---------------------------\n";
        }
        else if (user == "exit" || user == "sair")
        {
            cout << "Vai me deixar mano :(\n";
            Sleep(1000);
            cout << "Ok...\n";
            Sleep(1000);
            cout << "Foi bom conhecer voce...\n";
            Sleep(1000);
            break;
        }
        else if (user == "exitf" || user == "sairf")
        {
            cout << "Ta\n";
            break;
        }
        else if (user == "clear" || user == "cls")
        {
            system("cls");
        }
        else if (user == "tasklist" || user == "listask")
        {
            system("tasklist");
        }
        else if (user == "info" || user == "infouser")
        {
            system("systeminfo");
        }
        else if (user == "ipconfig")
        {
            system("ipconfig");
        }
        else if (user.find("newfile ") == 0)
        {
            string filename = user.substr(7);
            ofstream filenamecr(filename);
            if (filenamecr.is_open())
            {
                cout << "Sucesso!\n";
            }
            else
            {
                cout << "Erro!\n";
            }
        }
        else if (user == "git status")
        {
            system("git status");
        }
        else if (user.find("git clone ") == 0)
        {
            string repoURL = user.substr(10);
            string cloneCommand = "git clone " + repoURL;
            system(cloneCommand.c_str());
        }
        else if (user.find("color ") == 0)
        {
            string color = user.substr(6);
            string cor = "color " + color;
            system(cor.c_str());
        }
        else if (user.find("git push ") == 0)
        {
            string pushCommand = user.substr(9);
            system(("git push " + pushCommand).c_str());
        }
        else if (user.find("git commit ") == 0)
        {
            string commitMessage = user.substr(11);
            string commitCommand = "git commit -m \"" + commitMessage + "\"";
            system(commitCommand.c_str());
        }
        else if (user == "darkmode")
        {
            system("color 07");
        }
        else if (user == "lightmode")
        {
            system("color 70");
        }
        else if (user == "hackermode")
        {
            cout << "Desconfio...\n";
            system("Color A");
        }
        else if (user == "horrormode")
        {
            cout << "Horror eh o codigo desse terminal...\n";
            system("Color 4");
        }
        else if (user == "romancemode")
        {
            cout << "Que romantico... espero que não seja comigo, pois sou um app '-'\n";
            system("Color 40");
        }
        else if (user == "ls" || user == "dir")
        {
            system("dir");
        }
        else if (user == "username" || user == "name")
        {
            cout << username << "\n";
        }
        else if (user.find("mkdir ") == 0)
        {
            string dirname = user.substr(6);
            string command = "mkdir " + dirname;
            system(command.c_str());
        }
        else if (user == "java --version")
        {
            system("java --version");
        }
        else if (user == "javac --version")
        {
            system("javac --version");
        }
        else if (user == "python --version")
        {
            system("python --version");
        }
        else if (user == "g++ --version")
        {
            system("g++ --version");
        }
        else if (user == "bb --version" || user == "version.bb*")
        {
            cout << "BasicBasic: 0.0.1\n";
        }
        else if (user == "def.script*")
        {
            cout << "Cpp:/DefinirScript>";
            getline(cin, defscript);
        }
        else if (user == "def.script cpp*" || user == "def script c++")
        {
            cout << "Cpp:/DefinirScriptCpp>";
            getline(cin, defscriptCPP);
            cout << "Salvo em defscriptCPP! (" + defscriptCPP + ".cpp)\n";
        }
        else if (user == "def.script java*")
        {
            cout << "Cpp:/DefinirScriptJava>";
            getline(cin, defscriptJAVA);
            cout << "Salvo em defscriptJAVA! (" + defscriptJAVA + ".java)\n";
        }
        else if (user == "def.script html*")
        {
            cout << "Cpp:/DefinirScriptHTML>";
            getline(cin, defscriptHTML);
            cout << "Salvo em defscriptHTML! (" + defscriptHTML + ".html)\n";
        }
        else if (user == "def.script htm*")
        {
            cout << "Cpp:/DefinirScriptHTM>";
            getline(cin, defscriptHTM);
            cout << "Salvo em defscriptHTM! (" + defscriptHTM + ".htm)\n";
        }
        else if (user == "def.script python*")
        {
            cout << "Cpp:/DefinirScriptPython>";
            getline(cin, defscriptPYTHON);
            cout << "Salvo em defscriptPYTHON! (" + defscriptPYTHON + ".py)\n";
        }
        else if (user == "def.script c*")
        {
            cout << "Cpp:/DefinirScriptC>";
            getline(cin, defscriptC);
            cout << "Salvo em defscriptC! (" + defscriptC + ".c)\n";
        }
        else if (user == "init.compile.script.cpp*" || user == "compile_script c++*")
        {
            if (defscriptCPP.empty())
            {
                cout << "Nenhum script C++ foi definido, Use 'def.script cpp*' antes de compilar.\n";
                continue;
            }
            string compileCPP = "g++ " + defscriptCPP + ".cpp -o " + defscriptCPP + ".exe";
            string compileCPP2 = defscriptCPP + ".exe";

            cout << "Compilando " << defscriptCPP << ".cpp\n";
            if (system(compileCPP.c_str()) == 0)
            {
                cout << "Compilado com sucesso! Executando o programa...\n\n";
                system(compileCPP2.c_str());
                cout << "\n";
            }
            else
            {
                cout << "Erro ao compilar o script " << defscriptCPP << ".cpp.\n";
            }
        }
        else if (user == "init.compile.script java*")
        {
            if (defscriptJAVA.empty())
            {
                cout << "Nenhum script Java foi definido, Use 'def.script java*' antes de compilar.\n";
                continue;
            }
            string compileJAVA = "javac " + defscriptJAVA + ".java";
            string compileJAVA2 = "java " + defscriptJAVA;

            cout << "Compilando " << defscriptJAVA << ".java\n";
            if (system(compileJAVA.c_str()) == 0)
            {
                cout << "Compilado com sucesso! Executando o programa...\n\n";
                system(compileJAVA2.c_str());
                cout << "\n";
            }
            else
            {
                cout << "Erro ao compilar o script " << defscriptJAVA << ".java.\n";
            }
        }
        else if (user == "init.compile.script c*")
        {
            if (defscriptC.empty())
            {
                cout << "Nenhum script C foi definido, Use 'def.script c*' antes de compilar.\n";
                continue;
            }
            string compileC = "gcc " + defscriptC + ".c -o " + defscriptC + ".exe";
            string compileC2 = defscriptC + ".exe";

            cout << "Compilando " << defscriptC << ".c\n";
            if (system(compileC.c_str()) == 0)
            {
                cout << "Compilado com sucesso! Executando o programa...\n\n";
                system(compileC2.c_str());
                cout << "\n";
            }
            else
            {
                cout << "Erro ao compilar o script " << defscriptJAVA << ".java.\n";
            }
        }
        else if (user == "init.compile.script html*")
        {
            if (defscriptHTML.empty())
            {
                cout << "Nenhum script HTML foi definido, Use 'def.script html*' antes de compilar.\n";
                continue;
            }
            string compileHTML = "start " + defscriptHTML + ".html";

            cout << "Compilando " << defscriptHTML << ".html\n";
            if (system(compileHTML.c_str()) == 0)
            {
                cout << "Compilado com sucesso!\n\n";
            }
            else
            {
                cout << "Erro ao compilar o site " << defscriptHTML << ".html.\n";
            }
        }
                else if (user == "init.compile.script htm*")
        {
            if (defscriptHTM.empty())
            {
                cout << "Nenhum script HTM foi definido, Use 'def.script htm*' antes de compilar.\n";
                continue;
            }
            string compileHTM = "start " + defscriptHTM + ".htm";

            cout << "Compilando " << defscriptHTM << ".htm\n";
            if (system(compileHTM.c_str()) == 0)
            {
                cout << "Compilado com sucesso!\n\n";
            }
            else
            {
                cout << "Erro ao compilar o site " << defscriptHTM << ".htm.\n";
            }
        }
        else if (user == "init.compile.script python*")
        {
            if (defscriptPYTHON.empty())
            {
                cout << "Nenhum script Python foi definido, Use 'def.script python*' antes de compilar.\n";
                continue;
            }
            string compilePYTHON = "python " + defscriptPYTHON + ".py";

            cout << "Compilando " << defscriptPYTHON << ".py\n";
            if (system(compilePYTHON.c_str()) == 0)
            {
                cout << "Compilado com sucesso!\n\n";
            }
            else
            {
                cout << "Erro ao compilar o script " << defscriptPYTHON << ".py.\n";
            }
        }
        else if (user == "def.app app*")
        {
            cout << "Cpp:/DefinirAplicativo>";
            getline(cin, defapp);
            cout << "Salvo em defapp! (" + defapp + ")\n";
        }
        else if (user == "init.app app*")
        {
            if (defapp.empty())
            {
                cout << "Nenhum aplicativo foi definido, Use 'def.app app*' antes de iniciar.\n";
                continue;
            }
            string initAPP = "start " + defapp;

            if (system(initAPP.c_str()) == 0)
            {
                cout << "Aplicativo iniciado com sucesso!\n\n";
            }
            else
            {
                cout << "Erro ao iniciar o aplicativo.\n";
            }
        }
        else if (user == "def.script asm*" || user == "def.script assembly*")
        {
            if (memoriaasm == false)
            {
                cout << "Oloco\n";
                Sleep(1500);
                cout << "Desculpa, primeira vez que uma pessoa coloca esse comando, estou nervoso.\nVamo denovo, eu consigo!\n";
                Sleep(4500);
                system("cls");
                cout << "Cpp:/>" << user << "\n";
                Sleep(1000);
                cout << "Ok...\n";
                cout << "Voce quer definir um codigo assembly...\n";
                Sleep(2000);
                cout << "AHHHH NAO CONSIGO! ;(\n";
                Sleep(2000);
                cout << "Vamo denovo...\n";
                Sleep(2000);
                system("cls");
                cout << "Cpp:/>" << user << "\n";
                Sleep(1000);
                cout << "Ok...\n";
                Sleep(2000);
                cout << "Agora é so perguntar...\n";
                Sleep(2000);
                cout << "Me de um nome...\n";
                Sleep(1500);
                cout << "ME DE O NOME DO ARQUIVO! falei errado, desculpa :(\nNOME DO ARQUIVO: ";
                Sleep(1000);
                getline(cin, defscriptASM);
                Sleep(1000);
                cout << "SALVEI!!!\n";
                Sleep(1000);
                cout << "Ok, agora é so falar onde eu salvei...\n";
                Sleep(1500);
                cout << "Ei, salvei no defscriptASM...\n";
                Sleep(1500);
                cout << "Use 'init.compile.script asm*' para compilar...\n";
            }
            else
            {
                cout << "Eu ja te falei que nao tem compilador de assembly aqui...\n";
                Sleep(1000);
                cout << "Desculpa :(\n";
            }
        }
        else if (user == "init.compile.script asm*" || user == "init.compile.script assembly")
        {
            if (defscriptASM.empty())
            {
                cout << "Nenhum script asm foi definido, Use 'def.script asm*' antes de compilar.";
            }

            cout << "Eita...\n";
            Sleep(1000);
            cout << "Desculpa mas...\n";
            Sleep(1000);
            cout << "Nao tem compilador de assembly ainda...\n";
            Sleep(1000);
            cout << "Lembrei agora...\n";
            Sleep(1000);
            cout << "Me desculpa :(\n";

            memoriaasm = true;
        }
        else if ((user == "desculpa" || user == "dicupa" || user == "mal" || user == "perdao" || user == "sorry") && secretvalor == true)
        {
            cout << "Desculpado!\n";
            secretvalor = false;
            secretvalor2 = true;
        }
        else if ((user == "desculpa" || user == "dicupa" || user == "mal" || user == "perdao" || user == "sorry") && secretvalor2 == true)
        {
            cout << "TU JA PEDIU PERDAO RAPAZ!\nvou deletar essa mensagem agora...\n";
            Sleep(2000);
            system("cls");
            secretvalor2 = false;
            secretvalor3 = true;
        }
        else if ((user == "desculpa" || user == "dicupa" || user == "mal" || user == "perdao" || user == "sorry" || user == "ok" || user == "okay") && secretvalor3 == true)
        {
            cout << "...\n";
            Sleep(1000);
            cout << "Quer esquecer isso nao?\nvou apagar (DENOVO)\n";
            Sleep(2000);
            system("cls");
            secretvalor3 = false;
        }
        else if (user == "show.defscript*")
        {
            if (defscript.empty())
            {
                cout << "Nadinha...\n";
            }
            else
            {
                cout << defscript << "\n";
            }
        }
        else if (user == "show.defscriptjava*")
        {
            if (defscriptJAVA.empty())
            {
                cout << "Nadinha...\n";
            }
            else
            {
                cout << defscriptJAVA << "\n";
            }
        }
        else if (user == "show.defscriptcpp*")
        {
            if (defscriptCPP.empty())
            {
                cout << "Nadinha...\n";
            }
            else
            {
                cout << defscriptCPP << "\n";
            }
        }
        else if (user == "show.defscriptc*")
        {
            if (defscriptC.empty())
            {
                cout << "Nadinha...\n";
            }
            else
            {
                cout << defscriptCPP << "\n";
            }
        }
        else if (user == "show.defscriptpython*")
        {
            if (defscriptPYTHON.empty())
            {
                cout << "Nadinha...\n";
            }
            else
            {
                cout << defscriptPYTHON << "\n";
            }
        }
        else if (user == "show.defscripthtml*")
        {
            if (defscriptHTML.empty())
            {
                cout << "Nadinha...\n";
            }
            else
            {
                cout << defscriptHTML << "\n";
            }
        }
        else if (user == "show.defscripthtm*")
        {
            if (defscriptHTM.empty())
            {
                cout << "Nadinha...\n";
            }
            else
            {
                cout << defscriptHTM << "\n";
            }
        }
        else if (user == "show.defscriptasm*")
        {
            if (defscriptASM.empty())
            {
                cout << "Nadinha...\n";
            }
            else
            {
                cout << defscriptASM << "\n";
            }
        }
        else if (user == "show.defapp*")
        {
            if (defapp.empty())
            {
                cout << "Nadinha...\n";
            }
            else
            {
                cout << defapp << "\n";
            }
        }
        else if (user == "show.disco*")
        {
            if (disco.empty())
            {
                cout << "Nadinha...\n";
            }
            else
            {
                cout << disco << "\n";
            }
        }
        else if (user == "show.secretvalor*")
        {
            if (secretvalor == false)
            {
                cout << "false\n";
            }
            else
            {
                cout << "true" << "\n";
            }
        }
        else if (user == "show.secretvalor2*")
        {
            if (secretvalor2 == false)
            {
                cout << "false\n";
            }
            else
            {
                cout << "true" << "\n";
            }
        }
        else if (user == "show.secretvalor3*")
        {
            if (secretvalor3 == false)
            {
                cout << "false\n";
            }
            else
            {
                cout << "true" << "\n";
            }
        }
        else if (user == "show.memoriaasm*")
        {
            if (memoriaasm == false)
            {
                cout << "false\n";
            }
            else
            {
                cout << "true" << "\n";
            }
        }
        else if (user == "show.user*")
        {
            cout << "nao\n";
        }
        else if (user == "show.caminho*" || user == "show.path*")
        {
            cout << buf << "\n";
        }
        else if (user == "version.python*")
        {
            system("python --version");
        }
        else if (user == "version.cpp*" || user == "version.c++")
        {
            system("g++ --version");
        }
        else if (user == "version.c*")
        {
            system("gcc --version");
        }
        else if (user == "version.java.all*")
        {
            system("java --version");
            system("javac --version");
        }
        else if (user == "version.javac*")
        {
            system("javac --version");
        }
        else if (user == "version.java*")
        {
            system("java --version");
        }
        else if (user == "other.cmd*")
        {
            cout << "Cpp:/CMD>";
            getline(cin, othercmd);
            if (!system(othercmd.c_str()) == 0)
            {
                cout << "Erro!\n";
            }
        }
        else if (user == "other.cmd-loop*")
        {
            cout << "Digite 'exit' para sair.\n";
            while (true)
            {
                cout << "Cpp:/CMD>";
                getline(cin, othercmd2);
                if (!system(othercmd2.c_str()) == 0)
                {
                    cout << "Erro!\n";
                }
                if (othercmd2 == "exit")
                {
                    cout << "Saindo...\n";
                    break;
                }
            }
        }
        else if (user.find("other.cmd-diret*>") == 0)
        {
            string othercmddiret = user.substr(17);
            system(othercmddiret.c_str());
        }
        else if (user.find("other.cmd-diret*> ") == 0)
        {
            string othercmddiret = user.substr(18);
            system(othercmddiret.c_str());
        }
        else if (user == "deus")
        {
            cout << "Deus = vida.\n";
            cout << "Deus = amor.\n";
            cout << "Deus = grande.\n";
            cout << "Deus = bom.\n";
            cout << "Deus = fiel.\n";
            cout << "Deus = TUDO.\n";
        }
        else if (user == "credits")
        {
            cout << "Criador: Thiago Bel\n";
            cout << "IDE: Visual Studio Code\n";
            cout << "Linguagem de programacao: C++\n";
            cout << "Criador de tudo: Deus\n";
        }
        else if (user == "legal")
        {
            cout << ":)\n";
        }
        else if (user == "ola" || user == "oi")
        {
            cout << "Ola!\n";
        }
        else if (user == "hello" || user == "hi")
        {
            cout << "Hello!\n";
        }
        else if (user == "hola")
        {
            cout << "Hola!\n";
        }
        else if (user == "salut")
        {
            cout << "Salut!\n";
        }
        else if (user.find("cpp ") == 0)
        {
            string cppnome = user.substr(4);

            string rodarcppnome = "g++ " + cppnome + ".cpp -o " + cppnome + ".exe\n";
            string rodarcppnome2 = cppnome + ".exe\n";

            system(rodarcppnome.c_str());
            system(rodarcppnome2.c_str());
        }
        else if (user.find("java ") == 0)
        {
            string javanome = user.substr(5);

            string rodarjavanome = "javac " + javanome + ".java";
            string rodarjavanome2 = "java " + javanome;

            system(rodarjavanome.c_str());
            system(rodarjavanome2.c_str());
        }
        else if (user.find("python ") == 0)
        {
            string pynome = user.substr(7);

            string rodarpy = "python " + pynome + ".py";

            system(rodarpy.c_str());
        }
        else if (user.find("py ") == 0)
        {
            string pynome = user.substr(3);

            string rodarpy = "python " + pynome + ".py";

            system(rodarpy.c_str());
        }
        else if (user.find("c ") == 0)
        {
            string cnome = user.substr(2);

            string rodarc = "gcc " + cnome + ".c -o " + cnome + ".exe";
            string rodarc2 = cnome + ".exe";

            system(rodarc.c_str());
            system(rodarc2.c_str());
        }
        else if (user.find("html ") == 0)
        {
            string htmlnome = user.substr(5);

            string rodarhtml = "start " + htmlnome + ".html";

            system(rodarhtml.c_str());
        }
        else if (user.find("htm ") == 0)
        {
            string htmnome = user.substr(4);

            string rodarhtm = "start " + htmnome + ".htm";

            system(rodarhtm.c_str());
        }
        else if (user.find("system ") == 0)
        {
            string namesys = user.substr(7);

            ifstream sistemaAR(namesys + ".bb.txt");

            if (sistemaAR.is_open())
            {
                string linhac;
                while (getline(sistemaAR, linhac))
                {
                    if (!linhac.empty())
                    {
                        if (linhac.find("print: ") == 0)
                        {
                            cout << linhac.substr(7) << endl;
                        }
                        else
                        {
                            system(linhac.c_str());
                        }
                    }
                }
            }
            else
            {
                cout << "Erro ao abrir o arquivo: " << namesys << ".bb.txt\n";
            }
        }
        else if (user == "minecraft")
        {
            cout << "Voce joga? eu tambem :D\n";
        }
        else if (user == "roblox")
        {
            cout << "Voce joga? eu tambem :D\n";
        }
        else if (user == "vscode")
        {
            cout << "Criei o basicbasic nesse app :D\n";
        }
        else if (user == "windows")
        {
            cout << "<3\n";
        }
        else if (user == "beijo")
        {
            cout << "Beijo num terminal? que fofo :3\n";
        }
        else if (user == "brasil")
        {
            cout << "FUTEBOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOL!\n";
        }
        else if (user == "'help'" && secretmemeaspas == true) {
            cout << "Rapaz...\n";
            cout << "Eu acho que eh sem aspas\n";
        }
        else
        {
            cout << "Inventou comando agora? >:(" << endl;
            secretvalor = true;
            secretmeme++;
        }

        if (secretmeme >= 3)
        {
            cout << "Ta complicado ai? escreve 'help' :)\n";
            secretmemeaspas = true;
            secretmeme = 0;
        }
    }
    return 0;
}