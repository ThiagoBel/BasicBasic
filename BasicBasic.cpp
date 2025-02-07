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
    string version = "0.0.1";

    bool secretvalor = false;
    bool secretvalor2 = false;
    bool secretvalor3 = false;
    bool secretmemeaspas = false;

    bool memoriaasm = false;

    int secretmeme;

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
            cout << "show.path* - Mostra o caminho atual.\n";
            cout << "---------------------------\n";
            cout << "git commit - Registra alteracoes no repositorio local.\n";
            cout << "git status - Mostra o estado atual dos arquivos no repositorio.\n";
            cout << "git clone - Cria uma copia local de um repositorio remoto.\n";
            cout << "git push - Envia alteracoes locais para o repositorio remoto.\n";
            cout << "---------------------------\n";
            cout << "version.bb* - Mostrar a versao do BasicBasic.\n";
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
            cout << "cmd* ... - Imita o Prompt De Comandos (CMD) mas é direto. (2.0)\n";
            cout << "---------------------------\n";
            cout << "cpp ... - Compila o C++(Cria um arquivo .exe).\n";
            cout << "c ... - Compila o C(Cria um arquivo .exe).\n";
            cout << "py ... - Compila o Python.\n";
            cout << "java ... - Compila o Java(Cria um arquivo .class).\n";
            cout << "html ... - Compila o HTML.\n";
            cout << "htm ... - Compila o HTM.\n";
            cout << "js ... - Compila o Javascript (ele cria um arquivo index.html para rodar).\n";
            cout << "javascript ... - Compila o Javascript (ele cria um arquivo index.html para rodar).\n";
            cout << "---------------------------\n";
            cout << "new.cpp ... - Cria um arquivo de c++\n";
            cout << "new.c ... - Cria um arquivo de c\n";
            cout << "new.py ... - Cria um arquivo de Python\n";
            cout << "new.java ... - Cria um arquivo de Java\n";
            cout << "new.js ... - Cria um arquivo de Javascript\n";
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
            cout << "BasicBasic: " << version << "\n";
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
        else if (user.find("cmd* ") == 0)
        {
            string rodarcmdter = user.substr(5);

            system(rodarcmdter.c_str());
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
        else if (user.find("js ") == 0)
        {
            string filenamejs = user.substr(3);

            ifstream jsarquivo(filenamejs + ".js");
            ofstream htmlarquivo("indexjsjs.html");

            htmlarquivo << "<script>\n"
                        << jsarquivo.rdbuf() << "\n</script>";
            htmlarquivo.close();
            system("start indexjsjs.html");
        }
        else if (user.find("javascript ") == 0)
        {
            string filenamejss = user.substr(11);

            ifstream jssarquivo(filenamejss + ".js");
            ofstream htmllarquivo("indexjsjs.html");

            htmllarquivo << "<script>\n"
                         << jssarquivo.rdbuf() << "\n</script>";
            htmllarquivo.close();
            system("start indexjsjs.html");
        }
        else if (user.find("asm ") == 0)
        {
            if (memoriaasm == false)
            {
                string asmnome = user.substr(4);
                string asmreal = asmnome + ".asm";
                cout << "Oloco\n";
                Sleep(1500);
                cout << "Desculpa";
                Sleep(1500);
                cout << ", eh que ninguem nunca me pediu para compilar assembly...\n";
                Sleep(1500);
                cout << "Tá...";
                Sleep(1500);
                cout << " voce quer compilar o script " << asmreal << "\n";
                Sleep(1500);
                cout << "compilando...\n";
                Sleep(1500);
                cout << "erro\n";
                Sleep(1500);
                cout << "Vamos denovo...\n";
                Sleep(1500);
                cout << "erro\n";
                Sleep(1500);
                cout << "Eita, esqueci que nao consigo rodar assembly :(\n";
                Sleep(1500);
                cout << "Desculpa... :(\n";
                memoriaasm = true;
            }
            else
            {
                cout << "Nao consigo compilar, desculpa :(\n";
            }
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
        else if (user == "'help'" && secretmemeaspas == true)
        {
            cout << "Rapaz...\n";
            cout << "Eu acho que eh sem aspas\n";
        }
        else if (user.find("new.cpp ") == 0 || user.find("new.c++") == 0)
        {
            string newcpp = user.substr(8);
            ofstream arnovocpp(newcpp + ".cpp");
            if (arnovocpp.is_open())
            {
                arnovocpp << "#include <iostream>\n";
                arnovocpp << "using namespace std;\n";
                arnovocpp << "\n";
                arnovocpp << "int main() {\n";
                arnovocpp << "  cout << \"Hello, World!\" << endl;\n";
                arnovocpp << "  return 0;\n";
                arnovocpp << "}";
                arnovocpp.close();
                cout << "Sucesso!\n";
            }
            else
            {
                cout << "Erro!\n";
            }
        }
        else if (user.find("new.py ") == 0)
        {
            string newpy = user.substr(7);
            ofstream arnovopy(newpy + ".py");
            if (arnovopy.is_open())
            {
                arnovopy << "print(\"Hello, World!\")";
                arnovopy.close();
                cout << "Sucesso!\n";
            }
            else
            {
                cout << "Erro!\n";
            }
        }
        else if (user.find("new.python ") == 0)
        {
            string newpyy = user.substr(11);
            ofstream arnovopyy(newpyy + ".py");
            if (arnovopyy.is_open())
            {
                arnovopyy << "print(\"Hello, World!\")";
                arnovopyy.close();
                cout << "Sucesso!\n";
            }
            else
            {
                cout << "Erro!\n";
            }
        }
        else if (user.find("new.js ") == 0)
        {
            string newjs = user.substr(7);
            ofstream arnovopjs(newjs + ".js");
            if (arnovopjs.is_open())
            {
                arnovopjs << "console.log(\"Hello, World!\");";
                arnovopjs.close();
                cout << "Sucesso!\n";
            }
            else
            {
                cout << "Erro!\n";
            }
        }
        else if (user.find("new.java ") == 0)
        {
            string newjava = user.substr(9);
            ofstream arnovopjava(newjava + ".java");
            if (arnovopjava.is_open())
            {
                arnovopjava << "public class " << newjava << "{\n";
                arnovopjava << "    public static void main(String[] args) {\n";
                arnovopjava << "        System.out.println(\"Hello, World!\");\n";
                arnovopjava << "    }\n";
                arnovopjava << "}";
                arnovopjava.close();
                cout << "Sucesso!\n";
            }
            else
            {
                cout << "Erro!\n";
            }
        }
        else if (user.find("new.c ") == 0)
        {
            string newc = user.substr(6);
            ofstream arnovoc(newc + ".c");
            if (arnovoc.is_open())
            {
                arnovoc << "#include <stdio.h>\n";
                arnovoc << "\n";
                arnovoc << "int main() {\n";
                arnovoc << "    printf(\"Hello, World!\");\n";
                arnovoc << "    return 0;\n";
                arnovoc << "}";
                arnovoc.close();
                cout << "Sucesso!\n";
            }
            else
            {
                cout << "Erro!\n";
            }
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