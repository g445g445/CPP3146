{"filter":false,"title":"pointerBasics.cpp","tooltip":"/jan 24-1/pointerBasics.cpp","undoManager":{"mark":95,"position":95,"stack":[[{"start":{"row":6,"column":4},"end":{"row":44,"column":5},"action":"remove","lines":["cout << \"Enter 10 Numbers\\n\";","    ","    int arr[10]; //Array to hold values for testing","    ","    //Gets input from the user for the int array","    for (int x =0; x < 10; x++){","        cin >> arr[x];","    }","    ","    cout << \"All Numbers are in, printing in reverse order\\n\";","    //prints the int array in revers order","    for (int x = 9; x >= 0; x--){","        cout << arr[x] << \" \\n\";","    }","    ","    int j,k; //temp vars for sorting","    ","    //Insertion sort algorith, sorts smallest to largest","    for(int i = 1; i < 10; i++){","        k = arr[i];","        j = i-1;","        while(j >= 0 && arr[j] > k){","            arr[j + 1] = arr[j];  ","            j = j - 1;","        }","        arr[j+1] = k;","    }","    /* References","    geeksforgeeks - Help with insertion sort algorith and syntax in c++","    https://www.geeksforgeeks.org/insertion-sort/","    */","    ","    ","    cout << \"Printing in sorted order\\n\";","    ","    //prints array in the sorted order","    for (int x =0; x < 10; x++){","        cout << arr[x] << \"\\n\";","    }"],"id":2}],[{"start":{"row":6,"column":4},"end":{"row":6,"column":5},"action":"insert","lines":["i"],"id":3},{"start":{"row":6,"column":5},"end":{"row":6,"column":6},"action":"insert","lines":["n"]},{"start":{"row":6,"column":6},"end":{"row":6,"column":7},"action":"insert","lines":["t"]}],[{"start":{"row":6,"column":7},"end":{"row":6,"column":8},"action":"insert","lines":[" "],"id":4},{"start":{"row":6,"column":8},"end":{"row":6,"column":9},"action":"insert","lines":["m"]},{"start":{"row":6,"column":9},"end":{"row":6,"column":10},"action":"insert","lines":["y"]}],[{"start":{"row":6,"column":10},"end":{"row":6,"column":11},"action":"insert","lines":["I"],"id":5},{"start":{"row":6,"column":11},"end":{"row":6,"column":12},"action":"insert","lines":["n"]},{"start":{"row":6,"column":12},"end":{"row":6,"column":13},"action":"insert","lines":["t"]}],[{"start":{"row":6,"column":13},"end":{"row":6,"column":14},"action":"insert","lines":[" "],"id":6},{"start":{"row":6,"column":14},"end":{"row":6,"column":15},"action":"insert","lines":["="]}],[{"start":{"row":6,"column":15},"end":{"row":6,"column":16},"action":"insert","lines":[" "],"id":7},{"start":{"row":6,"column":16},"end":{"row":6,"column":17},"action":"insert","lines":["1"]},{"start":{"row":6,"column":17},"end":{"row":6,"column":18},"action":"insert","lines":["5"]},{"start":{"row":6,"column":18},"end":{"row":6,"column":19},"action":"insert","lines":[";"]}],[{"start":{"row":6,"column":19},"end":{"row":7,"column":0},"action":"insert","lines":["",""],"id":8},{"start":{"row":7,"column":0},"end":{"row":7,"column":4},"action":"insert","lines":["    "]}],[{"start":{"row":7,"column":4},"end":{"row":7,"column":5},"action":"insert","lines":["i"],"id":9},{"start":{"row":7,"column":5},"end":{"row":7,"column":6},"action":"insert","lines":["n"]},{"start":{"row":7,"column":6},"end":{"row":7,"column":7},"action":"insert","lines":["t"]}],[{"start":{"row":7,"column":7},"end":{"row":7,"column":8},"action":"insert","lines":[" "],"id":10},{"start":{"row":7,"column":8},"end":{"row":7,"column":9},"action":"insert","lines":["*"]}],[{"start":{"row":7,"column":9},"end":{"row":7,"column":10},"action":"insert","lines":[" "],"id":11},{"start":{"row":7,"column":10},"end":{"row":7,"column":11},"action":"insert","lines":["m"]}],[{"start":{"row":7,"column":11},"end":{"row":7,"column":12},"action":"insert","lines":["y"],"id":12},{"start":{"row":7,"column":12},"end":{"row":7,"column":13},"action":"insert","lines":["P"]},{"start":{"row":7,"column":13},"end":{"row":7,"column":14},"action":"insert","lines":["o"]}],[{"start":{"row":7,"column":14},"end":{"row":7,"column":15},"action":"insert","lines":["i"],"id":13},{"start":{"row":7,"column":15},"end":{"row":7,"column":16},"action":"insert","lines":["n"]},{"start":{"row":7,"column":16},"end":{"row":7,"column":17},"action":"insert","lines":["t"]},{"start":{"row":7,"column":17},"end":{"row":7,"column":18},"action":"insert","lines":["e"]},{"start":{"row":7,"column":18},"end":{"row":7,"column":19},"action":"insert","lines":["r"]}],[{"start":{"row":7,"column":19},"end":{"row":7,"column":20},"action":"insert","lines":[" "],"id":14},{"start":{"row":7,"column":20},"end":{"row":7,"column":21},"action":"insert","lines":["="]}],[{"start":{"row":7,"column":21},"end":{"row":7,"column":22},"action":"insert","lines":[" "],"id":15}],[{"start":{"row":7,"column":22},"end":{"row":7,"column":23},"action":"insert","lines":["&"],"id":16},{"start":{"row":7,"column":23},"end":{"row":7,"column":24},"action":"insert","lines":["m"]}],[{"start":{"row":7,"column":24},"end":{"row":7,"column":25},"action":"insert","lines":["y"],"id":17}],[{"start":{"row":7,"column":23},"end":{"row":7,"column":25},"action":"remove","lines":["my"],"id":18},{"start":{"row":7,"column":23},"end":{"row":7,"column":28},"action":"insert","lines":["myInt"]}],[{"start":{"row":7,"column":28},"end":{"row":7,"column":29},"action":"insert","lines":[";"],"id":19}],[{"start":{"row":7,"column":29},"end":{"row":8,"column":0},"action":"insert","lines":["",""],"id":20},{"start":{"row":8,"column":0},"end":{"row":8,"column":4},"action":"insert","lines":["    "]},{"start":{"row":8,"column":4},"end":{"row":8,"column":5},"action":"insert","lines":["c"]},{"start":{"row":8,"column":5},"end":{"row":8,"column":6},"action":"insert","lines":["o"]},{"start":{"row":8,"column":6},"end":{"row":8,"column":7},"action":"insert","lines":["u"]},{"start":{"row":8,"column":7},"end":{"row":8,"column":8},"action":"insert","lines":["t"]}],[{"start":{"row":8,"column":4},"end":{"row":8,"column":8},"action":"remove","lines":["cout"],"id":22},{"start":{"row":8,"column":4},"end":{"row":8,"column":5},"action":"insert","lines":[" "]}],[{"start":{"row":8,"column":4},"end":{"row":8,"column":5},"action":"remove","lines":[" "],"id":23}],[{"start":{"row":8,"column":4},"end":{"row":8,"column":5},"action":"insert","lines":["c"],"id":24}],[{"start":{"row":8,"column":5},"end":{"row":8,"column":6},"action":"insert","lines":["o"],"id":25},{"start":{"row":8,"column":6},"end":{"row":8,"column":7},"action":"insert","lines":["u"]},{"start":{"row":8,"column":7},"end":{"row":8,"column":8},"action":"insert","lines":["t"]}],[{"start":{"row":8,"column":8},"end":{"row":8,"column":9},"action":"insert","lines":[" "],"id":26}],[{"start":{"row":8,"column":9},"end":{"row":8,"column":10},"action":"insert","lines":["*"],"id":27},{"start":{"row":8,"column":10},"end":{"row":8,"column":11},"action":"insert","lines":["m"]}],[{"start":{"row":8,"column":11},"end":{"row":8,"column":12},"action":"insert","lines":["y"],"id":28}],[{"start":{"row":8,"column":10},"end":{"row":8,"column":12},"action":"remove","lines":["my"],"id":29},{"start":{"row":8,"column":10},"end":{"row":8,"column":15},"action":"insert","lines":["myInt"]}],[{"start":{"row":8,"column":9},"end":{"row":8,"column":10},"action":"insert","lines":["<"],"id":30},{"start":{"row":8,"column":10},"end":{"row":8,"column":11},"action":"insert","lines":["<"]}],[{"start":{"row":8,"column":11},"end":{"row":8,"column":12},"action":"insert","lines":[" "],"id":31}],[{"start":{"row":8,"column":18},"end":{"row":8,"column":19},"action":"insert","lines":[";"],"id":32}],[{"start":{"row":8,"column":12},"end":{"row":8,"column":13},"action":"remove","lines":["*"],"id":33}],[{"start":{"row":8,"column":12},"end":{"row":8,"column":13},"action":"insert","lines":["&"],"id":34}],[{"start":{"row":8,"column":18},"end":{"row":8,"column":19},"action":"insert","lines":[" "],"id":35},{"start":{"row":8,"column":19},"end":{"row":8,"column":20},"action":"insert","lines":["<"]},{"start":{"row":8,"column":20},"end":{"row":8,"column":21},"action":"insert","lines":["<"]}],[{"start":{"row":8,"column":21},"end":{"row":8,"column":22},"action":"insert","lines":[" "],"id":36}],[{"start":{"row":8,"column":22},"end":{"row":8,"column":24},"action":"insert","lines":["\"\""],"id":37}],[{"start":{"row":8,"column":24},"end":{"row":8,"column":25},"action":"insert","lines":[" "],"id":38}],[{"start":{"row":8,"column":23},"end":{"row":8,"column":24},"action":"insert","lines":[" "],"id":39}],[{"start":{"row":8,"column":26},"end":{"row":8,"column":27},"action":"insert","lines":["m"],"id":40}],[{"start":{"row":8,"column":27},"end":{"row":8,"column":28},"action":"insert","lines":["y"],"id":41}],[{"start":{"row":8,"column":26},"end":{"row":8,"column":28},"action":"remove","lines":["my"],"id":42},{"start":{"row":8,"column":26},"end":{"row":8,"column":35},"action":"insert","lines":["myPointer"]}],[{"start":{"row":8,"column":25},"end":{"row":8,"column":26},"action":"insert","lines":[" "],"id":43},{"start":{"row":8,"column":26},"end":{"row":8,"column":27},"action":"insert","lines":["<"]},{"start":{"row":8,"column":27},"end":{"row":8,"column":28},"action":"insert","lines":["<"]}],[{"start":{"row":8,"column":39},"end":{"row":9,"column":0},"action":"insert","lines":["",""],"id":44},{"start":{"row":9,"column":0},"end":{"row":9,"column":4},"action":"insert","lines":["    "]}],[{"start":{"row":9,"column":4},"end":{"row":9,"column":39},"action":"insert","lines":["cout << &myInt << \" \" << myPointer;"],"id":45}],[{"start":{"row":9,"column":12},"end":{"row":9,"column":13},"action":"remove","lines":["&"],"id":46}],[{"start":{"row":9,"column":28},"end":{"row":9,"column":29},"action":"insert","lines":["*"],"id":47}],[{"start":{"row":8,"column":38},"end":{"row":8,"column":39},"action":"insert","lines":["<"],"id":48},{"start":{"row":8,"column":39},"end":{"row":8,"column":40},"action":"insert","lines":["<"]}],[{"start":{"row":8,"column":40},"end":{"row":8,"column":41},"action":"insert","lines":[" "],"id":49}],[{"start":{"row":8,"column":41},"end":{"row":8,"column":43},"action":"insert","lines":["\"\""],"id":50}],[{"start":{"row":8,"column":42},"end":{"row":8,"column":43},"action":"insert","lines":["\\"],"id":51},{"start":{"row":8,"column":43},"end":{"row":8,"column":44},"action":"insert","lines":["n"]}],[{"start":{"row":9,"column":39},"end":{"row":10,"column":0},"action":"insert","lines":["",""],"id":52},{"start":{"row":10,"column":0},"end":{"row":10,"column":4},"action":"insert","lines":["    "]},{"start":{"row":10,"column":4},"end":{"row":11,"column":0},"action":"insert","lines":["",""]},{"start":{"row":11,"column":0},"end":{"row":11,"column":4},"action":"insert","lines":["    "]},{"start":{"row":11,"column":4},"end":{"row":12,"column":0},"action":"insert","lines":["",""]},{"start":{"row":12,"column":0},"end":{"row":12,"column":4},"action":"insert","lines":["    "]},{"start":{"row":12,"column":4},"end":{"row":13,"column":0},"action":"insert","lines":["",""]},{"start":{"row":13,"column":0},"end":{"row":13,"column":4},"action":"insert","lines":["    "]}],[{"start":{"row":7,"column":29},"end":{"row":8,"column":0},"action":"insert","lines":["",""],"id":53},{"start":{"row":8,"column":0},"end":{"row":8,"column":4},"action":"insert","lines":["    "]}],[{"start":{"row":5,"column":1},"end":{"row":6,"column":0},"action":"insert","lines":["",""],"id":54},{"start":{"row":6,"column":0},"end":{"row":6,"column":4},"action":"insert","lines":["    "]},{"start":{"row":6,"column":4},"end":{"row":6,"column":5},"action":"insert","lines":["/"]},{"start":{"row":6,"column":5},"end":{"row":6,"column":6},"action":"insert","lines":["s"]},{"start":{"row":6,"column":6},"end":{"row":6,"column":7},"action":"insert","lines":["t"]},{"start":{"row":6,"column":7},"end":{"row":6,"column":8},"action":"insert","lines":["e"]},{"start":{"row":6,"column":8},"end":{"row":6,"column":9},"action":"insert","lines":["a"]}],[{"start":{"row":6,"column":8},"end":{"row":6,"column":9},"action":"remove","lines":["a"],"id":55},{"start":{"row":6,"column":7},"end":{"row":6,"column":8},"action":"remove","lines":["e"]},{"start":{"row":6,"column":6},"end":{"row":6,"column":7},"action":"remove","lines":["t"]},{"start":{"row":6,"column":5},"end":{"row":6,"column":6},"action":"remove","lines":["s"]}],[{"start":{"row":6,"column":5},"end":{"row":6,"column":6},"action":"insert","lines":["/"],"id":56},{"start":{"row":6,"column":6},"end":{"row":6,"column":7},"action":"insert","lines":["t"]}],[{"start":{"row":6,"column":6},"end":{"row":6,"column":7},"action":"remove","lines":["t"],"id":57}],[{"start":{"row":6,"column":6},"end":{"row":6,"column":7},"action":"insert","lines":["s"],"id":58},{"start":{"row":6,"column":7},"end":{"row":6,"column":8},"action":"insert","lines":["t"]},{"start":{"row":6,"column":8},"end":{"row":6,"column":9},"action":"insert","lines":["e"]}],[{"start":{"row":6,"column":9},"end":{"row":6,"column":10},"action":"insert","lines":["p"],"id":59}],[{"start":{"row":6,"column":10},"end":{"row":6,"column":11},"action":"insert","lines":[" "],"id":60},{"start":{"row":6,"column":11},"end":{"row":6,"column":12},"action":"insert","lines":["1"]}],[{"start":{"row":9,"column":4},"end":{"row":9,"column":5},"action":"insert","lines":["/"],"id":61},{"start":{"row":9,"column":5},"end":{"row":9,"column":6},"action":"insert","lines":["/"]},{"start":{"row":9,"column":6},"end":{"row":9,"column":7},"action":"insert","lines":["s"]},{"start":{"row":9,"column":7},"end":{"row":9,"column":8},"action":"insert","lines":["t"]},{"start":{"row":9,"column":8},"end":{"row":9,"column":9},"action":"insert","lines":["e"]},{"start":{"row":9,"column":9},"end":{"row":9,"column":10},"action":"insert","lines":["a"]},{"start":{"row":9,"column":10},"end":{"row":9,"column":11},"action":"insert","lines":["p"]}],[{"start":{"row":9,"column":10},"end":{"row":9,"column":11},"action":"remove","lines":["p"],"id":62},{"start":{"row":9,"column":9},"end":{"row":9,"column":10},"action":"remove","lines":["a"]}],[{"start":{"row":9,"column":9},"end":{"row":9,"column":10},"action":"insert","lines":["p"],"id":63}],[{"start":{"row":9,"column":10},"end":{"row":9,"column":11},"action":"insert","lines":[" "],"id":64},{"start":{"row":9,"column":11},"end":{"row":9,"column":12},"action":"insert","lines":["2"]}],[{"start":{"row":12,"column":4},"end":{"row":12,"column":5},"action":"insert","lines":["/"],"id":65},{"start":{"row":12,"column":5},"end":{"row":12,"column":6},"action":"insert","lines":["/"]},{"start":{"row":12,"column":6},"end":{"row":12,"column":7},"action":"insert","lines":["s"]},{"start":{"row":12,"column":7},"end":{"row":12,"column":8},"action":"insert","lines":["t"]},{"start":{"row":12,"column":8},"end":{"row":12,"column":9},"action":"insert","lines":["e"]}],[{"start":{"row":12,"column":9},"end":{"row":12,"column":10},"action":"insert","lines":["p"],"id":66},{"start":{"row":12,"column":10},"end":{"row":12,"column":11},"action":"insert","lines":["3"]}],[{"start":{"row":12,"column":10},"end":{"row":12,"column":11},"action":"remove","lines":["3"],"id":67}],[{"start":{"row":12,"column":10},"end":{"row":12,"column":11},"action":"insert","lines":[" "],"id":68},{"start":{"row":12,"column":11},"end":{"row":12,"column":12},"action":"insert","lines":["3"]}],[{"start":{"row":5,"column":1},"end":{"row":6,"column":0},"action":"insert","lines":["",""],"id":69},{"start":{"row":6,"column":0},"end":{"row":6,"column":4},"action":"insert","lines":["    "]},{"start":{"row":6,"column":4},"end":{"row":6,"column":5},"action":"insert","lines":["/"]},{"start":{"row":6,"column":5},"end":{"row":6,"column":6},"action":"insert","lines":["/"]}],[{"start":{"row":6,"column":6},"end":{"row":6,"column":7},"action":"insert","lines":["P"],"id":70},{"start":{"row":6,"column":7},"end":{"row":6,"column":8},"action":"insert","lines":["a"]},{"start":{"row":6,"column":8},"end":{"row":6,"column":9},"action":"insert","lines":["r"]},{"start":{"row":6,"column":9},"end":{"row":6,"column":10},"action":"insert","lines":["t"]}],[{"start":{"row":6,"column":10},"end":{"row":6,"column":11},"action":"insert","lines":[" "],"id":71},{"start":{"row":6,"column":11},"end":{"row":6,"column":12},"action":"insert","lines":["!"]}],[{"start":{"row":6,"column":11},"end":{"row":6,"column":12},"action":"remove","lines":["!"],"id":72}],[{"start":{"row":6,"column":11},"end":{"row":6,"column":12},"action":"insert","lines":["1"],"id":73}],[{"start":{"row":6,"column":6},"end":{"row":6,"column":7},"action":"insert","lines":[" "],"id":74},{"start":{"row":6,"column":7},"end":{"row":6,"column":8},"action":"insert","lines":["-"]},{"start":{"row":6,"column":8},"end":{"row":6,"column":9},"action":"insert","lines":["-"]},{"start":{"row":6,"column":9},"end":{"row":6,"column":10},"action":"insert","lines":["-"]}],[{"start":{"row":6,"column":10},"end":{"row":6,"column":11},"action":"insert","lines":[" "],"id":75},{"start":{"row":6,"column":11},"end":{"row":6,"column":12},"action":"insert","lines":[" "]}],[{"start":{"row":6,"column":18},"end":{"row":6,"column":19},"action":"insert","lines":[" "],"id":76},{"start":{"row":6,"column":19},"end":{"row":6,"column":20},"action":"insert","lines":["-"]},{"start":{"row":6,"column":20},"end":{"row":6,"column":21},"action":"insert","lines":["-"]},{"start":{"row":6,"column":21},"end":{"row":6,"column":22},"action":"insert","lines":["-"]}],[{"start":{"row":13,"column":12},"end":{"row":14,"column":0},"action":"insert","lines":["",""],"id":77},{"start":{"row":14,"column":0},"end":{"row":14,"column":4},"action":"insert","lines":["    "]}],[{"start":{"row":14,"column":4},"end":{"row":14,"column":5},"action":"insert","lines":["w"],"id":78}],[{"start":{"row":14,"column":4},"end":{"row":14,"column":5},"action":"remove","lines":["w"],"id":79}],[{"start":{"row":14,"column":4},"end":{"row":14,"column":5},"action":"insert","lines":["m"],"id":80},{"start":{"row":14,"column":5},"end":{"row":14,"column":6},"action":"insert","lines":["y"]}],[{"start":{"row":14,"column":4},"end":{"row":14,"column":6},"action":"remove","lines":["my"],"id":81},{"start":{"row":14,"column":4},"end":{"row":14,"column":9},"action":"insert","lines":["myInt"]}],[{"start":{"row":14,"column":9},"end":{"row":14,"column":10},"action":"insert","lines":[" "],"id":82},{"start":{"row":14,"column":10},"end":{"row":14,"column":11},"action":"insert","lines":["="]}],[{"start":{"row":14,"column":11},"end":{"row":14,"column":12},"action":"insert","lines":[" "],"id":83},{"start":{"row":14,"column":12},"end":{"row":14,"column":13},"action":"insert","lines":["1"]},{"start":{"row":14,"column":13},"end":{"row":14,"column":14},"action":"insert","lines":["0"]},{"start":{"row":14,"column":14},"end":{"row":14,"column":15},"action":"insert","lines":[";"]}],[{"start":{"row":14,"column":15},"end":{"row":15,"column":0},"action":"insert","lines":["",""],"id":84},{"start":{"row":15,"column":0},"end":{"row":15,"column":4},"action":"insert","lines":["    "]}],[{"start":{"row":15,"column":4},"end":{"row":15,"column":18},"action":"insert","lines":["cout << &myInt"],"id":85}],[{"start":{"row":15,"column":18},"end":{"row":15,"column":19},"action":"insert","lines":[";"],"id":86}],[{"start":{"row":12,"column":38},"end":{"row":12,"column":45},"action":"insert","lines":["<< \"\\n\""],"id":87}],[{"start":{"row":15,"column":18},"end":{"row":15,"column":25},"action":"insert","lines":["<< \"\\n\""],"id":88}],[{"start":{"row":15,"column":25},"end":{"row":15,"column":37},"action":"insert","lines":["<< myPointer"],"id":89}],[{"start":{"row":15,"column":18},"end":{"row":15,"column":25},"action":"remove","lines":["<< \"\\n\""],"id":90}],[{"start":{"row":15,"column":30},"end":{"row":15,"column":37},"action":"insert","lines":["<< \"\\n\""],"id":91}],[{"start":{"row":15,"column":18},"end":{"row":15,"column":19},"action":"insert","lines":[" "],"id":92}],[{"start":{"row":15,"column":19},"end":{"row":15,"column":24},"action":"insert","lines":["< \" \""],"id":93}],[{"start":{"row":15,"column":20},"end":{"row":15,"column":21},"action":"insert","lines":["<"],"id":94}],[{"start":{"row":15,"column":45},"end":{"row":16,"column":0},"action":"insert","lines":["",""],"id":95},{"start":{"row":16,"column":0},"end":{"row":16,"column":4},"action":"insert","lines":["    "]}],[{"start":{"row":16,"column":4},"end":{"row":16,"column":45},"action":"insert","lines":["cout << &myInt << \" \"<< myPointer<< \"\\n\";"],"id":96}],[{"start":{"row":16,"column":12},"end":{"row":16,"column":13},"action":"remove","lines":["&"],"id":97}],[{"start":{"row":16,"column":27},"end":{"row":16,"column":28},"action":"insert","lines":["*"],"id":98}]]},"ace":{"folds":[],"scrolltop":0,"scrollleft":0,"selection":{"start":{"row":16,"column":28},"end":{"row":16,"column":28},"isBackwards":false},"options":{"guessTabSize":true,"useWrapMode":false,"wrapToView":true},"firstLineState":0},"timestamp":1611705948149,"hash":"5b535d02406ee0b7004529e4d33d841b9e9d7a1d"}