
const result = document.getElementById("result");
const history = document.getElementById("history");

let current = "0";
let previous = null;
let operator = null;
let resetNext = false;

function updateDisplay() {
    result.value = current;
}

function appendNumber(value) {
    if (resetNext) {
        current = value === "." ? "0." : value;
        resetNext = false;
    } else if (value === ".") {
        if (!current.includes(".")) {
            current += ".";
        }
    } else {
        current = current === "0" ? value : current + value;
    }

    updateDisplay();
}

function chooseOperator(op) {
    if (operator !== null && !resetNext) {
        calculate();
    }

    previous = Number(current);
    operator = op;
    resetNext = true;

    const symbols = { "+": "+", "-": "−", "*": "×", "/": "÷" };
    history.textContent = `${current} ${symbols[op]}`;
}

function calculate() {
    if (operator === null || previous === null) return;

    const a = previous;
    const b = Number(current);
    let answer;

    switch (operator) {
        case "+":
            answer = a + b;
            break;
        case "-":
            answer = a - b;
            break;
        case "*":
            answer = a * b;
            break;
        case "/":
            if (b === 0) {
                current = "Cannot divide by zero";
                history.textContent = "";
                operator = null;
                previous = null;
                resetNext = true;
                updateDisplay();
                return;
            }
            answer = a / b;
            break;
    }

    const symbols = { "+": "+", "-": "−", "*": "×", "/": "÷" };
    history.textContent = `${a} ${symbols[operator]} ${b} =`;

    current = String(Number(answer.toPrecision(12)));
    previous = null;
    operator = null;
    resetNext = true;
    updateDisplay();
}

function clearAll() {
    current = "0";
    previous = null;
    operator = null;
    resetNext = false;
    history.textContent = "";
    updateDisplay();
}

function backspace() {
    if (resetNext || current === "Cannot divide by zero") {
        current = "0";
        resetNext = false;
    } else {
        current = current.length > 1 ? current.slice(0, -1) : "0";

        if (current === "-") current = "0";
    }

    updateDisplay();
}

function percent() {
    current = String(Number(current) / 100);
    resetNext = true;
    updateDisplay();
}

function toggleSign() {
    if (current === "0" || current === "Cannot divide by zero") return;

    current = current.startsWith("-")
        ? current.slice(1)
        : "-" + current;

    updateDisplay();
}

// Keyboard support
document.addEventListener("keydown", function (event) {
    const key = event.key;

    if (/^[0-9.]$/.test(key)) {
        appendNumber(key);
    } else if (["+", "-", "*", "/"].includes(key)) {
        chooseOperator(key);
    } else if (key === "Enter" || key === "=") {
        calculate();
    } else if (key === "Backspace") {
        backspace();
    } else if (key === "Escape") {
        clearAll();
    } else if (key === "%") {
        percent();
    }
});
