const char svg_favicon_header[] PROGMEM_LATE =
"<?xml version=\"1.0\" standalone=\"no\"?>"
"<!DOCTYPE svg PUBLIC \"-//W3C//DTD SVG 20010904//EN\""
" \"http://www.w3.org/TR/2001/REC-SVG-20010904/DTD/svg10.dtd\">";
const char svg_favicon[] PROGMEM_LATE =
#if defined(I_DO_NOT_NEED_NATIVE_WEB_INTERFACE)
"";
#else
"<svg class=\"logo\" version=\"1.0\" xmlns=\"http://www.w3.org/2000/svg\""
" width=\"400pt\" height=\"400pt\" viewBox=\"0 0 400 400\""
" preserveAspectRatio=\"xMidYMid meet\">"
""
"<g transform=\"translate(0,400) scale(0.1,-0.1)\"\n"
"fill=\"#000000\" stroke=\"none\">"
"<path d=\"M292 3510 c-61 -38 -62 -42 -62 -537 0 -501 0 -500 70 -536 32 -16\n"
"69 -17 445 -15 399 3 411 4 451 25 102 54 151 156 141 293 -6 92 -35 164 -95\n"
"238 -37 46 -41 55 -31 74 23 43 39 124 39 203 0 97 -27 165 -86 213 -70 58\n"
"-100 62 -488 62 -334 0 -353 -1 -384 -20z m708 -275 c0 -60 -21 -98 -64 -119\n"
"-28 -13 -70 -16 -235 -16 l-201 0 0 -125 0 -125 246 0 c203 0 252 -3 279 -16\n"
"40 -19 65 -66 65 -123 l0 -41 -305 0 -305 0 0 305 0 305 260 0 260 0 0 -45z\"/>"
"<path d=\"M1705 3516 c-99 -31 -171 -91 -210 -172 -73 -155 -17 -359 122 -441\n"
"77 -45 136 -53 406 -53 l248 0 24 -25 c35 -34 35 -96 0 -130 l-24 -25 -401 0\n"
"-400 0 0 -126 0 -125 418 3 c407 3 418 4 473 26 77 31 142 90 176 160 24 50\n"
"27 69 28 152 0 84 -3 102 -28 152 -33 67 -90 121 -166 157 -55 26 -59 26 -338\n"
"31 -325 6 -318 4 -318 91 0 41 4 54 24 70 22 18 44 19 377 19 l354 0 0 125 0\n"
"125 -362 -1 c-264 0 -374 -4 -403 -13z\"/>"
"<path d=\"M2792 3510 c-61 -38 -62 -42 -62 -537 0 -501 0 -500 70 -536 32 -16\n"
"69 -17 445 -15 399 3 411 4 451 25 102 54 151 156 141 293 -6 92 -35 164 -95\n"
"238 -37 46 -41 55 -31 74 23 43 39 124 39 203 0 97 -27 165 -86 213 -70 58\n"
"-100 62 -488 62 -334 0 -353 -1 -384 -20z m708 -275 c0 -60 -21 -98 -64 -119\n"
"-28 -13 -70 -16 -235 -16 l-201 0 0 -125 0 -125 246 0 c203 0 252 -3 279 -16\n"
"40 -19 65 -66 65 -123 l0 -41 -305 0 -305 0 0 305 0 305 260 0 260 0 0 -45z\"/>"
"<path d=\"M1932 2152 c-138 -127 -300 -298 -376 -400 -82 -108 -178 -298 -211\n"
"-416 -21 -73 -25 -110 -25 -215 0 -201 50 -337 170 -465 59 -63 198 -172 207\n"
"-162 2 2 -7 28 -20 59 -34 75 -47 143 -47 242 l0 85 300 0 300 0 0 -82 c0 -99\n"
"-21 -206 -53 -270 l-24 -47 49 26 c105 57 218 175 275 287 86 171 84 414 -7\n"
"585 -47 88 -132 195 -255 321 -62 63 -122 133 -133 155 -47 94 -70 236 -54\n"
"333 5 28 7 52 5 52 -2 0 -47 -40 -101 -88z m45 -772 c46 -34 139 -152 172\n"
"-217 l21 -43 -240 0 -240 0 11 27 c30 80 185 263 223 263 7 0 31 -14 53 -30z\"/>"
"<path d=\"M2735 1598 c-55 -43 -55 -44 -55 -593 l0 -505 125 0 125 0 0 348 0\n"
"347 123 -125 c67 -69 219 -226 337 -349 l215 -223 51 -5 c48 -5 54 -3 90 30\n"
"l39 35 3 526 3 526 -126 0 -125 0 -2 -345 -3 -345 -237 247 c-130 137 -281\n"
"294 -335 351 l-99 102 -51 0 c-36 0 -58 -6 -78 -22z\"/>"
"<path d=\"M212 1098 c3 -459 5 -515 20 -536 41 -59 22 -57 531 -60 l467 -3 0\n"
"126 0 125 -385 0 -385 0 0 430 0 430 -125 0 -126 0 3 -512z\"/>"
"</g>"
"</svg>";
#endif

