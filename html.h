<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Happy birthday</title>
    <link rel="stylesheet" href="style.css">
    <link rel="stylesheet" href="https://cdnjs.cloudflare.com/ajax/libs/font-awesome/6.5.1/css/all.min.css" integrity="sha512-DTOQO9RWCH3ppGqcWaEA1BIZOC6xxalwEsw9c2QQeAIftl+Vegovlnee1c9QX4TctnWMn13TZye+giMm8e2LwA==" crossorigin="anonymous" referrerpolicy="no-referrer" />
    <script src="https://code.jquery.com/jquery-3.7.1.min.js" integrity="sha256-/JqT3SQfawRcv/BIHPThkBvs0OEvtFFmqPF/lYI/Cxo=" crossorigin="anonymous"></script>
</head>
<body>
    <div id="wrapper">
        <div class="flag__birthday">
            <img src="./images/1.png" alt="" width="350" class="flag__left">
            <img src="./images/1.png" alt="" width="350" class="flag__right">
        </div>
        <div class="content">
            <div class="left">
                <div class="title">
                    <h1 class="happy">
                        <span style="--t: 4s;">H</span>
                        <span style="--t: 4.2s;">a</span>
                        <span style="--t: 4.4s;">p</span>
                        <span style="--t: 4.6s;">p</span>
                        <span style="--t: 4.8s;">
                            y
                            <div class="hat">
                                <img src="./images/hat.png" alt="" width="130">
                            </div>
                        </span>
                    </h1>
                    <h1 class="birthday">
                        <span style="--t: 5s;">B</span>
                        <span style="--t: 5.2s;">i</span>
                        <span style="--t: 5.4s;">r</span>
                        <span style="--t: 5.6s;">t</span>
                        <span style="--t: 5.8s;">h</span>
                        <span style="--t: 6s;">d</span>
                        <span style="--t: 6.2s;">a</span>
                        <span style="--t: 6.4s;">y</span>
                    </h1>
                    
                </div>
                <div class="date__of__birth">
                    <span></span>
                </div>
                <div class="btn">
                    <button id="btn__letter">
                        Nhận thư nè :)))
                        <i class="fa-regular fa-envelope"></i>
                    </button>
                </div>
            </div>
            <div class="right">
                <div class="box__account">
                    <div class="image">
                        <img src="data:image/jpeg;base64,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" alt="">
                    </div>
                    <div class="name">
                        <i class="fa-solid fa-heart"></i>
                        <span>Yenaiti</span>
                        <i class="fa-solid fa-heart"></i>
                    </div>
                    <div class="balloon_one">
                        <img width="100px" src="./images/balloon1.png" alt="">
                    </div>
                    <div class="balloon_two">
                        <img width="100px" src="./images/balloon2.png" alt="">
                    </div>
                </div>
                <div class="cricle">
                    <div class="text__cricle">
                        <span style="--i: 1;">h</span>
                        <span style="--i: 2;">a</span>
                        <span style="--i: 3;">p</span>
                        <span style="--i: 4;">p</span>
                        <span style="--i: 5;">y</span>
                        <span style="--i: 6;">-</span>
                        <span style="--i: 7;">b</span>
                        <span style="--i: 8;">i</span>
                        <span style="--i: 9;">r</span>
                        <span style="--i: 10;">t</span>
                        <span style="--i: 11;">h</span>
                        <span style="--i: 12;">d</span>
                        <span style="--i: 13;">a</span>
                        <span style="--i: 14;">y</span>
                        <span style="--i: 15;">-</span>
                    </div>
                    <i class="fa-solid fa-heart"></i>
                </div>
                <span class="day">
                    
                </span>
                <span class="month"></span>
            </div>
        </div>
        <div class="decorate_star star1" style="--t: 15s;"></div>
        <div class="decorate_star star2" style="--t: 15.2s;"></div>
        <div class="decorate_star star3" style="--t: 15.4s;"></div>
        <div class="decorate_star star4" style="--t: 15.6s;"></div>
        <div class="decorate_star star5" style="--t: 15.8s;"></div>
        <div class="decorate_flower--one" style="--t: 15s;">
            <img width="20" src="./images/decorate_flower.png" alt="">
        </div>
        <div class="decorate_flower--two" style="--t: 15.3s;">
            <img width="20" src="./images/decorate_flower.png" alt="">
        </div>
        <div class="decorate_flower--three" style="--t: 15.6s;">
            <img width="20" src="./images/decorate_flower.png" alt="">
        </div>
        <div class="decorate_bottom">
            <img src="./images/decorate.png" alt="" width="100">
        </div>
        <div class="smiley__icon">
            <img src="./images/smiley_icon.png" alt="" width="100">
        </div>

        

        <div class="box__letter">
            <div class="letter__border">
                <div class="letter">
                    <div class="title__letter">
                    </div>
                    <div class="content__letter">
                        <div class="left">
                            <img id="heart__letter" src="./images/heart_letter.png" alt="">
                            <img class="heart heart_1" style="--t: 0.2s" width="20" src="./images/heart.png" alt="">
                            <img class="heart heart_2" style="--t: 0.4s" width="20" src="./images/heart.png" alt="">
                            <img class="heart heart_3" style="--t: 0.6s" width="20" src="./images/heart.png" alt="">
                            <img class="heart heart_4" style="--t: 0.8s" width="20" src="./images/heart.png" alt="">
                        </div>
                        <div class="right">
                            <div class="love__img">
                                <img src="./images/love.png" alt="" width="220">
                            </div>
                            <div class="text__letter">
                                 <p></p>
                            </div>
                            <img id="mewmew" width="80" src="./images/mewmew.gif" alt="">
                        </div>
                    </div>
                </div>
                <div class="close">
                    <i class="fa-solid fa-xmark"></i>
                </div>
            </div>
        </div>
    </div>
