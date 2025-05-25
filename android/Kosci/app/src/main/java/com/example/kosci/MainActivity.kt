package com.example.kosci

import android.os.Bundle
import android.widget.Button
import android.widget.ImageView
import android.widget.TextView
import androidx.activity.enableEdgeToEdge
import androidx.appcompat.app.AppCompatActivity
import androidx.core.view.ViewCompat
import androidx.core.view.WindowInsetsCompat
import kotlin.random.Random

class MainActivity : AppCompatActivity() {
    override fun onCreate(savedInstanceState: Bundle?) {
        super.onCreate(savedInstanceState)
        enableEdgeToEdge()
        setContentView(R.layout.activity_main)
        val rzut=findViewById<Button>(R.id.button)
        val reset=findViewById<Button>(R.id.button2)
        val roundResult=findViewById<TextView>(R.id.textView2)
        val result=findViewById<TextView>(R.id.textView3)
        val k1=findViewById<ImageView>(R.id.imageView)
        val k2=findViewById<ImageView>(R.id.imageView2)
        val k3=findViewById<ImageView>(R.id.imageView3)
        val k4=findViewById<ImageView>(R.id.imageView4)
        val k5=findViewById<ImageView>(R.id.imageView5)

        val diceImageViews = listOf(k1, k2, k3, k4, k5)

        val images=arrayOf(
            R.drawable.k1,
            R.drawable.k2,
            R.drawable.k3,
            R.drawable.k4,
            R.drawable.k5,
            R.drawable.k6,)
        var gameScore=0
        var score=0
        rzut.setOnClickListener {

            for (i in 0..4) {
                val wylosowanaLiczba = Random.nextInt(6)
                diceImageViews[i].setImageResource(images[wylosowanaLiczba])
                score+=wylosowanaLiczba+1
            }
            roundResult.text="Wynik tego losowania: ${score}"
            gameScore+=score
            result.text="Wynik gry: ${gameScore}"
            score=0
        }
        reset.setOnClickListener {
            score=0
            gameScore=0
            roundResult.text="Wynik tego losowania: 0"
            result.text="Wynik gry: 0"
            for (i in 0..4){
                diceImageViews[i].setImageResource(R.drawable.question)
            }
        }

    }
}