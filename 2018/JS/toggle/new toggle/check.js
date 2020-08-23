let chs = {
    ch1: 0,
    ch2: 0
};

function TheBoyz() {
    let img1 = './theboyz1.jpg';
    let img2 = './theboyz2.jpg';
    let target = document.getElementById("theBoyz");
    console.log('tbz onclicked');
    chs.ch1 = toggle(img1, img2, target, chs.ch1);
}

function Hwall() {
    let img1 = './hwall1.jpg';
    let img2 = './hwall2.jpg';
    let target = document.getElementById("hwall");
    console.log('hwall onclicked');
    chs.ch2 = toggle(img1, img2, target, chs.ch2);
}

function toggle(img1, img2, target, channel) {
    if (channel === 0) {
        target.setAttribute("src", img2);
        return 1;
    } else {
        target.setAttribute("src", img1);
        return 0;
    }
}