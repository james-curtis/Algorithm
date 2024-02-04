// https://jasonlam0990.github.io/2019/04/02/%E5%BE%AE%E4%BF%A1%E4%BA%8B%E4%B8%9A%E7%BE%A4%E9%9D%A2%E8%AF%95%E9%A2%98%EF%BC%9AHardMan-LazyMan/

function HardMan(manName) {
    return new Man(manName);
}

class Man {
    /**
     *
     * @type {Array< () => Promise>}
     */
    task = []

    constructor(name) {
        this.task.push(() => {
            return new Promise(res => {
                console.log(`I am ${name}`);
                res()
            })
        })

        const run = () => {
            const cursorTask = this.task.shift()
            cursorTask && cursorTask().then(run)
        }
        setTimeout(run)
    }

    rest(time) {
        this.task.push(() =>
            new Promise(res => setTimeout(() => {
                res()
                console.log(`Start learning after ${time} seconds`);
            }, time * 1000))
        )
        return this;
    }

    restFirst(time) {
        this.task.unshift(() =>
            new Promise(res => setTimeout(() => {
                res()
                console.log(`Start learning after ${time} seconds`);
            }, time * 1000))
        )
        return this;
    }

    learn(skill) {
        this.task.push(() => new Promise(res => {
            console.log(`Learning ${skill}`);
            res()
        }))
        return this;
    }

}

// let man = HardMan('jack');
// HardMan(`jack`).rest(1).learn(`computer`)
// HardMan(`jack`).restFirst(5).learn(`chinese`)
HardMan("jack").restFirst(3).learn("Chinese").learn("Englsih").rest(2).learn("Japanese")