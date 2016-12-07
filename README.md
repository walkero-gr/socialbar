# socialbar
**socialbar** is a website bar that shows content from your social networks. You can add it to your website, where a vertical bar, with the social network icons, will be added at the right of the browser, at the middle of users' viewport. The bar has a fixed position which is calculated automatically. 

Currently **socialbar** works only on **Drupal 7 CMS**.

When you install it, you will find a new admin page at http://[yourdomain]/admin/config/services/socialbar where you can add the necessary ids and info about your social networks. Currently, the social networks that are supported are:

 - Facebook
 - Twitter
 - YouTube
 - Google+

The form is self explained, with a lot of help messages and links. As soon as you complete the admin form the **socialbar** is ready to be used. To do that, go to the blocks of your site, where you will find a new block named "SocialBar: BlockBar". Move it to your footer (recommended) so that it will be the last thing to load. If you prefer to place it anywhere else, you can do that too.

Features
--------
 - Auto positioned vertical bar, stuck at the right of the page
 - Configured by admin page
 - User can minimize or expand it by double clicking on the same icon button, or by clinking on the "Close" link at the top of the bar
 - Uses the Facebook page widget where the user can Like your Facebook page and read the latest posts
 - Uses a Twitter widget where the users can read your latest tweets
 - Uses YouTube API calls to bring a "Subscribe" button and your latest videos
 - Uses Google+ widget with the "Follow" button

ToDo
----
 - Add more networks
 - Different widgets per network, which the admin can select what he wants to use, wherever this is possible
 - A way to choose the placement position in the site
 - Mobile resolution adaptation
 - Drupal 8 support
