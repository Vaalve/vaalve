import './App.css';


function Q1() {
    return (
      <>
      <div id='quiz-all'>
      <div className="question-num">
        <h3>Question 1</h3>  
      </div>
      <div className='question-description'>
        <h4>Does your family have a history of heart conditions?</h4>
      </div>
      <div className='answer-group'>
        <div id='answer1' className='answer' value="1">
            <h5>Yes</h5>
        </div>
        <div className='answer-btwn'></div>  
        <div id='answer2' className='answer' value="2">
           <h5>No</h5>
        </div>
        <div className='answer-btwn'></div>           
      </div>
      </div>
      </>
    );
  }
  
  export default Q1;