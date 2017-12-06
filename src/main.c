/**
 *       @file  main.c
 *      @brief  Ficheiro com função principal
 *
 * Descrição mais detalhada do ficheiro que até poderiam incluir links para imagens etc.
 *
 *     @author  Diogo Rocha, email@ua.pt
 *
 *   @internal
 *     Created  20-Set-2017
 *     Company  University of Aveiro
 *   Copyright  Copyright (c) 2017, Diogo Rocha
 *
 * =====================================================================================
 */

// Programa mínimo para teste do GTK

#define _MAIN_C_

#include <gtk/gtk.h>
#include "myf.h"


int main(int argc, char *argv[])
{

        gtk_init(&argc, &argv);

        /* load the interface after a configuration file*/
        builderG = gtk_builder_new(); //cria a variavel onde se irão fazer alterações na interface gráfica
        gtk_builder_add_from_file(builderG, "mydr2.glade", NULL);

        /* connect the signals in the interface */
        gtk_builder_connect_signals(builderG, NULL);

//o load the interface e connect the signals é quase sempre obrigatório fazer

        /* get main window Widget ID and connect special signals */
        GtkWidget *t = GTK_WIDGET(gtk_builder_get_object(builderG, "window1")); // GTK_WIDGET equivale a (GtkWidget *)



        g_timeout_add(30, (GSourceFunc) pari_UpdateImageAreas, (gpointer) NULL);
        captureG=pari_StartImageAcquisition();



        /* start the event loop */
        gtk_main();
        
        cvReleaseCapture(&captureG);             //Release capture device.
        cvReleaseImage(&dst_imageG);             //Release image (free pointer when no longer used)
        cvReleaseImage(&src_imageG);             //Release image (free pointer when no longer used).

        return 0;
}
