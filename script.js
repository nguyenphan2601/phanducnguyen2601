// Hiển thị popup khi trang tải xong
window.onload = function () {
    document.getElementById("welcome-popup").style.display = "block";
    document.getElementById("overlay").style.display = "block";
};

// Đóng popup
function closePopup() {
    document.getElementById("welcome-popup").style.display = "none";
    document.getElementById("overlay").style.display = "none";
}
