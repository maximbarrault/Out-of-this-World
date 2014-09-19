//
//  OWSpaceObject.h
//  Out of this World
//
//  Created by Oliver Feldman on 02/09/14.
//
//

#import <Foundation/Foundation.h>

@interface OWSpaceObject : NSObject

@property (strong, nonatomic) NSString *name;
@property (nonatomic) float gravitationalForce;
@property (nonatomic) float diamater;
@property (nonatomic) float yearLength;
@property (nonatomic) float dayLength;
@property (nonatomic) float temperature;
@property (nonatomic) int numberOfMoons;
@property (strong, nonatomic) NSString *nickname;
@property (strong, nonatomic) NSString *interestFact;

@property (strong, nonatomic) UIImage *spaceImage;

-(id) initWithData: (NSDictionary *)data andImage:(UIImage *) image;

@end
