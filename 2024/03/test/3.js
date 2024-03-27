function debounce(fn, that, wait) {
    let timer = null;
    return (...args) => {
        clearTimeout(timer);
        timer = setTimeout(() => {
            fn.apply(that, args)
            timer = null;
        }, wait);
    }
}

function fn() {
    console.log(new Date().getTime());
}

const deboucedFn = debounce(fn, 100);
deboucedFn()
deboucedFn()
deboucedFn()
deboucedFn()
deboucedFn()
deboucedFn()