import kotlinx.coroutines.*

// Sequentially executes doWorld followed by "Done"
//顺序执行
fun main() = runBlocking {
    doWorld()
    println("Done")
}

// Concurrently executes both sections
//同时执行两个部分
suspend fun doWorld() = coroutineScope { // this: CoroutineScope
    launch {
        delay(2000L)
        println("World 2")
    }
    launch {
        delay(1000L)
        println("World 1")
    }
    println("Hello")
}
