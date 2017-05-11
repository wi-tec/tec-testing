(function($) {

// TOGGLES
//----------------------------------------------

// Main navigation - Toggle
//------------------------------
Drupal.behaviors.mainNavToggle = {
  attach: function(context, settings) {
    $(".l-navigation h2").click(function() {
      $(".l-navigation ul.menu").slideToggle();
    });
  }
};

// PLACEHOLDER - SEARCH FORM
//----------------------------------------------
$(function() {
  $(".search-form .form-text").attr("value", (Drupal.t('Search')));
  var text = (Drupal.t('Search'));
  $(".search-form .form-text").focus(function() {
    if($(this).attr("value") == text) $(this).attr("value", "");
  });
  $(".search-form .form-text").blur(function() {
    if($(this).attr("value") == "") $(this).attr("value", text);
  });
});


// PLACEHOLDER - SEARCH BLOCK FORM
//----------------------------------------------
$(function() {
  $("#search-block-form .form-text").attr("value", (Drupal.t('Search')));
  var text = (Drupal.t('Search'));
  $("#search-block-form .form-text").focus(function() {
    if($(this).attr("value") == text) $(this).attr("value", "");
  });
  $("#search-block-form .form-text").blur(function() {
    if($(this).attr("value") == "") $(this).attr("value", text);
  });
});

// PLACEHOLDER - SEARCH BLOCK FORM
//----------------------------------------------
$(function() {
  $(".views-widget-filter-keys .form-text").attr("placeholder", (Drupal.t('Search')));
  var text = (Drupal.t('Search'));
  $(".views-widget-filter-keys .form-text").focus(function() {
    if($(this).attr("placeholder") == text) $(this).attr("placeholder", "");
  });
  $(".views-widget-filter-keys .form-text").blur(function() {
    if($(this).attr("placeholder") == "") $(this).attr("placeholder", text);
  });
});

// EQUAL HEIGHTS
//----------------------------------------------
window.equalHeight = function(element, context) {
  jQuery(context).each(function() {
    var tallest = 0;
    jQuery(element, this).each(function() {
      jQuery(this).css('height', 'auto');
      if (jQuery(this).outerHeight() > tallest) {
        tallest = jQuery(this).outerHeight();
      }
    });
    jQuery(element, this).each(function() {
      jQuery(this).css('height', tallest + 'px');
    });
  })
}
window.applyEqualHeight = function(element, context) {
  jQuery(window).load(function() {
    equalHeight(element, context);
  })
}

Drupal.behaviors.equalHeights = {
  attach: function(context, settings) {
    applyEqualHeight('.views-row', '.view-directory-projects');
  }
};

// ACCORDION
//----------------------------------------------
Drupal.behaviors.accordion = {
  attach: function(context, settings) {
    $(".accordion-wrapper").addClass("myaccordion-processed").each(function() {
      $(this).find(".accordion-body").hide();
      $(this).find(".accordion-title").click(function(){
        if($(this).next(".accordion-body").is(":visible")) {
          $(this).next(".accordion-body").slideUp();
          $(this).removeClass("active");
        } else {
          $(".accordion-wrapper").find(".accordion-body:visible").slideUp();
          $(".accordion-wrapper").find(".active").removeClass("active");
          $(this).next(".accordion-body").slideDown("fast");
          $(this).addClass("active");
        }
      });
    });
  }
};

Drupal.behaviors.accordion2 = {
  attach: function(context, settings) {
    $(".accordion-wrapper2").addClass("myaccordion-processed").each(function() {
      $(this).find(".accordion-body").hide();
      $(this).find(".accordion-title").click(function() {
        if($(this).next(".accordion-body").is(":visible")) {
          $(this).next(".accordion-body").slideUp();
          $(this).removeClass("active");
        } else {
          $(".accordion-wrapper2").find(".accordion-body:visible").slideUp();
          $(".accordion-wrapper2").find(".active").removeClass("active");
          $(this).next(".accordion-body").slideDown("fast");
          $(this).addClass("active");
        }
      });
    });
  }
};

Drupal.behaviors.accordion3 = {
  attach: function(context, settings) {
    $(".accordion-wrapper3").addClass("myaccordion-processed").each(function() {
      $(this).find(".accordion-body").hide();
      $(this).find(".accordion-title").click(function(){
        if($(this).next(".accordion-body").is(":visible")) {
          $(this).parent().find(".accordion-body").slideUp();
          $(this).removeClass("active");
        } else {
          $(".accordion-wrapper3").find(".accordion-body:visible").slideUp();
          $(".accordion-wrapper3").find(".active").removeClass("active");
          $(this).parent().find(".accordion-body").slideDown("fast");
          $(this).addClass("active");
        }
      });
    });
  }
};

Drupal.behaviors.accordion4 = {
  attach: function(context, settings) {
    $(".accordion-wrapper4").addClass("myaccordion-processed").each(function() {
      $(this).find(".accordion-body").hide();
      $(this).find(".accordion-title").click(function(){
        if($(this).next(".accordion-body").is(":visible")) {
          $(this).parent().find(".accordion-body").slideUp();
          $(this).removeClass("active");
        } else {
          $(".accordion-wrapper4").find(".accordion-body:visible").slideUp();
          $(".accordion-wrapper4").find(".active").removeClass("active");
          $(this).parent().find(".accordion-body").slideDown("fast");
          $(this).addClass("active");
        }
      });
    });
  }
};

Drupal.behaviors.accordion5 = {
  attach: function(context, settings) {
    $(".accordion-style .paragraphs-items-field-parg-additional-info").addClass("myaccordion-processed").each(function() {
      $(this).find(".field-text-paragraph-body").hide();
      $(this).find(".field-text-paragraph-title").click(function(){
        if($(this).next(".field-text-paragraph-body").is(":visible")) {
          $(this).parent().find(".field-text-paragraph-body").slideUp();
          $(this).removeClass("active");
        } else {
          $(".accordion-style .paragraphs-items-field-parg-additional-info").find(".field-text-paragraph-body:visible").slideUp();
          $(".accordion-style .paragraphs-items-field-parg-additional-info").find(".active").removeClass("active");
          $(this).parent().find(".field-text-paragraph-body").slideDown("fast");
          $(this).addClass("active");
        }
      });
    });
  }
};

// MASONRY
//----------------------------------------------
// Drupal.behaviors.masonry = {
//   attach: function(context, settings) {

//     $(".v-directories .view-content").masonry({
//       itemSelector: '.group',
//       gutter: 20
//     });

//     // $(".node-type-landing .l-container").masonry({
//     //   itemSelector: '.pane-custom',
//     //   gutter: 20
//     // });

//   }
// };

// RESPONSIVE SIDEBAR MENU
//----------------------------------------------
$(function() {

  var botonContainer = $('<div/>', {
    'class' : 'boton_menu_responsive'
  });
  var botonPuntos1 = $('<div/>', {
    'class' : 'square'
  });
  var botonPuntos2 = $('<div/>', {
    'class' : 'square'
  });
  var botonPuntos3 = $('<div/>', {
    'class' : 'square'
  });
  var modalBackground = $('<div/>', {
    'class' : 'modal_background'
  });

  $(".l-sidebar-first .menu-block-wrapper").append(botonContainer);
  $(".l-sidebar-first .boton_menu_responsive").append(botonPuntos1, botonPuntos2, botonPuntos3);
  $(".l-sidebar-first").append(modalBackground);

  $(".l-sidebar-first").find(".boton_menu_responsive").click(function() {
    if($(".l-sidebar-first .menu-block-wrapper").is(".active")) {
      $(".l-sidebar-first .boton_menu_responsive").removeClass("active");
      $(".l-sidebar-first .menu-block-wrapper").removeClass("active");
      $(".l-sidebar-first .modal_background").removeClass("active");
    } else {
      $(".l-sidebar-first .boton_menu_responsive").addClass("active");
      $(".l-sidebar-first .menu-block-wrapper").addClass("active");
      $(".l-sidebar-first .modal_background").addClass("active");
    }
  });

  $(".l-sidebar-first").find(".modal_background").click(function() {
      $(".l-sidebar-first .boton_menu_responsive").removeClass("active");
      $(".l-sidebar-first .menu-block-wrapper").removeClass("active");
      $(".l-sidebar-first .modal_background").removeClass("active");
  });

});

// RESPONSIVE MAIN MENU
//----------------------------------------------
$(function() {
  var modalBackground = $('<div/>', {
    'class' : 'modal_background'
  });
  $(".l-page").prepend(modalBackground);

  $(".l-page").find(".modal_background").click(function() {
    $(".nav-main-superfish .sf-accordion.sf-expanded").removeClass("sf-expanded");
    $(".nav-main-superfish #superfish-1-toggle").removeClass("sf-expanded");
    $(".nav-main-superfish .sf-accordion").addClass("sf-hidden");
    $(".l-page .modal_background").removeClass("active");
    $(".l-top-bar").css({"position": "static", "z-index": "initial"});
    $(".l-header").css({"position": "static", "z-index": "initial"});
  });
});

$(function() {
  $(".nav-main-superfish").on("click", "#superfish-1-toggle", function() {
    if($(".nav-main-superfish .sf-accordion").is(".sf-expanded")) {
      $(".l-page > .modal_background").addClass("active");
      $(".l-top-bar").css({"position": "relative", "z-index": "4"});
      $(".l-header").css({"position": "relative", "z-index": "4"});
    } else {
      $(".l-page > .modal_background").removeClass("active");
      $(".l-top-bar").css({"position": "static", "z-index": "initial"});
      $(".l-header").css({"position": "static", "z-index": "initial"});
    }
  });
});

$(function() {
  var searchToggle = $('<div/>', {
    'id' : 'search-toggle'
  });
  $(".l-top-bar").prepend(searchToggle);

  $(".l-top-bar").find("#search-toggle").click(function() {
    $(".l-top-bar #search-block-form").addClass("active");
    $(".l-top-bar #search-toggle").addClass("active");
    $(".l-top-bar .b-google-translate").addClass("hidden");
    $(".l-top-bar .b-lang-switch").addClass("hidden");
    $(".l-top-bar #search-block-form .form-search").focus();
  });
  $(".l-top-bar").find("#search-block-form .form-search").focusout(function() {
    $(".l-top-bar #search-block-form").removeClass("active");
    $(".l-top-bar #search-toggle").removeClass("active");
    $(".l-top-bar .b-google-translate").removeClass("hidden");
    $(".l-top-bar .b-lang-switch").removeClass("hidden");
  });
});

})(jQuery);
