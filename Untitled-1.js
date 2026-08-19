const container = document.getElementsByName("fotoperfil")
const foto = document.getElementById("minhafoto")

foto.addEventListener("mouseenter", function(){
    foto.src="calm.jpg"
});
foto.addEventListener("mouseleave", function(){
    foto.src="fotominha.png"
});