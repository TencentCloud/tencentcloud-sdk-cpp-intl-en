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

#ifndef TENCENTCLOUD_GPM_V20200820_MODEL_CREATEMATCHREQUEST_H_
#define TENCENTCLOUD_GPM_V20200820_MODEL_CREATEMATCHREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/gpm/v20200820/model/StringKV.h>


namespace TencentCloud
{
    namespace Gpm
    {
        namespace V20200820
        {
            namespace Model
            {
                /**
                * CreateMatch request structure.
                */
                class CreateMatchRequest : public AbstractModel
                {
                public:
                    CreateMatchRequest();
                    ~CreateMatchRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Match name. It can contain up to 128 bytes, supporting [a-zA-Z0-9-\.]*.
                     * @return MatchName Match name. It can contain up to 128 bytes, supporting [a-zA-Z0-9-\.]*.
                     * 
                     */
                    std::string GetMatchName() const;

                    /**
                     * 设置Match name. It can contain up to 128 bytes, supporting [a-zA-Z0-9-\.]*.
                     * @param _matchName Match name. It can contain up to 128 bytes, supporting [a-zA-Z0-9-\.]*.
                     * 
                     */
                    void SetMatchName(const std::string& _matchName);

                    /**
                     * 判断参数 MatchName 是否已赋值
                     * @return MatchName 是否已赋值
                     * 
                     */
                    bool MatchNameHasBeenSet() const;

                    /**
                     * 获取RuleCode
                     * @return RuleCode RuleCode
                     * 
                     */
                    std::string GetRuleCode() const;

                    /**
                     * 设置RuleCode
                     * @param _ruleCode RuleCode
                     * 
                     */
                    void SetRuleCode(const std::string& _ruleCode);

                    /**
                     * 判断参数 RuleCode 是否已赋值
                     * @return RuleCode 是否已赋值
                     * 
                     */
                    bool RuleCodeHasBeenSet() const;

                    /**
                     * 获取Timeout period in seconds. Value range: 1 600
                     * @return Timeout Timeout period in seconds. Value range: 1 600
                     * 
                     */
                    int64_t GetTimeout() const;

                    /**
                     * 设置Timeout period in seconds. Value range: 1 600
                     * @param _timeout Timeout period in seconds. Value range: 1 600
                     * 
                     */
                    void SetTimeout(const int64_t& _timeout);

                    /**
                     * 判断参数 Timeout 是否已赋值
                     * @return Timeout 是否已赋值
                     * 
                     */
                    bool TimeoutHasBeenSet() const;

                    /**
                     * 获取Whether to request server resources for the matchmaking results. 0: no, 1: request GSE resources
                     * @return ServerType Whether to request server resources for the matchmaking results. 0: no, 1: request GSE resources
                     * 
                     */
                    int64_t GetServerType() const;

                    /**
                     * 设置Whether to request server resources for the matchmaking results. 0: no, 1: request GSE resources
                     * @param _serverType Whether to request server resources for the matchmaking results. 0: no, 1: request GSE resources
                     * 
                     */
                    void SetServerType(const int64_t& _serverType);

                    /**
                     * 判断参数 ServerType 是否已赋值
                     * @return ServerType 是否已赋值
                     * 
                     */
                    bool ServerTypeHasBeenSet() const;

                    /**
                     * 获取Matchmaking description. Up to 1024 bytes are allowed.
                     * @return MatchDesc Matchmaking description. Up to 1024 bytes are allowed.
                     * 
                     */
                    std::string GetMatchDesc() const;

                    /**
                     * 设置Matchmaking description. Up to 1024 bytes are allowed.
                     * @param _matchDesc Matchmaking description. Up to 1024 bytes are allowed.
                     * 
                     */
                    void SetMatchDesc(const std::string& _matchDesc);

                    /**
                     * 判断参数 MatchDesc 是否已赋值
                     * @return MatchDesc 是否已赋值
                     * 
                     */
                    bool MatchDescHasBeenSet() const;

                    /**
                     * 获取Only HTTP and HTTPS protocols are supported.
                     * @return NotifyUrl Only HTTP and HTTPS protocols are supported.
                     * 
                     */
                    std::string GetNotifyUrl() const;

                    /**
                     * 设置Only HTTP and HTTPS protocols are supported.
                     * @param _notifyUrl Only HTTP and HTTPS protocols are supported.
                     * 
                     */
                    void SetNotifyUrl(const std::string& _notifyUrl);

                    /**
                     * 判断参数 NotifyUrl 是否已赋值
                     * @return NotifyUrl 是否已赋值
                     * 
                     */
                    bool NotifyUrlHasBeenSet() const;

                    /**
                     * 获取Region of the game server queue
                     * @return ServerRegion Region of the game server queue
                     * 
                     */
                    std::string GetServerRegion() const;

                    /**
                     * 设置Region of the game server queue
                     * @param _serverRegion Region of the game server queue
                     * 
                     */
                    void SetServerRegion(const std::string& _serverRegion);

                    /**
                     * 判断参数 ServerRegion 是否已赋值
                     * @return ServerRegion 是否已赋值
                     * 
                     */
                    bool ServerRegionHasBeenSet() const;

                    /**
                     * 获取Game server queue
                     * @return ServerQueue Game server queue
                     * 
                     */
                    std::string GetServerQueue() const;

