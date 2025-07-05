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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_VULVIEWVULRISK_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_VULVIEWVULRISK_H_

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
                class VULViewVULRisk : public AbstractModel
                {
                public:
                    VULViewVULRisk();
                    ~VULViewVULRisk() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


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
                     * 获取Affected assets
                     * @return NoHandleCount Affected assets
                     * 
                     */
                    int64_t GetNoHandleCount() const;

                    /**
                     * 设置Affected assets
                     * @param _noHandleCount Affected assets
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
                     * @return AffectAssetCount Status of the risk. `0`: Not handled, `1`: Handled; `2`: Ignored
                     * 
                     */
                    uint64_t GetAffectAssetCount() const;

                    /**
                     * 设置Status of the risk. `0`: Not handled, `1`: Handled; `2`: Ignored
                     * @param _affectAssetCount Status of the risk. `0`: Not handled, `1`: Handled; `2`: Ignored
                     * 
                     */
                    void SetAffectAssetCount(const uint64_t& _affectAssetCount);

                    /**
                     * 判断参数 AffectAssetCount 是否已赋值
                     * @return AffectAssetCount 是否已赋值
                     * 
                     */
                    bool AffectAssetCountHasBeenSet() const;

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
                     * 获取Asset sub-category
                     * @return From Asset sub-category
                     * 
                     */
                    std::string GetFrom() const;

                    /**
                     * 设置Asset sub-category
                     * @param _from Asset sub-category
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
                     * 获取Affected components
                     * @return AppName Affected components
                     * 
                     */
                    std::string GetAppName() const;

                    /**
                     * 设置Affected components
                     * @param _appName Affected components
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
                     * 获取Reference information of the vulnerability
                     * @return References Reference information of the vulnerability
                     * 
                     */
                    std::string GetReferences() const;

                    /**
                     * 设置Reference information of the vulnerability
                     * @param _references Reference information of the vulnerability
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
                     * 获取Affected version
                     * @return AppVersion Affected version
                     * 
                     */
                    std::string GetAppVersion() const;

                    /**
                     * 设置Affected version
                     * @param _appVersion Affected version
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
                     * 获取Fix suggestion
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @return Fix Fix suggestion
Note: This field may return·null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetFix() const;

                    /**
                     * 设置Fix suggestion
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @param _fix Fix suggestion
Note: This field may return·null, indicating that no valid values can be obtained.
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
                     * Port
                     */
                    std::string m_port;
                    bool m_portHasBeenSet;

                    /**
                     * Affected assets
                     */
                    int64_t m_noHandleCount;
                    bool m_noHandleCountHasBeenSet;

                    /**
                     * Risk level
                     */
                    std::string m_level;
                    bool m_levelHasBeenSet;

                    /**
                     * Components
                     */
                    std::string m_component;
                    bool m_componentHasBeenSet;

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
                    uint64_t m_affectAssetCount;
                    bool m_affectAssetCountHasBeenSet;

                    /**
                     * Unique ID of the asset
                     */
                    std::string m_id;
                    bool m_idHasBeenSet;

                    /**
                     * Asset sub-category
                     */
                    std::string m_from;
                    bool m_fromHasBeenSet;

                    /**
                     * Frontend index
                     */
                    std::string m_index;
                    bool m_indexHasBeenSet;

                    /**
                     * Vulnerability type
                     */
                    std::string m_vULType;
                    bool m_vULTypeHasBeenSet;

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
                     * Description
                     */
                    std::string m_describe;
                    bool m_describeHasBeenSet;

                    /**
                     * Pay load
                     */
                    std::string m_payload;
                    bool m_payloadHasBeenSet;

                    /**
                     * Affected components
                     */
                    std::string m_appName;
                    bool m_appNameHasBeenSet;

                    /**
                     * Reference information of the vulnerability
                     */
                    std::string m_references;
                    bool m_referencesHasBeenSet;

                    /**
                     * Affected version
                     */
                    std::string m_appVersion;
                    bool m_appVersionHasBeenSet;

                    /**
                     * Vulnerability URL
                     */
                    std::string m_vULURL;
                    bool m_vULURLHasBeenSet;

                    /**
                     * User name.
Note: This field may return·null, indicating that no valid values can be obtained.
                     */
                    std::string m_nick;
                    bool m_nickHasBeenSet;

                    /**
                     * User `appid`
                     */
                    std::string m_appId;
                    bool m_appIdHasBeenSet;

                    /**
                     * User `uin`
Note: This field may return·null, indicating that no valid values can be obtained.
                     */
                    std::string m_uin;
                    bool m_uinHasBeenSet;

                    /**
                     * Fix suggestion
Note: This field may return·null, indicating that no valid values can be obtained.
                     */
                    std::string m_fix;
                    bool m_fixHasBeenSet;

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

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_VULVIEWVULRISK_H_
