#import <AutomatID_OTTBXML/AutomatID_OTTBXML.h>

@protocol AutomatID_OTMLEvaluableModelToObjectInterface <NSObject>

-(NSObject*)classForOTMLAndModel;
-(NSObject*)classForOTMLClauseModel;
-(NSObject*)classForOTMLConditionRefModel;
-(NSObject*)classForOTMLNotModel;
-(NSObject*)classForOTMLOrModel;

@end