const char favicon[] PROGMEM_LATE = {
#if defined(I_DO_NOT_NEED_NATIVE_WEB_INTERFACE)
  0x00
#else
  0x89, 0x50, 0x4E, 0x47, 0x0D, 0x0A, 0x1A, 0x0A, 0x00, 0x00, 0x00, 0x0D, 0x49, 0x48, 0x44, 0x52,
  0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00, 0x10, 0x08, 0x06, 0x00, 0x00, 0x00, 0x1F, 0xF3, 0xFF,
  0x61, 0x00, 0x00, 0x01, 0xDD, 0x49, 0x44, 0x41, 0x54, 0x38, 0x8D, 0xA5, 0x91, 0x3D, 0x6B, 0x22,
  0x51, 0x14, 0x86, 0xAF, 0xC4, 0x60, 0xB0, 0x50, 0xA6, 0xF0, 0x23, 0xE0, 0x60, 0x0A, 0x09, 0x04,
  0x52, 0xDA, 0xDB, 0x68, 0xEA, 0xF9, 0x11, 0x23, 0xA4, 0xF1, 0x07, 0x58, 0x5B, 0x0A, 0x16, 0x16,
  0x0E, 0x36, 0x26, 0x69, 0x75, 0xBA, 0xA0, 0x85, 0x36, 0x62, 0x27, 0x29, 0x45, 0xC1, 0x0F, 0x10,
  0x14, 0x8B, 0xC9, 0x80, 0x95, 0x82, 0x88, 0x73, 0x9F, 0x14, 0xB2, 0xC3, 0x4A, 0x66, 0xB3, 0x0B,
  0xFB, 0xC2, 0x29, 0xCE, 0xE1, 0xE1, 0xB9, 0x5C, 0x5E, 0xC1, 0x7F, 0x46, 0x00, 0x6C, 0x36, 0x1B,
  0x96, 0xCB, 0x25, 0xCB, 0xE5, 0x92, 0xFD, 0x7E, 0x0F, 0xC0, 0xE1, 0x70, 0x70, 0x6F, 0xAB, 0xD5,
  0x8A, 0x3F, 0x71, 0x62, 0xBB, 0xDD, 0x72, 0x75, 0x75, 0x85, 0xAA, 0xAA, 0xA8, 0xAA, 0x4A, 0x32,
  0x99, 0x64, 0xB7, 0xDB, 0x91, 0x4A, 0xA5, 0xDC, 0x5B, 0x3A, 0x9D, 0xC6, 0x8B, 0x73, 0x1C, 0x07,
  0xF1, 0xF9, 0xF9, 0x89, 0xA2, 0x28, 0x18, 0x86, 0x41, 0xB9, 0x5C, 0x46, 0x51, 0x14, 0xD6, 0xEB,
  0x35, 0x8A, 0xA2, 0x50, 0xAB, 0xD5, 0x30, 0x0C, 0x83, 0x7E, 0xBF, 0x8F, 0x17, 0x77, 0x21, 0xD0,
  0x75, 0x1D, 0x5D, 0xD7, 0xB9, 0xBD, 0xBD, 0x65, 0x38, 0x1C, 0xF2, 0xF6, 0xF6, 0x46, 0x3E, 0x9F,
  0x47, 0xD7, 0x75, 0xE2, 0xF1, 0x38, 0xBD, 0x5E, 0xCF, 0x93, 0x13, 0xB6, 0x6D, 0x73, 0x7D, 0x7D,
  0x8D, 0xA6, 0x69, 0x68, 0x9A, 0x46, 0x22, 0x91, 0xA0, 0xD1, 0x68, 0xB8, 0xBB, 0xA6, 0x69, 0x44,
  0x22, 0x11, 0x06, 0x83, 0xC1, 0x37, 0xEE, 0xFD, 0xFD, 0x1D, 0x21, 0xA5, 0xA4, 0xDD, 0x6E, 0x63,
  0x9A, 0x26, 0xA6, 0x69, 0xD2, 0xED, 0x76, 0xD9, 0xED, 0x76, 0xEE, 0x6E, 0x9A, 0x26, 0xA3, 0xD1,
  0x08, 0x2F, 0x4E, 0x4A, 0x79, 0x6E, 0xC1, 0x2B, 0x52, 0x4A, 0xEA, 0xF5, 0x3A, 0x9B, 0xCD, 0xE6,
  0xEF, 0x35, 0x7A, 0xE5, 0xE5, 0xE5, 0x05, 0x9F, 0xCF, 0x47, 0xAB, 0xD5, 0xFA, 0x59, 0xB0, 0xDD,
  0x6E, 0x69, 0x34, 0x1A, 0x17, 0xC7, 0xD9, 0x6C, 0xC6, 0xCD, 0xCD, 0x0D, 0x42, 0x08, 0xC2, 0xE1,
  0x30, 0x1F, 0x1F, 0x1F, 0x58, 0x96, 0x45, 0xB3, 0xD9, 0x44, 0x4A, 0xE9, 0x3E, 0x60, 0xDB, 0x36,
  0x62, 0x3A, 0x9D, 0x72, 0x7F, 0x7F, 0x7F, 0x21, 0x28, 0x14, 0x0A, 0x08, 0x21, 0x78, 0x7E, 0x7E,
  0x26, 0x16, 0x8B, 0x91, 0x4A, 0xA5, 0xE8, 0x74, 0x3A, 0x08, 0x21, 0x30, 0x0C, 0x03, 0x80, 0x87,
  0x87, 0x07, 0x46, 0xA3, 0x91, 0xB7, 0x20, 0x97, 0xCB, 0x11, 0x0A, 0x85, 0x28, 0x95, 0x4A, 0x3C,
  0x3D, 0x3D, 0x21, 0x84, 0xA0, 0x5A, 0xAD, 0xF2, 0xF8, 0xF8, 0xC8, 0xDD, 0xDD, 0x1D, 0xAF, 0xAF,
  0xAF, 0xDF, 0x05, 0x8E, 0xE3, 0xB8, 0x53, 0x28, 0x14, 0xC8, 0x64, 0x32, 0x94, 0x4A, 0x25, 0x8A,
  0xC5, 0x22, 0x81, 0x40, 0x80, 0x66, 0xB3, 0x49, 0x36, 0x9B, 0x65, 0x3E, 0x9F, 0xA3, 0xAA, 0x2A,
  0xC1, 0x60, 0xF0, 0x2C, 0x58, 0xAD, 0x56, 0xF8, 0xFD, 0x7E, 0x84, 0x10, 0xEE, 0x9F, 0x2D, 0xCB,
  0xA2, 0x52, 0xA9, 0x00, 0x30, 0x99, 0x4C, 0x30, 0x0C, 0x83, 0x6E, 0xB7, 0x4B, 0x36, 0x9B, 0x05,
  0x60, 0x3C, 0x1E, 0x13, 0x8D, 0x46, 0x59, 0x2C, 0x16, 0xE7, 0x16, 0xA4, 0x94, 0x17, 0x03, 0xE0,
  0x38, 0x0E, 0x00, 0xA7, 0xD3, 0x89, 0xDF, 0x99, 0x5F, 0x39, 0x1E, 0x8F, 0x3F, 0xD7, 0xF8, 0xAF,
  0xF9, 0x02, 0x05, 0xC4, 0x09, 0xEE, 0x49, 0x43, 0x56, 0x4E, 0x00, 0x00, 0x00, 0x00, 0x49, 0x45,
  0x4E, 0x44, 0xAE, 0x42, 0x60, 0x82
#endif
};

