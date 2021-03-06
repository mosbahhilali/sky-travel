/*
 * DO NOT EDIT THIS FILE - it is generated by Glade.
 */

#ifdef HAVE_CONFIG_H
#  include <config.h>
#endif

#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include <string.h>
#include <stdio.h>

#include <gdk/gdkkeysyms.h>
#include <gtk/gtk.h>

#include "callbacks.h"
#include "interface.h"
#include "support.h"

#define GLADE_HOOKUP_OBJECT(component,widget,name) \
  g_object_set_data_full (G_OBJECT (component), name, \
    gtk_widget_ref (widget), (GDestroyNotify) gtk_widget_unref)

#define GLADE_HOOKUP_OBJECT_NO_REF(component,widget,name) \
  g_object_set_data (G_OBJECT (component), name, widget)

GtkWidget*
create_window3 (void)
{
  GtkWidget *window3;
  GtkWidget *fixed3;
  GtkWidget *treeview1;
  GtkWidget *retour_menu_employer;
  GtkWidget *alignment6;
  GtkWidget *hbox6;
  GtkWidget *image6;
  GtkWidget *label25;
  GtkWidget *ajout_client;
  GtkWidget *alignment4;
  GtkWidget *hbox4;
  GtkWidget *image4;
  GtkWidget *label23;
  GtkWidget *modif_client;
  GtkWidget *alignment5;
  GtkWidget *hbox5;
  GtkWidget *image5;
  GtkWidget *label24;
  GtkWidget *Afficherz;
  GtkWidget *alignment11;
  GtkWidget *hbox11;
  GtkWidget *image11;
  GtkWidget *label32;

  window3 = gtk_window_new (GTK_WINDOW_TOPLEVEL);
  gtk_widget_set_name (window3, "window3");
  gtk_window_set_title (GTK_WINDOW (window3), _("gestion client"));

  fixed3 = gtk_fixed_new ();
  gtk_widget_set_name (fixed3, "fixed3");
  gtk_widget_show (fixed3);
  gtk_container_add (GTK_CONTAINER (window3), fixed3);

  treeview1 = gtk_tree_view_new ();
  gtk_widget_set_name (treeview1, "treeview1");
  gtk_widget_show (treeview1);
  gtk_fixed_put (GTK_FIXED (fixed3), treeview1, 32, 16);
  gtk_widget_set_size_request (treeview1, 1000, 344);

  retour_menu_employer = gtk_button_new ();
  gtk_widget_set_name (retour_menu_employer, "retour_menu_employer");
  gtk_widget_show (retour_menu_employer);
  gtk_fixed_put (GTK_FIXED (fixed3), retour_menu_employer, 16, 376);
  gtk_widget_set_size_request (retour_menu_employer, 88, 29);

  alignment6 = gtk_alignment_new (0.5, 0.5, 0, 0);
  gtk_widget_set_name (alignment6, "alignment6");
  gtk_widget_show (alignment6);
  gtk_container_add (GTK_CONTAINER (retour_menu_employer), alignment6);

  hbox6 = gtk_hbox_new (FALSE, 2);
  gtk_widget_set_name (hbox6, "hbox6");
  gtk_widget_show (hbox6);
  gtk_container_add (GTK_CONTAINER (alignment6), hbox6);

  image6 = gtk_image_new_from_stock ("gtk-go-back", GTK_ICON_SIZE_BUTTON);
  gtk_widget_set_name (image6, "image6");
  gtk_widget_show (image6);
  gtk_box_pack_start (GTK_BOX (hbox6), image6, FALSE, FALSE, 0);

  label25 = gtk_label_new_with_mnemonic (_("Retour"));
  gtk_widget_set_name (label25, "label25");
  gtk_widget_show (label25);
  gtk_box_pack_start (GTK_BOX (hbox6), label25, FALSE, FALSE, 0);

  ajout_client = gtk_button_new ();
  gtk_widget_set_name (ajout_client, "ajout_client");
  gtk_widget_show (ajout_client);
  gtk_fixed_put (GTK_FIXED (fixed3), ajout_client, 744, 368);
  gtk_widget_set_size_request (ajout_client, 168, 32);

  alignment4 = gtk_alignment_new (0.5, 0.5, 0, 0);
  gtk_widget_set_name (alignment4, "alignment4");
  gtk_widget_show (alignment4);
  gtk_container_add (GTK_CONTAINER (ajout_client), alignment4);

  hbox4 = gtk_hbox_new (FALSE, 2);
  gtk_widget_set_name (hbox4, "hbox4");
  gtk_widget_show (hbox4);
  gtk_container_add (GTK_CONTAINER (alignment4), hbox4);

  image4 = gtk_image_new_from_stock ("gtk-add", GTK_ICON_SIZE_BUTTON);
  gtk_widget_set_name (image4, "image4");
  gtk_widget_show (image4);
  gtk_box_pack_start (GTK_BOX (hbox4), image4, FALSE, FALSE, 0);

  label23 = gtk_label_new_with_mnemonic (_("ajouter"));
  gtk_widget_set_name (label23, "label23");
  gtk_widget_show (label23);
  gtk_box_pack_start (GTK_BOX (hbox4), label23, FALSE, FALSE, 0);

  modif_client = gtk_button_new ();
  gtk_widget_set_name (modif_client, "modif_client");
  gtk_widget_show (modif_client);
  gtk_fixed_put (GTK_FIXED (fixed3), modif_client, 928, 368);
  gtk_widget_set_size_request (modif_client, 168, 32);

  alignment5 = gtk_alignment_new (0.5, 0.5, 0, 0);
  gtk_widget_set_name (alignment5, "alignment5");
  gtk_widget_show (alignment5);
  gtk_container_add (GTK_CONTAINER (modif_client), alignment5);

  hbox5 = gtk_hbox_new (FALSE, 2);
  gtk_widget_set_name (hbox5, "hbox5");
  gtk_widget_show (hbox5);
  gtk_container_add (GTK_CONTAINER (alignment5), hbox5);

  image5 = gtk_image_new_from_stock ("gtk-edit", GTK_ICON_SIZE_BUTTON);
  gtk_widget_set_name (image5, "image5");
  gtk_widget_show (image5);
  gtk_box_pack_start (GTK_BOX (hbox5), image5, FALSE, FALSE, 0);

  label24 = gtk_label_new_with_mnemonic (_("modifier"));
  gtk_widget_set_name (label24, "label24");
  gtk_widget_show (label24);
  gtk_box_pack_start (GTK_BOX (hbox5), label24, FALSE, FALSE, 0);

  Afficherz = gtk_button_new ();
  gtk_widget_set_name (Afficherz, "Afficherz");
  gtk_widget_show (Afficherz);
  gtk_fixed_put (GTK_FIXED (fixed3), Afficherz, 464, 368);
  gtk_widget_set_size_request (Afficherz, 136, 29);

  alignment11 = gtk_alignment_new (0.5, 0.5, 0, 0);
  gtk_widget_set_name (alignment11, "alignment11");
  gtk_widget_show (alignment11);
  gtk_container_add (GTK_CONTAINER (Afficherz), alignment11);

  hbox11 = gtk_hbox_new (FALSE, 2);
  gtk_widget_set_name (hbox11, "hbox11");
  gtk_widget_show (hbox11);
  gtk_container_add (GTK_CONTAINER (alignment11), hbox11);

  image11 = gtk_image_new_from_stock ("gtk-find", GTK_ICON_SIZE_BUTTON);
  gtk_widget_set_name (image11, "image11");
  gtk_widget_show (image11);
  gtk_box_pack_start (GTK_BOX (hbox11), image11, FALSE, FALSE, 0);

  label32 = gtk_label_new_with_mnemonic (_("Afficher"));
  gtk_widget_set_name (label32, "label32");
  gtk_widget_show (label32);
  gtk_box_pack_start (GTK_BOX (hbox11), label32, FALSE, FALSE, 0);

  g_signal_connect ((gpointer) treeview1, "row_activated",
                    G_CALLBACK (on_treeview1_row_activated),
                    NULL);
  g_signal_connect ((gpointer) retour_menu_employer, "clicked",
                    G_CALLBACK (on_retour_menu_employer_clicked),
                    NULL);
  g_signal_connect ((gpointer) ajout_client, "clicked",
                    G_CALLBACK (on_ajout_client_clicked),
                    NULL);
  g_signal_connect ((gpointer) modif_client, "clicked",
                    G_CALLBACK (on_modif_client_clicked),
                    NULL);
  g_signal_connect ((gpointer) Afficherz, "clicked",
                    G_CALLBACK (on_Afficherz_clicked),
                    NULL);

  /* Store pointers to all widgets, for use by lookup_widget(). */
  GLADE_HOOKUP_OBJECT_NO_REF (window3, window3, "window3");
  GLADE_HOOKUP_OBJECT (window3, fixed3, "fixed3");
  GLADE_HOOKUP_OBJECT (window3, treeview1, "treeview1");
  GLADE_HOOKUP_OBJECT (window3, retour_menu_employer, "retour_menu_employer");
  GLADE_HOOKUP_OBJECT (window3, alignment6, "alignment6");
  GLADE_HOOKUP_OBJECT (window3, hbox6, "hbox6");
  GLADE_HOOKUP_OBJECT (window3, image6, "image6");
  GLADE_HOOKUP_OBJECT (window3, label25, "label25");
  GLADE_HOOKUP_OBJECT (window3, ajout_client, "ajout_client");
  GLADE_HOOKUP_OBJECT (window3, alignment4, "alignment4");
  GLADE_HOOKUP_OBJECT (window3, hbox4, "hbox4");
  GLADE_HOOKUP_OBJECT (window3, image4, "image4");
  GLADE_HOOKUP_OBJECT (window3, label23, "label23");
  GLADE_HOOKUP_OBJECT (window3, modif_client, "modif_client");
  GLADE_HOOKUP_OBJECT (window3, alignment5, "alignment5");
  GLADE_HOOKUP_OBJECT (window3, hbox5, "hbox5");
  GLADE_HOOKUP_OBJECT (window3, image5, "image5");
  GLADE_HOOKUP_OBJECT (window3, label24, "label24");
  GLADE_HOOKUP_OBJECT (window3, Afficherz, "Afficherz");
  GLADE_HOOKUP_OBJECT (window3, alignment11, "alignment11");
  GLADE_HOOKUP_OBJECT (window3, hbox11, "hbox11");
  GLADE_HOOKUP_OBJECT (window3, image11, "image11");
  GLADE_HOOKUP_OBJECT (window3, label32, "label32");

  return window3;
}

