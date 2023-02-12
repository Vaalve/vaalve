import './App.css';

function Home() {
    return (
      <>     
        <div className="navbar">
          <h1>vaalve.</h1>
          <div className = "right">
            <h2>Take Quiz</h2>
          </div>
          <div className='header-text'> 
            <h6>Vaalve</h6>
          </div>
          <div className='logo'>
            <img src="hands1.png" alt='hands'></img>
          </div> 
          <div className='header-body'>
            <p>your heart in your hands</p>
          </div>
          <div className='rect-container'>
            <div className="right">
              <h2>Start Quiz</h2>
            </div>
          </div>
        </div>
        <div className='our-mission'>
          <p1>Our Mission</p1>
        </div>
          <div class="card-container">
            <div class="card">
              <div class="card-body">
                <p2>We aim to assist people in determining their underlying cardiac conditions 
                  they might have based off of symptoms, genetic history, and statistical 
                  analysis. </p2>
              </div>
            </div>
          </div>
      </>
    );
  }
  
  export default Home;