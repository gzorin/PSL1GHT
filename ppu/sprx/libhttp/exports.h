#ifndef __EXPORTS_H__
#define __EXPORTS_H__

EXPORT(httpCreateTransaction, 0x052a80d9);
EXPORT(httpClientGetTotalPoolSize, 0x070f1020);
EXPORT(httpRequestGetHeader, 0x0b9fea5f);
EXPORT(httpCookieImportWithClientId, 0x0d846d63);
EXPORT(httpSetProxy, 0x0d896b97);
EXPORT(httpClientGetAllHeaders, 0x0d9c65be);
EXPORT(httpTransactionGetUri, 0x0ef17399);
EXPORT(httpResponseGetStatusCode, 0x10d0d7fc);
EXPORT(httpClientGetRecvBufferSize, 0x130150ea);
EXPORT(httpClientSetSslCallbackEx, 0x1395d8d1);
EXPORT(httpClientSetCookieRecvCallbackEx, 0x13fe767b);
EXPORT(httpClientGetConnTimeout, 0x14bfc765);
EXPORT(httpRequestDeleteHeader, 0x16214411);
EXPORT(httpAddCookieWithClientId, 0x1b5bdcc6);
EXPORT(httpClientCloseAllConnections, 0x2033b878);
EXPORT(httpClientSetAutoRedirect, 0x211d8ba3);
EXPORT(httpClientSetRecvTimeout, 0x224e1610);
EXPORT(httpInit, 0x250c386c);
EXPORT(httpClientGetSendTimeout, 0x271a0b06);
EXPORT(httpClientCloseConnections, 0x27f86d70);
EXPORT(httpClientGetAutoRedirect, 0x2960e309);
EXPORT(httpClientSetPipeline, 0x296a46cf);
EXPORT(httpClientGetPipeline, 0x2a1f28f6);
EXPORT(httpTransactionGetSslId, 0x2a78ff04);
EXPORT(httpGetProxy, 0x2a87603a);
EXPORT(httpTransactionAbortConnection, 0x2d52848b);
EXPORT(httpDestroyTransaction, 0x32f5cae2);
EXPORT(httpTransactionGetSslCipherId, 0x34061e49);
EXPORT(httpTransactionGetSslCipherBits, 0x38954133);
EXPORT(httpClientSetVersion, 0x40547d8b);
EXPORT(httpRequestGetChunkedTransferStatus, 0x4137a1f6);
EXPORT(httpRequestGetAllHeaders, 0x42205fe0);
EXPORT(httpClientSetCookieStatus, 0x434419c8);
EXPORT(httpResponseGetContentLength, 0x464ff889);
EXPORT(httpClientGetPerHostKeepAliveMax, 0x46bcc9ff);
EXPORT(httpClientSetRedirectCallbackEx, 0x473cd9f1);
EXPORT(httpClientAddHeader, 0x4b33942a);
EXPORT(httpClientGetProxy, 0x4d40cf98);
EXPORT(httpClientSetCookieSendCallbackEx, 0x4d915204);
EXPORT(httpCreateClient, 0x4e4ee53a);
EXPORT(httpResponseGetHeader, 0x4f5d8d20);
EXPORT(httpsInit, 0x522180bc);
EXPORT(httpRequestSetHeader, 0x54f2a4de);
EXPORT(httpClientGetKeepAlive, 0x591c21a8);
EXPORT(httpClientSetPerHostKeepAliveMax, 0x595adee9);
EXPORT(httpClientGetAutoAuthentication, 0x5980a293);
EXPORT(httpClientSetKeepAlive, 0x5d473170);
EXPORT(httpClientDeleteHeader, 0x617eec02);
EXPORT(httpEndCookie, 0x61b2bade);
EXPORT(httpRecvResponse, 0x61c90691);
EXPORT(httpClientSetSslVersion, 0x65691795);
EXPORT(httpClientSetAuthenticationCallbackEx, 0x660d42a9);
EXPORT(httpClientGetResponseBufferMax, 0x6884cdb7);
EXPORT(httpResponseGetStatusLine, 0x6a81b5e4);
EXPORT(httpClientSetAuthenticationCacheStatus, 0x6eed4999);
EXPORT(httpClientSetSendTimeout, 0x71714cdc);
EXPORT(httpClientSetSslIdDestroyCallbackEx, 0x7313c78d);
EXPORT(httpTransactionGetSslCipherName, 0x895c604c);
EXPORT(httpClientSetTotalPoolSize, 0x8aa5fcd3);
EXPORT(httpRequestSetChunkedTransferStatus, 0x8e3f7ee1);
EXPORT(httpClientSetAutoAuthentication, 0x8eaf47a3);
EXPORT(httpTransactionGetSslCipherVersion, 0x93e938e5);
EXPORT(httpRequestGetContentLength, 0x958323cf);
EXPORT(httpInitCookie, 0x9638f766);
EXPORT(httpDestroyClient, 0x980855ac);
EXPORT(httpTransactionCloseConnection, 0xa0d9223c);
EXPORT(httpClientSetHeader, 0xa34c4b6f);
EXPORT(httpSendRequest, 0xa755b005);
EXPORT(httpClientSetPerHostPoolSize, 0xab1c55ab);
EXPORT(httpTransactionGetSslVersion, 0xad1c6f02);
EXPORT(httpSessionCookieFlush, 0xad6a2e5b);
EXPORT(httpClientPollConnections, 0xadc0a4b2);
EXPORT(httpClientSetResponseBufferMax, 0xadd66b5c);
EXPORT(httpRequestSetContentLength, 0xaf73a64e);
EXPORT(httpClientSetTransactionStateCallbackEx, 0xb6feb84b);
EXPORT(httpClientGetRecvTimeout, 0xba78e51f);
EXPORT(httpResponseGetAllHeaders, 0xbea17389);
EXPORT(httpClientSetRecvBufferSize, 0xbf6e3659);
EXPORT(httpClientSetUserAgent, 0xcac9fc34);
EXPORT(httpClientGetSslVersion, 0xccf57336);
EXPORT(httpClientGetPerPipelineMax, 0xd06c90a4);
EXPORT(httpClientGetHeader, 0xd1ec0b25);
EXPORT(httpEnd, 0xd276ff1f);
EXPORT(httpTransactionReleaseConnection, 0xd47cc666);
EXPORT(httpClientSetConnTimeout, 0xd7471088);
EXPORT(httpClientSetProxy, 0xd7d3cd5d);
EXPORT(httpClientSetSslClientCertificate, 0xd8352a40);
EXPORT(httpClientGetVersion, 0xdc405507);
EXPORT(httpClientSetPerPipelineMax, 0xdc7ed599);
EXPORT(httpTransactionGetSslCipherString, 0xe3c424b3);
EXPORT(httpsEnd, 0xe6d4202f);
EXPORT(httpClientGetCookieStatus, 0xeb9c1e5e);
EXPORT(httpRequestAddHeader, 0xed993147);
EXPORT(httpClientGetUserAgent, 0xee05b0c1);
EXPORT(httpCookieExportWithClientId, 0xf972c733);
EXPORT(httpClientGetAuthenticationCacheStatus, 0xfce39343);
EXPORT(httpClientGetPerHostPoolSize, 0xffc74003);

#endif
