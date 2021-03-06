#ifndef AMDefinitions_Include
#define AMDefinitions_Include

#pragma mark Error Definitions
extern NSInteger const AM_ERR_HTTP_REQFAILED;
extern NSInteger const AM_ERR_UNRECOGNISED_ERROR_CODE;
extern NSInteger const AM_ERR_ERR_NOT_EXISTS_1;
extern NSInteger const AM_ERR_INVALID_SERVICE;
extern NSInteger const AM_ERR_INVALID_METHOD;
extern NSInteger const AM_ERR_AUTHENTICATION_FAILED;
extern NSInteger const AM_ERR_INVALID_FORMAT;
extern NSInteger const AM_ERR_INVALID_PARAMETERS;
extern NSInteger const AM_ERR_INVALID_RESOURCE;
extern NSInteger const AM_ERR_OPERATION_FAILED;
extern NSInteger const AM_ERR_INVALID_SESSION_KEY;
extern NSInteger const AM_ERR_INVALID_API_KEY;
extern NSInteger const AM_ERR_SERVICE_OFFLINE;
extern NSInteger const AM_ERR_SUBSCRIBERS_ONLY;
extern NSInteger const AM_ERR_INVALID_METHOD_SIGNATURE;
extern NSInteger const AM_ERR_UNAUTHORISED_TOKEN;
extern NSInteger const AM_ERR_NOT_AVAILABLE_FOR_STREAMING;
extern NSInteger const AM_ERR_SERVICE_TEMPORARILY_UNAVAILABLE;
extern NSInteger const AM_ERR_USER_LOGIN_REQUIRED;
extern NSInteger const AM_ERR_TRIAL_EXPIRED;
extern NSInteger const AM_ERR_ERR_NOT_EXISTS_19;
extern NSInteger const AM_ERR_NOT_ENOUGH_CONTENT;
extern NSInteger const AM_ERR_NOT_ENOUGH_MEMBERS;
extern NSInteger const AM_ERR_NOT_ENOUGH_FANS;
extern NSInteger const AM_ERR_NOT_ENOUGH_NEIGHBOURS;
extern NSInteger const AM_ERR_NO_PEAK_RADIO;
extern NSInteger const AM_ERR_RADIO_NOT_FOUND;
extern NSInteger const AM_ERR_API_KEY_SUSPENDED;
extern NSInteger const AM_ERR_DEPRECATED_REQUEST;
extern NSInteger const AM_ERR_RATE_LIMIT_EXCEEDED;
extern NSString *const AM_ERRDOMAIN_LASTFMAPI;
extern NSString *const AM_ERRDESC_HTTP_FAILED;
extern NSString *const AM_ERRDESC_UNRECOGNISED;

