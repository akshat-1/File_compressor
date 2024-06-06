# File_compressor

<p> This repo contains two libraries for hoffman encoding and decoding respectively </p>
<br>
<p> You can directly download the libraries and paste the files in your working folder before importing them </p>

<h2> CLASSES AND METHORDS </h2>
<h3> 1. hoffman encoder (hoffman.h) </h3><br>
<p> CLASSES -> encoder(string str)</p>
<br>
<p> METHORDS(PUBLIC) -> <br>1. encoder(str).solver() {solver is a void function which will encods the inputted string} </p> <br>
<p>2. encoder(str).get_str()  {get_str() returns the encoder string} </p> <br>
<p>3. encoder(str).get_key() {get_key() returns the key for each character in string useful for decoding it} </p>
<br>
<h3> 2, hoffman decoder (hoffman_decoder.h)</h3> <br>
<p> CLASSES -> decoder(string str , map<char,string> key) </p>
<br>
<p>METHORDS(PUBLIC) -> <br>1. decoder(str,key).solver() {solver is a void function which decodes the given encoded string}</p><br>
<p> 2. decoder(str,key).get_actual_str()  {get_actual_str() return a string which the the actual decoded string} </p> <br>

<h2> COMPLEXITY ANAYISIS </h2>
<br> <p> 1. encoder (hoffman.hpp) <br> <b> SPACE COMPLEXITY ~</b> O(2n-1) + O((2n-1)*(3n))+ O(n(1+n)) + O((2n-1)(n+2))~ <b>O(n^2)</b> <br> <b> TIME COMPLEXITY ~</b> 2*O(n) + 2*O(2n-1) ~ <b> O(n)</b>  </p> <br>
<p> 2. decoder (hoffman_decoder.hpp) <br> <b> SPACE COMPLEXITY ~</b> O(n) + O(n*(n+1)) + O(2n-1) ~ <b> O(n^2) </b> <br> <b> TIME COMPLEXITY ~ </b>O(n) + O((n)*(2n-1)) ~ <b> O(n^2)</b> <br>
<h1> TROUBLE-SHOOTING (FOR BEGINNERS) </h1>
<p> 1. make sure that you run the solver() before using get_str(), get_key() or get_actual_str() , otherwise you will always get a empty string and empty key as output </p>


