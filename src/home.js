import './App.css';

function Home() {
    return (
      <>
      <div className="bg">
        <nav> 
            <div className="navBar">
                <a href="" id="logo">Vaalve</a>
                <div className="right">
                    <div className="nav-mobile"><a id="nav-toggle" href="#!"><span></span></a></div>
                     <ul className="nav-list">
                        <li>
                        <a href="#!">Home</a>
                        </li>
                        <li>
                        <a href="#!">About</a>
                        </li>
                     </ul>
                </div>
            </div>
        </nav>
        <div>
            <h1>Vaalve</h1>
            <h2>your heart in your hands</h2>
            <h3>see your heart's health through a quiz</h3>
            <a className='btn'>Start Quiz</a>
        </div>
        <div className = "missionBar">
            <a href = "" id="mission">Our Mission</a>
            <div class="shadow"></div>
            <div class="info">
            <div class="missionStatement">We want assist people determineat underlying cardiac conditions they might have based of blood work reports, symptoms, and genetic history</div>
         </div>
      </div>
   </div>
      </>
    );
  }
  
  export default Home;