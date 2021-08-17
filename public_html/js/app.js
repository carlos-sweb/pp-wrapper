var title = ppElement('#title');
title.addClass("text-red500")
title.on('click',function( event , elem ){
  if( elem.hasClass('text-red500') ){
      elem.removeClass('text-red500')
      elem.addClass('text-blue500')
  }else{
    elem.removeClass('text-blue500')
    elem.addClass('text-red500')
  }
});
