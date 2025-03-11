#import <AutomatID_OTTBXML/OTTBXML.h>

@protocol OTMLEvaluableModelToObjectInterface <NSObject>

-(NSObject*)classForOTMLAndModel;
-(NSObject*)classForOTMLClauseModel;
-(NSObject*)classForOTMLConditionRefModel;
-(NSObject*)classForOTMLNotModel;
-(NSObject*)classForOTMLOrModel;

@end
