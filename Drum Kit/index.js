// for(var i=1;i<=4;i++)
// {

//     document.querySelectorAll(".drum")[i-1].addEventListener("click",sound);
//     function sound(){
//         var str="sounds/tom-"+i+".mp3";
//         console.log(str);
//         var audio= new Audio(str);
//         audio.play();
//     }

// }

// button clicks
var n = document.querySelectorAll(".drum").length,
  i;
for (i = 0; i < n; i++) {
  document.querySelectorAll(".drum")[i].addEventListener("click", function () {
    var buttonHtml = this.innerHTML;
    playSounds(buttonHtml);
    buttonAnimations(buttonHtml);
  });
}

// key board press
document.addEventListener("keydown", function (event) {
  playSounds(event.key);
  buttonAnimations(event.key);
}); //cant pass arguments , function has to be anonymous

//playSounds
function playSounds(key) {
  switch (key) {
    case "w":
      var audio = new Audio("sounds/tom-1.mp3");
      audio.play();
      break;
    case "s":
      var audio = new Audio("sounds/tom-3.mp3");
      audio.play();
      break;
    case "a":
      var audio = new Audio("sounds/tom-2.mp3");
      audio.play();
      break;
    case "d":
      var audio = new Audio("sounds/tom-4.mp3");
      audio.play();
      break;
    case "j":
      var audio = new Audio("sounds/snare.mp3");
      audio.play();
      break;
    case "k":
      var audio = new Audio("sounds/crash.mp3");
      audio.play();
      break;
    case "l":
      var audio = new Audio("sounds/kick-bass.mp3");
      audio.play();
      break;
  }
}
//animation
function buttonAnimations(key) {
  document.querySelector("." + key).classList.add("pressed");
  setTimeout(function () {
    document.querySelector("." + key).classList.remove("pressed");
  }, 100);
}