#if !defined(I_WILL_USE_EXTERNAL_INTERFACE) && !defined(I_DO_NOT_NEED_NATIVE_WEB_INTERFACE)
const char graph_html[] PROGMEM_LATE =
#ifdef USE_ADVANCED_PLOT_LOG_FILE
  // - example datalog.txt (/D) contents: -
  // Milliseconds;Date;Parameter;Description;Value;Unit
  // 364592808;01.05.2022 00:00:15;8005;Status Kessel;25;
  // 364593010;01.05.2022 00:00:15;8314;Kesselrücklauftemperatur Ist;66.7;°C
  // [...]
  "</td></tr></tbody></table>" // close table opened by surrounding html to escape its width limitation
  "<div id='c3'></div>"
  "<style>"
    "svg,.c3-tooltip{font:10px sans-serif}"
    "div path,line{fill:none;stroke:#000}"
    ".c3-focused{opacity:1;stroke-width:2px}"
    ".c3-defocused,.c3-legend-item-hidden{opacity:0.2 !important}"
    ".c3-tooltip{opacity:0.5;background-color:#eee}"
    ".c3-tooltip th{background-color:#ccc}"
    ".c3-tooltip .value{text-align:right}"
  "</style>"
  "<script src='https://d3js.org/d3.v4.min.js'></script>"
  "<script src='https://cdn.jsdelivr.net/npm/c3'></script>"
  "<script>"
    "fetch('D').then(response=>response.text()).then(t=>{"
      // abbreviate heading to save javascript code size:
      "t=t.replace(/.+/,'m;t;p;d;v;u');"
      // 'pivot' data (p=params, r=row, a=all, x=prevDate, y=prevMs):
      "let p=[],r=[],a=[],x=y=0;"
      "d3.dsvFormat(';').parse(t).forEach(function(i){"
        // ms less than 1000 different from previous? -> use same hh:mm
        "if(y&&i.m-y>999){a.push(r);r=[];x=i.t}"
        "y=i.m;"
        "let k=i.p+' - '+i.d;"
        "p[k]=1;"
        "r[k]=i.v;"
        "r['t']=x?x:i.t;"
      "});"
      "a.push(r);"
      // plot:
      "let f='%d.%m.%Y %H:%M';"
      "let c=c3.generate({"
        "bindto:'#c3',"
        "data:{"
          "json:a,"
          "keys:{x:'t',value:Object.keys(p)},"
          "xFormat:f+':%S'"
        "},"
        "point:{show:false},"
        "axis:{x:{type:'timeseries',tick:{count:3,format:f}}},"
        "zoom:{enabled:true},"
        "size:{height:window.innerHeight-20},"
        "onresize:function(){c.resize({height:window.innerHeight-20})}"
      "});"
    "});"
  "</script>"
  "<table><tbody><tr><td>" // re-open table for surrounding html
  ;
