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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_VULRISKADVANCECFGLIST_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_VULRISKADVANCECFGLIST_H_

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
                * List of advanced vulnerability scan configurations
                */
                class VULRiskAdvanceCFGList : public AbstractModel
                {
                public:
                    VULRiskAdvanceCFGList();
                    ~VULRiskAdvanceCFGList() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Risk ID
                     * @return RiskId Risk ID
                     * 
                     */
                    std::string GetRiskId() const;

                    /**
                     * 设置Risk ID
                     * @param _riskId Risk ID
                     * 
                     */
                    void SetRiskId(const std::string& _riskId);

                    /**
                     * 判断参数 RiskId 是否已赋值
                     * @return RiskId 是否已赋值
                     * 
                     */
                    bool RiskIdHasBeenSet() const;

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
                     * 获取Risk level
                     * @return RiskLevel Risk level
                     * 
                     */
                    std::string GetRiskLevel() const;

                    /**
                     * 设置Risk level
                     * @param _riskLevel Risk level
                     * 
                     */
                    void SetRiskLevel(const std::string& _riskLevel);

                    /**
                     * 判断参数 RiskLevel 是否已赋值
                     * @return RiskLevel 是否已赋值
                     * 
                     */
                    bool RiskLevelHasBeenSet() const;

                    /**
                     * 获取Source of the check task
                     * @return CheckFrom Source of the check task
                     * 
                     */
                    std::string GetCheckFrom() const;

                    /**
                     * 设置Source of the check task
                     * @param _checkFrom Source of the check task
                     * 
                     */
                    void SetCheckFrom(const std::string& _checkFrom);

                    /**
                     * 判断参数 CheckFrom 是否已赋值
                     * @return CheckFrom 是否已赋值
                     * 
                     */
                    bool CheckFromHasBeenSet() const;

                    /**
                     * 获取Whether it's enabled. `1`: Enable; `0`: Disabled
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @return Enable Whether it's enabled. `1`: Enable; `0`: Disabled
Note: This field may return·null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetEnable() const;

                    /**
                     * 设置Whether it's enabled. `1`: Enable; `0`: Disabled
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @param _enable Whether it's enabled. `1`: Enable; `0`: Disabled
Note: This field may return·null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetEnable(const int64_t& _enable);

                    /**
                     * 判断参数 Enable 是否已赋值
                     * @return Enable 是否已赋值
                     * 
                     */
                    bool EnableHasBeenSet() const;

                    /**
                     * 获取Risk type.
                     * @return VULType Risk type.
                     * 
                     */
                    std::string GetVULType() const;

                    /**
                     * 设置Risk type.
                     * @param _vULType Risk type.
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
                     * 获取Affected versions
                     * @return ImpactVersion Affected versions
                     * 
                     */
                    std::string GetImpactVersion() const;

                    /**
                     * 设置Affected versions
                     * @param _impactVersion Affected versions
                     * 
                     */
                    void SetImpactVersion(const std::string& _impactVersion);

                    /**
                     * 判断参数 ImpactVersion 是否已赋值
                     * @return ImpactVersion 是否已赋值
                     * 
                     */
                    bool ImpactVersionHasBeenSet() const;

                    /**
                     * 获取CVE number
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @return CVE CVE number
Note: This field may return·null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetCVE() const;

                    /**
                     * 设置CVE number
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @param _cVE CVE number
Note: This field may return·null, indicating that no valid values can be obtained.
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
                     * 获取Vulnerability tag
                     * @return VULTag Vulnerability tag
                     * 
                     */
                    std::vector<std::string> GetVULTag() const;

                    /**
                     * 设置Vulnerability tag
                     * @param _vULTag Vulnerability tag
                     * 
                     */
                    void SetVULTag(const std::vector<std::string>& _vULTag);

                    /**
                     * 判断参数 VULTag 是否已赋值
                     * @return VULTag 是否已赋值
                     * 
                     */
                    bool VULTagHasBeenSet() const;

                    /**
                     * 获取Fix solution
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @return FixMethod Fix solution
Note: This field may return·null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<std::string> GetFixMethod() const;

                    /**
                     * 设置Fix solution
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @param _fixMethod Fix solution
Note: This field may return·null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetFixMethod(const std::vector<std::string>& _fixMethod);

                    /**
                     * 判断参数 FixMethod 是否已赋值
                     * @return FixMethod 是否已赋值
                     * 
                     */
                    bool FixMethodHasBeenSet() const;

                    /**
                     * 获取Disclosure time
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @return ReleaseTime Disclosure time
Note: This field may return·null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetReleaseTime() const;

                    /**
                     * 设置Disclosure time
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @param _releaseTime Disclosure time
Note: This field may return·null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetReleaseTime(const std::string& _releaseTime);

                    /**
                     * 判断参数 ReleaseTime 是否已赋值
                     * @return ReleaseTime 是否已赋值
                     * 
                     */
                    bool ReleaseTimeHasBeenSet() const;

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

                    /**
                     * 获取Vulnerability description
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @return VULDescribe Vulnerability description
Note: This field may return·null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetVULDescribe() const;

                    /**
                     * 设置Vulnerability description
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @param _vULDescribe Vulnerability description
Note: This field may return·null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetVULDescribe(const std::string& _vULDescribe);

                    /**
                     * 判断参数 VULDescribe 是否已赋值
                     * @return VULDescribe 是否已赋值
                     * 
                     */
                    bool VULDescribeHasBeenSet() const;

                    /**
                     * 获取Affected components
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @return ImpactComponent Affected components
Note: This field may return·null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetImpactComponent() const;

                    /**
                     * 设置Affected components
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @param _impactComponent Affected components
Note: This field may return·null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetImpactComponent(const std::string& _impactComponent);

                    /**
                     * 判断参数 ImpactComponent 是否已赋值
                     * @return ImpactComponent 是否已赋值
                     * 
                     */
                    bool ImpactComponentHasBeenSet() const;

                private:

                    /**
                     * Risk ID
                     */
                    std::string m_riskId;
                    bool m_riskIdHasBeenSet;

                    /**
                     * Vulnerability name
                     */
                    std::string m_vULName;
                    bool m_vULNameHasBeenSet;

                    /**
                     * Risk level
                     */
                    std::string m_riskLevel;
                    bool m_riskLevelHasBeenSet;

                    /**
                     * Source of the check task
                     */
                    std::string m_checkFrom;
                    bool m_checkFromHasBeenSet;

                    /**
                     * Whether it's enabled. `1`: Enable; `0`: Disabled
Note: This field may return·null, indicating that no valid values can be obtained.
                     */
                    int64_t m_enable;
                    bool m_enableHasBeenSet;

                    /**
                     * Risk type.
                     */
                    std::string m_vULType;
                    bool m_vULTypeHasBeenSet;

                    /**
                     * Affected versions
                     */
                    std::string m_impactVersion;
                    bool m_impactVersionHasBeenSet;

                    /**
                     * CVE number
Note: This field may return·null, indicating that no valid values can be obtained.
                     */
                    std::string m_cVE;
                    bool m_cVEHasBeenSet;

                    /**
                     * Vulnerability tag
                     */
                    std::vector<std::string> m_vULTag;
                    bool m_vULTagHasBeenSet;

                    /**
                     * Fix solution
Note: This field may return·null, indicating that no valid values can be obtained.
                     */
                    std::vector<std::string> m_fixMethod;
                    bool m_fixMethodHasBeenSet;

                    /**
                     * Disclosure time
Note: This field may return·null, indicating that no valid values can be obtained.
                     */
                    std::string m_releaseTime;
                    bool m_releaseTimeHasBeenSet;

                    /**
                     * Whether it's an emergency vulnerability. Values: `1` (emergency vulnerability); `0` (non-emergency vulnerability
Note: This field may return·null, indicating that no valid values can be obtained.
                     */
                    int64_t m_eMGCVulType;
                    bool m_eMGCVulTypeHasBeenSet;

                    /**
                     * Vulnerability description
Note: This field may return·null, indicating that no valid values can be obtained.
                     */
                    std::string m_vULDescribe;
                    bool m_vULDescribeHasBeenSet;

                    /**
                     * Affected components
Note: This field may return·null, indicating that no valid values can be obtained.
                     */
                    std::string m_impactComponent;
                    bool m_impactComponentHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_VULRISKADVANCECFGLIST_H_
