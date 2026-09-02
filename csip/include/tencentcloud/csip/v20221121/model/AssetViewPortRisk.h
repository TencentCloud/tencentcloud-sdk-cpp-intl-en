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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_ASSETVIEWPORTRISK_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_ASSETVIEWPORTRISK_H_

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
                * Port Risk Objects from Asset's Perspective
                */
                class AssetViewPortRisk : public AbstractModel
                {
                public:
                    AssetViewPortRisk();
                    ~AssetViewPortRisk() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Port.
                     * @return Port Port.
                     * 
                     */
                    uint64_t GetPort() const;

                    /**
                     * 设置Port.
                     * @param _port Port.
                     * 
                     */
                    void SetPort(const uint64_t& _port);

                    /**
                     * 判断参数 Port 是否已赋值
                     * @return Port 是否已赋值
                     * 
                     */
                    bool PortHasBeenSet() const;

                    /**
                     * 获取Affect assets
                     * @return AffectAsset Affect assets
                     * 
                     */
                    std::string GetAffectAsset() const;

                    /**
                     * 设置Affect assets
                     * @param _affectAsset Affect assets
                     * 
                     */
                    void SetAffectAsset(const std::string& _affectAsset);

                    /**
                     * 判断参数 AffectAsset 是否已赋值
                     * @return AffectAsset 是否已赋值
                     * 
                     */
                    bool AffectAssetHasBeenSet() const;

                    /**
                     * 获取Risk level. low: low risk. high: high risk. middle: medium risk. info: notification. extreme: critical.
                     * @return Level Risk level. low: low risk. high: high risk. middle: medium risk. info: notification. extreme: critical.
                     * 
                     */
                    std::string GetLevel() const;

                    /**
                     * 设置Risk level. low: low risk. high: high risk. middle: medium risk. info: notification. extreme: critical.
                     * @param _level Risk level. low: low risk. high: high risk. middle: medium risk. info: notification. extreme: critical.
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
                     * 获取Asset type
                     * @return InstanceType Asset type
                     * 
                     */
                    std::string GetInstanceType() const;

                    /**
                     * 设置Asset type
                     * @param _instanceType Asset type
                     * 
                     */
                    void SetInstanceType(const std::string& _instanceType);

                    /**
                     * 判断参数 InstanceType 是否已赋值
                     * @return InstanceType 是否已赋值
                     * 
                     */
                    bool InstanceTypeHasBeenSet() const;

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
                     * 获取Status. 0-Unprocessed; 1-Disposed; 2-Ignored; 3-Defended by Cloud Firewall.
                     * @return Status Status. 0-Unprocessed; 1-Disposed; 2-Ignored; 3-Defended by Cloud Firewall.
                     * 
                     */
                    uint64_t GetStatus() const;

                    /**
                     * 设置Status. 0-Unprocessed; 1-Disposed; 2-Ignored; 3-Defended by Cloud Firewall.
                     * @param _status Status. 0-Unprocessed; 1-Disposed; 2-Ignored; 3-Defended by Cloud Firewall.
                     * 
                     */
                    void SetStatus(const uint64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取Risk ID
                     * @return Id Risk ID
                     * 
                     */
                    std::string GetId() const;

                    /**
                     * 设置Risk ID
                     * @param _id Risk ID
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
                     * 获取Instance ID.
                     * @return InstanceId Instance ID.
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置Instance ID.
                     * @param _instanceId Instance ID.
                     * 
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取Instance name.
                     * @return InstanceName Instance name.
                     * 
                     */
                    std::string GetInstanceName() const;

                    /**
                     * 设置Instance name.
                     * @param _instanceName Instance name.
                     * 
                     */
                    void SetInstanceName(const std::string& _instanceName);

                    /**
                     * 判断参数 InstanceName 是否已赋值
                     * @return InstanceName 是否已赋值
                     * 
                     */
                    bool InstanceNameHasBeenSet() const;

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
                     * 获取Recognition Source. See Enumeration Return for details.
                     * @return From Recognition Source. See Enumeration Return for details.
                     * 
                     */
                    std::string GetFrom() const;

                    /**
                     * 设置Recognition Source. See Enumeration Return for details.
                     * @param _from Recognition Source. See Enumeration Return for details.
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
                     * 获取Service judgment. high_risk_service: high-risk service. web_service: web service. other_service: other service.
                     * @return ServiceJudge Service judgment. high_risk_service: high-risk service. web_service: web service. other_service: other service.
                     * 
                     */
                    std::string GetServiceJudge() const;

                    /**
                     * 设置Service judgment. high_risk_service: high-risk service. web_service: web service. other_service: other service.
                     * @param _serviceJudge Service judgment. high_risk_service: high-risk service. web_service: web service. other_service: other service.
                     * 
                     */
                    void SetServiceJudge(const std::string& _serviceJudge);

                    /**
                     * 判断参数 ServiceJudge 是否已赋值
                     * @return ServiceJudge 是否已赋值
                     * 
                     */
                    bool ServiceJudgeHasBeenSet() const;

                    /**
                     * 获取Status. 0: unprocessed; 1: processed; 2: ignored; 3: defended by Cloud Firewall; 4: no action is required.
                     * @return XspmStatus Status. 0: unprocessed; 1: processed; 2: ignored; 3: defended by Cloud Firewall; 4: no action is required.
                     * 
                     */
                    uint64_t GetXspmStatus() const;

                    /**
                     * 设置Status. 0: unprocessed; 1: processed; 2: ignored; 3: defended by Cloud Firewall; 4: no action is required.
                     * @param _xspmStatus Status. 0: unprocessed; 1: processed; 2: ignored; 3: defended by Cloud Firewall; 4: no action is required.
                     * 
                     */
                    void SetXspmStatus(const uint64_t& _xspmStatus);

                    /**
                     * 判断参数 XspmStatus 是否已赋值
                     * @return XspmStatus 是否已赋值
                     * 
                     */
                    bool XspmStatusHasBeenSet() const;

                private:

                    /**
                     * Port.
                     */
                    uint64_t m_port;
                    bool m_portHasBeenSet;

                    /**
                     * Affect assets
                     */
                    std::string m_affectAsset;
                    bool m_affectAssetHasBeenSet;

                    /**
                     * Risk level. low: low risk. high: high risk. middle: medium risk. info: notification. extreme: critical.
                     */
                    std::string m_level;
                    bool m_levelHasBeenSet;

                    /**
                     * Asset type
                     */
                    std::string m_instanceType;
                    bool m_instanceTypeHasBeenSet;

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
                     * Service.
                     */
                    std::string m_service;
                    bool m_serviceHasBeenSet;

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
                     * Status. 0-Unprocessed; 1-Disposed; 2-Ignored; 3-Defended by Cloud Firewall.
                     */
                    uint64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Risk ID
                     */
                    std::string m_id;
                    bool m_idHasBeenSet;

                    /**
                     * Front-end Index
                     */
                    std::string m_index;
                    bool m_indexHasBeenSet;

                    /**
                     * Instance ID.
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * Instance name.
                     */
                    std::string m_instanceName;
                    bool m_instanceNameHasBeenSet;

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
                     * Recognition Source. See Enumeration Return for details.
                     */
                    std::string m_from;
                    bool m_fromHasBeenSet;

                    /**
                     * Service judgment. high_risk_service: high-risk service. web_service: web service. other_service: other service.
                     */
                    std::string m_serviceJudge;
                    bool m_serviceJudgeHasBeenSet;

                    /**
                     * Status. 0: unprocessed; 1: processed; 2: ignored; 3: defended by Cloud Firewall; 4: no action is required.
                     */
                    uint64_t m_xspmStatus;
                    bool m_xspmStatusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_ASSETVIEWPORTRISK_H_