#else // #ifdef USE_ADVANCED_PLOT_LOG_FILE
/*
  Based on the awesome tutorials at
    https://bl.ocks.org/d3noob
    https://bl.ocks.org/larsenmtl
  Thanks a lot for your great work!
*/
"<style>" /* set the CSS */

"div path {"
  "stroke: steelblue;"
  "stroke-width: 2;"
  "fill: none;"
"}"

".axis path,"
".axis line {"
  "fill: none;"
  "stroke: grey;"
  "stroke-width: 1;"
  "shape-rendering: crispEdges;"
"}"

".legend {"
  "font-size: 16px;"
  "font-weight: bold;"
  "text-anchor: middle;"
"}"

"</style>"
// load the d3.js library
"<script src=\"http://d3js.org/d3.v3.min.js\"></script>"

"<script>"

// Set the dimensions of the canvas / graph
"var margin = {top: 30, right: 20, bottom: 70, left: 50},"
"width = 1000 - margin.left - margin.right,"
"height = 600 - margin.top - margin.bottom;"

// Parse the date / time
"var parseDate = d3.time.format(\"%d.%m.%Y %H:%M:%S\").parse;"

// Set the ranges
"var x = d3.time.scale().range([0, width]);"
"var y = d3.scale.linear().range([height, 0]);"