</body>
<script>
    let datetxt = "05/03/2005";
    let datatxtletter = "Happy birthday! Sinh nhật vui vẻ nha m! Wishing you a day filled with joy, laughter, and wonderful memories 💕";
    let titleLetter = "Dear Chi";
    let charArrDate = datetxt.split('');
    let charArrDateLetter = datatxtletter.split('');
    let charArrTitle = titleLetter.split('');
    let currentIndex = 0;
    let currentIndexLetter = 0;
    let currentIndexTitle = 0;
    let date__of__birth = document.querySelector(".date__of__birth span");
    let text__letter = document.querySelector(".text__letter p");
    setTimeout(function(){
        timeDatetxt = setInterval(function(){
            if(currentIndex < charArrDate.length){
                date__of__birth.textContent += charArrDate[currentIndex];
                currentIndex++;
            }
            else{
                let i = document.createElement("i");
                i.className = "fa-solid fa-star"
                document.querySelector(".date__of__birth").prepend(i)
                document.querySelector(".date__of__birth").appendChild(i.cloneNode(true))
                clearInterval(timeDatetxt)
            }
        },100)
    },12000)

    var intervalContent;
    var intervalTitle;
    $("#btn__letter").on("click", function(){
        $(".box__letter").slideDown()
        setTimeout(function(){
            $(".letter__border").slideDown();
        },1000)
        setTimeout(function(){
            intervalTitle = setInterval(function(){
                if(currentIndexTitle < charArrTitle.length){
                    document.querySelector(".title__letter").textContent += charArrTitle[currentIndexTitle];
                    let i = document.createElement("i");
                    i.className = "fa-solid fa-heart"
                    document.querySelector(".title__letter").appendChild(i)
                    currentIndexTitle++;
                }
                else{
                    clearInterval(intervalTitle)
                }
            },100)
        },2000)
        setTimeout(function(){
            document.querySelector("#heart__letter").classList.add("animationOp");
            document.querySelector(".love__img").classList.add("animationOp");
            document.querySelector("#mewmew").classList.add("animationOp");
        },2800)
        setTimeout(function(){
            document.querySelectorAll(".heart").forEach((item)=>{
                item.classList.add("animation")
            })
        },3500)
        setTimeout(function(){
            intervalContent = setInterval(function(){
                if(currentIndexLetter < charArrDateLetter.length){
                    text__letter.textContent += charArrDateLetter[currentIndexLetter];
                    currentIndexLetter++;
                }
                else{
                    clearInterval(intervalContent)
                }
            },50)
        },6000)
    })
    $(".close").on("click", function(){
        clearInterval(intervalContent)
        document.querySelector(".title__letter").textContent = "";
        text__letter.textContent = "";
        currentIndexLetter = 0
        currentIndexTitle = 0
        document.querySelector("#heart__letter").classList.remove("animationOp");
        document.querySelector(".love__img").classList.remove("animationOp");
        document.querySelector("#mewmew").classList.remove("animationOp");
        document.querySelectorAll(".heart").forEach((item)=>{
                item.classList.remove("animation")
            })
        $(".box__letter").slideUp();
        $(".letter__border").slideUp();
    })


    //mobile

    function mobile(){
        const app = {
            timeout: function(txt, dom){
                let currentIndex = 0;
                let charArr = txt.split('')
                intervalMobile = setInterval(function(){
                    if(currentIndex < charArr.length){
                        dom.textContent += charArr[currentIndex];
                        currentIndex++;
                    }
                    else{
                        clearInterval(intervalMobile)
                    }
                },200)
            }
        }
        return app
    }
    const fcMobile = mobile()
    if(window.innerWidth < 768){
        setTimeout(()=>{
            fcMobile.timeout("26", document.querySelector(".day"))
        },5000)
        setTimeout(()=>{
            fcMobile.timeout("10", document.querySelector(".month"))
        },6000)
    }
    
</script>
</html>
