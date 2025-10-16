package com.example.zadanie_3_kosci

import android.os.Bundle
import androidx.activity.enableEdgeToEdge
import androidx.appcompat.app.AppCompatActivity
import androidx.core.view.ViewCompat
import androidx.core.view.WindowInsetsCompat
import android.widget.*

class MainActivity : AppCompatActivity() {
    override fun onCreate(savedInstanceState: Bundle?) {
        super.onCreate(savedInstanceState)
        enableEdgeToEdge()
        setContentView(R.layout.activity_main)
        ViewCompat.setOnApplyWindowInsetsListener(findViewById(R.id.main)) { v, insets ->
            val systemBars = insets.getInsets(WindowInsetsCompat.Type.systemBars())
            v.setPadding(systemBars.left, systemBars.top, systemBars.right, systemBars.bottom)
            insets
        }

        val startBtn = findViewById<Button>(R.id.startButton)
        val resetBtn = findViewById<Button>(R.id.resetButton)
        val currentResultTextView = findViewById<TextView>(R.id.currentResult)
        val gameResultTextView = findViewById<TextView>(R.id.gameResult)
        val imagesId: List<Int> = listOf(R.id.imageView1, R.id.imageView2, R.id.imageView3, R.id.imageView4, R.id.imageView5)
        val images = listOf(R.drawable.k1, R.drawable.k2, R.drawable.k3, R.drawable.k4, R.drawable.k5, R.drawable.k6)
        var result = 0

        startBtn.setOnClickListener {
            var currentResult = 0;
            val currentList: MutableList<Int> = mutableListOf()

            for(i in imagesId.indices) {
                val randomInt = (0..5).random()
                currentList.add(randomInt+1)
                val imageView = findViewById<ImageView>(imagesId[i])
                imageView.setImageResource(images[randomInt])
            }

            for(i in 1..6){
                var digitCount = 0

                for (j in currentList){
                    if(i == j){
                        digitCount++
                    }
                }

                if(digitCount > 1) currentResult+=digitCount * i
            }

            result+=currentResult
            currentResultTextView.text = "Wynik tego losowania: $currentResult"
            gameResultTextView.text = "Wynik gry: $result"
        }

        resetBtn.setOnClickListener {
            result  = 0;
            currentResultTextView.text = "Wynik tego losowania: 0"
            gameResultTextView.text = "Wynik gry: 0"

            //iterowanie po indeksach listy
            for(i in imagesId.indices) {
                val imageView = findViewById<ImageView>(imagesId[i])
                imageView.setImageResource(R.drawable.question)
            }
        }

    }
}