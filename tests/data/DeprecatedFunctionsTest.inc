<?php

die(); //Don't actually run the following code.

/**
 * wp-includes
 */
// 0.71
the_category_ID();
the_category_head();
// 1.2
permalink_link();
// 1.5
start_wp();
// 1.5.1
get_postdata();
// 2.0
create_user();
next_post();
previous_post();
user_can_create_draft();
user_can_create_post();
user_can_delete_post();
user_can_delete_post_comments();
user_can_edit_post();
user_can_edit_post_comments();
user_can_edit_post_date();
user_can_edit_user();
user_can_set_post_date();
// 2.1
dropdown_cats();
get_archives();
get_author_link();
get_autotoggle();
get_link();
get_linkcatname();
get_linkrating();
get_links();
get_links_list();
get_links_withrating();
get_linksbyname();
get_linkobjects();
get_linkobjectsbyname();
get_linksbyname_withrating();
get_settings();
link_pages();
links_popup_script();
list_authors();
list_cats();
wp_get_links();
wp_get_linksbyname();
wp_get_post_cats();
wp_list_cats();
wp_set_post_cats();
// 2.2
comments_rss();
// 2.3
permalink_single_rss();
// 2.5
comments_rss_link();
get_attachment_icon();
get_attachment_icon_src();
get_attachment_innerHTML();
get_author_rss_link();
get_category_rss_link();
get_the_attachment_link();
gzip_compression();
wp_clearcookie();
wp_get_cookie_login();
wp_login();
wp_setcookie();
// 2.7
get_commentdata();
// 2.8
__ngettext();
__ngettext_noop();
attribute_escape();
get_author_name();
get_category_children();
get_catname();
get_the_author_aim();
get_the_author_description();
get_the_author_email();
get_the_author_firstname();
get_the_author_icq();
get_the_author_ID();
get_the_author_lastname();
get_the_author_login();
get_the_author_msn();
get_the_author_nickname();
get_the_author_url();
get_the_author_yim();
js_escape();
register_sidebar_widget();
register_widget_control();
sanitize_url();
the_author_aim();
the_author_description();
the_author_email();
the_author_firstname();
the_author_icq();
the_author_ID();
the_author_lastname();
the_author_login();
the_author_msn();
the_author_nickname();
the_author_url();
the_author_yim();
unregister_sidebar_widget();
unregister_widget_control();
wp_specialchars();
// 2.9
_c();
make_url_footnote();
the_content_rss();
// 3.0
_nc();
automatic_feed_links();
clean_url();
clear_global_post_cache();
delete_usermeta();
funky_javascript_callback();
funky_javascript_fix();
generate_random_password();
get_alloptions();
get_blog_list();
get_most_active_blogs();
get_profile();
get_user_details();
get_usermeta();
get_usernumposts();
graceful_fail();
is_main_blog();
is_site_admin();
is_taxonomy();
is_term();
set_current_user();
translate_with_context();
update_usermeta();
validate_email();
// 3.1
get_dashboard_blog();
get_users_of_blog();
is_plugin_page();
update_category_cache();
// 3.2
wp_timezone_supported();
wp_clone();
// 3.3
get_boundary_post_rel_link();
get_index_rel_link();
get_parent_post_rel_link();
get_user_by_email();
get_user_metavalues();
get_userdatabylogin();
index_rel_link();
is_blog_user();
parent_post_rel_link();
sanitize_user_object();
start_post_rel_link();
the_editor();
wp_admin_bar_dashboard_view_site_menu();
wpmu_admin_do_redirect();
wpmu_admin_redirect_add_updated_param();
// 3.4
add_custom_background();
add_custom_image_header();
clean_page_cache();
clean_pre();
debug_fclose();
debug_fopen();
debug_fwrite();
get_current_theme();
get_theme();
get_theme_data();
get_themes();
remove_custom_background();
remove_custom_image_header();
update_page_cache();
wp_explain_nonce();
// 3.5
_get_post_ancestors();
_save_post_hook();
gd_edit_image_support();
get_page();
image_resize();
sticky_class();
user_pass_ok();
wp_cache_reset();
wp_get_single_post();
wp_load_image();
// 3.6
get_user_id_from_string();
wp_convert_bytes_to_hr();
// 3.7
_search_terms_tidy();
get_blogaddress_by_domain();
// 3.9
rich_edit_exists();
default_topic_count_text();
format_to_post();
get_current_site_name();
wpmu_current_site();
// 4.0
like_escape();
url_is_accessable_via_ssl();
/**
 * wp-admin
 */
// MU
install_blog_defaults();
// 2.1
tinymce_include();
// 2.5
documentation_link();
// 2.6
dropdown_categories();
dropdown_link_categories();
// 2.9
get_real_file_to_edit();
// 3.0
activate_sitewide_plugin();
add_option_update_handler();
codepress_footer_js();
codepress_get_lang();
deactivate_sitewide_plugin();
is_wpmu_sitewide_plugin();
ms_deprecated_blogs_file();
mu_options();
remove_option_update_handler();
use_codepress();
wp_dropdown_cats();
wp_shrink_dimensions();
wpmu_checkAvailableSpace();
wpmu_get_blog_allowedthemes();
wpmu_menu();
// 3.1
get_author_user_ids();
get_editable_authors();
get_editable_user_ids();
get_nonauthor_user_ids();
get_others_drafts();
get_others_unpublished_posts();
get_others_pending();
install_themes_feature_list();
// 3.2
favorite_actions();
wp_dashboard_quick_press_output();
// 3.3
add_contextual_help();
media_upload_audio();
media_upload_file();
media_upload_image();
media_upload_video();
screen_layout();
screen_meta();
screen_options();
type_url_form_audio();
type_url_form_file();
type_url_form_image();
type_url_form_video();
wp_preload_dialogs();
wp_print_editor_js();
wp_quicktags();
wp_tiny_mce();
// 3.4
current_theme_info();
get_allowed_themes();
get_broken_themes();
get_site_allowed_themes();
display_theme();
// 3.5
_insert_into_post_button();
_media_button();
get_default_page_to_edit();
get_post_to_edit();
get_udims();
wp_create_thumbnail();
// 3.6
wp_nav_menu_locations_meta_box();
// 3.7
the_attachment_links();
wp_update_core();
wp_update_plugin();
wp_update_theme();
// 3.8
get_screen_icon();
screen_icon();
wp_dashboard_incoming_links();
wp_dashboard_incoming_links_control();
wp_dashboard_incoming_links_output();
wp_dashboard_plugins();
wp_dashboard_primary_control();
wp_dashboard_recent_comments_control();
wp_dashboard_secondary();
wp_dashboard_secondary_control();
wp_dashboard_secondary_output();
// 3.9
_relocate_children();
/**
 * Root Folder
 */
// 3.4
logIO();
