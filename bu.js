Drupal.behaviors.bu = function(context) {
  var e = document.createElement("script");
  e.setAttribute("type", "text/javascript");
  e.setAttribute("src", "http://browser-update.org/update.js");
  document.body.appendChild(e);
}
