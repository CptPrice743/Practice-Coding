const fs = require("fs");

fs.writeFile("Hey.txt", "Hey Node.js", (err) => {
    if (err) throw err;
    console.log("The file has been saved!");
});

const fs = require("fs");

fs.readFile("message.txt", 'utf8', (err, data) => {
    if (err) throw err;
    console.log(data);
})