  jQuery(document).ready(function(){
    var lastClicked = null;
    jQuery(".thumbnail").on("click", function(){
      if (lastClicked){
        lastThumnb = lastClicked.parents(".grid-item");
        lastThumnb.removeClass("og-expanded");
        lastThumnb.css("height", "");
        lastThumnb.find(".views-field-nothing").css("height","");
        lastThumnb.find(".views-field-nothing").hide();
      }

      var expandHeight = 1900;
      var deviceWidth = window.innerWidth;

      if (deviceWidth <= 640) expandHeight = 1800;
      else if (deviceWidth>640 && deviceWidth <= 768) expandHeight = 1400;
      else if (deviceWidth>768 && deviceWidth == 1024) expandHeight = 1700;
      else expandHeight = 1900;
      console.log(deviceWidth);
      console.log(expandHeight);

      jQuery(this).parents(".grid-item").addClass("og-expanded");
      jQuery(this).parents(".grid-item").css("height", expandHeight);
      jQuery(this).parents(".grid-item").find(".views-field-nothing").slideDown(400,'swing');
      lastClicked = jQuery(this);
      return false;
    });
    jQuery(".views-field-nothing .project-close").on("click", function() {
      if (lastClicked){
        lastThumnb = lastClicked.parents(".grid-item");
        lastThumnb.find(".views-field-nothing").hide();
        lastThumnb.removeClass("og-expanded");
        lastThumnb.css("height", "");
        lastClicked = null;
      }
    });
  });