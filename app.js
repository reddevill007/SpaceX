(function () {
    let socials = document.querySelectorAll('.social div')

    socials.forEach(function(social, index){
    social.style.animation = `moveIn 1s cubic-bezier(.51,.92,.24,1.15) forwards ${index/7+0.2}s`
    })







}())