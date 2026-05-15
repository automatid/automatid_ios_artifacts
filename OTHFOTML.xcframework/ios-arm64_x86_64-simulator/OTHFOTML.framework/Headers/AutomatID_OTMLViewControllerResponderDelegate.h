//
//  OTMLKeyboardTranslateViewDelegate.h
//  OTMLFramework
//
//  Created by Valerio Ferrantelli on 11/03/16.
//  Copyright © 2016 Opentech ENG. All rights reserved.
//

#import "AutomatID_OTMLReceiverAnchorDelegate.h"


@protocol AutomatID_OTMLViewControllerResponderDelegate <NSObject>

//i view controller devono essere in grado di traslare la vista in modo che il responder sia visibile se sta sotto la tastiera
-(void)translateViewAndKeepVisible:(AutomatID_OTMLComponent<AutomatID_OTMLReceiverAnchorDelegate>*)aResponderView;
-(void)resetViewTranslation;

//il componente avverte il suo vc che sta diventando o resignando responder, il vc agisce di conseguenza (es: sposta la vista)
-(void)responderComponentDidResignFirstResponder;
-(void)responderComponentDidBecameFirstResponder:(AutomatID_OTMLComponent<AutomatID_OTMLReceiverAnchorDelegate>*)aResponderView;

//tramite il vc deve essere possibile chiudere qualunque tastiera aperta
-(void)doResignEveryResponder;

@end

