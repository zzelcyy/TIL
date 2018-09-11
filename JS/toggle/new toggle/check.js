let chs = {
    ch1 = 0,
    ch2 = 0
};

function TheBoyz() {
    let img1 = './theboyz1.jpg';
    let img2 = './theboyz2.jpg';
    let target = document.getElementById("theBoyz");
    let channel = chs.ch1;

    toggle(img1, img2, target, channel);
}

function Hwall() {
    let img1 = './hwall1.jpg';
    let img2 = './hwall2.jpg';
    let target = document.getElementById("hwall");
    let channel = chs.ch2;

    toggle(img1, img2, target, channel);
}

function toggle(img1, img2, target, channel) {
    if (channel === 0) {
        target.setAttribute("src", img2);
        channel = 1;
    } else {
        target.setAttribute("src", img1);
        channel = 0;
    }
}