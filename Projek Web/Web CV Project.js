// Hide and show navigation menu on small screens
const navToggle = document.querySelector(".nav-toggle");
const navLinks = document.querySelectorAll(".nav__link");

navToggle.addEventListener("click", () => {
  document.body.classList.toggle("nav-open");
});

navLinks.forEach(link => {
  link.addEventListener("click", () => {
    document.body.classList.remove("nav-open");
  });
});

// Scroll to section on navigation link click
const sections = document.querySelectorAll("section");
const navigationLinks = document.querySelectorAll("nav a");

window.addEventListener("scroll", () => {
  const scrollPosition = window.scrollY + 80;

  sections.forEach(section => {
    if (scrollPosition >= section.offsetTop && scrollPosition < section.offsetTop + section.offsetHeight) {
      navigationLinks.forEach(link => {
        link.classList.remove("active");
        if (section.getAttribute("id") === link.getAttribute("href").substring(1)) {
          link.classList.add("active");
        }
      });
    }
  });
});
