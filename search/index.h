<!DOCTYPE html>
<html lang="en"><head>
  <meta charset="utf-8">
  <meta http-equiv="X-UA-Compatible" content="IE=edge">
  <meta name="viewport" content="width=device-width, initial-scale=1"><!-- Begin Jekyll SEO tag v2.6.1 -->
<title>Search | Data2API</title>
<meta name="generator" content="Jekyll v4.0.0" />
<meta property="og:title" content="Search" />
<meta property="og:locale" content="en_US" />
<meta name="description" content="A collection of Jupyter Notebooks here." />
<meta property="og:description" content="A collection of Jupyter Notebooks here." />
<link rel="canonical" href="https://data2api.com/search/" />
<meta property="og:url" content="https://data2api.com/search/" />
<meta property="og:site_name" content="Data2API" />
<script type="application/ld+json">
{"description":"A collection of Jupyter Notebooks here.","@type":"WebPage","url":"https://data2api.com/search/","headline":"Search","@context":"https://schema.org"}</script>
<!-- End Jekyll SEO tag -->
<link rel="stylesheet" href="/assets/css/style.css"><link rel="shortcut icon" type="image/x-icon" href="/images/favicon.ico"><!-- Begin Jekyll SEO tag v2.6.1 -->
<title>Search | Data2API</title>
<meta name="generator" content="Jekyll v4.0.0" />
<meta property="og:title" content="Search" />
<meta property="og:locale" content="en_US" />
<meta name="description" content="A collection of Jupyter Notebooks here." />
<meta property="og:description" content="A collection of Jupyter Notebooks here." />
<link rel="canonical" href="https://data2api.com/search/" />
<meta property="og:url" content="https://data2api.com/search/" />
<meta property="og:site_name" content="Data2API" />
<script type="application/ld+json">
{"description":"A collection of Jupyter Notebooks here.","@type":"WebPage","url":"https://data2api.com/search/","headline":"Search","@context":"https://schema.org"}</script>
<!-- End Jekyll SEO tag -->

<link href="https://unpkg.com/@primer/css/dist/primer.css" rel="stylesheet" />
<link rel="stylesheet" href="//use.fontawesome.com/releases/v5.0.7/css/all.css">

<script>
function wrap_img(fn) {
    if (document.attachEvent ? document.readyState === "complete" : document.readyState !== "loading") {
        var elements = document.querySelectorAll(".post img");
        Array.prototype.forEach.call(elements, function(el, i) {
            if (el.getAttribute("title")) {
                const caption = document.createElement('figcaption');
                var node = document.createTextNode(el.getAttribute("title"));
                caption.appendChild(node);
                const wrapper = document.createElement('figure');
                wrapper.className = 'image';
                el.parentNode.insertBefore(wrapper, el);
                el.parentNode.removeChild(el);
                wrapper.appendChild(el);
                wrapper.appendChild(caption);
            }
        });
    } else { document.addEventListener('DOMContentLoaded', fn); }
}
window.onload = wrap_img;
</script>

<script>
    document.addEventListener("DOMContentLoaded", function(){
    // add link icon to anchor tags
    var elem = document.querySelectorAll(".anchor-link")
    elem.forEach(e => (e.innerHTML = '<i class="fas fa-link fa-xs"></i>'));
    });
</script>
</head><body><header class="site-header">

  <div class="wrapper"><a class="site-title" rel="author" href="/">Data2API</a><nav class="site-nav">
        <input type="checkbox" id="nav-trigger" class="nav-trigger" />
        <label for="nav-trigger">
          <span class="menu-icon">
            <svg viewBox="0 0 18 15" width="18px" height="15px">
              <path d="M18,1.484c0,0.82-0.665,1.484-1.484,1.484H1.484C0.665,2.969,0,2.304,0,1.484l0,0C0,0.665,0.665,0,1.484,0 h15.032C17.335,0,18,0.665,18,1.484L18,1.484z M18,7.516C18,8.335,17.335,9,16.516,9H1.484C0.665,9,0,8.335,0,7.516l0,0 c0-0.82,0.665-1.484,1.484-1.484h15.032C17.335,6.031,18,6.696,18,7.516L18,7.516z M18,13.516C18,14.335,17.335,15,16.516,15H1.484 C0.665,15,0,14.335,0,13.516l0,0c0-0.82,0.665-1.483,1.484-1.483h15.032C17.335,12.031,18,12.695,18,13.516L18,13.516z"/>
            </svg>
          </span>
        </label>

        <div class="trigger"><a class="page-link" href="/about/">About Me</a><a class="page-link" href="/search/">Search</a><a class="page-link" href="/categories/">Tags</a><a class="page-link" href="/vizchord/">ChordDiagram</a></div>
      </nav></div>
</header>
<main class="page-content" aria-label="Content">
      <div class="wrapper">
        <!-- adapted from https://github.com/pmarsceill/just-the-docs -->
<script type="text/javascript" src="/assets/js/search.js"></script>
<script type="text/javascript" src="/assets/js/vendor/lunr.min.js"></script>

<div class="search">
    <div class="search-input-wrap">
    <input type="text" class="js-search-input search-input input-block form-control" tabindex="0" placeholder="Search Data2API" aria-label="Search Data2API" autocomplete="off">
    </div>
    <br>
    <div class="js-search-results search-results-wrap"></div>
</div>

      </div>
    </main><footer class="site-footer h-card">
  <data class="u-url" href="/"></data>

  <div class="wrapper">

    <div class="footer-col-wrapper">
      <div class="footer-col">
        <p class="feed-subscribe">
          <a href="/feed.xml">
            <svg class="svg-icon orange">
              <use xlink:href="/assets/minima-social-icons.svg#rss"></use>
            </svg><span>Subscribe</span>
          </a>
        </p>
      </div>
      <div class="footer-col">
        <p>A collection of Jupyter Notebooks here.</p>
      </div>
    </div>

    <div class="social-links"><ul class="social-media-list"></ul>
</div>

  </div>

</footer>
</body>

</html>