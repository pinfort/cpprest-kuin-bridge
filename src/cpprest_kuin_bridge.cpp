#include "common.h"

BOOL WINAPI DllMain(HINSTANCE, DWORD, LPVOID)
{
	return TRUE;
}

extern "C" _declspec(dllexport) U8* HttpGet(U8* host_name, U8* path)
{
	//http_client client(KuinStrToWStr(host_name)); //ÉRÉÅÉìÉgÇäOÇ∑Ç∆Ç»Ç∫Ç©ìÆÇ©Ç»Ç¢

	const std::wstring body(LR"(
		< !DOCTYPE html >
		<html lang = "en">
		<head>
		<!--Global site tag(gtag.js) - Google Analytics-->
		<script async src = "https://www.googletagmanager.com/gtag/js?id=UA-68679351-3">< / script>
		<script>
		window.dataLayer = window.dataLayer || [];
	function gtag() { dataLayer.push(arguments); }
	gtag('js', new Date());

	gtag('config', 'UA-68679351-3');
	< / script>

		<meta charset = "utf-8">
		<meta http - equiv = "X-UA-Compatible" content = "IE=edge">
		<meta name = "viewport" content = "width=device-width, initial-scale=1">

		<!--CSRF Token-->
		<meta name = "csrf-token" content = "skZF8jNwRjAzPSbbX0cEipfMCmC7Hd3os17JPQwK">


		<title>Portfolio< / title>

		<!--Styles-->
		<link href = "/css/app.css?id=31fe1d088a7df3e2ae9e" rel = "stylesheet">
		<link href = "https://pinfort.me/vendor/TopNav/top_nav.css" rel = "stylesheet">
		<script data - ad - client = "ca-pub-7789044462184398" async src = "https://pagead2.googlesyndication.com/pagead/js/adsbygoogle.js">< / script>
		< / head>
		<body>
		<div id = "app">
		<nav class = "navbar navbar-expand-md navbar-light">
		<div class = "container">
		<a class = "navbar-brand" href = "https://pinfort.me">
		Portfolio
		< / a>
		<ul class = "nav navbar-nav ml-auto">
		<li class = "nav-item">
		<a class = "nav-link" href = "//blog.pinfort.me">Blog< / a>
		< / li>
		< / ul>
		< / div>
		< / nav>

		<main class = "py-3 mx-auto main-body">
		<div id = "content">< / div>
		< / main>
		< / div>

		<!--Scripts-->
		<script src = "/js/app.js?id=5e62d88160b5ad55d1cf">< / script>
		< / body>
		< / html>
)");
	return WStrToKuinStr(body);
}
