<?php
/**
 * @file
 * SocialBar admin pages file
 *
 * Created by George Sokianos (walkero@gmail.com)
 *
 */
 
function socialbar_settings() {
	$form = array();
	
	$form['fb_set'] = array(
		'#type' => 'fieldset',
		'#title' => t('Facebook settings')
	);
	$form['fb_set']['fb_pageid'] = array(
		'#type' => 'textfield',
		'#title' => t('Page ID'),
		'#default_value' => variable_get('socialbar_fb_pageid', ''),
		'#size' => 60,
		'#maxlength' => 128,
		'#required' => FALSE,
	);
	$form['fb_set']['fb_appid'] = array(
		'#type' => 'textfield',
		'#title' => t('Application ID'),
		'#default_value' => variable_get('socialbar_fb_appid', '113952418958500'),
		'#size' => 60,
		'#maxlength' => 128,
		'#required' => FALSE,
		'#description' => 'To get the ApplicationID visit the following URL <a href="https://developers.facebook.com/" target="_blank">https://developers.facebook.com/</a> and create a new application. If you do not do that, the default AppID will be used, as Facebook provides.'
	);
	
	$form['tw_set'] = array(
		'#type' => 'fieldset',
		'#title' => t('Twitter settings')
	);
	$form['tw_set']['tw_profile'] = array(
		'#type' => 'textfield',
		'#title' => t('Profile Name'),
		'#default_value' => variable_get('socialbar_tw_profile', ''),
		'#size' => 60,
		'#maxlength' => 128,
		'#required' => FALSE,
	);
	$form['tw_set']['tw_widgetid'] = array(
		'#type' => 'textfield',
		'#title' => t('WidgetID'),
		'#default_value' => variable_get('socialbar_tw_widgetid', ''),
		'#size' => 60,
		'#maxlength' => 128,
		'#required' => FALSE,
		'#description' => 'To get the WidgetID visit the following URL <a href="https://twitter.com/settings/widgets" target="_blank">https://twitter.com/settings/widgets</a> and register a new widget.'
	);
	
	$form['yt_set'] = array(
		'#type' => 'fieldset',
		'#title' => t('Youtube settings')
	);
	$form['yt_set']['yt_profile'] = array(
		'#type' => 'textfield',
		'#title' => t('Profile Name'),
		'#default_value' => variable_get('socialbar_yt_profile', ''),
		'#size' => 60,
		'#maxlength' => 128,
		'#required' => FALSE,
	);
	$form['yt_set']['yt_api_key'] = array(
		'#type' => 'textfield',
		'#title' => t('YouTube API key'),
		'#default_value' => variable_get('socialbar_yt_api_key', ''),
		'#size' => 60,
		'#maxlength' => 128,
		'#required' => FALSE,
		'#description' => 'To get the API key visit the following URL <a href="https://console.developers.google.com/apis/credentials" target="_blank">https://console.developers.google.com/apis/credentials</a> and register a new widget.'
	);
	$form['yt_set']['yt_numofvideos'] = array(
		'#type' => 'textfield',
		'#title' => t('Number of Videos'),
		'#default_value' => variable_get('socialbar_yt_numofvideos', 10),
		'#size' => 60,
		'#maxlength' => 128,
		'#required' => FALSE,
	);
	
	$form['gp_set'] = array(
		'#type' => 'fieldset',
		'#title' => t('Google Plus settings')
	);
	$form['gp_set']['gp_profile'] = array(
		'#type' => 'textfield',
		'#title' => t('Profile Name'),
		'#default_value' => variable_get('socialbar_gp_profile', ''),
		'#size' => 60,
		'#maxlength' => 128,
		'#required' => FALSE,
		'#description' => 'The Profile name should be the page name only.'
	);
	

  	$form['#submit'] = array('socialbar_settings_submit');
	return system_settings_form($form);
}


function socialbar_settings_submit($form, &$form_state) {
	variable_set('socialbar_fb_pageid', $form['fb_set']['fb_pageid']['#value']);
	variable_set('socialbar_fb_appid', $form['fb_set']['fb_appid']['#value']);
	variable_set('socialbar_tw_profile', $form['tw_set']['tw_profile']['#value']);
	variable_set('socialbar_tw_widgetid', $form['tw_set']['tw_widgetid']['#value']);
	variable_set('socialbar_yt_profile', $form['yt_set']['yt_profile']['#value']);
	variable_set('socialbar_yt_api_key', $form['yt_set']['yt_api_key']['#value']);
	variable_set('socialbar_yt_numofvideos', $form['yt_set']['yt_numofvideos']['#value']);
	variable_set('socialbar_gp_profile', $form['gp_set']['gp_profile']['#value']);
	
}

