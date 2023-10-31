const list = document.querySelector("#ft_list");
const todoArray = document.cookie ? JSON.parse(document.cookie) : [];

todoArray.forEach((todo) => {
  addTodo(todo);
});

function addTodo(newTodo) {
  const newTodoDiv = document.createElement("div");
  newTodoDiv.innerHTML = newTodo;
  newTodoDiv.addEventListener("click", deleteTodo);
  list.insertBefore(newTodoDiv, list.firstChild);
}

function deleteTodo() {
  if (confirm("Are you sure you want to delete this todo?")) {
    this.parentElement.removeChild(this);
    todoArray.splice(todoArray.indexOf(this.innerHTML), 1);
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
