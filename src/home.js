import './App.css';
import * as React from 'react';


function Home() {
  return (
      <>     
        <div className="navbar">
          <h1>vaalve.</h1>
          <div className = "right">
            <a href='https://take.quiz-maker.com/Q7DIKXN8S'>
              <h2>Take Quiz</h2>
            </a>
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
        </div>
        <body>
          <div className='rect-container'>
              <div className="right">
              <a href='https://take.quiz-maker.com/Q7DIKXN8S'>
                <h2>Start Quiz</h2>
              </a> 
              </div> 
          </div>
          <div className='our-mission'>
            <p1>Resources</p1>
          </div>
          <div className='resources-container'>
            <a href="https://www.healthline.com/health/coronary-artery-disease">
             <div className='resource-box'>
              <img src='1.png' alt='cor_art' />
              Coronary Heart Disease: <br></br> A Beginner's Guide
              </div>
            </a>
            <div className='resource-box-btwn'></div>
            <a href='https://www.mayoclinic.org/diseases-conditions/heart-arrhythmia/symptoms-causes/syc-20350668'>
              <div className='resource-box'>
                <img src='2.png' alt='cor_art' />
                An Accurate Look into Arrhythmia
                </div>
            </a>    
            <div className='resource-box-btwn'></div>
            <a href='https://www.mayoclinic.org/diseases-conditions/cardiomyopathy/symptoms-causes/syc-20370709'>
              <div className='resource-box'>
                <img src='3.png' alt='cor_art' />
                  A Cardiac Condition: Cardiomyopathy
                </div>
            </a>
            <div className='resource-box-btwn'></div>
          </div>
          <div className='resources-container'>
            <a href='https://www.mayoclinic.org/diseases-conditions/heart-valve-disease/symptoms-causes/syc-20353727'>
              <div className='resource-box'>
              <img src='4.png' alt='cor_art' />
                What is Valvular Heart Disease?
              </div>
            </a>
            <div className='resource-box-btwn'></div>
            <a href='https://www.healthline.com/health/endocarditis'>
              <div className='resource-box'>
              <img src='5.png' alt='cor_art' />
                Exploring Endocarditis
                </div>
            </a>
            <div className='resource-box-btwn'></div>
            <a href='https://www.youtube.com/watch?v=RTxMHPGksJw'>
              <div className='resource-box'>
              <img src='6.png' alt='cor_art' />
                A Child's Guide: Heart Disease
                </div>
            </a>
            <div className='resource-box-btwn'></div>
          </div>
        </body>
        <div className='our-mission'>
          <p1>Our Mission</p1>
        </div>
          <div class="card-container">
            <div className='resource-box-btwn'></div>
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