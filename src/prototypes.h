/*File generated automatically in ubuntu-N550JV by ubuntu on Qua Dez  6 12:01:03 WET 2017*/
#ifdef __cplusplus
extern "C" {
#endif
/* main.c */
int main (int argc, char *argv[]);
/* myf.c */
gboolean on_drawingarea1_expose_event (GtkWidget * widget, GdkEvent * event, gpointer user_data);
GdkPixbuf *pari_ConvertOpenCv2Gtk (IplImage * image, int dst_w, int dst_h);
void pari_PerformImageAcquisition (CvCapture * capt);
void pari_ProcessUserOperations (IplImage * src, IplImage * dst);
void pari_RefreshDrawingArea (char *widgetName, IplImage * img);
CvCapture *pari_StartImageAcquisition ();
/* callbacks.c */
gboolean pari_UpdateImageAreas (gpointer data);
#ifdef __cplusplus
}
#endif
