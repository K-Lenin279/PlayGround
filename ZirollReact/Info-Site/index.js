const rootElement = document.getElementById('root');

// To import all the javascript FileSystem, i.e, Header.js,
// you have to import all js files that  you are using in the HTML
// file only then it would work.

function Header() {
  return (
    <header className="header">
      <img src="./react-logo512.png" className="header-img" />
      <nav>
        <ul className="header-nav-ul">
          <li className="header-li">Pricing</li>
          <li className="header-li">About</li>
          <li className="header-li">Contact</li>
        </ul>
      </nav>
    </header>
  );
}

function MainContent() {
  return (
    <div>
      <h1 className="hero-h1">Fun facts about React</h1>
      <ul className="hero-ul">
        <li>Was first released in 2013</li>
        <li>Was originally created by Jordan Walke</li>
        <li>Has well over 100K stars on Github</li>
        <li>Is maintained by Facebook</li>
        <li>Powers thousands of enterprise apps, including mobile apps</li>
      </ul>
    </div>
  );
}

function Footer() {
  return (
    <footer className="footer-p">
      <p>&#169;2021 Ziroll Development. All rights reserved.</p>
    </footer>
  );
}

const App = () => {
  return (
    <React.Fragment>
      <Header />
      <MainContent />
      <Footer />
    </React.Fragment>
  );
};

ReactDOM.render(<App />, rootElement);