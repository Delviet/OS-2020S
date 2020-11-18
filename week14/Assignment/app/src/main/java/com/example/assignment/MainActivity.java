package com.example.assignment;

import android.app.AlertDialog;
import android.content.DialogInterface;
import android.util.Log;
import android.view.Menu;
import android.view.MenuItem;
import android.view.View;
import android.widget.ArrayAdapter;
import android.widget.EditText;
import android.widget.ListView;
import android.widget.TextView;
import androidx.annotation.NonNull;
import androidx.appcompat.app.AppCompatActivity;
import android.os.Bundle;
import androidx.constraintlayout.widget.ConstraintLayout;

import java.util.ArrayList;

public class MainActivity extends AppCompatActivity {

    ArrayAdapter<String> mAdapter;
    ArrayList<String> taskList = new ArrayList<>();
    ListView mTaskListView;

    @Override
    protected void onCreate (Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);
        mTaskListView = (ListView) findViewById(R.id.list_todo);
        mAdapter = new ArrayAdapter<String>(this,
                R.layout.todo_item,
                R.id.task_title,
                taskList);
        mTaskListView.setAdapter(mAdapter);
    }

    @Override
    public boolean onCreateOptionsMenu(Menu menu){
        getMenuInflater().inflate(R.menu.main_menu, menu);
        return super.onCreateOptionsMenu(menu);
    }

    @Override
    public boolean onOptionsItemSelected (MenuItem item) {
        switch (item.getItemId()) {
            case R.id.action_add_task:
                Log.d("MainClass", "Add a new task");
                final EditText taskEditText = new EditText(this);
                AlertDialog dialog = new AlertDialog.Builder(this)
                        .setTitle ("Add a new task")
                        .setMessage("What do you want to do next?")
                        .setView(taskEditText)
                        .setPositiveButton("Add" , new DialogInterface.
                                OnClickListener () {
                            @Override
                            public void onClick (DialogInterface dialog, int which )
                            {
                                String task = String.valueOf(taskEditText.getText());
                                Log.d("Add task", "Task to add :" + task);
                                addItem(task);
                            }
                        })
                        .setNegativeButton("Cancel", null).create();
                dialog.show();
                return true;
            default:
                return super.onOptionsItemSelected(item);
        }
    }

    private void addItem(String itemText) {
        taskList.add(itemText);
        mAdapter.notifyDataSetChanged();
    }

    private void removeItem(String itemText) {
        taskList.remove(itemText);
        mAdapter.notifyDataSetChanged();
    }


    //scanned Internet for the info
    public void deleteTask(View view) {
        ConstraintLayout parent = (ConstraintLayout) view.getParent();
        TextView text = (TextView) parent.getChildAt(0);
        removeItem(text.getText().toString());
    }
}
