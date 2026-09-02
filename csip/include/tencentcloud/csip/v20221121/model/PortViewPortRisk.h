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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_PORTVIEWPORTRISK_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_PORTVIEWPORTRISK_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * Port Risk Objects from Port's Perspective
                */
                class PortViewPortRisk : public AbstractModel
                {
                public:
                    PortViewPortRisk();
                    ~PortViewPortRisk() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Unprocessed quantity.
                     * @return NoHandleCount Unprocessed quantity.
                     * 
                     */
                    int64_t GetNoHandleCount() const;

                    /**
                     * 设置Unprocessed quantity.
                     * @param _noHandleCount Unprocessed quantity.
                     * 
                     */
                    void SetNoHandleCount(const int64_t& _noHandleCount);

                    /**
                     * 判断参数 NoHandleCount 是否已赋值
                     * @return NoHandleCount 是否已赋值
                     * 
                     */
                    bool NoHandleCountHasBeenSet() const;

                    /**
                     * 获取Risk level. low: low risk, high: high risk, middle: medium risk, info: notification, extreme: severe.
                     * @return Level Risk level. low: low risk, high: high risk, middle: medium risk, info: notification, extreme: severe.
                     * 
                     */
                    std::string GetLevel() const;

                    /**
                     * 设置Risk level. low: low risk, high: high risk, middle: medium risk, info: notification, extreme: severe.
                     * @param _level Risk level. low: low risk, high: high risk, middle: medium risk, info: notification, extreme: severe.
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
                     * 获取Protocol
                     * @return Protocol Protocol
                     * 
                     */
                    std::string GetProtocol() const;

                    /**
                     * 设置Protocol
                     * @param _protocol Protocol
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
                     * 获取Component
                     * @return Component Component
                     * 
                     */
                    std::string GetComponent() const;

                    /**
                     * 设置Component
                     * @param _component Component
                     * 
                     */
                    void SetComponent(const std::string& _component);

                    /**
                     * 判断参数 Component 是否已赋值
                     * @return Component 是否已赋值
                     * 
                     */
                    bool ComponentHasBeenSet() const;

                    /**
                     * 获取Port.
                     * @return Port Port.
                     * 
                     */
                    int64_t GetPort() const;

                    /**
                     * 设置Port.
                     * @param _port Port.
                     * 
                     */
                    void SetPort(const int64_t& _port);

                    /**
                     * 判断参数 Port 是否已赋值
                     * @return Port 是否已赋值
                     * 
                     */
                    bool PortHasBeenSet() const;

                    /**
                     * 获取Latest Recognition Time
                     * @return RecentTime Latest Recognition Time
                     * 
                     */
                    std::string GetRecentTime() const;

                    /**
                     * 设置Latest Recognition Time
                     * @param _recentTime Latest Recognition Time
                     * 
                     */
                    void SetRecentTime(const std::string& _recentTime);

                    /**
                     * 判断参数 RecentTime 是否已赋值
                     * @return RecentTime 是否已赋值
                     * 
                     */
                    bool RecentTimeHasBeenSet() const;

                    /**
                     * 获取First Recognition Time
                     * @return FirstTime First Recognition Time
                     * 
                     */
                    std::string GetFirstTime() const;

                    /**
                     * 设置First Recognition Time
                     * @param _firstTime First Recognition Time
                     * 
                     */
                    void SetFirstTime(const std::string& _firstTime);

                    /**
                     * 判断参数 FirstTime 是否已赋值
                     * @return FirstTime 是否已赋值
                     * 
                     */
                    bool FirstTimeHasBeenSet() const;

                    /**
                     * 获取Disposal Suggestions. 0: Maintain Status Quo; 1: Restrict Access; 2: Block Port.
                     * @return Suggestion Disposal Suggestions. 0: Maintain Status Quo; 1: Restrict Access; 2: Block Port.
                     * 
                     */
                    uint64_t GetSuggestion() const;

                    /**
                     * 设置Disposal Suggestions. 0: Maintain Status Quo; 1: Restrict Access; 2: Block Port.
                     * @param _suggestion Disposal Suggestions. 0: Maintain Status Quo; 1: Restrict Access; 2: Block Port.
                     * 
                     */
                    void SetSuggestion(const uint64_t& _suggestion);

                    /**
                     * 判断参数 Suggestion 是否已赋值
                     * @return Suggestion 是否已赋值
                     * 
                     */
                    bool SuggestionHasBeenSet() const;

                    /**
                     * 获取Number of Affected Assets
                     * @return AffectAssetCount Number of Affected Assets
                     * 
                     */
                    std::string GetAffectAssetCount() const;

                    /**
                     * 设置Number of Affected Assets
                     * @param _affectAssetCount Number of Affected Assets
                     * 
                     */
                    void SetAffectAssetCount(const std::string& _affectAssetCount);

                    /**
                     * 判断参数 AffectAssetCount 是否已赋值
                     * @return AffectAssetCount 是否已赋值
                     * 
                     */
                    bool AffectAssetCountHasBeenSet() const;

                    /**
                     * 获取ID
                     * @return Id ID
                     * 
                     */
                    std::string GetId() const;

                    /**
                     * 设置ID
                     * @param _id ID
                     * 
                     */
                    void SetId(const std::string& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取Source recognition
                     * @return From Source recognition
                     * 
                     */
                    std::string GetFrom() const;

                    /**
                     * 设置Source recognition
                     * @param _from Source recognition
                     * 
                     */
                    void SetFrom(const std::string& _from);

                    /**
                     * 判断参数 From 是否已赋值
                     * @return From 是否已赋值
                     * 
                     */
                    bool FromHasBeenSet() const;

                    /**
                     * 获取Front-end Index
                     * @return Index Front-end Index
                     * 
                     */
                    std::string GetIndex() const;

                    /**
                     * 设置Front-end Index
                     * @param _index Front-end Index
                     * 
                     */
                    void SetIndex(const std::string& _index);

                    /**
                     * 判断参数 Index 是否已赋值
                     * @return Index 是否已赋值
                     * 
                     */
                    bool IndexHasBeenSet() const;

                    /**
                     * 获取User appid.
                     * @return AppId User appid.
                     * 
                     */
                    std::string GetAppId() const;

                    /**
                     * 设置User appid.
                     * @param _appId User appid.
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
                     * 获取User Nickname
                     * @return Nick User Nickname
                     * 
                     */
                    std::string GetNick() const;

                    /**
                     * 设置User Nickname
                     * @param _nick User Nickname
                     * 
                     */
                    void SetNick(const std::string& _nick);

                    /**
                     * 判断参数 Nick 是否已赋值
                     * @return Nick 是否已赋值
                     * 
                     */
                    bool NickHasBeenSet() const;

                    /**
                     * 获取User UIN
                     * @return Uin User UIN
                     * 
                     */
                    std::string GetUin() const;

                    /**
                     * 设置User UIN
                     * @param _uin User UIN
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
                     * 获取Service.
                     * @return Service Service.
                     * 
                     */
                    std::string GetService() const;

                    /**
                     * 设置Service.
                     * @param _service Service.
                     * 
                     */
                    void SetService(const std::string& _service);

                    /**
                     * 判断参数 Service 是否已赋值
                     * @return Service 是否已赋值
                     * 
                     */
                    bool ServiceHasBeenSet() const;

                private:

                    /**
                     * Unprocessed quantity.
                     */
                    int64_t m_noHandleCount;
                    bool m_noHandleCountHasBeenSet;

                    /**
                     * Risk level. low: low risk, high: high risk, middle: medium risk, info: notification, extreme: severe.
                     */
                    std::string m_level;
                    bool m_levelHasBeenSet;

                    /**
                     * Protocol
                     */
                    std::string m_protocol;
                    bool m_protocolHasBeenSet;

                    /**
                     * Component
                     */
                    std::string m_component;
                    bool m_componentHasBeenSet;

                    /**
                     * Port.
                     */
                    int64_t m_port;
                    bool m_portHasBeenSet;

                    /**
                     * Latest Recognition Time
                     */
                    std::string m_recentTime;
                    bool m_recentTimeHasBeenSet;

                    /**
                     * First Recognition Time
                     */
                    std::string m_firstTime;
                    bool m_firstTimeHasBeenSet;

                    /**
                     * Disposal Suggestions. 0: Maintain Status Quo; 1: Restrict Access; 2: Block Port.
                     */
                    uint64_t m_suggestion;
                    bool m_suggestionHasBeenSet;

                    /**
                     * Number of Affected Assets
                     */
                    std::string m_affectAssetCount;
                    bool m_affectAssetCountHasBeenSet;

                    /**
                     * ID
                     */
                    std::string m_id;
                    bool m_idHasBeenSet;

                    /**
                     * Source recognition
                     */
                    std::string m_from;
                    bool m_fromHasBeenSet;

                    /**
                     * Front-end Index
                     */
                    std::string m_index;
                    bool m_indexHasBeenSet;

                    /**
                     * User appid.
                     */
                    std::string m_appId;
                    bool m_appIdHasBeenSet;

                    /**
                     * User Nickname
                     */
                    std::string m_nick;
                    bool m_nickHasBeenSet;

                    /**
                     * User UIN
                     */
                    std::string m_uin;
                    bool m_uinHasBeenSet;

                    /**
                     * Service.
                     */
                    std::string m_service;
                    bool m_serviceHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_PORTVIEWPORTRISK_H_