GtkWidget*
create_window4 (void)
{
  GtkWidget *window4;
  GtkWidget *fixed4;
  GtkWidget *entry3;
  GtkWidget *entry4;
  GtkWidget *entry5;
  GtkWidget *entry6;
  GtkWidget *date_de_client;
  GtkWidget *entry7;
  GtkWidget *Prenom_client;
  GtkObject *spinbutton1_adj;
  GtkWidget *spinbutton1;
  GtkObject *spinbutton2_adj;
  GtkWidget *spinbutton2;
  GtkObject *spinannee_adj;
  GtkWidget *spinannee;
  GtkWidget *verif;
  GtkWidget *adresse_client;
  GtkWidget *num_tel_client;
  GtkWidget *button_return;
  GtkWidget *alignment10;
  GtkWidget *hbox10;
  GtkWidget *image10;
  GtkWidget *label29;
  GtkWidget *SKY_TRAVEL;
  GtkWidget *type_de_voyage_client;
  GtkWidget *combobox1;
  GtkWidget *nom_client;
  GtkWidget *entry13;
  GtkWidget *entry14;
  GtkWidget *labelpassword;
  GtkWidget *e_mail_client;
  GtkWidget *labelid;
  GtkWidget *label30;
  GtkWidget *confirmer;
  GtkWidget *alignment2;
  GtkWidget *hbox2;
  GtkWidget *image2;
  GtkWidget *label13;

  window4 = gtk_window_new (GTK_WINDOW_TOPLEVEL);
  gtk_widget_set_name (window4, "window4");
  gtk_window_set_title (GTK_WINDOW (window4), _("Ajout client"));

  fixed4 = gtk_fixed_new ();
  gtk_widget_set_name (fixed4, "fixed4");
  gtk_widget_show (fixed4);
  gtk_container_add (GTK_CONTAINER (window4), fixed4);

  entry3 = gtk_entry_new ();
  gtk_widget_set_name (entry3, "entry3");
  gtk_widget_show (entry3);
  gtk_fixed_put (GTK_FIXED (fixed4), entry3, 88, 64);
  gtk_widget_set_size_request (entry3, 160, 27);
  gtk_entry_set_invisible_char (GTK_ENTRY (entry3), 8226);

  entry4 = gtk_entry_new ();
  gtk_widget_set_name (entry4, "entry4");
  gtk_widget_show (entry4);
  gtk_fixed_put (GTK_FIXED (fixed4), entry4, 88, 104);
  gtk_widget_set_size_request (entry4, 160, 27);
  gtk_entry_set_invisible_char (GTK_ENTRY (entry4), 8226);

  entry5 = gtk_entry_new ();
  gtk_widget_set_name (entry5, "entry5");
  gtk_widget_show (entry5);
  gtk_fixed_put (GTK_FIXED (fixed4), entry5, 592, 112);
  gtk_widget_set_size_request (entry5, 160, 27);
  gtk_entry_set_invisible_char (GTK_ENTRY (entry5), 8226);

  entry6 = gtk_entry_new ();
  gtk_widget_set_name (entry6, "entry6");
  gtk_widget_show (entry6);
  gtk_fixed_put (GTK_FIXED (fixed4), entry6, 592, 168);
  gtk_widget_set_size_request (entry6, 160, 27);
  gtk_entry_set_invisible_char (GTK_ENTRY (entry6), 8226);

  date_de_client = gtk_label_new (_("date de naissance:"));
  gtk_widget_set_name (date_de_client, "date_de_client");
  gtk_widget_show (date_de_client);
  gtk_fixed_put (GTK_FIXED (fixed4), date_de_client, 0, 216);
  gtk_widget_set_size_request (date_de_client, 144, 25);

  entry7 = gtk_entry_new ();
  gtk_widget_set_name (entry7, "entry7");
  gtk_widget_show (entry7);
  gtk_fixed_put (GTK_FIXED (fixed4), entry7, 592, 56);
  gtk_widget_set_size_request (entry7, 160, 27);
  gtk_entry_set_invisible_char (GTK_ENTRY (entry7), 8226);

  Prenom_client = gtk_label_new (_("Pr\303\251nom:"));
  gtk_widget_set_name (Prenom_client, "Prenom_client");
  gtk_widget_show (Prenom_client);
  gtk_fixed_put (GTK_FIXED (fixed4), Prenom_client, 8, 104);
  gtk_widget_set_size_request (Prenom_client, 80, 17);

  spinbutton1_adj = gtk_adjustment_new (1, 1, 31, 1, 10, 10);
  spinbutton1 = gtk_spin_button_new (GTK_ADJUSTMENT (spinbutton1_adj), 1, 0);
  gtk_widget_set_name (spinbutton1, "spinbutton1");
  gtk_widget_show (spinbutton1);
  gtk_fixed_put (GTK_FIXED (fixed4), spinbutton1, 152, 216);
  gtk_widget_set_size_request (spinbutton1, 60, 27);

  spinbutton2_adj = gtk_adjustment_new (1, 1, 12, 1, 10, 10);
  spinbutton2 = gtk_spin_button_new (GTK_ADJUSTMENT (spinbutton2_adj), 1, 0);
  gtk_widget_set_name (spinbutton2, "spinbutton2");
  gtk_widget_show (spinbutton2);
  gtk_fixed_put (GTK_FIXED (fixed4), spinbutton2, 232, 216);
  gtk_widget_set_size_request (spinbutton2, 60, 27);

  spinannee_adj = gtk_adjustment_new (1, 1960, 2000, 1, 10, 10);
  spinannee = gtk_spin_button_new (GTK_ADJUSTMENT (spinannee_adj), 1, 0);
  gtk_widget_set_name (spinannee, "spinannee");
  gtk_widget_show (spinannee);
  gtk_fixed_put (GTK_FIXED (fixed4), spinannee, 320, 216);
  gtk_widget_set_size_request (spinannee, 60, 27);

  verif = gtk_label_new ("");
  gtk_widget_set_name (verif, "verif");
  gtk_widget_show (verif);
  gtk_fixed_put (GTK_FIXED (fixed4), verif, 184, 249);
  gtk_widget_set_size_request (verif, 176, 16);

  adresse_client = gtk_label_new (_("adresse:"));
  gtk_widget_set_name (adresse_client, "adresse_client");
  gtk_widget_show (adresse_client);
  gtk_fixed_put (GTK_FIXED (fixed4), adresse_client, 456, 64);
  gtk_widget_set_size_request (adresse_client, 80, 17);

  num_tel_client = gtk_label_new (_("num tel:"));
  gtk_widget_set_name (num_tel_client, "num_tel_client");
  gtk_widget_show (num_tel_client);
  gtk_fixed_put (GTK_FIXED (fixed4), num_tel_client, 464, 176);
  gtk_widget_set_size_request (num_tel_client, 80, 17);

  button_return = gtk_button_new ();
  gtk_widget_set_name (button_return, "button_return");
  gtk_widget_show (button_return);
  gtk_fixed_put (GTK_FIXED (fixed4), button_return, 8, 264);
  gtk_widget_set_size_request (button_return, 96, 29);

  alignment10 = gtk_alignment_new (0.5, 0.5, 0, 0);
  gtk_widget_set_name (alignment10, "alignment10");
  gtk_widget_show (alignment10);
  gtk_container_add (GTK_CONTAINER (button_return), alignment10);

  hbox10 = gtk_hbox_new (FALSE, 2);
  gtk_widget_set_name (hbox10, "hbox10");
  gtk_widget_show (hbox10);
  gtk_container_add (GTK_CONTAINER (alignment10), hbox10);

  image10 = gtk_image_new_from_stock ("gtk-go-back", GTK_ICON_SIZE_BUTTON);
  gtk_widget_set_name (image10, "image10");
  gtk_widget_show (image10);
  gtk_box_pack_start (GTK_BOX (hbox10), image10, FALSE, FALSE, 0);

  label29 = gtk_label_new_with_mnemonic (_("retour"));
  gtk_widget_set_name (label29, "label29");
  gtk_widget_show (label29);
  gtk_box_pack_start (GTK_BOX (hbox10), label29, FALSE, FALSE, 0);

  SKY_TRAVEL = gtk_label_new (_("SKY-TRAVEL"));
  gtk_widget_set_name (SKY_TRAVEL, "SKY_TRAVEL");
  gtk_widget_show (SKY_TRAVEL);
  gtk_fixed_put (GTK_FIXED (fixed4), SKY_TRAVEL, 24, 8);
  gtk_widget_set_size_request (SKY_TRAVEL, 152, 16);

  type_de_voyage_client = gtk_label_new (_("sexe:"));
  gtk_widget_set_name (type_de_voyage_client, "type_de_voyage_client");
  gtk_widget_show (type_de_voyage_client);
  gtk_fixed_put (GTK_FIXED (fixed4), type_de_voyage_client, 0, 168);
  gtk_widget_set_size_request (type_de_voyage_client, 136, 17);

  combobox1 = gtk_combo_box_new_text ();
  gtk_widget_set_name (combobox1, "combobox1");
  gtk_widget_show (combobox1);
  gtk_fixed_put (GTK_FIXED (fixed4), combobox1, 160, 160);
  gtk_widget_set_size_request (combobox1, 96, 31);
  gtk_combo_box_append_text (GTK_COMBO_BOX (combobox1), _("FEMME"));
  gtk_combo_box_append_text (GTK_COMBO_BOX (combobox1), _("HOMME"));

  nom_client = gtk_label_new (_("Nom:"));
  gtk_widget_set_name (nom_client, "nom_client");
  gtk_widget_show (nom_client);
  gtk_fixed_put (GTK_FIXED (fixed4), nom_client, 8, 72);
  gtk_widget_set_size_request (nom_client, 64, 16);

  entry13 = gtk_entry_new ();
  gtk_widget_set_name (entry13, "entry13");
  gtk_widget_show (entry13);
  gtk_fixed_put (GTK_FIXED (fixed4), entry13, 88, 32);
  gtk_widget_set_size_request (entry13, 160, 24);
  gtk_entry_set_invisible_char (GTK_ENTRY (entry13), 8226);

  entry14 = gtk_entry_new ();
  gtk_widget_set_name (entry14, "entry14");
  gtk_widget_show (entry14);
  gtk_fixed_put (GTK_FIXED (fixed4), entry14, 592, 16);
  gtk_widget_set_size_request (entry14, 160, 27);
  gtk_entry_set_invisible_char (GTK_ENTRY (entry14), 8226);

  labelpassword = gtk_label_new (_("password:"));
  gtk_widget_set_name (labelpassword, "labelpassword");
  gtk_widget_show (labelpassword);
  gtk_fixed_put (GTK_FIXED (fixed4), labelpassword, 448, 24);
  gtk_widget_set_size_request (labelpassword, 96, 16);

  e_mail_client = gtk_label_new (_("e-mail:"));
  gtk_widget_set_name (e_mail_client, "e_mail_client");
  gtk_widget_show (e_mail_client);
  gtk_fixed_put (GTK_FIXED (fixed4), e_mail_client, 464, 120);
  gtk_widget_set_size_request (e_mail_client, 72, 17);

  labelid = gtk_label_new (_("ID_client:"));
  gtk_widget_set_name (labelid, "labelid");
  gtk_widget_show (labelid);
  gtk_fixed_put (GTK_FIXED (fixed4), labelid, 0, 32);
  gtk_widget_set_size_request (labelid, 80, 16);

  label30 = gtk_label_new ("");
  gtk_widget_set_name (label30, "label30");
  gtk_widget_show (label30);
  gtk_fixed_put (GTK_FIXED (fixed4), label30, 344, 320);
  gtk_widget_set_size_request (label30, 208, 40);

  confirmer = gtk_button_new ();
  gtk_widget_set_name (confirmer, "confirmer");
  gtk_widget_show (confirmer);
  gtk_fixed_put (GTK_FIXED (fixed4), confirmer, 352, 296);
  gtk_widget_set_size_request (confirmer, 120, 64);

  alignment2 = gtk_alignment_new (0.5, 0.5, 0, 0);
  gtk_widget_set_name (alignment2, "alignment2");
  gtk_widget_show (alignment2);
  gtk_container_add (GTK_CONTAINER (confirmer), alignment2);

  hbox2 = gtk_hbox_new (FALSE, 2);
  gtk_widget_set_name (hbox2, "hbox2");
  gtk_widget_show (hbox2);
  gtk_container_add (GTK_CONTAINER (alignment2), hbox2);

  image2 = gtk_image_new_from_stock ("gtk-apply", GTK_ICON_SIZE_BUTTON);
  gtk_widget_set_name (image2, "image2");
  gtk_widget_show (image2);
  gtk_box_pack_start (GTK_BOX (hbox2), image2, FALSE, FALSE, 0);

  label13 = gtk_label_new_with_mnemonic (_("confirmer"));
  gtk_widget_set_name (label13, "label13");
  gtk_widget_show (label13);
  gtk_box_pack_start (GTK_BOX (hbox2), label13, FALSE, FALSE, 0);

  g_signal_connect ((gpointer) button_return, "clicked",
                    G_CALLBACK (on_button_return_clicked),
                    NULL);
  g_signal_connect ((gpointer) confirmer, "clicked",
                    G_CALLBACK (on_confirmer_clicked),
                    NULL);

  /* Store pointers to all widgets, for use by lookup_widget(). */
  GLADE_HOOKUP_OBJECT_NO_REF (window4, window4, "window4");
  GLADE_HOOKUP_OBJECT (window4, fixed4, "fixed4");
  GLADE_HOOKUP_OBJECT (window4, entry3, "entry3");
  GLADE_HOOKUP_OBJECT (window4, entry4, "entry4");
  GLADE_HOOKUP_OBJECT (window4, entry5, "entry5");
  GLADE_HOOKUP_OBJECT (window4, entry6, "entry6");
  GLADE_HOOKUP_OBJECT (window4, date_de_client, "date_de_client");
  GLADE_HOOKUP_OBJECT (window4, entry7, "entry7");
  GLADE_HOOKUP_OBJECT (window4, Prenom_client, "Prenom_client");
  GLADE_HOOKUP_OBJECT (window4, spinbutton1, "spinbutton1");
  GLADE_HOOKUP_OBJECT (window4, spinbutton2, "spinbutton2");
  GLADE_HOOKUP_OBJECT (window4, spinannee, "spinannee");
  GLADE_HOOKUP_OBJECT (window4, verif, "verif");
  GLADE_HOOKUP_OBJECT (window4, adresse_client, "adresse_client");
  GLADE_HOOKUP_OBJECT (window4, num_tel_client, "num_tel_client");
  GLADE_HOOKUP_OBJECT (window4, button_return, "button_return");
  GLADE_HOOKUP_OBJECT (window4, alignment10, "alignment10");
  GLADE_HOOKUP_OBJECT (window4, hbox10, "hbox10");
  GLADE_HOOKUP_OBJECT (window4, image10, "image10");
  GLADE_HOOKUP_OBJECT (window4, label29, "label29");
  GLADE_HOOKUP_OBJECT (window4, SKY_TRAVEL, "SKY_TRAVEL");
  GLADE_HOOKUP_OBJECT (window4, type_de_voyage_client, "type_de_voyage_client");
  GLADE_HOOKUP_OBJECT (window4, combobox1, "combobox1");
  GLADE_HOOKUP_OBJECT (window4, nom_client, "nom_client");
  GLADE_HOOKUP_OBJECT (window4, entry13, "entry13");
  GLADE_HOOKUP_OBJECT (window4, entry14, "entry14");
  GLADE_HOOKUP_OBJECT (window4, labelpassword, "labelpassword");
  GLADE_HOOKUP_OBJECT (window4, e_mail_client, "e_mail_client");
  GLADE_HOOKUP_OBJECT (window4, labelid, "labelid");
  GLADE_HOOKUP_OBJECT (window4, label30, "label30");
  GLADE_HOOKUP_OBJECT (window4, confirmer, "confirmer");
  GLADE_HOOKUP_OBJECT (window4, alignment2, "alignment2");
  GLADE_HOOKUP_OBJECT (window4, hbox2, "hbox2");
  GLADE_HOOKUP_OBJECT (window4, image2, "image2");
  GLADE_HOOKUP_OBJECT (window4, label13, "label13");

  return window4;
}

