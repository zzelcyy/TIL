let channel = {
    ch1 = 0,
    ch2 = 0
};

function TheBoyz() {
    img1 = './theboyz1.jpg';
    img2 = './theboyz2.jpg';
    target = document.getElementById("theBoyz");
    channel = channel.ch1;

    toggle(img1, img2, target, channel);
}

function Hwall() {
    img1 = './hwall1.jpg';
    img2 = './hwall2.jpg';
    target = document.getElementById("hwall");
    channel = channel.ch2;

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