// Define the axes
"var axisTimeFormat = d3.time.format.multi(["
  "[\".%L\", function(d) { return d.getMilliseconds(); }],"
  "[\":%S\", function(d) { return d.getSeconds(); }],"
  "[\"%H:%M\", function(d) { return d.getMinutes(); }],"
  "[\"%H:%M\", function(d) { return d.getHours(); }],"
  "[\"%d.%m\", function(d) { return d.getDay() && d.getDate() != 1; }],"
  "[\"%m.%Y\", function(d) { return d.getDate() != 1; }],"
  "[\"%B\", function(d) { return d.getMonth(); }],"
  "[\"%Y\", function() { return true; }]"
 "]);"

"var xAxis = d3.svg.axis().scale(x)"
    ".orient(\"bottom\").ticks(5)"
    ".tickFormat(axisTimeFormat);"

"var yAxis = d3.svg.axis().scale(y)"
    ".orient(\"left\").ticks(5);"

// Define the line
"var priceline = d3.svg.line()  "
  ".x(function(d) { return x(d.Date); })"
  ".y(function(d) { return y(d.Value); });"

// Get the data
"var dsv = d3.dsv(\";\", \"text/plain\");"
"dsv(\"D\", function(data) {"

  "data.forEach(function(d) {"
    "d.Date = parseDate(d.Date);"
    "d.Value = +d.Value;"
      "});"

// Scale the range of the data
  "x.domain(d3.extent(data, function(d) { return d.Date; }));"
  "y.domain([d3.min(data, function(d) { return d.Value; }), d3.max(data, function(d) { return d.Value; })]);"

// Nest the entries by symbol
      "var dataNest = d3.nest()"
          ".key(function(d) {return d.Parameter + ' - ' + d.Description;})"
          ".entries(data);"

// Adds the svg canvas
"var svg = d3.select(\"div\")"
    ".append(\"svg\")"
     ".attr(\"width\", width + margin.left + margin.right)"
     ".attr(\"height\", height + margin.top + margin.bottom + dataNest.length/4 * 15)"
   ".append(\"g\")"
     ".attr(\"transform\", \"translate(\" + margin.left + \",\" + margin.top + \")\");"

  "var color = d3.scale.category10();"   // set the colour scale

  "legendSpace = width/dataNest.length;" // spacing for the legend

// Loop through each symbol / key
  "dataNest.forEach(function(d,i) {"

    "svg.append(\"path\")"
            ".attr(\"class\", \"line\")"
            ".style(\"stroke\", function() {" // Add the colours dynamically
                    "return d.color = color(d.key); })"
      ".attr(\"id\", 'tag'+d.key.replace(/\\s+/g, ''))" // assign ID
      ".attr(\"d\", priceline(d.values));"

// Add the Legend
    "svg.append(\"text\")"
                ".attr(\"x\", (margin.left + legendSpace/2 + (i % 4) * width / 4))"  // space legend
                ".attr(\"y\", height + (margin.bottom/2)+ 5 + Math.floor(i/4)*20)"
                ".attr(\"class\", \"legend\")"    // style the legend
                ".style(\"fill\", function() {" // Add the colours dynamically
                    "return d.color = color(d.key); })"
      ".on(\"click\", function(){"
// Determine if current line is visible 
        "var active   = d.active ? false : true,"
        "newOpacity = active ? 0 : 1;"
