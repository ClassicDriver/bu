(function ($) {
  Drupal.behaviors.bu = {
    attach: function (context) {
      if (context == document) {
        var e = document.createElement("script");
        e.setAttribute("type", "text/javascript");
        $buoop = {
          vs: {
            i: Drupal.settings.bu['ie'],
            f: Drupal.settings.bu['firefox'],
            o: Drupal.settings.bu['opera'],
            s: Drupal.settings.bu['safari'],
            n: 10
          },
          onshow: function(infos){
            eval(Drupal.settings.bu['onshow']);
          },
          onclick: function(infos){
            eval(Drupal.settings.bu['onclick']);
          },
          onclose: function(infos){
            eval(Drupal.settings.bu['onclose']);
          },
          reminder: Drupal.settings.bu['reminder'],
          test: Drupal.settings.bu['debug'],
          text: Drupal.settings.bu['text'],
          newwindow: Drupal.settings.bu['blank']
        };
        e.setAttribute("src", "//browser-update.org/update.min.js");
        document.body.appendChild(e);
      }
    }
  }
})(jQuery);
