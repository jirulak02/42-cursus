$(document).ready(() => {
  let color = "white";

  $("button").on("click", () => {
    if (color === "white") {
      $("body").css("background-color", "green");
      color = "green";
    } else if (color === "green") {
      $("body").css("background-color", "brown");
      color = "brown";
    } else {
      $("body").css("background-color", "white");
      color = "white";
    }
  });
});
