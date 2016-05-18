package com.jnitest.com.myapplication;


import android.app.Activity;
import android.os.Bundle;
import android.widget.TextView;

public class MainActivity extends Activity {
    {
        System.loadLibrary("app");
    }
    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);
        TextView tv= (TextView) findViewById(R.id.tv);
        tv.setText(getString(this.getClass().getSimpleName())+"   int= "+getInt(8));
    }

    public native int getInt(int i);

    public native String getString(String s);
}
