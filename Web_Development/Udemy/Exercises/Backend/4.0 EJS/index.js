import express from "express";
import ejs from "ejs";
import {dirname} from "path";
import {fileURLToPath} from "url";

const app = express();
const port = 3000;
const __dirname = dirname(fileURLToPath(import.meta.url));

const today = new Date();
// var day = today.getDay();
var day = 0;
var msg = '';

function getToday (req, res, next) {
    if(day === 6 || day === 0) {
        msg = `Hey! Enjoy!`
    } else {
        msg = `Hey! Work Hard!`
    }

    next();
}

app.use(getToday);

app.get("/", (req, res) => {
    res.render('index.ejs', {
        message: msg
    });
});

app.listen(port, () => {
    console.log(`Listening on port:${port}`);
})