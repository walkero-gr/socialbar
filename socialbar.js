(function ($) {
Drupal.behaviors.socialbar = {};
Drupal.behaviors.socialbar.attach = function(context, settings) {
	var prv_click = "";
	
	var winheight = jQuery(window).height();
	var winwidth = jQuery(window).width();	
	var popupwidth = 0.6;
	var popupheight = 0.6;
	
	var leftmargin = (winwidth/2) - ((winwidth*popupwidth)/2);
	var topmargin = (winheight/2) - ((winheight*popupheight)/2);
	
	jQuery('#block-socialbar-socialbar-block').css('top', topmargin);
	/*
	jQuery('#block-socialbar-socialbar-block').css('top', topmargin)
	.mouseover(function(e) {
	})
	.mouseout(function(e) {
		var container = jQuery('#block-socialbar-socialbar-block');
		if (!container.is(e.target) && (container.has(e.target).length === 0)) {
		}
	});
	*/
	
	jQuery('#block-socialbar-socialbar-block .socialbar_button').click(function(){
		var item_clicked = jQuery(this).data('sc');
       	if(item_clicked == prv_click) {
       		prv_click = "";
			close_socialbar();
       	} else {
	       	prv_click = item_clicked;
	       	
			jQuery('#block-socialbar-socialbar-block .socialbar_content .socialbar_item').hide();
			jQuery('#block-socialbar-socialbar-block .socialbar_content .item_' + item_clicked).show();
			
			jQuery('#block-socialbar-socialbar-block').animate({width: '360px'}, 500, function() {
				jQuery('#block-socialbar-socialbar-block .close_button').show();
				if(!jQuery('#block-socialbar-socialbar-block .socialbar_content').hasClass('opened'))
					jQuery('#block-socialbar-socialbar-block .socialbar_content').addClass('opened');
			});
		}
	});
	
	jQuery('#block-socialbar-socialbar-block .close_button').click(function(){
		close_socialbar();
	});
	
	function close_socialbar() {
        jQuery('#block-socialbar-socialbar-block .close_button').hide();
		if(jQuery('#block-socialbar-socialbar-block .socialbar_content').hasClass('opened')) {
			jQuery('#block-socialbar-socialbar-block .socialbar_content').removeClass('opened');
			//jQuery('#block-socialbar-socialbar-block .socialbar_content .socialbar_item').hide();
		}
		jQuery('#block-socialbar-socialbar-block').animate({width: '50px'}, 200, function() {});
    }
	
};
})(jQuery);