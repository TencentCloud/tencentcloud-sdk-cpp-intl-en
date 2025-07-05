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

#ifndef TENCENTCLOUD_GPM_V20200820_MODEL_MATCHINFO_H_
#define TENCENTCLOUD_GPM_V20200820_MODEL_MATCHINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                * Matchmaking information
                */
                class MatchInfo : public AbstractModel
                {
                public:
                    MatchInfo();
                    ~MatchInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取MatchCode
                     * @return MatchCode MatchCode
                     * 
                     */
                    std::string GetMatchCode() const;

                    /**
                     * 设置MatchCode
                     * @param _matchCode MatchCode
                     * 
                     */
                    void SetMatchCode(const std::string& _matchCode);

                    /**
                     * 判断参数 MatchCode 是否已赋值
                     * @return MatchCode 是否已赋值
                     * 
                     */
                    bool MatchCodeHasBeenSet() const;

                    /**
                     * 获取Match name
                     * @return MatchName Match name
                     * 
                     */
                    std::string GetMatchName() const;

                    /**
                     * 设置Match name
                     * @param _matchName Match name
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
                     * 获取Matchmaking description
Note: this field may return `null`, indicating that no valid value is obtained.
                     * @return MatchDesc Matchmaking description
Note: this field may return `null`, indicating that no valid value is obtained.
                     * 
                     */
                    std::string GetMatchDesc() const;

                    /**
                     * 设置Matchmaking description
Note: this field may return `null`, indicating that no valid value is obtained.
                     * @param _matchDesc Matchmaking description
Note: this field may return `null`, indicating that no valid value is obtained.
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
                     * 获取Creation time
                     * @return CreateTime Creation time
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置Creation time
                     * @param _createTime Creation time
                     * 
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取Timeout period
                     * @return Timeout Timeout period
                     * 
                     */
                    int64_t GetTimeout() const;

                    /**
                     * 设置Timeout period
                     * @param _timeout Timeout period
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
                     * 获取Receiving notification address
                     * @return NotifyUrl Receiving notification address
                     * 
                     */
                    std::string GetNotifyUrl() const;

                    /**
                     * 设置Receiving notification address
                     * @param _notifyUrl Receiving notification address
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
                     * 获取Whether to request server resources for the match results. 0: no, 1: request GSE resources
                     * @return ServerType Whether to request server resources for the match results. 0: no, 1: request GSE resources
                     * 
                     */
                    int64_t GetServerType() const;

                    /**
                     * 设置Whether to request server resources for the match results. 0: no, 1: request GSE resources
                     * @param _serverType Whether to request server resources for the match results. 0: no, 1: request GSE resources
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
                     * 获取Region of the server queue
Note: this field may return `null`, indicating that no valid value is obtained.
                     * @return ServerRegion Region of the server queue
Note: this field may return `null`, indicating that no valid value is obtained.
                     * 
                     */
                    std::string GetServerRegion() const;

                    /**
                     * 设置Region of the server queue
Note: this field may return `null`, indicating that no valid value is obtained.
                     * @param _serverRegion Region of the server queue
Note: this field may return `null`, indicating that no valid value is obtained.
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
                     * 获取Server queue
Note: this field may return `null`, indicating that no valid value is obtained.
                     * @return ServerQueue Server queue
Note: this field may return `null`, indicating that no valid value is obtained.
                     * 
                     */
                    std::string GetServerQueue() const;

                    /**
                     * 设置Server queue
Note: this field may return `null`, indicating that no valid value is obtained.
                     * @param _serverQueue Server queue
Note: this field may return `null`, indicating that no valid value is obtained.
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
Note: this field may return `null`, indicating that no valid value is obtained.
                     * @return CustomPushData Custom push data
Note: this field may return `null`, indicating that no valid value is obtained.
                     * 
                     */
                    std::string GetCustomPushData() const;

                    /**
                     * 设置Custom push data
Note: this field may return `null`, indicating that no valid value is obtained.
                     * @param _customPushData Custom push data
Note: this field may return `null`, indicating that no valid value is obtained.
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
Note: this field may return `null`, indicating that no valid value is obtained.
                     * @return ServerSessionData Game server session data
Note: this field may return `null`, indicating that no valid value is obtained.
                     * 
                     */
                    std::string GetServerSessionData() const;

                    /**
                     * 设置Game server session data
Note: this field may return `null`, indicating that no valid value is obtained.
                     * @param _serverSessionData Game server session data
Note: this field may return `null`, indicating that no valid value is obtained.
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
                     * 获取Game attributes
Note: this field may return `null`, indicating that no valid value is obtained.
                     * @return GameProperties Game attributes
Note: this field may return `null`, indicating that no valid value is obtained.
                     * 
                     */
                    std::vector<StringKV> GetGameProperties() const;

                    /**
                     * 设置Game attributes
Note: this field may return `null`, indicating that no valid value is obtained.
                     * @param _gameProperties Game attributes
Note: this field may return `null`, indicating that no valid value is obtained.
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
                     * 获取Logset ID
Note: this field may return `null`, indicating that no valid value is obtained.
                     * @return LogsetId Logset ID
Note: this field may return `null`, indicating that no valid value is obtained.
                     * 
                     */
                    std::string GetLogsetId() const;

                    /**
                     * 设置Logset ID
Note: this field may return `null`, indicating that no valid value is obtained.
                     * @param _logsetId Logset ID
Note: this field may return `null`, indicating that no valid value is obtained.
                     * 
                     */
                    void SetLogsetId(const std::string& _logsetId);

                    /**
                     * 判断参数 LogsetId 是否已赋值
                     * @return LogsetId 是否已赋值
                     * 
                     */
                    bool LogsetIdHasBeenSet() const;

                    /**
                     * 获取Logset name
Note: this field may return `null`, indicating that no valid value is obtained.
                     * @return LogsetName Logset name
Note: this field may return `null`, indicating that no valid value is obtained.
                     * 
                     */
                    std::string GetLogsetName() const;

                    /**
                     * 设置Logset name
Note: this field may return `null`, indicating that no valid value is obtained.
                     * @param _logsetName Logset name
Note: this field may return `null`, indicating that no valid value is obtained.
                     * 
                     */
                    void SetLogsetName(const std::string& _logsetName);

                    /**
                     * 判断参数 LogsetName 是否已赋值
                     * @return LogsetName 是否已赋值
                     * 
                     */
                    bool LogsetNameHasBeenSet() const;

                    /**
                     * 获取Log topic ID
Note: this field may return `null`, indicating that no valid value is obtained.
                     * @return LogTopicId Log topic ID
Note: this field may return `null`, indicating that no valid value is obtained.
                     * 
                     */
                    std::string GetLogTopicId() const;

                    /**
                     * 设置Log topic ID
Note: this field may return `null`, indicating that no valid value is obtained.
                     * @param _logTopicId Log topic ID
Note: this field may return `null`, indicating that no valid value is obtained.
                     * 
                     */
                    void SetLogTopicId(const std::string& _logTopicId);

                    /**
                     * 判断参数 LogTopicId 是否已赋值
                     * @return LogTopicId 是否已赋值
                     * 
                     */
                    bool LogTopicIdHasBeenSet() const;

                    /**
                     * 获取Log topic name
Note: this field may return `null`, indicating that no valid value is obtained.
                     * @return LogTopicName Log topic name
Note: this field may return `null`, indicating that no valid value is obtained.
                     * 
                     */
                    std::string GetLogTopicName() const;

                    /**
                     * 设置Log topic name
Note: this field may return `null`, indicating that no valid value is obtained.
                     * @param _logTopicName Log topic name
Note: this field may return `null`, indicating that no valid value is obtained.
                     * 
                     */
                    void SetLogTopicName(const std::string& _logTopicName);

                    /**
                     * 判断参数 LogTopicName 是否已赋值
                     * @return LogTopicName 是否已赋值
                     * 
                     */
                    bool LogTopicNameHasBeenSet() const;

                    /**
                     * 获取Tag
Note: this field may return `null`, indicating that no valid value is obtained.
                     * @return Tags Tag
Note: this field may return `null`, indicating that no valid value is obtained.
                     * 
                     */
                    std::vector<StringKV> GetTags() const;

                    /**
                     * 设置Tag
Note: this field may return `null`, indicating that no valid value is obtained.
                     * @param _tags Tag
Note: this field may return `null`, indicating that no valid value is obtained.
                     * 
                     */
                    void SetTags(const std::vector<StringKV>& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     * 
                     */
                    bool TagsHasBeenSet() const;

                    /**
                     * 获取Region
Note: this field may return `null`, indicating that no valid value is obtained.
                     * @return Region Region
Note: this field may return `null`, indicating that no valid value is obtained.
                     * 
                     */
                    std::string GetRegion() const;

                    /**
                     * 设置Region
Note: this field may return `null`, indicating that no valid value is obtained.
                     * @param _region Region
Note: this field may return `null`, indicating that no valid value is obtained.
                     * 
                     */
                    void SetRegion(const std::string& _region);

                    /**
                     * 判断参数 Region 是否已赋值
                     * @return Region 是否已赋值
                     * 
                     */
                    bool RegionHasBeenSet() const;

                    /**
                     * 获取User AppId
Note: this field may return `null`, indicating that no valid value is obtained.
                     * @return AppId User AppId
Note: this field may return `null`, indicating that no valid value is obtained.
                     * 
                     */
                    std::string GetAppId() const;

                    /**
                     * 设置User AppId
Note: this field may return `null`, indicating that no valid value is obtained.
                     * @param _appId User AppId
Note: this field may return `null`, indicating that no valid value is obtained.
                     * 
                     */
                    void SetAppId(const std::string& _appId);

                    /**
                     * 判断参数 AppId 是否已赋值
                     * @return AppId 是否已赋值
                     * 
                     */
                    bool AppIdHasBeenSet() const;

                    /**
                     * 获取User root account UIN
Note: this field may return `null`, indicating that no valid value is obtained.
                     * @return Uin User root account UIN
Note: this field may return `null`, indicating that no valid value is obtained.
                     * 
                     */
                    std::string GetUin() const;

                    /**
                     * 设置User root account UIN
Note: this field may return `null`, indicating that no valid value is obtained.
                     * @param _uin User root account UIN
Note: this field may return `null`, indicating that no valid value is obtained.
                     * 
                     */
                    void SetUin(const std::string& _uin);

                    /**
                     * 判断参数 Uin 是否已赋值
                     * @return Uin 是否已赋值
                     * 
                     */
                    bool UinHasBeenSet() const;

                    /**
                     * 获取Create user account UIN
Note: this field may return `null`, indicating that no valid value is obtained.
                     * @return CreateUin Create user account UIN
Note: this field may return `null`, indicating that no valid value is obtained.
                     * 
                     */
                    std::string GetCreateUin() const;

                    /**
                     * 设置Create user account UIN
Note: this field may return `null`, indicating that no valid value is obtained.
                     * @param _createUin Create user account UIN
Note: this field may return `null`, indicating that no valid value is obtained.
                     * 
                     */
                    void SetCreateUin(const std::string& _createUin);

                    /**
                     * 判断参数 CreateUin 是否已赋值
                     * @return CreateUin 是否已赋值
                     * 
                     */
                    bool CreateUinHasBeenSet() const;

                    /**
                     * 获取Rule Name
Note: this field may return `null`, indicating that no valid value is obtained.
                     * @return RuleName Rule Name
Note: this field may return `null`, indicating that no valid value is obtained.
                     * 
                     */
                    std::string GetRuleName() const;

                    /**
                     * 设置Rule Name
Note: this field may return `null`, indicating that no valid value is obtained.
                     * @param _ruleName Rule Name
Note: this field may return `null`, indicating that no valid value is obtained.
                     * 
                     */
                    void SetRuleName(const std::string& _ruleName);

                    /**
                     * 判断参数 RuleName 是否已赋值
                     * @return RuleName 是否已赋值
                     * 
                     */
                    bool RuleNameHasBeenSet() const;

                    /**
                     * 获取Log status. 0: normal, 1: the log set does not exist, 2: the log topic does not exist, 3: neither the log set nor the log topic exists.
Note: this field may return `null`, indicating that no valid value is obtained.
                     * @return LogStatus Log status. 0: normal, 1: the log set does not exist, 2: the log topic does not exist, 3: neither the log set nor the log topic exists.
Note: this field may return `null`, indicating that no valid value is obtained.
                     * 
                     */
                    int64_t GetLogStatus() const;

                    /**
                     * 设置Log status. 0: normal, 1: the log set does not exist, 2: the log topic does not exist, 3: neither the log set nor the log topic exists.
Note: this field may return `null`, indicating that no valid value is obtained.
                     * @param _logStatus Log status. 0: normal, 1: the log set does not exist, 2: the log topic does not exist, 3: neither the log set nor the log topic exists.
Note: this field may return `null`, indicating that no valid value is obtained.
                     * 
                     */
                    void SetLogStatus(const int64_t& _logStatus);

                    /**
                     * 判断参数 LogStatus 是否已赋值
                     * @return LogStatus 是否已赋值
                     * 
                     */
                    bool LogStatusHasBeenSet() const;

                private:

                    /**
                     * MatchCode
                     */
                    std::string m_matchCode;
                    bool m_matchCodeHasBeenSet;

                    /**
                     * Match name
                     */
                    std::string m_matchName;
                    bool m_matchNameHasBeenSet;

                    /**
                     * Matchmaking description
Note: this field may return `null`, indicating that no valid value is obtained.
                     */
                    std::string m_matchDesc;
                    bool m_matchDescHasBeenSet;

                    /**
                     * RuleCode
                     */
                    std::string m_ruleCode;
                    bool m_ruleCodeHasBeenSet;

                    /**
                     * Creation time
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * Timeout period
                     */
                    int64_t m_timeout;
                    bool m_timeoutHasBeenSet;

                    /**
                     * Receiving notification address
                     */
                    std::string m_notifyUrl;
                    bool m_notifyUrlHasBeenSet;

                    /**
                     * Whether to request server resources for the match results. 0: no, 1: request GSE resources
                     */
                    int64_t m_serverType;
                    bool m_serverTypeHasBeenSet;

                    /**
                     * Region of the server queue
Note: this field may return `null`, indicating that no valid value is obtained.
                     */
                    std::string m_serverRegion;
                    bool m_serverRegionHasBeenSet;

                    /**
                     * Server queue
Note: this field may return `null`, indicating that no valid value is obtained.
                     */
                    std::string m_serverQueue;
                    bool m_serverQueueHasBeenSet;

                    /**
                     * Custom push data
Note: this field may return `null`, indicating that no valid value is obtained.
                     */
                    std::string m_customPushData;
                    bool m_customPushDataHasBeenSet;

                    /**
                     * Game server session data
Note: this field may return `null`, indicating that no valid value is obtained.
                     */
                    std::string m_serverSessionData;
                    bool m_serverSessionDataHasBeenSet;

                    /**
                     * Game attributes
Note: this field may return `null`, indicating that no valid value is obtained.
                     */
                    std::vector<StringKV> m_gameProperties;
                    bool m_gamePropertiesHasBeenSet;

                    /**
                     * Enable or disable the log. 0: disable, 1: enable
                     */
                    int64_t m_logSwitch;
                    bool m_logSwitchHasBeenSet;

                    /**
                     * Logset ID
Note: this field may return `null`, indicating that no valid value is obtained.
                     */
                    std::string m_logsetId;
                    bool m_logsetIdHasBeenSet;

                    /**
                     * Logset name
Note: this field may return `null`, indicating that no valid value is obtained.
                     */
                    std::string m_logsetName;
                    bool m_logsetNameHasBeenSet;

                    /**
                     * Log topic ID
Note: this field may return `null`, indicating that no valid value is obtained.
                     */
                    std::string m_logTopicId;
                    bool m_logTopicIdHasBeenSet;

                    /**
                     * Log topic name
Note: this field may return `null`, indicating that no valid value is obtained.
                     */
                    std::string m_logTopicName;
                    bool m_logTopicNameHasBeenSet;

                    /**
                     * Tag
Note: this field may return `null`, indicating that no valid value is obtained.
                     */
                    std::vector<StringKV> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * Region
Note: this field may return `null`, indicating that no valid value is obtained.
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * User AppId
Note: this field may return `null`, indicating that no valid value is obtained.
                     */
                    std::string m_appId;
                    bool m_appIdHasBeenSet;

                    /**
                     * User root account UIN
Note: this field may return `null`, indicating that no valid value is obtained.
                     */
                    std::string m_uin;
                    bool m_uinHasBeenSet;

                    /**
                     * Create user account UIN
Note: this field may return `null`, indicating that no valid value is obtained.
                     */
                    std::string m_createUin;
                    bool m_createUinHasBeenSet;

                    /**
                     * Rule Name
Note: this field may return `null`, indicating that no valid value is obtained.
                     */
                    std::string m_ruleName;
                    bool m_ruleNameHasBeenSet;

                    /**
                     * Log status. 0: normal, 1: the log set does not exist, 2: the log topic does not exist, 3: neither the log set nor the log topic exists.
Note: this field may return `null`, indicating that no valid value is obtained.
                     */
                    int64_t m_logStatus;
                    bool m_logStatusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GPM_V20200820_MODEL_MATCHINFO_H_
