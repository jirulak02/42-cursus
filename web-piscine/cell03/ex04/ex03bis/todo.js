$(document).ready(() => {
  const todoArray = document.cookie ? JSON.parse(document.cookie) : [];

  $("button").on("click", promptNew);

  todoArray.forEach((todo) => {
    addTodo(todo);
  });

  function addTodo(newTodo) {
    const newTodoDiv = $("<div></div>").text(newTodo).on("click", deleteTodo);
    $("#ft_list").prepend(newTodoDiv);
  }

  function deleteTodo() {
    if (confirm("Are you sure you want to delete this todo?")) {
      $(this).remove();
      todoArray.splice(todoArray.indexOf($(this).text()), 1);
      document.cookie = JSON.stringify(todoArray);
    }
  }

  function promptNew() {
    const newTodo = prompt("Enter a new todo");
    if (newTodo) {
      addTodo(newTodo);
      todoArray.push(newTodo);
      document.cookie = JSON.stringify(todoArray);
    }
  }
});
