//
//  AutomatID_OTMLSignedFile.h
//  OTMLFramework
//
//  Created by Valerio Ferrantelli on 28/11/16.
//  Copyright © 2016 Opentech ENG. All rights reserved.
//

#import "AutomatID_OTMLSignedData.h"


/**
 Per ora l'implementazione usa il gestore di file otmlAppSupportFolderFileManager, modificare se necessario
 **/
@interface AutomatID_OTMLSignedFile : AutomatID_OTMLSignedData


/**
 Il filename NON deve indicare l'estensione (niente .m .r e .sav)
 **/
-(instancetype)initWithName:(NSString*)aFileName andFullpath:(NSString*)aFullpath;

/**
 Valido in sola lettura
 **/
-(BOOL)save;
-(BOOL)load;
-(BOOL)exists;
-(BOOL)isValid;

@end
