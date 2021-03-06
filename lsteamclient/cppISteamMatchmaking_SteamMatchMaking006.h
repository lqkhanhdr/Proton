#ifdef __cplusplus
extern "C" {
#endif
extern int cppISteamMatchmaking_SteamMatchMaking006_GetFavoriteGameCount(void *);
extern bool cppISteamMatchmaking_SteamMatchMaking006_GetFavoriteGame(void *, int, AppId_t *, uint32 *, uint16 *, uint16 *, uint32 *, uint32 *);
extern int cppISteamMatchmaking_SteamMatchMaking006_AddFavoriteGame(void *, AppId_t, uint32, uint16, uint16, uint32, uint32);
extern bool cppISteamMatchmaking_SteamMatchMaking006_RemoveFavoriteGame(void *, AppId_t, uint32, uint16, uint16, uint32);
extern SteamAPICall_t cppISteamMatchmaking_SteamMatchMaking006_RequestLobbyList(void *);
extern void cppISteamMatchmaking_SteamMatchMaking006_AddRequestLobbyListFilter(void *, const char *, const char *);
extern void cppISteamMatchmaking_SteamMatchMaking006_AddRequestLobbyListNumericalFilter(void *, const char *, int, int);
extern void cppISteamMatchmaking_SteamMatchMaking006_AddRequestLobbyListNearValueFilter(void *, const char *, int);
extern CSteamID cppISteamMatchmaking_SteamMatchMaking006_GetLobbyByIndex(void *, int);
extern SteamAPICall_t cppISteamMatchmaking_SteamMatchMaking006_CreateLobby(void *, ELobbyType);
extern SteamAPICall_t cppISteamMatchmaking_SteamMatchMaking006_JoinLobby(void *, CSteamID);
extern void cppISteamMatchmaking_SteamMatchMaking006_LeaveLobby(void *, CSteamID);
extern bool cppISteamMatchmaking_SteamMatchMaking006_InviteUserToLobby(void *, CSteamID, CSteamID);
extern int cppISteamMatchmaking_SteamMatchMaking006_GetNumLobbyMembers(void *, CSteamID);
extern CSteamID cppISteamMatchmaking_SteamMatchMaking006_GetLobbyMemberByIndex(void *, CSteamID, int);
extern const char * cppISteamMatchmaking_SteamMatchMaking006_GetLobbyData(void *, CSteamID, const char *);
extern bool cppISteamMatchmaking_SteamMatchMaking006_SetLobbyData(void *, CSteamID, const char *, const char *);
extern const char * cppISteamMatchmaking_SteamMatchMaking006_GetLobbyMemberData(void *, CSteamID, CSteamID, const char *);
extern void cppISteamMatchmaking_SteamMatchMaking006_SetLobbyMemberData(void *, CSteamID, const char *, const char *);
extern bool cppISteamMatchmaking_SteamMatchMaking006_SendLobbyChatMsg(void *, CSteamID, const void *, int);
extern int cppISteamMatchmaking_SteamMatchMaking006_GetLobbyChatEntry(void *, CSteamID, int, CSteamID *, void *, int, EChatEntryType *);
extern bool cppISteamMatchmaking_SteamMatchMaking006_RequestLobbyData(void *, CSteamID);
extern void cppISteamMatchmaking_SteamMatchMaking006_SetLobbyGameServer(void *, CSteamID, uint32, uint16, CSteamID);
extern bool cppISteamMatchmaking_SteamMatchMaking006_GetLobbyGameServer(void *, CSteamID, uint32 *, uint16 *, CSteamID *);
extern bool cppISteamMatchmaking_SteamMatchMaking006_SetLobbyMemberLimit(void *, CSteamID, int);
extern int cppISteamMatchmaking_SteamMatchMaking006_GetLobbyMemberLimit(void *, CSteamID);
extern bool cppISteamMatchmaking_SteamMatchMaking006_SetLobbyType(void *, CSteamID, ELobbyType);
extern CSteamID cppISteamMatchmaking_SteamMatchMaking006_GetLobbyOwner(void *, CSteamID);
#ifdef __cplusplus
}
#endif
