#include "resources.c"
#include <gtkmm.h>
#include <webkit2/webkit2.h>
#include "iostream"
using namespace std;
//glib-compile-resources --target=resources.c --generate-source resources.xml

int main( int argc, char **argv){

  Glib::RefPtr<Gtk::Application> app = Gtk::Application::create( argc, argv, "" );
  Gtk::Window window;
  window.set_default_size( 800, 600 );
  WebKitWebView * one =  WEBKIT_WEB_VIEW( webkit_web_view_new() );
  /*
   * the next line does some tricks :
   * GTK_WIDGET( one ) -> convert WebKitWebView to GtkWidget (one->two)
   * Glib::wrap( GTK_WIDGET( one ) ) -> convert GtkWidget to Gtk::Widget (two->three)
   */
  Gtk::Widget * three = Glib::wrap( GTK_WIDGET( one ) );
  window.add( *three );
  Glib::ustring uri = "resource:///html/public_html/index.html";
  Glib::RefPtr<Gio::File> file =  Gio::File::create_for_uri(uri);
  char* contents = nullptr;
  gsize length = 0;

  try
  {
    file->load_contents(contents, length);
    webkit_web_view_load_html( one , contents , NULL);
    g_free(contents);
  }
  catch (const Glib::Error& ex)
  {
    std::cout << "ExampleAppWindow::open_file_view(\"" << file->get_parse_name()
      << "\"):\n  " << ex.what() << std::endl;
  }

  window.set_position(Gtk::WIN_POS_CENTER);
  window.maximize();
  window.show_all();
  app->run( window );
  exit( 0 );

}
