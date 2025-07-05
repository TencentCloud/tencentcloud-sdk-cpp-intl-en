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
                * Port risk details
                */
                class AssetViewPortRisk : public AbstractModel
                {
                public:
                    AssetViewPortRisk();
                    ~AssetViewPortRisk() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Port
                     * @return Port Port
                     * 
                     */
                    uint64_t GetPort() const;

                    /**
                     * 设置Port
                     * @param _port Port
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
                     * 获取Frontend index
                     * @return Index Frontend index
                     * 
                     */
                    std::string GetIndex() const;

                    /**
                     * 设置Frontend index
                     * @param _index Frontend index
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
                     * 获取Source of the task
                     * @return From Source of the task
                     * 
                     */
                    std::string GetFrom() const;

                    /**
                     * 设置Source of the task
                     * @param _from Source of the task
                     * 
                     */
                    void SetFrom(const std::string& _from);

                    /**
                     * 判断参数 From 是否已赋值
                     * @return From 是否已赋值
                     * 
                     */
                    bool FromHasBeenSet() const;

                private:

                    /**
                     * Port
                     */
                    uint64_t m_port;
                    bool m_portHasBeenSet;

                    /**
                     * Affected assets
                     */
                    std::string m_affectAsset;
                    bool m_affectAssetHasBeenSet;

                    /**
                     * Risk level
                     */
                    std::string m_level;
                    bool m_levelHasBeenSet;

                    /**
                     * Asset type
                     */
                    std::string m_instanceType;
                    bool m_instanceTypeHasBeenSet;

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
                     * Suggested action. `0`: Keep as it is; `1`: Block access requests; `2`: Block the port
                     */
                    uint64_t m_suggestion;
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
                     * Frontend index
                     */
                    std::string m_index;
                    bool m_indexHasBeenSet;

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
                     * Source of the task
                     */
                    std::string m_from;
                    bool m_fromHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_ASSETVIEWPORTRISK_H_
