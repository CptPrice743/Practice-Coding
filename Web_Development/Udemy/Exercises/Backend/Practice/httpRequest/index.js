import express from "express";
const app = express();

const port = 3000;

app.get("/about", (req, res) => {
    console.log(req);
    res.send(`<h1> Hello, World! </h1>`);
    
})

app.listen(port, () => {
    console.log(`Server has started on port:${port}`);
});