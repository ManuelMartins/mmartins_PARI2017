#ifndef _MYF_H
#define _MYF_H


#include <gtk/gtk.h>
#include <cv.h>
#include <highgui.h>


#if defined (_MAIN_C_)
        GtkBuilder *builderG;
        IplImage *dst_imageG , *src_imageG;
        CvCapture *captureG;
#else
        extern GtkBuilder *builderG;
        extern IplImage *dst_imageG , *src_imageG;
        extern CvCapture *captureG;
#endif


#include "prototypes.h"

#endif /* _MYF_H */
