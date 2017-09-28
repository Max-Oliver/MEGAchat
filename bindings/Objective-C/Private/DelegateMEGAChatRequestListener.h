#import "MEGAChatRequestDelegate.h"
#import "megachatapi.h"
#import "MEGAChatSdk.h"
#import "DelegateMEGAChatBaseListener.h"

class DelegateMEGAChatRequestListener : public DelegateMEGAChatBaseListener, public megachat::MegaChatRequestListener {

public:
    
    DelegateMEGAChatRequestListener(MEGAChatSdk *megaChatSDK, id<MEGAChatRequestDelegate>listener, bool singleListener = true);
    id<MEGAChatRequestDelegate>getUserListener();
    
    void onRequestStart(megachat::MegaChatApi *api, megachat::MegaChatRequest *request);
    void onRequestFinish(megachat::MegaChatApi *api, megachat::MegaChatRequest *request, megachat::MegaChatError *e);
    void onRequestUpdate(megachat::MegaChatApi *api, megachat::MegaChatRequest *request);
    void onRequestTemporaryError(megachat::MegaChatApi *api, megachat::MegaChatRequest *request, megachat::MegaChatError *e);
    
private:
    id<MEGAChatRequestDelegate>listener;
};
