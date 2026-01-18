package com.example.zmieniajobrazki

import android.os.Bundle
import android.widget.Button
import android.widget.ImageView
import androidx.appcompat.app.AppCompatActivity

class MainActivity : AppCompatActivity() {



    override fun onCreate(savedInstanceState: Bundle?) {
        super.onCreate(savedInstanceState)
        setContentView(R.layout.activity_main)

        val imageView= findViewById<ImageView>(R.id.imageView)
        val changeImageButton=findViewById<Button>(R.id.changeImageButton)
        val images = arrayOf(
            R.drawable.image1,
            R.drawable.image2,
            R.drawable.image3
        )
        var currentImageIndex = 0
        changeImageButton.setOnClickListener {
            currentImageIndex = (currentImageIndex + 1) % images.size
            imageView.setImageResource(images[currentImageIndex])
        }
    }
}