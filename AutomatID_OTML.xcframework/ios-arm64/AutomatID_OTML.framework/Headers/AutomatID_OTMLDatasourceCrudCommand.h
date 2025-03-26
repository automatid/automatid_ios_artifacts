//
//  AutomatID_OTMLDatasourceCrudCommand.h
//  OTMLFramework
//
//  Created by Silvio D'Angelo on 26/11/13.
//  Copyright (c) 2013 Opentech ENG. All rights reserved.
//

#import "AutomatID_OTMLActionCommandSet.h"
#import "AutomatID_OTMLNewDSSaveAndRemoveCommand.h"

@interface AutomatID_StoreDSCommand : AutomatID_OTMLActionCommand
@end
@interface AutomatID_CleanStoreDSCommand : AutomatID_OTMLActionCommand
@end
@interface AutomatID_SaveAsDSUpdateStrictCommand : AutomatID_OTMLActionCommand
@end
@interface AutomatID_OTMLDatasourceCopyCommand : AutomatID_OTMLActionCommand
@end
@interface AutomatID_DSResetCommand : AutomatID_OTMLActionCommand
@end
@interface AutomatID_OTMLReplaceDSFieldInDSArrayList : AutomatID_OTMLActionCommand
@end
@interface AutomatID_OTMLDatasourceCrudCommand : AutomatID_OTMLActionCommandSet
@end
@interface AutomatID_OTMLDSFilterCommand : AutomatID_OTMLActionCommand
@end


