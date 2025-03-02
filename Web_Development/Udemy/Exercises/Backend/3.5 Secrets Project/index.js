//To see how the final website should work, run "node solution.js".
//Make sure you have installed all the dependencies with "npm i".
//The password is ILoveProgramming
import express from "express";
import { dirname } from "path";
import { fileURLToPath } from "url";
import morgan from "morgan";
import bodyParser from "body-parser";

const __dirname = dirname(fileURLToPath(import.meta.url));
const app = express();
const port = 3000;
var password = "";

app.use(morgan('tiny'));
app.use(bodyParser.urlencoded({extended: true}));

app.get("/", (req, res) => {
    if(password != "") {
        res.sendFile(__dirname + "/public/index.html");
    } else {
        res.sendFile(__dirname + "/public/register.html");
    }
});

app.post("/register", (req,res) => {
    password = req.body['password'];
    res.redirect('/');
});

app.post("/check", (req, res) => {
    console.log('Received password:', req.body['password']);
    console.log('Expected password:', password);
    if(req.body['password'] == password) {
        res.sendFile(__dirname + "/public/secret.html");
    } else {
        res.sendFile(__dirname + "/public/index.html");
    }
});

app.listen(port, () => {
    console.log(`Listening on port:${port}`);
});