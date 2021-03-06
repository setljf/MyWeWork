//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIImageView.h>

#import "ConversationProxyObserverDelegate-Protocol.h"
#import "UserProxyObserverDelegate-Protocol.h"

@class NSObject, NSString, UILabel;

@interface WWKAvatarImageView : UIImageView <UserProxyObserverDelegate, ConversationProxyObserverDelegate>
{
    NSObject *guard;
    struct unique_ptr<UserSmartProxyObserver, std::__1::default_delete<UserSmartProxyObserver>> _userObserver;
    struct unique_ptr<ConversationSmartProxyObserver, std::__1::default_delete<ConversationSmartProxyObserver>> _conversationObserver;
    _Bool _retriesFailedAvatar;
    scoped_refptr_fd92d7bf _conversation;
    scoped_refptr_e1f85e48 _user;
    double _cornerRadiusForUser;
    UILabel *_availableLabel;
    vector_89e6321f _users;
}

+     // Error parsing type: @24@0:8^{Conversation=^^?{AtomicRefCount={atomic<int>=Ai}}{WeakReferenceOwner={scoped_refptr<base::internal::WeakReference::Flag>=^{Flag}}}{ObserverList<model::ConversationObserver, false>={WeakReferenceOwner={scoped_refptr<base::internal::WeakReference::Flag>=^{Flag}}}{vector<model::ConversationObserver *, std::__1::allocator<model::ConversationObserver *> >=^^{ConversationObserver}^^{ConversationObserver}{__compressed_pair<model::ConversationObserver **, std::__1::allocator<model::ConversationObserver *> >=^^{ConversationObserver}}}ii}{unique_ptr<pb::Conversation, std::__1::default_delete<pb::Conversation> >={__compressed_pair<pb::Conversation *, std::__1::default_delete<pb::Conversation> >=^{Conversation}}}{vector<scoped_refptr<model::ConversationMember>, std::__1::allocator<scoped_refptr<model::ConversationMember> > >=^{scoped_refptr<model::ConversationMember>}^{scoped_refptr<model::ConversationMember>}{__compressed_pair<scoped_refptr<model::ConversationMember> *, std::__1::allocator<scoped_refptr<model::ConversationMember> > >=^{scoped_refptr<model::ConversationMember>}}}BBBBBBB{unique_ptr<std::__1::set<unsigned long long, std::__1::less<unsigned long long>, std::__1::allocator<unsigned long long> >, std::__1::default_delete<std::__1::set<unsigned long long, std::__1::less<unsigned long long>, std::__1::allocator<unsigned long long> > > >={__compressed_pair<std::__1::set<unsigned long long, std::__1::less<unsigned long long>, std::__1::allocator<unsigned long long> > *, std::__1::default_delete<std::__1::set<unsigned long long, std::__1::less<unsigned long long>, std::__1::allocator<unsigned long long> > > >=^{set<unsigned long long, std::__1::less<unsigned long long>, std::__1::allocator<unsigned long long> >}}}{set<unsigned long long, std::__1::less<unsigned long long>, std::__1::allocator<unsigned long long> >={__tree<unsigned long long, std::__1::less<unsigned long long>, std::__1::allocator<unsigned long long> >=^{__tree_end_node<std::__1::__tree_node_base<void *> *>}{__compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<unsigned long long, void *> > >={__tree_end_node<std::__1::__tree_node_base<void *> *>=^{__tree_node_base<void *>}}}{__compressed_pair<unsigned long, std::__1::less<unsigned long long> >=Q}}}}16, name: conversationAvatarData:
+ (id)placeholderImageWithMemberCount:(long long)arg1 isRoom:(_Bool)arg2;
+ (id)recentImageUrlCache;
+ (_Bool)setRecentImageURL:(id)arg1 withUserId:(long long)arg2;
+ (id)recentImageWithUserId:(long long)arg1 completion:(CDUnknownBlockType)arg2;
+ (id)recentImageWithUserId:(long long)arg1;
+ (id)recentImagePathWithUserId:(long long)arg1;
+ (id)imageWithConversationKey:(const struct Key *)arg1;
+ (id)placeholderImageWithUserId:(long long)arg1;
+ (_Bool)isSpecialUid:(long long)arg1;
@property(retain, nonatomic) UILabel *availableLabel; // @synthesize availableLabel=_availableLabel;
@property(nonatomic) double cornerRadiusForUser; // @synthesize cornerRadiusForUser=_cornerRadiusForUser;
@property(nonatomic) _Bool retriesFailedAvatar; // @synthesize retriesFailedAvatar=_retriesFailedAvatar;
@property(nonatomic) vector_89e6321f *users; // @synthesize users=_users;
@property(nonatomic) scoped_refptr_e1f85e48 user; // @synthesize user=_user;
@property(nonatomic) scoped_refptr_fd92d7bf conversation; // @synthesize conversation=_conversation;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)sd_setImageWithURL:(id)arg1 placeholderImage:(id)arg2 options:(unsigned long long)arg3 progress:(CDUnknownBlockType)arg4 completed:(CDUnknownBlockType)arg5;
- (void)OnRemoveMembers:(const vector_4ea3d2e4 *)arg1 inConversation:(scoped_refptr_fd92d7bf)arg2;
- (void)onAddMembers:(const vector_4ea3d2e4 *)arg1 inConversation:(scoped_refptr_fd92d7bf)arg2;
- (void)OnUserPropertyChanged:(scoped_refptr_e1f85e48)arg1;
- (_Bool)setImageWithConversationKey:(const struct Key *)arg1;
- (_Bool)setSpecialConversationImage:(const scoped_refptr_fd92d7bf *)arg1;
- (void)scheduleReloadImageWhenForeground:(id)arg1;
- (void)reloadImageForground;
- (void)setOpenAPIConversationImageWithPlaceHolerImg:(id)arg1;
- (void)setUserConversationImage;
- (void)setNormalConversationImage;
- (void)reloadImage;
- (void)reloadImageThrottled;
- (void)setImage:(id)arg1;
- (void)layoutSubviews;
- (void)needDisplayAvailable:(_Bool)arg1;
- (void)setHighlighted:(_Bool)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

