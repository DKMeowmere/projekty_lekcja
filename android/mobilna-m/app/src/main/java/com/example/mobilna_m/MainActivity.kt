package com.example.mobilna_m

import android.media.Image
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

        val pytania = listOf(
            "Które to schronisko?",
            "Zwierzę na zdjęciu to",
            "W oddali są widoczne"
        )

        val odpowiedzi = listOf(
            listOf("Na Rysiance", "Na Wielkiej Raczy", "Na Wielkiej Rycerzowej"),
            listOf("owczarek", "wilk", "kozica"),
            listOf("Himalaje", "Alpy", "Tatry")
        )
        val indeksPoprawnejOdpowiedzi = listOf(
            1,
            0,
            2
        )

        val zdjecia = listOf(
            R.drawable.zad1,
            R.drawable.zad2,
            R.drawable.zad3
        )

        val textView = findViewById<TextView>(R.id.textView)
        val imageView = findViewById<ImageView>(R.id.imageView)
        val radioA = findViewById<RadioButton>(R.id.radioA)
        val radioB = findViewById<RadioButton>(R.id.radioB)
        val radioC = findViewById<RadioButton>(R.id.radioC)
        val button = findViewById<Button>(R.id.button)

        var liczbaPtk = 0
        var aktualnePytanie = 0

        fun zaladujPytanie() {
            radioA.isChecked = false;
            radioB.isChecked = false;
            radioC.isChecked = false;

            if(aktualnePytanie == pytania.size){
                aktualnePytanie = 0;
            }

            textView.text = pytania[aktualnePytanie]
            imageView.setImageResource(zdjecia[aktualnePytanie])
            radioA.text = odpowiedzi[aktualnePytanie][0]
            radioB.text = odpowiedzi[aktualnePytanie][1]
            radioC.text = odpowiedzi[aktualnePytanie][2]
        }

        button.setOnClickListener {
            var zaznaczonaOdp = -1

            if(radioA.isChecked){
                zaznaczonaOdp = 0
            } else if (radioB.isChecked){
                zaznaczonaOdp = 1
            } else if (radioC.isChecked){
                zaznaczonaOdp = 2
            }

            if (zaznaczonaOdp == -1) {
                Toast.makeText(this, "Nie zaznaczyłeś żadnej odpowiedzi", Toast.LENGTH_SHORT).show()
            } else {
                if (zaznaczonaOdp == indeksPoprawnejOdpowiedzi[aktualnePytanie]) {
                    liczbaPtk++
                    Toast.makeText(this, "Poprawna odpowiedź, aktualna liczba punktów: $liczbaPtk", Toast.LENGTH_SHORT).show()
                } else {
                    Toast.makeText(this, "Niepoprawna odpowiedź, aktualna liczba punktów: $liczbaPtk", Toast.LENGTH_SHORT).show()
                }

                aktualnePytanie++
                zaladujPytanie()
            }
        }

        zaladujPytanie()
    }
}