/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@interface MKSizedTransitArtwork : NSObject <MKArtworkImageSource> {
    <GEOTransitArtworkDataSource> * _artwork;
    MKArtworkDataSourceCache * _artworkCache;
    long long  _shieldSize;
}

@property (nonatomic, readonly) <GEOTransitArtworkDataSource> *artwork;
@property (nonatomic, readonly) MKArtworkDataSourceCache *artworkCache;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) long long shieldSize;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)artwork;
- (id)artworkCache;
- (id)badgeImageToDisplayInView:(id)arg1;
- (id)imageToDisplayInView:(id)arg1;
- (id)initWithArtwork:(id)arg1 shieldSize:(long long)arg2;
- (id)initWithArtwork:(id)arg1 shieldSize:(long long)arg2 artworkCache:(id)arg3;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToTransitArtworkViewMode:(id)arg1;
- (long long)shieldSize;

@end
