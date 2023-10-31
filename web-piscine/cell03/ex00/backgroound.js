let color = "white";

function changeBackground() {
  const body = document.querySelector("body");

  if (color === "white") {
    body.style.backgroundColor = "green";
    color = "green";
  } else if (color === "green") {
    body.style.backgroundColor = "brown";
    color = "brown";
  } else {
    body.style.backgroundColor = "white";
    color = "white";
  }
}
