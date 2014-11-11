package gr.gmetal.jnicrashhandlerapp;

import android.app.Activity;
import android.os.Bundle;
import android.view.Menu;
import android.view.MenuItem;
import android.view.View;
import android.view.View.OnClickListener;
import android.widget.Button;


public class MainActivity extends Activity implements OnClickListener {

	static {
		System.loadLibrary("JNICrashHandlerApp");
	}
	
    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);
        
        Button safeFuncBtn = (Button) findViewById(R.id.btn_safe_func);
        Button unsafeFuncBtn = (Button) findViewById(R.id.btn_unsafe_func);
        safeFuncBtn.setOnClickListener(this);
        unsafeFuncBtn.setOnClickListener(this);
    }


    @Override
    public boolean onCreateOptionsMenu(Menu menu) {
        // Inflate the menu; this adds items to the action bar if it is present.
        getMenuInflater().inflate(R.menu.main, menu);
        return true;
    }

    @Override
    public boolean onOptionsItemSelected(MenuItem item) {
        // Handle action bar item clicks here. The action bar will
        // automatically handle clicks on the Home/Up button, so long
        // as you specify a parent activity in AndroidManifest.xml.
        int id = item.getItemId();
        if (id == R.id.action_settings) {
            return true;
        }
        return super.onOptionsItemSelected(item);
    }


	@Override
	public void onClick(View v) {
		if (v.getId() == R.id.btn_safe_func) {
			safeFunc();
		}
		else if (v.getId() == R.id.btn_unsafe_func) {
			unsafeFunc();
		}
	}
	
	private native void safeFunc();
	private native void unsafeFunc();
}