// Hide or show the elements based on the ID
        "d3.select(\"#tag\"+d.key.replace(/\\s+/g, ''))"
          ".transition().duration(100)"
          ".style(\"opacity\", newOpacity); "
// Update whether or not the elements are active
        "d.active = active;"
      "})"
      ".text(d.key); "
  "});"

  "var mouseG = svg.append(\"g\")"
  ".attr(\"class\", \"mouse-over-effects\");"

  "mouseG.append(\"path\")" // this is the black vertical line to follow mouse
    ".attr(\"class\", \"mouse-line\")"
    ".style(\"stroke\", \"black\")"
    ".style(\"stroke-width\", \"1px\")"
    ".style(\"opacity\", \"0\");"

  "var lines = document.getElementsByClassName('line');"

  "var mousePerLine = mouseG.selectAll('.mouse-per-line')"
    ".data(dataNest)"
    ".enter()"
    ".append(\"g\")"
    ".attr(\"class\", \"mouse-per-line\");"

  "mousePerLine.append(\"circle\")"
    ".attr(\"r\", 7)"
    ".attr(\"id\", function(d) {"
      "return 'tag'+d.key.replace(/\\s+/g, '')" // assign ID
    "})"
    ".style(\"stroke\", function(d) {"
      "return color(d.key);"
    "})"
    ".style(\"fill\", \"none\")"
    ".style(\"stroke-width\", \"1px\")"
    ".style(\"opacity\", \"0\");"

  "mousePerLine.append(\"text\")"
    ".attr(\"id\", function(d) {"
      "return 'tag'+d.key.replace(/\\s+/g, '')" // assign ID
    "})"
    ".attr(\"transform\", \"translate(10,3)\");"

  "mouseG.append('svg:rect')" // append a rect to catch mouse movements on canvas
    ".attr('width', width)" // can't catch mouse events on a g element
    ".attr('height', height)"
    ".attr('fill', 'none')"
    ".attr('pointer-events', 'all')"
    ".on('mouseout', function() {" // on mouse out hide line, circles and text
      "d3.select(\".mouse-line\")"
        ".style(\"opacity\", \"0\");"
      "d3.selectAll(\".mouse-per-line circle\")"
        ".style(\"opacity\", \"0\");"
      "d3.selectAll(\".mouse-per-line text\")"
        ".style(\"opacity\", \"0\");"
    "})"
    ".on('mouseover', function() {" // on mouse in show line, circles and text
      "d3.select(\".mouse-line\")"
        ".style(\"opacity\", \"1\");"
      "d3.selectAll(\".mouse-per-line circle\")"
        ".style(\"opacity\", function(d) {"
          "return d.active ? 0 : 1;"
        "});"
      "d3.selectAll(\".mouse-per-line text\")"
        ".style(\"opacity\", function(d) {"
          "return d.active ? 0 : 1;"
        "});"
    "})"
    ".on('mousemove', function() {" // mouse moving over canvas
      "var mouse = d3.mouse(this);"
      "d3.select(\".mouse-line\")"
        ".attr(\"d\", function() {"
          "var d = \"M\" + mouse[0] + \",\" + height;"
          "d += \" \" + mouse[0] + \",\" + 0;"
          "return d;"
        "});"

      "d3.selectAll(\".mouse-per-line\")"
        ".attr(\"transform\", function(d, i) {"
          "var xDate = x.invert(mouse[0]),"
          "bisect = d3.bisector(function(d) { return d.Date; }).right;"
          "idx = bisect(d.values, xDate);"

          "var beginning = 0,"
          "end = lines[i].getTotalLength(),"
          "target = null;"

          "while (true){"
            "target = Math.floor((beginning + end) / 2);"
            "pos = lines[i].getPointAtLength(target);"
            "if ((target === end || target === beginning) && pos.x !== mouse[0]) {"
              "break;"
            "}"
            "if (pos.x > mouse[0]) end = target;"
            "else if (pos.x < mouse[0]) beginning = target;"
            "else break;" //position found
          "}"

          "outputFormat = d3.time.format(\"%H:%M:%S\");"
          "d3.select(this).select('text')"
          ".text(d.values[idx].Value + \" (\" + outputFormat(d.values[idx].Date) + \")\");"

          "return \"translate(\" + mouse[0] + \",\" + pos.y +\")\";"
        "});"
  "});"

