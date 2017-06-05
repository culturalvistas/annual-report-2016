var curScroll = 0;

function bindScroll(target, setting) {
  curScroll = 0;
	if (setting) {
		$(window).on('mousewheel DOMMouseScroll', function (e) {
			var evt = window.event || e;
			var delta = evt.detail ? evt.detail*(-120) : evt.wheelDelta;
			var position = $(target).scrollTop();
			
			if (delta > 0) {
				$(target).scrollTop( $(target).scrollTop() - (Math.abs(delta) / 3) );
			}
			else {
				$(target).scrollTop( $(target).scrollTop() + (Math.abs(delta) / 3) );
			}
			console.log(delta);
			return true;
		}); 
		
	}
	else {
		$(window).off('mousewheel DOMMouseScroll');
	}
}

$(window).load(function () {

  var is_mobile = false;
	
  if( $('.hide-from-md').css('display') == 'block') {
    is_mobile = true;       
  }

	var introductionSlider = jQuery(".introduction").royalSlider({
		keyboardNavEnabled: false,
		addActiveClass: false,
		navigateByClick: false,
		fadeinLoadedSlide:false,
		autoPlay: {
			enabled: false,
		},
		loopRewind: false,
		loop: false,
		allowCSS3: true,
		autoHeight: true,
		autoScaleSlider: false,
		imageScaleMode: 'none',
		imageAlignCenter: false,
		transitionSpeed: 500
	}).data('royalSlider');

	
	var highlightsSlider = jQuery(".highlights").royalSlider({
		keyboardNavEnabled: false,
		slidesSpacing: 0,
		addActiveClass: false,
		navigateByClick: false,
		fadeinLoadedSlide:false,
		autoPlay: {
			enabled: false,
		},
		loopRewind: false,
		loop: false,
		allowCSS3: true,
		autoHeight: true,
		autoScaleSlider: false,
		imageScaleMode: 'none',
		imageAlignCenter: false,
		transitionSpeed: 500
	}).data('royalSlider');

	var eventsSlider = jQuery(".events").royalSlider({
		keyboardNavEnabled: false,
		slidesSpacing: 0,
		addActiveClass: false,
		navigateByClick: false,
		fadeinLoadedSlide:false,
		autoPlay: {
			enabled: false,
		},
		loopRewind: false,
		loop: false,
		allowCSS3: true,
		autoHeight: true,
		autoScaleSlider: false,
		imageScaleMode: 'none',
		imageAlignCenter: false,
		transitionSpeed: 500
	}).data('royalSlider');

	var spotlightSlider1 = jQuery(".spotlight1").royalSlider({
		keyboardNavEnabled: false,
		slidesSpacing: 0,
		addActiveClass: false,
		navigateByClick: false,
		fadeinLoadedSlide:false,
		autoPlay: {
			enabled: false,
		},
		loopRewind: false,
		loop: false,
		allowCSS3: true,
		autoHeight: true,
		autoScaleSlider: false,
		imageScaleMode: 'none',
		imageAlignCenter: false,
		transitionSpeed: 500
	}).data('royalSlider');
	
  if (is_mobile == true) { spotlightSlider1.removeSlide(1); }

	var hostingSlider = jQuery(".hosting").royalSlider({
		keyboardNavEnabled: false,
		slidesSpacing: 0,
		addActiveClass: false,
		navigateByClick: false,
		fadeinLoadedSlide:false,
		autoPlay: {
			enabled: false,
		},
		loopRewind: false,
		loop: false,
		allowCSS3: true,
		autoHeight: true,
		autoScaleSlider: false,
		imageScaleMode: 'none',
		imageAlignCenter: false,
		transitionSpeed: 500
	}).data('royalSlider');

	var spotlightSlider2 = jQuery(".spotlight2").royalSlider({
		keyboardNavEnabled: false,
		slidesSpacing: 0,
		addActiveClass: false,
		navigateByClick: false,
		fadeinLoadedSlide:false,
		autoPlay: {
			enabled: false,
		},
		loopRewind: false,
		loop: false,
		allowCSS3: true,
		autoHeight: true,
		autoScaleSlider: false,
		imageScaleMode: 'none',
		imageAlignCenter: false,
		transitionSpeed: 500
	}).data('royalSlider');

	var cbyxSlider = jQuery(".cbyx").royalSlider({
		keyboardNavEnabled: false,
		slidesSpacing: 0,
		addActiveClass: false,
		navigateByClick: false,
		fadeinLoadedSlide:false,
		autoPlay: {
			enabled: false,
		},
		loopRewind: false,
		loop: false,
		allowCSS3: true,
		autoHeight: true,
		autoScaleSlider: false,
		imageScaleMode: 'none',
		imageAlignCenter: false,
		transitionSpeed: 500
	}).data('royalSlider');

	var photoSlider = jQuery(".photos").royalSlider({
		keyboardNavEnabled: false,
		slidesSpacing: 0,
		addActiveClass: false,
		navigateByClick: false,
		fadeinLoadedSlide:false,
		autoPlay: {
			enabled: false,
		},
		loopRewind: false,
		loop: false,
		allowCSS3: true,
		autoHeight: true,
		autoScaleSlider: false,
		imageScaleMode: 'none',
		imageAlignCenter: false,
		transitionSpeed: 500
	}).data('royalSlider');

	var cvfellowsSlider = jQuery(".cvfellows").royalSlider({
		keyboardNavEnabled: false,
		slidesSpacing: 0,
		addActiveClass: false,
		navigateByClick: false,
		fadeinLoadedSlide:false,
		autoPlay: {
			enabled: false,
		},
		loopRewind: false,
		loop: false,
		allowCSS3: true,
		autoHeight: true,
		autoScaleSlider: false,
		imageScaleMode: 'none',
		imageAlignCenter: false,
		transitionSpeed: 500
	}).data('royalSlider');
	
	if(is_mobile == true) {	
		introductionSlider.ev.on('rsBeforeMove', function(event, type, userAction ) {
			setTimeout(function(){
				$("html, body").animate({ scrollTop: $('#introduction').position().top }, "slow"); 
			}, 100);
		});

		highlightsSlider.ev.on('rsBeforeMove', function(event, type, userAction ) {
			setTimeout(function(){
				$("html, body").animate({ scrollTop: $('#editorials').position().top }, "slow"); 
			}, 100);
		});

		eventsSlider.ev.on('rsBeforeMove', function(event, type, userAction ) {
			setTimeout(function(){
				$("html, body").animate({ scrollTop: $('#events').position().top }, "slow"); 
			}, 100);
		});

		spotlightSlider1.ev.on('rsBeforeMove', function(event, type, userAction ) {
			setTimeout(function(){
				$("html, body").animate({ scrollTop: $('#spotlight1').position().top }, "slow"); 
			}, 100);
		});

		hostingSlider.ev.on('rsBeforeMove', function(event, type, userAction ) {
			setTimeout(function(){
				$("html, body").animate({ scrollTop: $('#hosting').position().top }, "slow"); 
			}, 100);
		});

		spotlightSlider2.ev.on('rsBeforeMove', function(event, type, userAction ) {
			setTimeout(function(){
				$("html, body").animate({ scrollTop: $('#spotlight2').position().top }, "slow"); 
			}, 100);
		});

		cbyxSlider.ev.on('rsBeforeMove', function(event, type, userAction ) {
			setTimeout(function(){
				$("html, body").animate({ scrollTop: $('#cbyx').position().top }, "slow"); 
			}, 100);
		});

		photoSlider.ev.on('rsBeforeMove', function(event, type, userAction ) {
			setTimeout(function(){
				$("html, body").animate({ scrollTop: $('#photos').position().top }, "slow"); 
			}, 100);
		});

		cvfellowsSlider.ev.on('rsBeforeMove', function(event, type, userAction ) {
			setTimeout(function(){
				$("html, body").animate({ scrollTop: $('#cvfellows').position().top }, "slow"); 
			}, 100);
		});
	}
	
//	if (!(/Android|iPhone|iPad|iPod|BlackBerry|Windows Phone/i).test(navigator.userAgent || navigator.vendor || window.opera)) {
//		skrollr.init({
//			forceHeight: false
//		});
//	}
	
//	$('.scroll').click(function() { $('html, body').animate({scrollTop:1000},600); });
});

var $video = $("video"), //jquery-wrapped video element
    mousedown = false;

$video.click(function() {
	if (typeof InstallTrigger == 'undefined') {
		if (this.paused) {
			this.play();
			return false;
		} else {
			this.pause();
			return true;
		}
		return true;
	}
	else {
		return false;   
	}
});

$video.on('mousedown', function() {
	mousedown = true;
});

$(window).on('mouseup', function() {
	mousedown = false;
});

$('.arrow-scroll').click(function() {
	console.log('test');
	$(this).parent().parent().parent().animate({ scrollTop: 900 }, 500); 
});