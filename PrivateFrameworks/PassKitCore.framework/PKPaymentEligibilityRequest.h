/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@interface PKPaymentEligibilityRequest : PKPaymentOverlayableRequest {
    NSData * _FPInfo;
    NSString * _cardholderName;
    NSData * _encryptedCardData;
    NSString * _encryptionVersion;
    NSData * _ephemeralPublicKey;
    NSString * _expiration;
    NSString * _hostApplicationIdentifier;
    NSString * _hostApplicationVersion;
    NSString * _issuerIdentifier;
    int  _panInputMethod;
    PKPaymentCredential * _paymentCredential;
    NSString * _primaryAccountNumber;
    NSString * _productIdentifier;
    NSData * _publicKeyHash;
    int  _source;
    NSData * _wrappedKey;
}

@property (nonatomic, copy) NSData *FPInfo;
@property (nonatomic, copy) NSString *cardholderName;
@property (nonatomic, copy) NSData *encryptedCardData;
@property (nonatomic, copy) NSString *encryptionVersion;
@property (nonatomic, copy) NSData *ephemeralPublicKey;
@property (nonatomic, copy) NSString *expiration;
@property (nonatomic, copy) NSString *hostApplicationIdentifier;
@property (nonatomic, copy) NSString *hostApplicationVersion;
@property (nonatomic, copy) NSString *issuerIdentifier;
@property (setter=setPANInputMethod:, nonatomic) int panInputMethod;
@property (nonatomic, retain) PKPaymentCredential *paymentCredential;
@property (nonatomic, copy) NSString *primaryAccountNumber;
@property (nonatomic, copy) NSString *productIdentifier;
@property (nonatomic, copy) NSData *publicKeyHash;
@property (nonatomic, readonly) int source;
@property (nonatomic, copy) NSData *wrappedKey;

- (id)FPInfo;
- (id)_urlRequestWithServiceURL:(id)arg1 deviceIdentifier:(id)arg2 account:(id)arg3 certChain:(id)arg4 devSigned:(BOOL)arg5;
- (id)cardholderName;
- (void)dealloc;
- (id)encryptedCardData;
- (id)encryptionVersion;
- (id)ephemeralPublicKey;
- (id)expiration;
- (id)hostApplicationIdentifier;
- (id)hostApplicationVersion;
- (id)init;
- (id)initWithPaymentCredential:(id)arg1;
- (id)initWithSource:(int)arg1;
- (id)issuerIdentifier;
- (int)panInputMethod;
- (id)paymentCredential;
- (id)primaryAccountNumber;
- (id)productIdentifier;
- (id)publicKeyHash;
- (void)setCardholderName:(id)arg1;
- (void)setEncryptedCardData:(id)arg1;
- (void)setEncryptionVersion:(id)arg1;
- (void)setEphemeralPublicKey:(id)arg1;
- (void)setExpiration:(id)arg1;
- (void)setFPInfo:(id)arg1;
- (void)setHostApplicationIdentifier:(id)arg1;
- (void)setHostApplicationVersion:(id)arg1;
- (void)setIssuerIdentifier:(id)arg1;
- (void)setPANInputMethod:(int)arg1;
- (void)setPaymentCredential:(id)arg1;
- (void)setPrimaryAccountNumber:(id)arg1;
- (void)setProductIdentifier:(id)arg1;
- (void)setPublicKeyHash:(id)arg1;
- (void)setWrappedKey:(id)arg1;
- (int)source;
- (id)wrappedKey;

@end