                    /**
                     * 设置Game server queue
                     * @param _serverQueue Game server queue
                     * 
                     */
                    void SetServerQueue(const std::string& _serverQueue);

                    /**
                     * 判断参数 ServerQueue 是否已赋值
                     * @return ServerQueue 是否已赋值
                     * 
                     */
                    bool ServerQueueHasBeenSet() const;

                    /**
                     * 获取Custom push data
                     * @return CustomPushData Custom push data
                     * 
                     */
                    std::string GetCustomPushData() const;

                    /**
                     * 设置Custom push data
                     * @param _customPushData Custom push data
                     * 
                     */
                    void SetCustomPushData(const std::string& _customPushData);

                    /**
                     * 判断参数 CustomPushData 是否已赋值
                     * @return CustomPushData 是否已赋值
                     * 
                     */
                    bool CustomPushDataHasBeenSet() const;

                    /**
                     * 获取Game server session data
                     * @return ServerSessionData Game server session data
                     * 
                     */
                    std::string GetServerSessionData() const;

                    /**
                     * 设置Game server session data
                     * @param _serverSessionData Game server session data
                     * 
                     */
                    void SetServerSessionData(const std::string& _serverSessionData);

                    /**
                     * 判断参数 ServerSessionData 是否已赋值
                     * @return ServerSessionData 是否已赋值
                     * 
                     */
                    bool ServerSessionDataHasBeenSet() const;

                    /**
                     * 获取Game attribute. It is an array of key-value structure.
                     * @return GameProperties Game attribute. It is an array of key-value structure.
                     * 
                     */
                    std::vector<StringKV> GetGameProperties() const;

                    /**
                     * 设置Game attribute. It is an array of key-value structure.
                     * @param _gameProperties Game attribute. It is an array of key-value structure.
                     * 
                     */
                    void SetGameProperties(const std::vector<StringKV>& _gameProperties);

                    /**
                     * 判断参数 GameProperties 是否已赋值
                     * @return GameProperties 是否已赋值
                     * 
                     */
                    bool GamePropertiesHasBeenSet() const;

                    /**
                     * 获取Enable or disable the log. 0: disable, 1: enable
                     * @return LogSwitch Enable or disable the log. 0: disable, 1: enable
                     * 
                     */
                    int64_t GetLogSwitch() const;

                    /**
                     * 设置Enable or disable the log. 0: disable, 1: enable
                     * @param _logSwitch Enable or disable the log. 0: disable, 1: enable
                     * 
                     */
                    void SetLogSwitch(const int64_t& _logSwitch);

                    /**
                     * 判断参数 LogSwitch 是否已赋值
                     * @return LogSwitch 是否已赋值
                     * 
                     */
                    bool LogSwitchHasBeenSet() const;

                    /**
                     * 获取Tag. It is an array of key-value structure.
                     * @return Tags Tag. It is an array of key-value structure.
                     * 
                     */
                    std::vector<StringKV> GetTags() const;

                    /**
                     * 设置Tag. It is an array of key-value structure.
                     * @param _tags Tag. It is an array of key-value structure.
                     * 
                     */
                    void SetTags(const std::vector<StringKV>& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     * 
                     */
                    bool TagsHasBeenSet() const;

                private:

                    /**
                     * Match name. It can contain up to 128 bytes, supporting [a-zA-Z0-9-\.]*.
                     */
                    std::string m_matchName;
                    bool m_matchNameHasBeenSet;

                    /**
                     * RuleCode
                     */
                    std::string m_ruleCode;
                    bool m_ruleCodeHasBeenSet;

                    /**
                     * Timeout period in seconds. Value range: 1 600
                     */
                    int64_t m_timeout;
                    bool m_timeoutHasBeenSet;

                    /**
                     * Whether to request server resources for the matchmaking results. 0: no, 1: request GSE resources
                     */
                    int64_t m_serverType;
                    bool m_serverTypeHasBeenSet;

                    /**
                     * Matchmaking description. Up to 1024 bytes are allowed.
                     */
                    std::string m_matchDesc;
                    bool m_matchDescHasBeenSet;

                    /**
                     * Only HTTP and HTTPS protocols are supported.
                     */
                    std::string m_notifyUrl;
                    bool m_notifyUrlHasBeenSet;

                    /**
                     * Region of the game server queue
                     */
                    std::string m_serverRegion;
                    bool m_serverRegionHasBeenSet;

                    /**
                     * Game server queue
                     */
                    std::string m_serverQueue;
                    bool m_serverQueueHasBeenSet;

                    /**
                     * Custom push data
                     */
                    std::string m_customPushData;
                    bool m_customPushDataHasBeenSet;

                    /**
                     * Game server session data
                     */
                    std::string m_serverSessionData;
                    bool m_serverSessionDataHasBeenSet;

                    /**
                     * Game attribute. It is an array of key-value structure.
                     */
                    std::vector<StringKV> m_gameProperties;
                    bool m_gamePropertiesHasBeenSet;

                    /**
                     * Enable or disable the log. 0: disable, 1: enable
                     */
                    int64_t m_logSwitch;
                    bool m_logSwitchHasBeenSet;

                    /**
                     * Tag. It is an array of key-value structure.
                     */
                    std::vector<StringKV> m_tags;
                    bool m_tagsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GPM_V20200820_MODEL_CREATEMATCHREQUEST_H_
