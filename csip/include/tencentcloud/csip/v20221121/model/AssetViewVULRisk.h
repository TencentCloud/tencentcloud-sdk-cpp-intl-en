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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_ASSETVIEWVULRISK_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_ASSETVIEWVULRISK_H_

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
                * Details of a vulnerability
                */
                class AssetViewVULRisk : public AbstractModel
                {
                public:
                    AssetViewVULRisk();
                    ~AssetViewVULRisk() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


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
                     * 获取Vulnerability type
                     * @return VULType Vulnerability type
                     * 
                     */
                    std::string GetVULType() const;

                    /**
                     * 设置Vulnerability type
                     * @param _vULType Vulnerability type
                     * 
                     */
                    void SetVULType(const std::string& _vULType);

                    /**
                     * 判断参数 VULType 是否已赋值
                     * @return VULType 是否已赋值
                     * 
                     */
                    bool VULTypeHasBeenSet() const;

                    /**
                     * 获取Port
                     * @return Port Port
                     * 
                     */
                    std::string GetPort() const;

                    /**
                     * 设置Port
                     * @param _port Port
                     * 
                     */
                    void SetPort(const std::string& _port);

                    /**
                     * 判断参数 Port 是否已赋值
                     * @return Port 是否已赋值
                     * 
                     */
                    bool PortHasBeenSet() const;

                    /**
                     * 获取Description
                     * @return Describe Description
                     * 
                     */
                    std::string GetDescribe() const;

                    /**
                     * 设置Description
                     * @param _describe Description
                     * 
                     */
                    void SetDescribe(const std::string& _describe);

                    /**
                     * 判断参数 Describe 是否已赋值
                     * @return Describe 是否已赋值
                     * 
                     */
                    bool DescribeHasBeenSet() const;

                    /**
                     * 获取Components affected by the vulnerability 
                     * @return AppName Components affected by the vulnerability 
                     * 
                     */
                    std::string GetAppName() const;

                    /**
                     * 设置Components affected by the vulnerability 
                     * @param _appName Components affected by the vulnerability 
                     * 
                     */
                    void SetAppName(const std::string& _appName);

                    /**
                     * 判断参数 AppName 是否已赋值
                     * @return AppName 是否已赋值
                     * 
                     */
                    bool AppNameHasBeenSet() const;

                    /**
                     * 获取Reference information about the vulnerability
                     * @return References Reference information about the vulnerability
                     * 
                     */
                    std::string GetReferences() const;

                    /**
                     * 设置Reference information about the vulnerability
                     * @param _references Reference information about the vulnerability
                     * 
                     */
                    void SetReferences(const std::string& _references);

                    /**
                     * 判断参数 References 是否已赋值
                     * @return References 是否已赋值
                     * 
                     */
                    bool ReferencesHasBeenSet() const;

                    /**
                     * 获取Version
                     * @return AppVersion Version
                     * 
                     */
                    std::string GetAppVersion() const;

                    /**
                     * 设置Version
                     * @param _appVersion Version
                     * 
                     */
                    void SetAppVersion(const std::string& _appVersion);

                    /**
                     * 判断参数 AppVersion 是否已赋值
                     * @return AppVersion 是否已赋值
                     * 
                     */
                    bool AppVersionHasBeenSet() const;

                    /**
                     * 获取Vulnerability URL
                     * @return VULURL Vulnerability URL
                     * 
                     */
                    std::string GetVULURL() const;

                    /**
                     * 设置Vulnerability URL
                     * @param _vULURL Vulnerability URL
                     * 
                     */
                    void SetVULURL(const std::string& _vULURL);

                    /**
                     * 判断参数 VULURL 是否已赋值
                     * @return VULURL 是否已赋值
                     * 
                     */
                    bool VULURLHasBeenSet() const;

                    /**
                     * 获取Vulnerability name
                     * @return VULName Vulnerability name
                     * 
                     */
                    std::string GetVULName() const;

                    /**
                     * 设置Vulnerability name
                     * @param _vULName Vulnerability name
                     * 
                     */
                    void SetVULName(const std::string& _vULName);

                    /**
                     * 判断参数 VULName 是否已赋值
                     * @return VULName 是否已赋值
                     * 
                     */
                    bool VULNameHasBeenSet() const;

                    /**
                     * 获取CVE number
                     * @return CVE CVE number
                     * 
                     */
                    std::string GetCVE() const;

                    /**
                     * 设置CVE number
                     * @param _cVE CVE number
                     * 
                     */
                    void SetCVE(const std::string& _cVE);

                    /**
                     * 判断参数 CVE 是否已赋值
                     * @return CVE 是否已赋值
                     * 
                     */
                    bool CVEHasBeenSet() const;

                    /**
                     * 获取Fix suggestion
                     * @return Fix Fix suggestion
                     * 
                     */
                    std::string GetFix() const;

                    /**
                     * 设置Fix suggestion
                     * @param _fix Fix suggestion
                     * 
                     */
                    void SetFix(const std::string& _fix);

                    /**
                     * 判断参数 Fix 是否已赋值
                     * @return Fix 是否已赋值
                     * 
                     */
                    bool FixHasBeenSet() const;

                    /**
                     * 获取POC ID
                     * @return POCId POC ID
                     * 
                     */
                    std::string GetPOCId() const;

                    /**
                     * 设置POC ID
                     * @param _pOCId POC ID
                     * 
                     */
                    void SetPOCId(const std::string& _pOCId);

                    /**
                     * 判断参数 POCId 是否已赋值
                     * @return POCId 是否已赋值
                     * 
                     */
                    bool POCIdHasBeenSet() const;

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

                    /**
                     * 获取CWPP edition
                     * @return CWPVersion CWPP edition
                     * 
                     */
                    int64_t GetCWPVersion() const;

                    /**
                     * 设置CWPP edition
                     * @param _cWPVersion CWPP edition
                     * 
                     */
                    void SetCWPVersion(const int64_t& _cWPVersion);

                    /**
                     * 判断参数 CWPVersion 是否已赋值
                     * @return CWPVersion 是否已赋值
                     * 
                     */
                    bool CWPVersionHasBeenSet() const;

                    /**
                     * 获取Whether it can be fixed 
                     * @return IsSupportRepair Whether it can be fixed 
                     * 
                     */
                    bool GetIsSupportRepair() const;

                    /**
                     * 设置Whether it can be fixed 
                     * @param _isSupportRepair Whether it can be fixed 
                     * 
                     */
                    void SetIsSupportRepair(const bool& _isSupportRepair);

                    /**
                     * 判断参数 IsSupportRepair 是否已赋值
                     * @return IsSupportRepair 是否已赋值
                     * 
                     */
                    bool IsSupportRepairHasBeenSet() const;

                    /**
                     * 获取Whether it can be detected
                     * @return IsSupportDetect Whether it can be detected
                     * 
                     */
                    bool GetIsSupportDetect() const;

                    /**
                     * 设置Whether it can be detected
                     * @param _isSupportDetect Whether it can be detected
                     * 
                     */
                    void SetIsSupportDetect(const bool& _isSupportDetect);

                    /**
                     * 判断参数 IsSupportDetect 是否已赋值
                     * @return IsSupportDetect 是否已赋值
                     * 
                     */
                    bool IsSupportDetectHasBeenSet() const;

                    /**
                     * 获取Instance UUID
                     * @return InstanceUUID Instance UUID
                     * 
                     */
                    std::string GetInstanceUUID() const;

                    /**
                     * 设置Instance UUID
                     * @param _instanceUUID Instance UUID
                     * 
                     */
                    void SetInstanceUUID(const std::string& _instanceUUID);

                    /**
                     * 判断参数 InstanceUUID 是否已赋值
                     * @return InstanceUUID 是否已赋值
                     * 
                     */
                    bool InstanceUUIDHasBeenSet() const;

                    /**
                     * 获取Pay load
                     * @return Payload Pay load
                     * 
                     */
                    std::string GetPayload() const;

                    /**
                     * 设置Pay load
                     * @param _payload Pay load
                     * 
                     */
                    void SetPayload(const std::string& _payload);

                    /**
                     * 判断参数 Payload 是否已赋值
                     * @return Payload 是否已赋值
                     * 
                     */
                    bool PayloadHasBeenSet() const;

                    /**
                     * 获取Whether it's an emergency vulnerability. Values: `1` (emergency vulnerability); `0` (non-emergency vulnerability
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @return EMGCVulType Whether it's an emergency vulnerability. Values: `1` (emergency vulnerability); `0` (non-emergency vulnerability
Note: This field may return·null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetEMGCVulType() const;

                    /**
                     * 设置Whether it's an emergency vulnerability. Values: `1` (emergency vulnerability); `0` (non-emergency vulnerability
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @param _eMGCVulType Whether it's an emergency vulnerability. Values: `1` (emergency vulnerability); `0` (non-emergency vulnerability
Note: This field may return·null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetEMGCVulType(const int64_t& _eMGCVulType);

                    /**
                     * 判断参数 EMGCVulType 是否已赋值
                     * @return EMGCVulType 是否已赋值
                     * 
                     */
                    bool EMGCVulTypeHasBeenSet() const;

                private:

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
                     * Vulnerability type
                     */
                    std::string m_vULType;
                    bool m_vULTypeHasBeenSet;

                    /**
                     * Port
                     */
                    std::string m_port;
                    bool m_portHasBeenSet;

                    /**
                     * Description
                     */
                    std::string m_describe;
                    bool m_describeHasBeenSet;

                    /**
                     * Components affected by the vulnerability 
                     */
                    std::string m_appName;
                    bool m_appNameHasBeenSet;

                    /**
                     * Reference information about the vulnerability
                     */
                    std::string m_references;
                    bool m_referencesHasBeenSet;

                    /**
                     * Version
                     */
                    std::string m_appVersion;
                    bool m_appVersionHasBeenSet;

                    /**
                     * Vulnerability URL
                     */
                    std::string m_vULURL;
                    bool m_vULURLHasBeenSet;

                    /**
                     * Vulnerability name
                     */
                    std::string m_vULName;
                    bool m_vULNameHasBeenSet;

                    /**
                     * CVE number
                     */
                    std::string m_cVE;
                    bool m_cVEHasBeenSet;

                    /**
                     * Fix suggestion
                     */
                    std::string m_fix;
                    bool m_fixHasBeenSet;

                    /**
                     * POC ID
                     */
                    std::string m_pOCId;
                    bool m_pOCIdHasBeenSet;

                    /**
                     * Source of the task
                     */
                    std::string m_from;
                    bool m_fromHasBeenSet;

                    /**
                     * CWPP edition
                     */
                    int64_t m_cWPVersion;
                    bool m_cWPVersionHasBeenSet;

                    /**
                     * Whether it can be fixed 
                     */
                    bool m_isSupportRepair;
                    bool m_isSupportRepairHasBeenSet;

                    /**
                     * Whether it can be detected
                     */
                    bool m_isSupportDetect;
                    bool m_isSupportDetectHasBeenSet;

                    /**
                     * Instance UUID
                     */
                    std::string m_instanceUUID;
                    bool m_instanceUUIDHasBeenSet;

                    /**
                     * Pay load
                     */
                    std::string m_payload;
                    bool m_payloadHasBeenSet;

                    /**
                     * Whether it's an emergency vulnerability. Values: `1` (emergency vulnerability); `0` (non-emergency vulnerability
Note: This field may return·null, indicating that no valid values can be obtained.
                     */
                    int64_t m_eMGCVulType;
                    bool m_eMGCVulTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_ASSETVIEWVULRISK_H_
