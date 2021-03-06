#import <LastFMAPI/AMAlbumResponse.h>
#import <LastFMAPI/AMDefinitions.h>
#import <LastFMAPI/AMXMLTools.h>

@implementation AMAlbumResponse

+(id)AlbumResponseWithDelegate:(id<AMAlbumResponseDelegate>)delegate
{
    AMAlbumResponse *handle = [AMAlbumResponse alloc];
    return [handle initWithDelegate:delegate];
}

-(id)initWithDelegate:(id<AMAlbumResponseDelegate>)delegate
{
    self = [super initWithDelegate:delegate];
    return self;
}

-(void)responseWithData:(GDataXMLElement *)Data
{
    if ([self Method] == AM_MTHD_ALBUM_GETINFO) [self GetInfo:Data];
}

-(void)GetInfo:(GDataXMLElement *)Data
{
    GDataXMLElement *albumElement = [AMXMLTools getFirstChild:Data Named:@"album"];
    AMAlbumWithInfo *albumInfo = [[AMAlbumWithInfo alloc] initFromNode:albumElement];
    if ([[self Delegate] respondsToSelector:@selector(AlbumResponse:GetInfo:)])
    {
        [[self Delegate] AlbumResponse:self GetInfo:albumInfo];
    }
}

@end