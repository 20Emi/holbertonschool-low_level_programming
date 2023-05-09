<h1>Variadic functions</h1>
<h2>What are they?</h2>
<p>They are functions that can accept a variable number of arguments. This means that, instead of having a fixed number of arguments defined in the function declaration, different numbers of arguments can be passed when calling the function.

  Variadic functions are declared using the special <b>stdarg.h</b> function header. This header provides the necessary tools for working with variable arguments in a function. The main mechanism used to work with variable arguments in C is the <b>va_list</b> object, which is used to iterate through the function arguments.</p>
<h2>Project objectives</h2>

<li>What are variadic functions</li>
<li>How to use <b>va_start, va_arg</b> and <b>va_end</b> macros</li>
<li>Why and how to use the const type qualifier</li>
