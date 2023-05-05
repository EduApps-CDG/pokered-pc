#include <gtk-4.0/gtk/gtktypes.h>
#include "gb_lcd.h"

void set_lcdc_default(int rLCDC_DEFAULT) {
    GtkWidget *window = /* obter a janela do GTK */;
    GtkWidget *background = /* obter o tilemap de fundo do GTK */;

    // bit 0: janela ativada/desativada
    //gtk_widget_set_visible(window, rLCDC_DEFAULT & 0x01);

    // bit 1: tilemap de fundo selecionado
    if (rLCDC_DEFAULT & 0x02) {
        //gtk_widget_set_style(background, "background-image: url(fundo2.png);");
    } else {
        g//tk_widget_set_style(background, "background-image: url(fundo1.png);");
    }

    // ...
}