GtkWidget*
create_window5 (void)
{
  GtkWidget *window5;
  GtkWidget *fixed5;
  GtkWidget *entry8;
  GtkWidget *entry9;
  GtkWidget *entry10;
  GtkWidget *entry11;
  GtkObject *spinbutton4_adj;
  GtkWidget *spinbutton4;
  GtkObject *spinbutton5_adj;
  GtkWidget *spinbutton5;
  GtkObject *spinbutton6_adj;
  GtkWidget *spinbutton6;
  GtkWidget *entry12;
  GtkWidget *retour_gestion_client;
  GtkWidget *alignment7;
  GtkWidget *hbox7;
  GtkWidget *image7;
  GtkWidget *label26;
  GtkWidget *label18;
  GtkWidget *label21;
  GtkWidget *label20;
  GtkWidget *label19;
  GtkWidget *confirmer_modif_client;
  GtkWidget *alignment8;
  GtkWidget *hbox8;
  GtkWidget *image8;
  GtkWidget *label27;
  GtkWidget *supprimer_client;
  GtkWidget *alignment9;
  GtkWidget *hbox9;
  GtkWidget *image9;
  GtkWidget *label28;
  GtkWidget *sexe;
  GtkWidget *combobox2;
  GtkWidget *label17;
  GtkWidget *label16;
  GtkWidget *entry15;
  GtkWidget *entry16;
  GtkWidget *labelid2;
  GtkWidget *labelpassword2;
  GtkWidget *label31;

  window5 = gtk_window_new (GTK_WINDOW_TOPLEVEL);
  gtk_widget_set_name (window5, "window5");
  gtk_window_set_title (GTK_WINDOW (window5), _("Modifier client"));

  fixed5 = gtk_fixed_new ();
  gtk_widget_set_name (fixed5, "fixed5");
  gtk_widget_show (fixed5);
  gtk_container_add (GTK_CONTAINER (window5), fixed5);

  entry8 = gtk_entry_new ();
  gtk_widget_set_name (entry8, "entry8");
  gtk_widget_show (entry8);
  gtk_fixed_put (GTK_FIXED (fixed5), entry8, 128, 80);
  gtk_widget_set_size_request (entry8, 160, 27);
  gtk_entry_set_invisible_char (GTK_ENTRY (entry8), 8226);

  entry9 = gtk_entry_new ();
  gtk_widget_set_name (entry9, "entry9");
  gtk_widget_show (entry9);
  gtk_fixed_put (GTK_FIXED (fixed5), entry9, 128, 112);
  gtk_widget_set_size_request (entry9, 160, 27);
  gtk_entry_set_invisible_char (GTK_ENTRY (entry9), 8226);

  entry10 = gtk_entry_new ();
  gtk_widget_set_name (entry10, "entry10");
  gtk_widget_show (entry10);
  gtk_fixed_put (GTK_FIXED (fixed5), entry10, 120, 368);
  gtk_widget_set_size_request (entry10, 160, 27);
  gtk_entry_set_invisible_char (GTK_ENTRY (entry10), 8226);

  entry11 = gtk_entry_new ();
  gtk_widget_set_name (entry11, "entry11");
  gtk_widget_show (entry11);
  gtk_fixed_put (GTK_FIXED (fixed5), entry11, 120, 272);
  gtk_widget_set_size_request (entry11, 160, 27);
  gtk_entry_set_invisible_char (GTK_ENTRY (entry11), 8226);

  spinbutton4_adj = gtk_adjustment_new (1, 0, 100, 1, 10, 10);
  spinbutton4 = gtk_spin_button_new (GTK_ADJUSTMENT (spinbutton4_adj), 1, 0);
  gtk_widget_set_name (spinbutton4, "spinbutton4");
  gtk_widget_show (spinbutton4);
  gtk_fixed_put (GTK_FIXED (fixed5), spinbutton4, 160, 216);
  gtk_widget_set_size_request (spinbutton4, 48, 24);

  spinbutton5_adj = gtk_adjustment_new (1, 0, 100, 1, 10, 10);
  spinbutton5 = gtk_spin_button_new (GTK_ADJUSTMENT (spinbutton5_adj), 1, 0);
  gtk_widget_set_name (spinbutton5, "spinbutton5");
  gtk_widget_show (spinbutton5);
  gtk_fixed_put (GTK_FIXED (fixed5), spinbutton5, 224, 216);
  gtk_widget_set_size_request (spinbutton5, 60, 27);

  spinbutton6_adj = gtk_adjustment_new (1, 1960, 2000, 1, 10, 10);
  spinbutton6 = gtk_spin_button_new (GTK_ADJUSTMENT (spinbutton6_adj), 1, 0);
  gtk_widget_set_name (spinbutton6, "spinbutton6");
  gtk_widget_show (spinbutton6);
  gtk_fixed_put (GTK_FIXED (fixed5), spinbutton6, 296, 216);
  gtk_widget_set_size_request (spinbutton6, 60, 27);

  entry12 = gtk_entry_new ();
  gtk_widget_set_name (entry12, "entry12");
  gtk_widget_show (entry12);
  gtk_fixed_put (GTK_FIXED (fixed5), entry12, 120, 320);
  gtk_widget_set_size_request (entry12, 160, 27);
  gtk_entry_set_invisible_char (GTK_ENTRY (entry12), 8226);

  retour_gestion_client = gtk_button_new ();
  gtk_widget_set_name (retour_gestion_client, "retour_gestion_client");
  gtk_widget_show (retour_gestion_client);
  gtk_fixed_put (GTK_FIXED (fixed5), retour_gestion_client, 8, 408);
  gtk_widget_set_size_request (retour_gestion_client, 74, 29);

  alignment7 = gtk_alignment_new (0.5, 0.5, 0, 0);
  gtk_widget_set_name (alignment7, "alignment7");
  gtk_widget_show (alignment7);
  gtk_container_add (GTK_CONTAINER (retour_gestion_client), alignment7);

  hbox7 = gtk_hbox_new (FALSE, 2);
  gtk_widget_set_name (hbox7, "hbox7");
  gtk_widget_show (hbox7);
  gtk_container_add (GTK_CONTAINER (alignment7), hbox7);

  image7 = gtk_image_new_from_stock ("gtk-go-back", GTK_ICON_SIZE_BUTTON);
  gtk_widget_set_name (image7, "image7");
  gtk_widget_show (image7);
  gtk_box_pack_start (GTK_BOX (hbox7), image7, FALSE, FALSE, 0);

  label26 = gtk_label_new_with_mnemonic (_("retour"));
  gtk_widget_set_name (label26, "label26");
  gtk_widget_show (label26);
  gtk_box_pack_start (GTK_BOX (hbox7), label26, FALSE, FALSE, 0);

  label18 = gtk_label_new (_("e-mail:"));
  gtk_widget_set_name (label18, "label18");
  gtk_widget_show (label18);
  gtk_fixed_put (GTK_FIXED (fixed5), label18, 32, 368);
  gtk_widget_set_size_request (label18, 49, 17);

  label21 = gtk_label_new (_("Adresse:"));
  gtk_widget_set_name (label21, "label21");
  gtk_widget_show (label21);
  gtk_fixed_put (GTK_FIXED (fixed5), label21, 16, 320);
  gtk_widget_set_size_request (label21, 88, 25);

  label20 = gtk_label_new (_("num tel:"));
  gtk_widget_set_name (label20, "label20");
  gtk_widget_show (label20);
  gtk_fixed_put (GTK_FIXED (fixed5), label20, 24, 280);
  gtk_widget_set_size_request (label20, 72, 16);

  label19 = gtk_label_new (_("Date de naissance:"));
  gtk_widget_set_name (label19, "label19");
  gtk_widget_show (label19);
  gtk_fixed_put (GTK_FIXED (fixed5), label19, 8, 216);
  gtk_widget_set_size_request (label19, 128, 25);

  confirmer_modif_client = gtk_button_new ();
  gtk_widget_set_name (confirmer_modif_client, "confirmer_modif_client");
  gtk_widget_show (confirmer_modif_client);
  gtk_fixed_put (GTK_FIXED (fixed5), confirmer_modif_client, 408, 64);
  gtk_widget_set_size_request (confirmer_modif_client, 136, 48);

  alignment8 = gtk_alignment_new (0.5, 0.5, 0, 0);
  gtk_widget_set_name (alignment8, "alignment8");
  gtk_widget_show (alignment8);
  gtk_container_add (GTK_CONTAINER (confirmer_modif_client), alignment8);

  hbox8 = gtk_hbox_new (FALSE, 2);
  gtk_widget_set_name (hbox8, "hbox8");
  gtk_widget_show (hbox8);
  gtk_container_add (GTK_CONTAINER (alignment8), hbox8);

  image8 = gtk_image_new_from_stock ("gtk-apply", GTK_ICON_SIZE_BUTTON);
  gtk_widget_set_name (image8, "image8");
  gtk_widget_show (image8);
  gtk_box_pack_start (GTK_BOX (hbox8), image8, FALSE, FALSE, 0);

  label27 = gtk_label_new_with_mnemonic (_("confirmer"));
  gtk_widget_set_name (label27, "label27");
  gtk_widget_show (label27);
  gtk_box_pack_start (GTK_BOX (hbox8), label27, FALSE, FALSE, 0);

  supprimer_client = gtk_button_new ();
  gtk_widget_set_name (supprimer_client, "supprimer_client");
  gtk_widget_show (supprimer_client);
  gtk_fixed_put (GTK_FIXED (fixed5), supprimer_client, 408, 144);
  gtk_widget_set_size_request (supprimer_client, 136, 48);

  alignment9 = gtk_alignment_new (0.5, 0.5, 0, 0);
  gtk_widget_set_name (alignment9, "alignment9");
  gtk_widget_show (alignment9);
  gtk_container_add (GTK_CONTAINER (supprimer_client), alignment9);

  hbox9 = gtk_hbox_new (FALSE, 2);
  gtk_widget_set_name (hbox9, "hbox9");
  gtk_widget_show (hbox9);
  gtk_container_add (GTK_CONTAINER (alignment9), hbox9);

  image9 = gtk_image_new_from_stock ("gtk-delete", GTK_ICON_SIZE_BUTTON);
  gtk_widget_set_name (image9, "image9");
  gtk_widget_show (image9);
  gtk_box_pack_start (GTK_BOX (hbox9), image9, FALSE, FALSE, 0);

  label28 = gtk_label_new_with_mnemonic (_("Supprimer"));
  gtk_widget_set_name (label28, "label28");
  gtk_widget_show (label28);
  gtk_box_pack_start (GTK_BOX (hbox9), label28, FALSE, FALSE, 0);

  sexe = gtk_label_new (_("sexe:"));
  gtk_widget_set_name (sexe, "sexe");
  gtk_widget_show (sexe);
  gtk_fixed_put (GTK_FIXED (fixed5), sexe, 8, 152);
  gtk_widget_set_size_request (sexe, 120, 32);

  combobox2 = gtk_combo_box_new_text ();
  gtk_widget_set_name (combobox2, "combobox2");
  gtk_widget_show (combobox2);
  gtk_fixed_put (GTK_FIXED (fixed5), combobox2, 136, 152);
  gtk_widget_set_size_request (combobox2, 104, 31);
  gtk_combo_box_append_text (GTK_COMBO_BOX (combobox2), _("FEMME"));
  gtk_combo_box_append_text (GTK_COMBO_BOX (combobox2), _("HOMME"));

  label17 = gtk_label_new (_("pr\303\251nom:"));
  gtk_widget_set_name (label17, "label17");
  gtk_widget_show (label17);
  gtk_fixed_put (GTK_FIXED (fixed5), label17, 16, 120);
  gtk_widget_set_size_request (label17, 80, 16);

  label16 = gtk_label_new (_("Nom:"));
  gtk_widget_set_name (label16, "label16");
  gtk_widget_show (label16);
  gtk_fixed_put (GTK_FIXED (fixed5), label16, 32, 88);
  gtk_widget_set_size_request (label16, 49, 17);

  entry15 = gtk_entry_new ();
  gtk_widget_set_name (entry15, "entry15");
  gtk_widget_show (entry15);
  gtk_fixed_put (GTK_FIXED (fixed5), entry15, 128, 16);
  gtk_widget_set_size_request (entry15, 160, 27);
  gtk_entry_set_invisible_char (GTK_ENTRY (entry15), 8226);

  entry16 = gtk_entry_new ();
  gtk_widget_set_name (entry16, "entry16");
  gtk_widget_show (entry16);
  gtk_fixed_put (GTK_FIXED (fixed5), entry16, 128, 48);
  gtk_widget_set_size_request (entry16, 160, 27);
  gtk_entry_set_invisible_char (GTK_ENTRY (entry16), 8226);

  labelid2 = gtk_label_new (_("ID_client:"));
  gtk_widget_set_name (labelid2, "labelid2");
  gtk_widget_show (labelid2);
  gtk_fixed_put (GTK_FIXED (fixed5), labelid2, 16, 16);
  gtk_widget_set_size_request (labelid2, 96, 24);

  labelpassword2 = gtk_label_new (_("password:"));
  gtk_widget_set_name (labelpassword2, "labelpassword2");
  gtk_widget_show (labelpassword2);
  gtk_fixed_put (GTK_FIXED (fixed5), labelpassword2, 24, 56);
  gtk_widget_set_size_request (labelpassword2, 88, 16);

  label31 = gtk_label_new ("");
  gtk_widget_set_name (label31, "label31");
  gtk_widget_show (label31);
  gtk_fixed_put (GTK_FIXED (fixed5), label31, 352, 432);
  gtk_widget_set_size_request (label31, 177, 32);

  g_signal_connect ((gpointer) retour_gestion_client, "clicked",
                    G_CALLBACK (on_retour_gestion_client_clicked),
                    NULL);
  g_signal_connect ((gpointer) confirmer_modif_client, "clicked",
                    G_CALLBACK (on_confirmer_modif_client_clicked),
                    NULL);
  g_signal_connect ((gpointer) supprimer_client, "clicked",
                    G_CALLBACK (on_supprimer_client_clicked),
                    NULL);

  /* Store pointers to all widgets, for use by lookup_widget(). */
  GLADE_HOOKUP_OBJECT_NO_REF (window5, window5, "window5");
  GLADE_HOOKUP_OBJECT (window5, fixed5, "fixed5");
  GLADE_HOOKUP_OBJECT (window5, entry8, "entry8");
  GLADE_HOOKUP_OBJECT (window5, entry9, "entry9");
  GLADE_HOOKUP_OBJECT (window5, entry10, "entry10");
  GLADE_HOOKUP_OBJECT (window5, entry11, "entry11");
  GLADE_HOOKUP_OBJECT (window5, spinbutton4, "spinbutton4");
  GLADE_HOOKUP_OBJECT (window5, spinbutton5, "spinbutton5");
  GLADE_HOOKUP_OBJECT (window5, spinbutton6, "spinbutton6");
  GLADE_HOOKUP_OBJECT (window5, entry12, "entry12");
  GLADE_HOOKUP_OBJECT (window5, retour_gestion_client, "retour_gestion_client");
  GLADE_HOOKUP_OBJECT (window5, alignment7, "alignment7");
  GLADE_HOOKUP_OBJECT (window5, hbox7, "hbox7");
  GLADE_HOOKUP_OBJECT (window5, image7, "image7");
  GLADE_HOOKUP_OBJECT (window5, label26, "label26");
  GLADE_HOOKUP_OBJECT (window5, label18, "label18");
  GLADE_HOOKUP_OBJECT (window5, label21, "label21");
  GLADE_HOOKUP_OBJECT (window5, label20, "label20");
  GLADE_HOOKUP_OBJECT (window5, label19, "label19");
  GLADE_HOOKUP_OBJECT (window5, confirmer_modif_client, "confirmer_modif_client");
  GLADE_HOOKUP_OBJECT (window5, alignment8, "alignment8");
  GLADE_HOOKUP_OBJECT (window5, hbox8, "hbox8");
  GLADE_HOOKUP_OBJECT (window5, image8, "image8");
  GLADE_HOOKUP_OBJECT (window5, label27, "label27");
  GLADE_HOOKUP_OBJECT (window5, supprimer_client, "supprimer_client");
  GLADE_HOOKUP_OBJECT (window5, alignment9, "alignment9");
  GLADE_HOOKUP_OBJECT (window5, hbox9, "hbox9");
  GLADE_HOOKUP_OBJECT (window5, image9, "image9");
  GLADE_HOOKUP_OBJECT (window5, label28, "label28");
  GLADE_HOOKUP_OBJECT (window5, sexe, "sexe");
  GLADE_HOOKUP_OBJECT (window5, combobox2, "combobox2");
  GLADE_HOOKUP_OBJECT (window5, label17, "label17");
  GLADE_HOOKUP_OBJECT (window5, label16, "label16");
  GLADE_HOOKUP_OBJECT (window5, entry15, "entry15");
  GLADE_HOOKUP_OBJECT (window5, entry16, "entry16");
  GLADE_HOOKUP_OBJECT (window5, labelid2, "labelid2");
  GLADE_HOOKUP_OBJECT (window5, labelpassword2, "labelpassword2");
  GLADE_HOOKUP_OBJECT (window5, label31, "label31");

  return window5;
}

