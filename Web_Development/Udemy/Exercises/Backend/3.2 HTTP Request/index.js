import express from "express";

const app = express();
const port = 3000;

app.get('/', (req, res) => {
    res.send(`<h1>Hello World</h1>`);
})

app.get('/contact', (req, res) => {
    res.status(404).send(`Resource not found.`)
})

app.get('/about', (req, res) => {
    res.send(`Mind your own business.`)
})

app.listen(port, ()=>{
    console.log(`Sever started on ${port}`);
})