var randomNumber1 = Math.floor((Math.random() * 6) + 1);
var randomNumber2 = Math.floor((Math.random() * 6) + 1); 

//Changing dice1 img
switch(randomNumber1) {
    case 1:
        document.getElementsByClassName("img1")[0].src = "./images/dice1.png";
        break;
    case 2:
        document.getElementsByClassName("img1")[0].src = "./images/dice2.png";
        break;
    case 3:
        document.getElementsByClassName("img1")[0].src = "./images/dice3.png";
        break;
    case 4:
        document.getElementsByClassName("img1")[0].src = "./images/dice4.png";
        break;
    case 5:
        document.getElementsByClassName("img1")[0].src = "./images/dice5.png";
        break;
    case 6:
        document.getElementsByClassName("img1")[0].src = "./images/dice6.png";
        break;
    defualt:
        document.getElementsByClassName("img1")[0].src = "./images/dice1.png";
        break;
}

//changing dice2 img
switch(randomNumber2) {
    case 1:
        document.getElementsByClassName("img2")[0].src = "./images/dice1.png";
        break;
    case 2:
        document.getElementsByClassName("img2")[0].src = "./images/dice2.png";
        break;
    case 3:
        document.getElementsByClassName("img2")[0].src = "./images/dice3.png";
        break;
    case 4:
        document.getElementsByClassName("img2")[0].src = "./images/dice4.png";
        break;
    case 5:
        document.getElementsByClassName("img2")[0].src = "./images/dice5.png";
        break;
    case 6:
        document.getElementsByClassName("img2")[0].src = "./images/dice6.png";
        break;
    defualt:
        document.getElementsByClassName("img2")[0].src = "./images/dice1.png";
        break;
}

//Changing the h1 to winner name
if(randomNumber1 > randomNumber2) {
    document.getElementsByTagName("h1")[0].innerHTML = "Player 1 is the winner";
} else if(randomNumber1 < randomNumber2) {
    document.getElementsByTagName("h1")[0].innerHTML = "Player 2 is the winner";
} else {
    document.getElementsByTagName("h1")[0].innerHTML = "Draw! Refresh again";
}