// Add the X Axis
  "svg.append(\"g\")"
    ".attr(\"class\", \"x axis\")"
    ".attr(\"transform\", \"translate(0,\" + height + \")\")"
    ".call(xAxis);"

// Add the Y Axis
  "svg.append(\"g\")"
    ".attr(\"class\", \"y axis\")"
    ".call(yAxis);"

// Add the X Grid
"svg.append(\"g\").attr(\"class\", \"grid\").attr(\"transform\", \"translate(0,\" + height + \")\").call(xAxis.tickSize(-height, 0, 0).tickFormat(\"\"));"
// Add the Y Grid -  -  -  -  -
"svg.append(\"g\").attr(\"class\", \"grid\").style(\"stroke-dasharray\", \"1 3\").call(yAxis.ticks(20).tickSize(-width, 0, 0).tickFormat(\"\"));"
// Add the Y Grid  ------------
"svg.append(\"g\").attr(\"class\", \"grid\").call(yAxis.ticks(10).tickSize(-width, 0, 0).tickFormat(\"\"));"

"});"

"</script>\n";
#endif // #ifdef USE_ADVANCED_PLOT_LOG_FILE
#endif // #if !defined(I_WILL_USE_EXTERNAL_INTERFACE) && !defined(I_DO_NOT_NEED_NATIVE_WEB_INTERFACE)

const char header_html[] PROGMEM_LATE =
  "\n"
  "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.01//EN\">"
  "<html><head>"
  "<meta http-equiv=\"content-type\" content=\"text/html; charset=UTF-8\">"
  "<meta name=\"viewport\" content=\"width=device-width, initial-scale=1.0,  minimum-scale=1.0\">"
  "<link rel=\"icon\" type=\"image/svg+xml\" href=\"/favicon.svg\">"
  "<title>BSB-LAN</title>"
  "<style>A:link  {color:blue;text-decoration: none;} A:visited {color:blue;text-decoration: none;} A:hover {color:red;text-decoration: none;background-color:yellow} A:active {color:blue;text-decoration: none;} A:focus {color:red;text-decoration: none;}"
  "a.logo:hover {background-color: initial; text-decoration: initial;}"
  "table {width: 100%;  max-width: 1024px;  margin: auto;}"
  "td {vertical-align: top;}"
  "td.header {vertical-align: middle;}"
  "svg.logo {width: 10%; height: 10%}"
  "input {width: 100%; box-sizing: border-box;} select {width: 100%;}</style>"
  "</head><body>";
const char header_html2[] PROGMEM_LATE =
  "<script>function set(line){"
  "var value = document.getElementById('value'+line).value.replace(/\\.$/, '');"
  "value = value.replaceAll(' ', '_');"
  "value = value.replace('---', '');"
  "window.open(document.getElementById('main_link').href+'S'+line+'='+value,'_self');"
  "}"
  "function setbit(line){"
  "var x=document.getElementById('value'+line); var value=0;"
  "for (var i=0; i<x.options.length; i++) {"
  "if(x.options[i].selected){"
  "value=value+eval(x.options[i].value);"
  "}}"
  "window.open(document.getElementById('main_link').href+'S'+line+'='+value,'_self');"
  "}</script>";
const char header_html3[] PROGMEM_LATE =
  "<font face='Arial'>"
  "<center>";

const char auth_req_html[] PROGMEM_LATE =
  "WWW-Authenticate: Basic realm=\"Secure Area\"\n"
  "Connnection: close\n"
  "\n"
  "<!DOCTYPE HTML>"
  "<HTML><HEAD><TITLE>BSB-LAN</TITLE>"
  "</HEAD> <BODY><H1>401 Unauthorized.</H1></BODY></HTML>";

#if defined(ESP32)
const char* serverIndex = "<form method='POST' action='/update' enctype='multipart/form-data'><input type='file' name='update'><input type='submit' value='Update'></form>";
#endif
