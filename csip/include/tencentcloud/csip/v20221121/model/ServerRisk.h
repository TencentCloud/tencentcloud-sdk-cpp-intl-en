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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_SERVERRISK_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_SERVERRISK_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/csip/v20221121/model/ServerRiskSuggestion.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * Service risk
                */
                class ServerRisk : public AbstractModel
                {
                public:
                    ServerRisk();
                    ~ServerRisk() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Service tag
                     * @return ServiceTag Service tag
                     * 
                     */
                    std::string GetServiceTag() const;

                    /**
                     * 设置Service tag
                     * @param _serviceTag Service tag
                     * 
                     */
                    void SetServiceTag(const std::string& _serviceTag);

                    /**
                     * 判断参数 ServiceTag 是否已赋值
                     * @return ServiceTag 是否已赋值
                     * 
                     */
                    bool ServiceTagHasBeenSet() const;

                    /**
                     * 获取Port
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @return Port Port
Note: This field may return·null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetPort() const;

                    /**
                     * 设置Port
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @param _port Port
Note: This field may return·null, indicating that no valid values can be obtained.
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
                     * 获取Affected assets
                     * @return AffectAsset Affected assets
                     * 
                     */
                    std::string GetAffectAsset() const;

                    /**
                     * 设置Affected assets
                     * @param _affectAsset Affected assets
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
                     * 获取Instance ID
                     * @return InstanceId Instance ID
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置Instance ID
                     * @param _instanceId Instance ID
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
                     * 获取Instance name
                     * @return InstanceName Instance name
                     * 
                     */
                    std::string GetInstanceName() const;

                    /**
                     * 设置Instance name
                     * @param _instanceName Instance name
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
                     * 获取Risk level
                     * @return Level Risk level
                     * 
                     */
                    std::string GetLevel() const;

                    /**
                     * 设置Risk level
                     * @param _level Risk level
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
                     * 获取Risk Details
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @return RiskDetails Risk Details
Note: This field may return·null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetRiskDetails() const;

                    /**
                     * 设置Risk Details
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @param _riskDetails Risk Details
Note: This field may return·null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetRiskDetails(const std::string& _riskDetails);

                    /**
                     * 判断参数 RiskDetails 是否已赋值
                     * @return RiskDetails 是否已赋值
                     * 
                     */
                    bool RiskDetailsHasBeenSet() const;

                    /**
                     * 获取Handling suggestion
                     * @return Suggestion Handling suggestion
                     * 
                     */
                    std::string GetSuggestion() const;

                    /**
                     * 设置Handling suggestion
                     * @param _suggestion Handling suggestion
                     * 
                     */
                    void SetSuggestion(const std::string& _suggestion);

                    /**
                     * 判断参数 Suggestion 是否已赋值
                     * @return Suggestion 是否已赋值
                     * 
                     */
                    bool SuggestionHasBeenSet() const;

                    /**
                     * 获取Status of the risk. `0`: Not handled, `1`: Handled; `2`: Ignored
                     * @return Status Status of the risk. `0`: Not handled, `1`: Handled; `2`: Ignored
                     * 
                     */
                    uint64_t GetStatus() const;

                    /**
                     * 设置Status of the risk. `0`: Not handled, `1`: Handled; `2`: Ignored
                     * @param _status Status of the risk. `0`: Not handled, `1`: Handled; `2`: Ignored
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
                     * 获取Unique ID of the asset
                     * @return Id Unique ID of the asset
                     * 
                     */
                    std::string GetId() const;

                    /**
                     * 设置Unique ID of the asset
                     * @param _id Unique ID of the asset
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
                     * 获取User `appid`
                     * @return AppId User `appid`
                     * 
                     */
                    std::string GetAppId() const;

                    /**
                     * 设置User `appid`
                     * @param _appId User `appid`
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
                     * 获取User name.
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @return Nick User name.
Note: This field may return·null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetNick() const;

                    /**
                     * 设置User name.
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @param _nick User name.
Note: This field may return·null, indicating that no valid values can be obtained.
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
                     * 获取User `uin`
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @return Uin User `uin`
Note: This field may return·null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetUin() const;

                    /**
                     * 设置User `uin`
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @param _uin User `uin`
Note: This field may return·null, indicating that no valid values can be obtained.
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
                     * 获取Service snapshot
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @return ServiceSnapshot Service snapshot
Note: This field may return·null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetServiceSnapshot() const;

                    /**
                     * 设置Service snapshot
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @param _serviceSnapshot Service snapshot
Note: This field may return·null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetServiceSnapshot(const std::string& _serviceSnapshot);

                    /**
                     * 判断参数 ServiceSnapshot 是否已赋值
                     * @return ServiceSnapshot 是否已赋值
                     * 
                     */
                    bool ServiceSnapshotHasBeenSet() const;

                    /**
                     * 获取Service access URL.
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @return Url Service access URL.
Note: This field may return·null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetUrl() const;

                    /**
                     * 设置Service access URL.
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @param _url Service access URL.
Note: This field may return·null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetUrl(const std::string& _url);

                    /**
                     * 判断参数 Url 是否已赋值
                     * @return Url 是否已赋值
                     * 
                     */
                    bool UrlHasBeenSet() const;

                    /**
                     * 获取Data entry key
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @return Index Data entry key
Note: This field may return·null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetIndex() const;

                    /**
                     * 设置Data entry key
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @param _index Data entry key
Note: This field may return·null, indicating that no valid values can be obtained.
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
                     * 获取List of risks
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @return RiskList List of risks
Note: This field may return·null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<ServerRiskSuggestion> GetRiskList() const;

                    /**
                     * 设置List of risks
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @param _riskList List of risks
Note: This field may return·null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetRiskList(const std::vector<ServerRiskSuggestion>& _riskList);

                    /**
                     * 判断参数 RiskList 是否已赋值
                     * @return RiskList 是否已赋值
                     * 
                     */
                    bool RiskListHasBeenSet() const;

                    /**
                     * 获取List of fix suggestions 
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @return SuggestionList List of fix suggestions 
Note: This field may return·null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<ServerRiskSuggestion> GetSuggestionList() const;

                    /**
                     * 设置List of fix suggestions 
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @param _suggestionList List of fix suggestions 
Note: This field may return·null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetSuggestionList(const std::vector<ServerRiskSuggestion>& _suggestionList);

                    /**
                     * 判断参数 SuggestionList 是否已赋值
                     * @return SuggestionList 是否已赋值
                     * 
                     */
                    bool SuggestionListHasBeenSet() const;

                    /**
                     * 获取HTTP response code
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @return StatusCode HTTP response code
Note: This field may return·null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetStatusCode() const;

                    /**
                     * 设置HTTP response code
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @param _statusCode HTTP response code
Note: This field may return·null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetStatusCode(const std::string& _statusCode);

                    /**
                     * 判断参数 StatusCode 是否已赋值
                     * @return StatusCode 是否已赋值
                     * 
                     */
                    bool StatusCodeHasBeenSet() const;

                private:

                    /**
                     * Service tag
                     */
                    std::string m_serviceTag;
                    bool m_serviceTagHasBeenSet;

                    /**
                     * Port
Note: This field may return·null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_port;
                    bool m_portHasBeenSet;

                    /**
                     * Affected assets
                     */
                    std::string m_affectAsset;
                    bool m_affectAssetHasBeenSet;

                    /**
                     * Instance ID
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * Instance name
                     */
                    std::string m_instanceName;
                    bool m_instanceNameHasBeenSet;

                    /**
                     * Asset type
                     */
                    std::string m_instanceType;
                    bool m_instanceTypeHasBeenSet;

                    /**
                     * Risk level
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
                     * Service
                     */
                    std::string m_service;
                    bool m_serviceHasBeenSet;

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
                     * Risk Details
Note: This field may return·null, indicating that no valid values can be obtained.
                     */
                    std::string m_riskDetails;
                    bool m_riskDetailsHasBeenSet;

                    /**
                     * Handling suggestion
                     */
                    std::string m_suggestion;
                    bool m_suggestionHasBeenSet;

                    /**
                     * Status of the risk. `0`: Not handled, `1`: Handled; `2`: Ignored
                     */
                    uint64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Unique ID of the asset
                     */
                    std::string m_id;
                    bool m_idHasBeenSet;

                    /**
                     * User `appid`
                     */
                    std::string m_appId;
                    bool m_appIdHasBeenSet;

                    /**
                     * User name.
Note: This field may return·null, indicating that no valid values can be obtained.
                     */
                    std::string m_nick;
                    bool m_nickHasBeenSet;

                    /**
                     * User `uin`
Note: This field may return·null, indicating that no valid values can be obtained.
                     */
                    std::string m_uin;
                    bool m_uinHasBeenSet;

                    /**
                     * Service snapshot
Note: This field may return·null, indicating that no valid values can be obtained.
                     */
                    std::string m_serviceSnapshot;
                    bool m_serviceSnapshotHasBeenSet;

                    /**
                     * Service access URL.
Note: This field may return·null, indicating that no valid values can be obtained.
                     */
                    std::string m_url;
                    bool m_urlHasBeenSet;

                    /**
                     * Data entry key
Note: This field may return·null, indicating that no valid values can be obtained.
                     */
                    std::string m_index;
                    bool m_indexHasBeenSet;

                    /**
                     * List of risks
Note: This field may return·null, indicating that no valid values can be obtained.
                     */
                    std::vector<ServerRiskSuggestion> m_riskList;
                    bool m_riskListHasBeenSet;

                    /**
                     * List of fix suggestions 
Note: This field may return·null, indicating that no valid values can be obtained.
                     */
                    std::vector<ServerRiskSuggestion> m_suggestionList;
                    bool m_suggestionListHasBeenSet;

                    /**
                     * HTTP response code
Note: This field may return·null, indicating that no valid values can be obtained.
                     */
                    std::string m_statusCode;
                    bool m_statusCodeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_SERVERRISK_H_