#pragma mark Method Definitions
extern NSString *const AM_MTHD_ALBUM_ADDTAGS;
extern NSString *const AM_MTHD_ALBUM_GETBUYLINKS;
extern NSString *const AM_MTHD_ALBUM_GETINFO;
extern NSString *const AM_MTHD_ALBUM_GETSHOUTS;
extern NSString *const AM_MTHD_ALBUM_GETTAGS;
extern NSString *const AM_MTHD_ALBUM_GETTOPTAGS;
extern NSString *const AM_MTHD_ALBUM_REMOVETAG;
extern NSString *const AM_MTHD_ALBUM_SEARCH;
extern NSString *const AM_MTHD_ALBUM_SHARE;
extern NSString *const AM_MTHD_ARTIST_ADDTAGS;
extern NSString *const AM_MTHD_ARTIST_GETCORRECTION;
extern NSString *const AM_MTHD_ARTIST_GETEVENTS;
extern NSString *const AM_MTHD_ARTIST_GETINFO;
extern NSString *const AM_MTHD_ARTIST_GETPASTEVENTS;
extern NSString *const AM_MTHD_ARTIST_GETPODCAST;
extern NSString *const AM_MTHD_ARTIST_GETSHOUTS;
extern NSString *const AM_MTHD_ARTIST_GETSIMILAR;
extern NSString *const AM_MTHD_ARTIST_GETTAGS;
extern NSString *const AM_MTHD_ARTIST_GETTOPALBUMS;
extern NSString *const AM_MTHD_ARTIST_GETTOPFANS;
extern NSString *const AM_MTHD_ARTIST_GETTOPTAGS;
extern NSString *const AM_MTHD_ARTIST_GETTOPTRACKS;
extern NSString *const AM_MTHD_ARTIST_REMOVETAG;
extern NSString *const AM_MTHD_ARTIST_SEARCH;
extern NSString *const AM_MTHD_ARTIST_SHARE;
extern NSString *const AM_MTHD_ARTIST_SHOUT;
extern NSString *const AM_MTHD_AUTH_GETMOBILESESSION;
extern NSString *const AM_MTHD_AUTH_GETSESSION;
extern NSString *const AM_MTHD_AUTH_GETTOKEN;
extern NSString *const AM_MTHD_CHART_GETHYPEDARTISTS;
extern NSString *const AM_MTHD_CHART_GETHYPEDTRACKS;
extern NSString *const AM_MTHD_CHART_GETLOVEDTRACKS;
extern NSString *const AM_MTHD_CHART_GETTOPARTISTS;
extern NSString *const AM_MTHD_CHART_GETTOPTAGS;
extern NSString *const AM_MTHD_CHART_GETTOPTRACKS;
extern NSString *const AM_MTHD_EVENT_ATTEND;
extern NSString *const AM_MTHD_EVENT_GETATTENDEES;
extern NSString *const AM_MTHD_EVENT_GETINFO;
extern NSString *const AM_MTHD_EVENT_GETSHOUTS;
extern NSString *const AM_MTHD_EVENT_SHARE;
extern NSString *const AM_MTHD_EVENT_SHOUT;
extern NSString *const AM_MTHD_GEO_GETEVENTS;
extern NSString *const AM_MTHD_GEO_GETMETROARTISTCHART;
extern NSString *const AM_MTHD_GEO_GETMETROHYPEARTISTCHART;
extern NSString *const AM_MTHD_GEO_GETMETROHYPETRACKCHART;
extern NSString *const AM_MTHD_GEO_GETMETROTRACKCHART;
extern NSString *const AM_MTHD_GEO_GETMETROUNIQUEARTISTCHART;
extern NSString *const AM_MTHD_GEO_GETMETROUNIQUETRACKCHART;
extern NSString *const AM_MTHD_GEO_GETMETROWEEKLYCHARTLIST;
extern NSString *const AM_MTHD_GEO_GETMETROS;
extern NSString *const AM_MTHD_GEO_GETTOPARTISTS;
extern NSString *const AM_MTHD_GEO_GETTOPTRACKS;
extern NSString *const AM_MTHD_GROUP_GETHYPE;
extern NSString *const AM_MTHD_GROUP_GETMEMBERS;
extern NSString *const AM_MTHD_GROUP_GETWEEKLYALBUMCHART;
extern NSString *const AM_MTHD_GROUP_GETWEEKLYARTISTCHART;
extern NSString *const AM_MTHD_GROUP_GETWEEKLYCHARTLIST;
extern NSString *const AM_MTHD_GROUP_GETWEEKLYTRACKCHART;
extern NSString *const AM_MTHD_LIBRARY_ADDALBUM;
extern NSString *const AM_MTHD_LIBRARY_ADDARTIST;
extern NSString *const AM_MTHD_LIBRARY_ADDTRACK;
extern NSString *const AM_MTHD_LIBRARY_GETALBUMS;
extern NSString *const AM_MTHD_LIBRARY_GETARTISTS;
extern NSString *const AM_MTHD_LIBRARY_GETTRACKS;
extern NSString *const AM_MTHD_LIBRARY_REMOVEALBUM;
extern NSString *const AM_MTHD_LIBRARY_REMOVEARTIST;
extern NSString *const AM_MTHD_LIBRARY_REMOVESCROBBLE;
extern NSString *const AM_MTHD_LIBRARY_REMOVETRACK;
extern NSString *const AM_MTHD_PLAYLIST_ADDTRACK;
extern NSString *const AM_MTHD_PLAYLIST_CREATE;
extern NSString *const AM_MTHD_RADIO_GETPLAYLIST;
extern NSString *const AM_MTHD_RADIO_SEARCH;
extern NSString *const AM_MTHD_RADIO_TUNE;
extern NSString *const AM_MTHD_TAG_GETINFO;
extern NSString *const AM_MTHD_TAG_GETSIMILAR;
extern NSString *const AM_MTHD_TAG_GETTOPALBUMS;
extern NSString *const AM_MTHD_TAG_GETTOPARTISTS;
extern NSString *const AM_MTHD_TAG_GETTOPTAGS;
extern NSString *const AM_MTHD_TAG_GETTOPTRACKS;
extern NSString *const AM_MTHD_TAG_GETWEEKLYARTISTCHART;
extern NSString *const AM_MTHD_TAG_GETWEEKLYCHARTLIST;
extern NSString *const AM_MTHD_TAG_SEARCH;
extern NSString *const AM_MTHD_TASTEOMETER_COMPARE;
extern NSString *const AM_MTHD_TASTEOMETER_COMPAREGROUP;
extern NSString *const AM_MTHD_TRACK_ADDTAGS;
extern NSString *const AM_MTHD_TRACK_BAN;
extern NSString *const AM_MTHD_TRACK_GETBUYLINKS;
extern NSString *const AM_MTHD_TRACK_GETCORRECTION;
extern NSString *const AM_MTHD_TRACK_GETFINGERPRINTMETADATA;
extern NSString *const AM_MTHD_TRACK_GETINFO;
extern NSString *const AM_MTHD_TRACK_GETSHOUTS;
extern NSString *const AM_MTHD_TRACK_GETSIMILAR;
extern NSString *const AM_MTHD_TRACK_GETTAGS;
extern NSString *const AM_MTHD_TRACK_GETTOPFANS;
extern NSString *const AM_MTHD_TRACK_GETTOPTAGS;
extern NSString *const AM_MTHD_TRACK_LOVE;
extern NSString *const AM_MTHD_TRACK_REMOVETAG;
extern NSString *const AM_MTHD_TRACK_SCROBBLE;
extern NSString *const AM_MTHD_TRACK_SEARCH;
extern NSString *const AM_MTHD_TRACK_SHARE;
extern NSString *const AM_MTHD_TRACK_UNBAN;
extern NSString *const AM_MTHD_TRACK_UNLOVE;
extern NSString *const AM_MTHD_TRACK_UPDATENOWPLAYING;
extern NSString *const AM_MTHD_USER_GETARTISTTRACKS;
extern NSString *const AM_MTHD_USER_GETBANNEDTRACKS;
extern NSString *const AM_MTHD_USER_GETEVENTS;
extern NSString *const AM_MTHD_USER_GETFRIENDS;
extern NSString *const AM_MTHD_USER_GETINFO;
extern NSString *const AM_MTHD_USER_GETLOVEDTRACKS;
extern NSString *const AM_MTHD_USER_GETNEIGHBOURS;
extern NSString *const AM_MTHD_USER_GETNEWRELEASES;
extern NSString *const AM_MTHD_USER_GETPASTEVENTS;
extern NSString *const AM_MTHD_USER_GETPERSONALTAGS;
extern NSString *const AM_MTHD_USER_GETPLAYLISTS;
extern NSString *const AM_MTHD_USER_GETRECENTSTATIONS;
extern NSString *const AM_MTHD_USER_GETRECENTTRACKS;
extern NSString *const AM_MTHD_USER_GETRECOMMENDEDARTISTS;
extern NSString *const AM_MTHD_USER_GETRECOMMENDEDEVENTS;
extern NSString *const AM_MTHD_USER_GETSHOUTS;
extern NSString *const AM_MTHD_USER_GETTOPALBUMS;
extern NSString *const AM_MTHD_USER_GETTOPARTISTS;
extern NSString *const AM_MTHD_USER_GETTOPTAGS;
extern NSString *const AM_MTHD_USER_GETTOPTRACKS;
extern NSString *const AM_MTHD_USER_GETWEEKLYALBUMCHART;
extern NSString *const AM_MTHD_USER_GETWEEKLYARTISTCHART;
extern NSString *const AM_MTHD_USER_GETWEEKLYCHARTLIST;
extern NSString *const AM_MTHD_USER_GETWEEKLYTRACKCHART;
extern NSString *const AM_MTHD_USER_SHOUT;
extern NSString *const AM_MTHD_USER_SIGNUP;
extern NSString *const AM_MTHD_USER_TERMS;
extern NSString *const AM_MTHD_VENUE_GETEVENTS;
extern NSString *const AM_MTHD_VENUE_GETPASTEVENTS;
extern NSString *const AM_MTHD_VENUE_SEARCH;

