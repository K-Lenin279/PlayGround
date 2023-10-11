import React from 'react';

import Navbar from './components/Navbar.js';
import Main from './components/Main.js';
import './styles.css';

const App = () => {
  return (
    <div className="container">
      <Navbar />
      <Main />
    </div>
  );
};

export default App;