/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *    http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef TENCENTCLOUD_TROCKET_V20230308_MODEL_CONSUMERCLIENT_H_
#define TENCENTCLOUD_TROCKET_V20230308_MODEL_CONSUMERCLIENT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Trocket
    {
        namespace V20230308
        {
            namespace Model
            {
                /**
                * Consumer client
                */
                class ConsumerClient : public AbstractModel
                {
                public:
                    ConsumerClient();
                    ~ConsumerClient() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Client ID
                     * @return ClientId Client ID
                     * 
                     */
                    std::string GetClientId() const;

                    /**
                     * 设置Client ID
                     * @param _clientId Client ID
                     * 
                     */
                    void SetClientId(const std::string& _clientId);

                    /**
                     * 判断参数 ClientId 是否已赋值
                     * @return ClientId 是否已赋值
                     * 
                     */
                    bool ClientIdHasBeenSet() const;

                    /**
                     * 获取Client address.
                     * @return ClientAddr Client address.
                     * 
                     */
                    std::string GetClientAddr() const;

                    /**
                     * 设置Client address.
                     * @param _clientAddr Client address.
                     * 
                     */
                    void SetClientAddr(const std::string& _clientAddr);

                    /**
                     * 判断参数 ClientAddr 是否已赋值
                     * @return ClientAddr 是否已赋值
                     * 
                     */
                    bool ClientAddrHasBeenSet() const;

                    /**
                     * 获取Client SDK language
                     * @return Language Client SDK language
                     * 
                     */
                    std::string GetLanguage() const;

                    /**
                     * 设置Client SDK language
                     * @param _language Client SDK language
                     * 
                     */
                    void SetLanguage(const std::string& _language);

                    /**
                     * 判断参数 Language 是否已赋值
                     * @return Language 是否已赋值
                     * 
                     */
                    bool LanguageHasBeenSet() const;

                    /**
                     * 获取Client SDK version
                     * @return Version Client SDK version
                     * 
                     */
                    std::string GetVersion() const;

                    /**
                     * 设置Client SDK version
                     * @param _version Client SDK version
                     * 
                     */
                    void SetVersion(const std::string& _version);

                    /**
                     * 判断参数 Version 是否已赋值
                     * @return Version 是否已赋值
                     * 
                     */
                    bool VersionHasBeenSet() const;

                    /**
                     * 获取Client consumption heap

Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ConsumerLag Client consumption heap

Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetConsumerLag() const;

                    /**
                     * 设置Client consumption heap

Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _consumerLag Client consumption heap

Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetConsumerLag(const int64_t& _consumerLag);

                    /**
                     * 判断参数 ConsumerLag 是否已赋值
                     * @return ConsumerLag 是否已赋值
                     * 
                     */
                    bool ConsumerLagHasBeenSet() const;

                    /**
                     * 获取Consumer client type. valid values:.

-Specifies the grpc protocol.
-remoting protocol.
-http protocol.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ChannelProtocol Consumer client type. valid values:.

-Specifies the grpc protocol.
-remoting protocol.
-http protocol.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetChannelProtocol() const;

                    /**
                     * 设置Consumer client type. valid values:.

-Specifies the grpc protocol.
-remoting protocol.
-http protocol.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _channelProtocol Consumer client type. valid values:.

-Specifies the grpc protocol.
-remoting protocol.
-http protocol.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetChannelProtocol(const std::string& _channelProtocol);

                    /**
                     * 判断参数 ChannelProtocol 是否已赋值
                     * @return ChannelProtocol 是否已赋值
                     * 
                     */
                    bool ChannelProtocolHasBeenSet() const;

                private:

                    /**
                     * Client ID
                     */
                    std::string m_clientId;
                    bool m_clientIdHasBeenSet;

                    /**
                     * Client address.
                     */
                    std::string m_clientAddr;
                    bool m_clientAddrHasBeenSet;

                    /**
                     * Client SDK language
                     */
                    std::string m_language;
                    bool m_languageHasBeenSet;

                    /**
                     * Client SDK version
                     */
                    std::string m_version;
                    bool m_versionHasBeenSet;

                    /**
                     * Client consumption heap

Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_consumerLag;
                    bool m_consumerLagHasBeenSet;

                    /**
                     * Consumer client type. valid values:.

-Specifies the grpc protocol.
-remoting protocol.
-http protocol.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_channelProtocol;
                    bool m_channelProtocolHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TROCKET_V20230308_MODEL_CONSUMERCLIENT_H_
