class Neuron
{


public:
    void add(int num_reserve[], int weight[], const int len)
    {
        cout << endl << "Увеличение вектора Weight: " << endl;
        for (int i = 0; i < len; i++)
        {
            if (num_reserve[i] == 1)
            {
                weight[i]++;
            }
            cout << num_reserve[i] << " ";
        }
        cout << endl;
        for (int i = 0; i < len; i++)
        {
            cout << weight[i] << " ";
        }
        cout << endl;
    }

    void sub(int num_reserve[], int weight[], const int len)
    {
        cout << endl << "Уменьшение вектора Weight: " << endl;
        for (int i = 0; i < len; i++)
        {
            if (num_reserve[i] == 1)
            {
                weight[i]--;
            }
            cout << num_reserve[i] << " ";
        }
        cout << endl;
        for (int i = 0; i < len; i++)
        {
            cout << weight[i] << " ";
        }
        cout << endl;
    }


    const int N[15];
    int weight[15];
    const int strings = 100;
    const int len = 15;

};