from flask import Flask
import subprocess

app = Flask(__name__)

@app.route("/abrir")
def abrir_app():
    subprocess.Popen(["BasicBasic.exe"], shell=True)  # Altere o caminho correto
    return "App iniciado!"

if __name__ == "__main__":
    app.run(host="0.0.0.0", port=5000)