#pragma mark Parameter Definitions
extern NSString *const AM_REQ_PARAM_TOKEN;
extern NSString *const AM_REQ_PARAM_USERNAME;
extern NSString *const AM_REQ_PARAM_PASSWORD;
extern NSString *const AM_REQ_PARAM_MBID;
extern NSString *const AM_REQ_PARAM_TRACK;
extern NSString *const AM_REQ_PARAM_ARTIST;
extern NSString *const AM_REQ_PARAM_AUTOCORRECT;
extern NSString *const AM_REQ_PARAM_TIMESTAMP;
extern NSString *const AM_REQ_PARAM_ALBUM;
extern NSString *const AM_REQ_PARAM_CONTEXT;
extern NSString *const AM_REQ_PARAM_STREAMID;
extern NSString *const AM_REQ_PARAM_CHOSENBYUSER;
extern NSString *const AM_REQ_PARAM_TRACKNUMBER;
extern NSString *const AM_REQ_PARAM_ALBUMARTIST;
extern NSString *const AM_REQ_PARAM_DURATION;
extern NSString *const AM_REQ_PARAM_SESSIONKEY;
extern NSString *const AM_REQ_PARAM_LANG;

#pragma mark XML Key Definitions
extern NSString *const AM_XML_KEY_TAGS;
extern NSString *const AM_XML_KEY_TOPTAGS;
extern NSString *const AM_XML_KEY_TAG;
extern NSString *const AM_XML_KEY_NAME;
extern NSString *const AM_XML_KEY_URL;
extern NSString *const AM_XML_KEY_MBID;
extern NSString *const AM_XML_KEY_CORRECTIONS;
extern NSString *const AM_XML_KEY_CORRECTION;
extern NSString *const AM_XML_KEY_ARTIST;
extern NSString *const AM_XML_KEY_TOKEN;
extern NSString *const AM_XML_KEY_SESSION;
extern NSString *const AM_XML_KEY_KEY;
extern NSString *const AM_XML_KEY_SUBSCRIBER;
extern NSString *const AM_XML_KEY_OPENSEARCH_QUERY;
extern NSString *const AM_XML_KEY_SEARCHTERMS;
extern NSString *const AM_XML_KEY_STARTPAGE;
extern NSString *const AM_XML_KEY_OPENSEARCH_TOTALRESULTS;
extern NSString *const AM_XML_KEY_OPENSEARCH_STARTINDEX;
extern NSString *const AM_XML_KEY_OPENSEARCH_ITEMSPERPAGE;
extern NSString *const AM_XML_KEY_ARTISTMATCHES;
extern NSString *const AM_XML_KEY_LISTENERS;
extern NSString *const AM_XML_KEY_STREAMABLE;
extern NSString *const AM_XML_KEY_RESULTS;
extern NSString *const AM_XML_KEY_LFM;
extern NSString *const AM_XML_KEY_STATUS;
extern NSString *const AM_XML_KEY_ERROR;
extern NSString *const AM_XML_KEY_TEXT;
extern NSString *const AM_XML_KEY_CODE;
extern NSString *const AM_XML_KEY_OK;
extern NSString *const AM_XML_KEY_FAILED;

#pragma mark NSDictionary AMNilAddition Extension
@interface NSDictionary (AMNilAddition)
+(id)dictionaryWithObjectsAndKeysIngnoringNull:(id)firstObject, ...;
@end

#pragma mark NSNull AMNilAddition Extension
@interface NSNull (AMNilAddition)
+(id)nullWhenNil:(id)obj;
@end

#pragma mark NSString AMNilAddition Extension
@interface NSString (AMNilAddition)
+(NSString *)emptyStringIfNil:(NSString *)string;
@end

#endif