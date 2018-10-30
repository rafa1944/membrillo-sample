$(function() {
    //-------------------------------------------
    function log( message ) {
      $( "<div>" ).text( message ).prependTo( "#log" );
      $( "#log" ).scrollTop( 0 );
    }

    //-------------------------------------------
    $( '[name="name"]' ).autocomplete({
      source: function( request, response ) {
        $.ajax({
          url: "/index_ajax.php?service=autocomplete",
          dataType: "jsonp",
          data: {
            q: request.term
          },
          success: function( data ) {
            // console.log(data);
            response( data );
          }
        });
      },

      minLength: 3,

      select: function( event, ui ) {
        console.log('id: '+ ui.item.value);
        console.log('label: '+ ui.item.label);

        $('[name="name"]').val(ui.item.label);
        $('[name="hobbiespot_user_id"]').val(ui.item.value);
         return false;
      },
      open: function() {
        $( this ).removeClass( "ui-corner-all" ).addClass( "ui-corner-top" );
      },
      close: function() {
        $( this ).removeClass( "ui-corner-top" ).addClass( "ui-corner-all" );
      }
    });
});
