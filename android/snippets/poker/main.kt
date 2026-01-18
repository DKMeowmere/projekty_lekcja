package com.example.sprawdzian

import android.widget.*
import android.os.Bundle
import androidx.activity.enableEdgeToEdge
import androidx.appcompat.app.AppCompatActivity
import androidx.core.view.ViewCompat
import androidx.core.view.WindowInsetsCompat

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
        var player1GameResult = 0
        var player2GameResult = 0
        var player1RoundResult = 0
        var player2RoundResult = 0
        val player1RoundResultText = findViewById<TextView>(R.id.roundResult)
        val player2RoundResultText = findViewById<TextView>(R.id.roundResult2)
        val btn = findViewById<Button>(R.id.button)
        val gameResultText = findViewById<TextView>(R.id.gameResult)
        val imagesId: List<Int> = listOf(R.id.imageView, R.id.imageView2, R.id.imageView3, R.id.imageView4, R.id.imageView5,R.id.imageView6, R.id.imageView7, R.id.imageView8)
        val images = listOf(R.drawable.flowers1, R.drawable.flowers2, R.drawable.flowers3, R.drawable.flowers4)

        btn.setOnClickListener {
            player1RoundResult = 0
            player2RoundResult = 0
            val player1Nums: MutableList<Int> = mutableListOf()
            var player1Max = 1
            var player1RoundPoints = 0
            var hasPlayer1OnePair = false
            var hasPlayer1TwoPair = false
            val player2Nums: MutableList<Int> = mutableListOf()
            var player2Max = 1
            var player2RoundPoints = 0
            var hasPlayer2OnePair = false
            var hasPlayer2TwoPair = false

            for(i in 1..4){
                val randomInt = (1..4).random()

                player1Nums.add(randomInt)
                val imageView = findViewById<ImageView>(imagesId[i-1])
                imageView.setImageResource(images[randomInt-1])
            }

            for(i in 1..4){
                var digitCount = 0

                for (j in player1Nums){
                    if(i == j){
                        digitCount++
                    }
                }

                if (digitCount == 2 && !hasPlayer1OnePair){
                    hasPlayer1OnePair = true
                }  else if(digitCount == 2 && !hasPlayer1TwoPair){
                    hasPlayer1TwoPair = true
                }

                if(digitCount > player1Max) player1Max = digitCount
            }

            if (player1Max == 4){
                player1RoundPoints = 4
            } else if (player1Max == 3){
                player1RoundPoints = 3
            } else if (player1Max == 2){
                if(hasPlayer1TwoPair){
                    player1RoundPoints = 2
                } else {
                    player1RoundPoints = 1
                }
            }

            player1RoundResult = player1RoundPoints
            player1GameResult += player1RoundResult
            player1RoundResultText.text = "Wynik tego losowania: $player1RoundResult"

            //player 2
            for(i in 1..4){
                val randomInt = (1..4).random()

                player2Nums.add(randomInt)
                val imageView = findViewById<ImageView>(imagesId[i+4-1])
                imageView.setImageResource(images[randomInt-1])
            }

            for(i in 1..4){
                var digitCount = 0

                for (j in player2Nums){
                    if(i == j){
                        digitCount++
                    }
                }

                if (digitCount == 2 && !hasPlayer2OnePair){
                    hasPlayer2OnePair = true
                }  else if(digitCount == 2 && !hasPlayer2TwoPair){
                    hasPlayer2TwoPair = true
                }

                if(digitCount > player2Max) player2Max = digitCount
            }

            if (player2Max == 4){
                player2RoundPoints = 4
            } else if (player2Max == 3){
                player2RoundPoints = 3
            } else if (player2Max == 2){
                if(hasPlayer2TwoPair){
                    player2RoundPoints = 2
                } else {
                    player2RoundPoints = 1
                }
            }

            player2RoundResult = player2RoundPoints
            player2GameResult += player2RoundResult
            player2RoundResultText.text = "Wynik tego losowania: $player2RoundResult"

            if(player1GameResult > player2GameResult){
                gameResultText.text = "$player1GameResult - $player2GameResult  górny gracz wygrywa"
            } else if(player1GameResult < player2GameResult){
                gameResultText.text = "$player1GameResult - $player2GameResult   dolny gracz wygywa"
            } else {
                gameResultText.text = "$player1GameResult - $player2GameResult  remis"
            }
        }

    }
}