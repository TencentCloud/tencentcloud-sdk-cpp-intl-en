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
                * Port risk details
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
                     * 获取Risk level, low - low risk, high - high risk, middle - medium risk, info - notification, extreme - critical.
                     * @return Level Risk level, low - low risk, high - high risk, middle - medium risk, info - notification, extreme - critical.
                     * 
                     */
                    std::string GetLevel() const;

                    /**
                     * 设置Risk level, low - low risk, high - high risk, middle - medium risk, info - notification, extreme - critical.
                     * @param _level Risk level, low - low risk, high - high risk, middle - medium risk, info - notification, extreme - critical.
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
                     * 获取Network protocol
                     * @return Protocol Network protocol
                     * 
                     */
                    std::string GetProtocol() const;

                    /**
                     * 设置Network protocol
                     * @param _protocol Network protocol
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
                     * 获取Components
                     * @return Component Components
                     * 
                     */
                    std::string GetComponent() const;

                    /**
                     * 设置Components
                     * @param _component Components
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
                     * 获取Port
                     * @return Port Port
                     * 
                     */
                    int64_t GetPort() const;

                    /**
                     * 设置Port
                     * @param _port Port
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
                     * 获取Last detected 
                     * @return RecentTime Last detected 
                     * 
                     */
                    std::string GetRecentTime() const;

                    /**
                     * 设置Last detected 
                     * @param _recentTime Last detected 
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
                     * 获取First detected
                     * @return FirstTime First detected
                     * 
                     */
                    std::string GetFirstTime() const;

                    /**
                     * 设置First detected
                     * @param _firstTime First detected
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
                     * 获取Suggested action. `0`: Keep as it is; `1`: Block access requests; `2`: Block the port
                     * @return Suggestion Suggested action. `0`: Keep as it is; `1`: Block access requests; `2`: Block the port
                     * 
                     */
                    uint64_t GetSuggestion() const;

                    /**
                     * 设置Suggested action. `0`: Keep as it is; `1`: Block access requests; `2`: Block the port
                     * @param _suggestion Suggested action. `0`: Keep as it is; `1`: Block access requests; `2`: Block the port
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
                     * 获取Data entry key
                     * @return Index Data entry key
                     * 
                     */
                    std::string GetIndex() const;

                    /**
                     * 设置Data entry key
                     * @param _index Data entry key
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
                     * 获取User AppId
                     * @return AppId User AppId
                     * 
                     */
                    std::string GetAppId() const;

                    /**
                     * 设置User AppId
                     * @param _appId User AppId
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
                     * 获取Service
                     * @return Service Service
                     * 
                     */
                    std::string GetService() const;

                    /**
                     * 设置Service
                     * @param _service Service
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
                     * Risk level, low - low risk, high - high risk, middle - medium risk, info - notification, extreme - critical.
                     */
                    std::string m_level;
                    bool m_levelHasBeenSet;

                    /**
                     * Network protocol
                     */
                    std::string m_protocol;
                    bool m_protocolHasBeenSet;

                    /**
                     * Components
                     */
                    std::string m_component;
                    bool m_componentHasBeenSet;

                    /**
                     * Port
                     */
                    int64_t m_port;
                    bool m_portHasBeenSet;

                    /**
                     * Last detected 
                     */
                    std::string m_recentTime;
                    bool m_recentTimeHasBeenSet;

                    /**
                     * First detected
                     */
                    std::string m_firstTime;
                    bool m_firstTimeHasBeenSet;

                    /**
                     * Suggested action. `0`: Keep as it is; `1`: Block access requests; `2`: Block the port
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
                     * Data entry key
                     */
                    std::string m_index;
                    bool m_indexHasBeenSet;

                    /**
                     * User AppId
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
                     * Service
                     */
                    std::string m_service;
                    bool m_serviceHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_PORTVIEWPORTRISK_H_
