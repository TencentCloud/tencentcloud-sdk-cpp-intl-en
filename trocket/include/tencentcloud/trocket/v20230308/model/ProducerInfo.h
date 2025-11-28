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

#ifndef TENCENTCLOUD_TROCKET_V20230308_MODEL_PRODUCERINFO_H_
#define TENCENTCLOUD_TROCKET_V20230308_MODEL_PRODUCERINFO_H_

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
                * Producer information.
                */
                class ProducerInfo : public AbstractModel
                {
                public:
                    ProducerInfo();
                    ~ProducerInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Client ID	
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ClientId Client ID	
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetClientId() const;

                    /**
                     * 设置Client ID	
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _clientId Client ID	
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Client IP.	
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ClientIp Client IP.	
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetClientIp() const;

                    /**
                     * 设置Client IP.	
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _clientIp Client IP.	
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetClientIp(const std::string& _clientIp);

                    /**
                     * 判断参数 ClientIp 是否已赋值
                     * @return ClientIp 是否已赋值
                     * 
                     */
                    bool ClientIpHasBeenSet() const;

                    /**
                     * 获取Client language. 
- JAVA((byte) 0)
- CPP((byte) 1) 
- DOTNET((byte) 2) 
- PYTHON((byte) 3)
- DELPHI((byte) 4)
- ERLANG((byte) 5)
- RUBY((byte) 6)
- OTHER((byte) 7)
- HTTP((byte) 8)
- GO((byte) 9)
- PHP((byte) 10)
- OMS((byte) 11)
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Language Client language. 
- JAVA((byte) 0)
- CPP((byte) 1) 
- DOTNET((byte) 2) 
- PYTHON((byte) 3)
- DELPHI((byte) 4)
- ERLANG((byte) 5)
- RUBY((byte) 6)
- OTHER((byte) 7)
- HTTP((byte) 8)
- GO((byte) 9)
- PHP((byte) 10)
- OMS((byte) 11)
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetLanguage() const;

                    /**
                     * 设置Client language. 
- JAVA((byte) 0)
- CPP((byte) 1) 
- DOTNET((byte) 2) 
- PYTHON((byte) 3)
- DELPHI((byte) 4)
- ERLANG((byte) 5)
- RUBY((byte) 6)
- OTHER((byte) 7)
- HTTP((byte) 8)
- GO((byte) 9)
- PHP((byte) 10)
- OMS((byte) 11)
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _language Client language. 
- JAVA((byte) 0)
- CPP((byte) 1) 
- DOTNET((byte) 2) 
- PYTHON((byte) 3)
- DELPHI((byte) 4)
- ERLANG((byte) 5)
- RUBY((byte) 6)
- OTHER((byte) 7)
- HTTP((byte) 8)
- GO((byte) 9)
- PHP((byte) 10)
- OMS((byte) 11)
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Client version.	
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Version Client version.	
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetVersion() const;

                    /**
                     * 设置Client version.	
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _version Client version.	
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Last production time, **Unix timestamp (seconds)**.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return LastUpdateTimestamp Last production time, **Unix timestamp (seconds)**.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetLastUpdateTimestamp() const;

                    /**
                     * 设置Last production time, **Unix timestamp (seconds)**.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _lastUpdateTimestamp Last production time, **Unix timestamp (seconds)**.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetLastUpdateTimestamp(const uint64_t& _lastUpdateTimestamp);

                    /**
                     * 判断参数 LastUpdateTimestamp 是否已赋值
                     * @return LastUpdateTimestamp 是否已赋值
                     * 
                     */
                    bool LastUpdateTimestampHasBeenSet() const;

                    /**
                     * 获取Producer client protocol type. valid values: the following.

-Specifies the grpc protocol.
-remoting protocol.
-http protocol.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ChannelProtocol Producer client protocol type. valid values: the following.

-Specifies the grpc protocol.
-remoting protocol.
-http protocol.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetChannelProtocol() const;

                    /**
                     * 设置Producer client protocol type. valid values: the following.

-Specifies the grpc protocol.
-remoting protocol.
-http protocol.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _channelProtocol Producer client protocol type. valid values: the following.

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
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_clientId;
                    bool m_clientIdHasBeenSet;

                    /**
                     * Client IP.	
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_clientIp;
                    bool m_clientIpHasBeenSet;

                    /**
                     * Client language. 
- JAVA((byte) 0)
- CPP((byte) 1) 
- DOTNET((byte) 2) 
- PYTHON((byte) 3)
- DELPHI((byte) 4)
- ERLANG((byte) 5)
- RUBY((byte) 6)
- OTHER((byte) 7)
- HTTP((byte) 8)
- GO((byte) 9)
- PHP((byte) 10)
- OMS((byte) 11)
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_language;
                    bool m_languageHasBeenSet;

                    /**
                     * Client version.	
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_version;
                    bool m_versionHasBeenSet;

                    /**
                     * Last production time, **Unix timestamp (seconds)**.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_lastUpdateTimestamp;
                    bool m_lastUpdateTimestampHasBeenSet;

                    /**
                     * Producer client protocol type. valid values: the following.

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

#endif // !TENCENTCLOUD_TROCKET_V20230308_MODEL_PRODUCERINFO_H_
