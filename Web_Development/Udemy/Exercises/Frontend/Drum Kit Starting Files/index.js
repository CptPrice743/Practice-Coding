var pressed;

//Detecting button presses
for (let i = 0; i < document.querySelectorAll(".drum").length; i++) {
    document.querySelectorAll("button")[i].addEventListener('click', function() {

        pressed = this.innerHTML;
        addAnimation(pressed);
        makeSound(pressed);
        
    })
}

document.addEventListener("keydown", function(event) {
    pressed = event.key;
    addAnimation(pressed);
    makeSound(pressed);
    
}) 


function makeSound(key) {
    switch(key) {
        case "w":
                var tom1 = new Audio("./sounds/tom-1.mp3");
                tom1.play();
        break;
        case "a":
            var tom2 = new Audio("./sounds/tom-2.mp3");
            tom2.play();
        break;
        case "s":
            var tom3 = new Audio("./sounds/tom-3.mp3");
            tom3.play();
        break;
        case "d":
            var tom4 = new Audio("./sounds/tom-4.mp3");
            tom4.play();
        break;
        case "j":
            var crash = new Audio("./sounds/crash.mp3");
            crash.play();
        break;
        case "k":
            var kickBass = new Audio("./sounds/kick-bass.mp3");
            kickBass.play();
        break;
        case  "l":
            var snare = new Audio("./sounds/snare.mp3");
            snare.play();
        break;
        default: console.log(buttonInnerHtml);
    }   
}

function addAnimation(currentKey) {
    var activeButton = document.querySelector("." + currentKey);
    activeButton.classList.add("pressed");
    setTimeout(function() {
        activeButton.classList.remove("pressed");
    }, 100);
}