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

#ifndef TENCENTCLOUD_CFW_V20190904_MODEL_BLOCKIGNORERULE_H_
#define TENCENTCLOUD_CFW_V20190904_MODEL_BLOCKIGNORERULE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cfw
    {
        namespace V20190904
        {
            namespace Model
            {
                /**
                * Allowlist or blocklist for intrusion prevention
                */
                class BlockIgnoreRule : public AbstractModel
                {
                public:
                    BlockIgnoreRule();
                    ~BlockIgnoreRule() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Domain name.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Domain Domain name.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetDomain() const;

                    /**
                     * 设置Domain name.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _domain Domain name.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetDomain(const std::string& _domain);

                    /**
                     * 判断参数 Domain 是否已赋值
                     * @return Domain 是否已赋值
                     * 
                     */
                    bool DomainHasBeenSet() const;

                    /**
                     * 获取Rule IP.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Ioc Rule IP.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetIoc() const;

                    /**
                     * 设置Rule IP.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _ioc Rule IP.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetIoc(const std::string& _ioc);

                    /**
                     * 判断参数 Ioc 是否已赋值
                     * @return Ioc 是否已赋值
                     * 
                     */
                    bool IocHasBeenSet() const;

                    /**
                     * 获取Threat level.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Level Threat level.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetLevel() const;

                    /**
                     * 设置Threat level.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _level Threat level.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetLevel(const std::string& _level);

                    /**
                     * 判断参数 Level 是否已赋值
                     * @return Level 是否已赋值
                     * 
                     */
                    bool LevelHasBeenSet() const;

                    /**
                     * 获取Source event name.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return EventName Source event name.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetEventName() const;

                    /**
                     * 设置Source event name.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _eventName Source event name.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetEventName(const std::string& _eventName);

                    /**
                     * 判断参数 EventName 是否已赋值
                     * @return EventName 是否已赋值
                     * 
                     */
                    bool EventNameHasBeenSet() const;

                    /**
                     * 获取Direction. Valid values: 0: outbound; 1: inbound.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Direction Direction. Valid values: 0: outbound; 1: inbound.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetDirection() const;

                    /**
                     * 设置Direction. Valid values: 0: outbound; 1: inbound.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _direction Direction. Valid values: 0: outbound; 1: inbound.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetDirection(const int64_t& _direction);

                    /**
                     * 判断参数 Direction 是否已赋值
                     * @return Direction 是否已赋值
                     * 
                     */
                    bool DirectionHasBeenSet() const;

                    /**
                     * 获取Protocol.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Protocol Protocol.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetProtocol() const;

                    /**
                     * 设置Protocol.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _protocol Protocol.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetProtocol(const std::string& _protocol);

                    /**
                     * 判断参数 Protocol 是否已赋值
                     * @return Protocol 是否已赋值
                     * 
                     */
                    bool ProtocolHasBeenSet() const;

                    /**
                     * 获取Address.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Address Address.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetAddress() const;

                    /**
                     * 设置Address.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _address Address.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetAddress(const std::string& _address);

                    /**
                     * 判断参数 Address 是否已赋值
                     * @return Address 是否已赋值
                     * 
                     */
                    bool AddressHasBeenSet() const;

                    /**
                     * 获取Rule type. Valid values: 1: block; 2: allow.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Action Rule type. Valid values: 1: block; 2: allow.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetAction() const;

                    /**
                     * 设置Rule type. Valid values: 1: block; 2: allow.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _action Rule type. Valid values: 1: block; 2: allow.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetAction(const int64_t& _action);

                    /**
                     * 判断参数 Action 是否已赋值
                     * @return Action 是否已赋值
                     * 
                     */
                    bool ActionHasBeenSet() const;

                    /**
                     * 获取Time when a rule starts to take effect.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return StartTime Time when a rule starts to take effect.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置Time when a rule starts to take effect.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _startTime Time when a rule starts to take effect.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetStartTime(const std::string& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     * 
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取Time when a rule expires.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return EndTime Time when a rule expires.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置Time when a rule expires.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _endTime Time when a rule expires.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetEndTime(const std::string& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     * 
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取Reason for ignoring.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return IgnoreReason Reason for ignoring.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetIgnoreReason() const;

                    /**
                     * 设置Reason for ignoring.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _ignoreReason Reason for ignoring.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetIgnoreReason(const std::string& _ignoreReason);

                    /**
                     * 判断参数 IgnoreReason 是否已赋值
                     * @return IgnoreReason 是否已赋值
                     * 
                     */
                    bool IgnoreReasonHasBeenSet() const;

                    /**
                     * 获取Security event source.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Source Security event source.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetSource() const;

                    /**
                     * 设置Security event source.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _source Security event source.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetSource(const std::string& _source);

                    /**
                     * 判断参数 Source 是否已赋值
                     * @return Source 是否已赋值
                     * 
                     */
                    bool SourceHasBeenSet() const;

                    /**
                     * 获取Rule ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return UniqueId Rule ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetUniqueId() const;

                    /**
                     * 设置Rule ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _uniqueId Rule ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetUniqueId(const std::string& _uniqueId);

                    /**
                     * 判断参数 UniqueId 是否已赋值
                     * @return UniqueId 是否已赋值
                     * 
                     */
                    bool UniqueIdHasBeenSet() const;

                    /**
                     * 获取Number of rule matching times.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return MatchTimes Number of rule matching times.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetMatchTimes() const;

                    /**
                     * 设置Number of rule matching times.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _matchTimes Number of rule matching times.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetMatchTimes(const int64_t& _matchTimes);

                    /**
                     * 判断参数 MatchTimes 是否已赋值
                     * @return MatchTimes 是否已赋值
                     * 
                     */
                    bool MatchTimesHasBeenSet() const;

                    /**
                     * 获取Country.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Country Country.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetCountry() const;

                    /**
                     * 设置Country.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _country Country.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetCountry(const std::string& _country);

                    /**
                     * 判断参数 Country 是否已赋值
                     * @return Country 是否已赋值
                     * 
                     */
                    bool CountryHasBeenSet() const;

                    /**
                     * 获取
                     * @return Comment 
                     * 
                     */
                    std::string GetComment() const;

                    /**
                     * 设置
                     * @param _comment 
                     * 
                     */
                    void SetComment(const std::string& _comment);

                    /**
                     * 判断参数 Comment 是否已赋值
                     * @return Comment 是否已赋值
                     * 
                     */
                    bool CommentHasBeenSet() const;

                private:

                    /**
                     * Domain name.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_domain;
                    bool m_domainHasBeenSet;

                    /**
                     * Rule IP.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_ioc;
                    bool m_iocHasBeenSet;

                    /**
                     * Threat level.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_level;
                    bool m_levelHasBeenSet;

                    /**
                     * Source event name.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_eventName;
                    bool m_eventNameHasBeenSet;

                    /**
                     * Direction. Valid values: 0: outbound; 1: inbound.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_direction;
                    bool m_directionHasBeenSet;

                    /**
                     * Protocol.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_protocol;
                    bool m_protocolHasBeenSet;

                    /**
                     * Address.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_address;
                    bool m_addressHasBeenSet;

                    /**
                     * Rule type. Valid values: 1: block; 2: allow.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_action;
                    bool m_actionHasBeenSet;

                    /**
                     * Time when a rule starts to take effect.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * Time when a rule expires.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * Reason for ignoring.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_ignoreReason;
                    bool m_ignoreReasonHasBeenSet;

                    /**
                     * Security event source.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_source;
                    bool m_sourceHasBeenSet;

                    /**
                     * Rule ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_uniqueId;
                    bool m_uniqueIdHasBeenSet;

                    /**
                     * Number of rule matching times.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_matchTimes;
                    bool m_matchTimesHasBeenSet;

                    /**
                     * Country.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_country;
                    bool m_countryHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_comment;
                    bool m_commentHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFW_V20190904_MODEL_BLOCKIGNORERULE_H_
