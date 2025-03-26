//
//  OTMLCheckbox.h
//  ING
//
//  Created by Valerio Ferrantelli on 18/10/12.
//
//


#import "AutomatID_OTMLComponent.h"
#import "AutomatID_OTMLInteractiveResponder.h"

@interface AutomatID_OTMLCheckboxComponent : AutomatID_OTMLComponent <AutomatID_OTMLInteractiveResponder, AutomatID_OTMLStatefulComponent>{
    
    @protected
    AutomatID_OTMLImage* checkedImage;
    AutomatID_OTMLImage* uncheckedImage;
    
    AutomatID_OTMLImage* checkedImagep;
    AutomatID_OTMLImage* uncheckedImagep;
    
    AutomatID_OTMLImage* checkedImaged;
    AutomatID_OTMLImage* uncheckedImaged;

    BOOL checked;

    
}

@end
