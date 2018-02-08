#include "viewer.h"
#include "ui_viewer.h"
#include "QString"
#include "qwt_plot.h"
#include "qwt_series_data.h"
#include "qwt_plot_curve.h"
Viewer::Viewer(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Viewer)
{
    ui->setupUi(this);

}

Viewer::~Viewer()
{
    delete ui;

}

Viewer::display(QString data)
{
    bool ok;
    QVector<QPointF> elements;
    QVector<double>dataseries;
    QwtPlot *myPlot = new QwtPlot();
    QwtPlotCurve *curve1 = new QwtPlotCurve();
    QwtPointSeriesData* myData = new QwtPointSeriesData();

//        elements.clear();
//        myData->setSamples(elements); //i dati del grafico vengono aggiunti
//        curve1->setData(myData); //viene creata una curva a partire da questi punti

//        curve1->attach(myPlot);  //la curva è associata al grafico
//        myPlot->resize(391,301); //ne viene specificata la dimensione

//        myPlot->replot(); //display del tracciato


    for(QString token: data.split(","))
    {
        if(token.length()>=1)
        dataseries.append(token.toDouble(&ok));
    }


    for(int i=0;i<dataseries.size()-1;i=i+2)
    {
        QPointF pnt;
        //x,y,x,y,x,y

        pnt.setX(dataseries.at(i));
        pnt.setY(dataseries.at(i+1));
        elements.push_back(pnt);

    }
    //disegno dei punti

//    for(int i=0;i<8;i++) //valuta il polinomio per PRECISION punti
//        {
//            QPointF calc;
//            calc.setX(i);
//            double el=0;

//            //controlla la dimensione di a..
//            //BUG!!!!!!!!!!!!!
//            for(int j=0;j<dataseries.size();j++) //gestisce elemento j-esimo
//            {
//                //a0+a1*x+a2*x^2+a3*x^3+...+an*x^n
//                el+=dataseries.at(j)*pow(i,j); //calcola il polinomio per la l'elemento j-esimo del vettore colonna
//            }
//            calc.setY(el);
//            elements.push_back(calc);
//        }
//    QwtPlot *myPlot = new QwtPlot();
//    QwtPlotCurve *curve1 = new QwtPlotCurve();
//    QwtPointSeriesData* myData = new QwtPointSeriesData();


        myData->setSamples(elements); //i dati del grafico vengono aggiunti
        curve1->setData(myData); //viene creata una curva a partire da questi punti

        curve1->attach(myPlot);  //la curva è associata al grafico
        myPlot->resize(391,301); //ne viene specificata la dimensione

        myPlot->replot(); //display del tracciato
        myPlot->show();

    return 0;

}

void Viewer::on_Viewer_destroyed()
{
    delete ui;
}
