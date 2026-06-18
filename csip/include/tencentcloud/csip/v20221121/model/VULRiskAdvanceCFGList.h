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
#include <tencentcloud/csip/v20221121/model/ServiceSupport.h>


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
                     * 获取Risk level, low - low risk, high - high risk, middle - medium risk, info - notification, extreme - critical.
                     * @return RiskLevel Risk level, low - low risk, high - high risk, middle - medium risk, info - notification, extreme - critical.
                     * 
                     */
                    std::string GetRiskLevel() const;

                    /**
                     * 设置Risk level, low - low risk, high - high risk, middle - medium risk, info - notification, extreme - critical.
                     * @param _riskLevel Risk level, low - low risk, high - high risk, middle - medium risk, info - notification, extreme - critical.
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
                     * 获取Enable/Disable. 1-Enable; 0-Disable.
                     * @return Enable Enable/Disable. 1-Enable; 0-Disable.
                     * 
                     */
                    int64_t GetEnable() const;

                    /**
                     * 设置Enable/Disable. 1-Enable; 0-Disable.
                     * @param _enable Enable/Disable. 1-Enable; 0-Disable.
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
                     * 获取CVE
                     * @return CVE CVE
                     * 
                     */
                    std::string GetCVE() const;

                    /**
                     * 设置CVE
                     * @param _cVE CVE
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
                     * 获取Repair method
                     * @return FixMethod Repair method
                     * 
                     */
                    std::vector<std::string> GetFixMethod() const;

                    /**
                     * 设置Repair method
                     * @param _fixMethod Repair method
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
                     * @return ReleaseTime Disclosure time
                     * 
                     */
                    std::string GetReleaseTime() const;

                    /**
                     * 设置Disclosure time
                     * @param _releaseTime Disclosure time
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
                     * 获取Emergency Vulnerability Type. 1-Emergency Vulnerability; 0-Non-emergency Vulnerability.
                     * @return EMGCVulType Emergency Vulnerability Type. 1-Emergency Vulnerability; 0-Non-emergency Vulnerability.
                     * 
                     */
                    int64_t GetEMGCVulType() const;

                    /**
                     * 设置Emergency Vulnerability Type. 1-Emergency Vulnerability; 0-Non-emergency Vulnerability.
                     * @param _eMGCVulType Emergency Vulnerability Type. 1-Emergency Vulnerability; 0-Non-emergency Vulnerability.
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
                     * @return VULDescribe Vulnerability description
                     * 
                     */
                    std::string GetVULDescribe() const;

                    /**
                     * 设置Vulnerability description
                     * @param _vULDescribe Vulnerability description
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
                     * 获取Affected component
                     * @return ImpactComponent Affected component
                     * 
                     */
                    std::string GetImpactComponent() const;

                    /**
                     * 设置Affected component
                     * @param _impactComponent Affected component
                     * 
                     */
                    void SetImpactComponent(const std::string& _impactComponent);

                    /**
                     * 判断参数 ImpactComponent 是否已赋值
                     * @return ImpactComponent 是否已赋值
                     * 
                     */
                    bool ImpactComponentHasBeenSet() const;

                    /**
                     * 获取Vulnerability Payload
                     * @return Payload Vulnerability Payload
                     * 
                     */
                    std::string GetPayload() const;

                    /**
                     * 设置Vulnerability Payload
                     * @param _payload Vulnerability Payload
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
                     * 获取Technology reference
                     * @return References Technology reference
                     * 
                     */
                    std::string GetReferences() const;

                    /**
                     * 设置Technology reference
                     * @param _references Technology reference
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
                     * 获取CVSS Score
                     * @return CVSS CVSS Score
                     * 
                     */
                    std::string GetCVSS() const;

                    /**
                     * 设置CVSS Score
                     * @param _cVSS CVSS Score
                     * 
                     */
                    void SetCVSS(const std::string& _cVSS);

                    /**
                     * 判断参数 CVSS 是否已赋值
                     * @return CVSS 是否已赋值
                     * 
                     */
                    bool CVSSHasBeenSet() const;

                    /**
                     * 获取Attack intensity
                     * @return AttackHeat Attack intensity
                     * 
                     */
                    std::string GetAttackHeat() const;

                    /**
                     * 设置Attack intensity
                     * @param _attackHeat Attack intensity
                     * 
                     */
                    void SetAttackHeat(const std::string& _attackHeat);

                    /**
                     * 判断参数 AttackHeat 是否已赋值
                     * @return AttackHeat 是否已赋值
                     * 
                     */
                    bool AttackHeatHasBeenSet() const;

                    /**
                     * 获取Security Product Support Status
                     * @return ServiceSupport Security Product Support Status
                     * 
                     */
                    std::vector<ServiceSupport> GetServiceSupport() const;

                    /**
                     * 设置Security Product Support Status
                     * @param _serviceSupport Security Product Support Status
                     * 
                     */
                    void SetServiceSupport(const std::vector<ServiceSupport>& _serviceSupport);

                    /**
                     * 判断参数 ServiceSupport 是否已赋值
                     * @return ServiceSupport 是否已赋值
                     * 
                     */
                    bool ServiceSupportHasBeenSet() const;

                    /**
                     * 获取Latest detection time
                     * @return RecentScanTime Latest detection time
                     * 
                     */
                    std::string GetRecentScanTime() const;

                    /**
                     * 设置Latest detection time
                     * @param _recentScanTime Latest detection time
                     * 
                     */
                    void SetRecentScanTime(const std::string& _recentScanTime);

                    /**
                     * 判断参数 RecentScanTime 是否已赋值
                     * @return RecentScanTime 是否已赋值
                     * 
                     */
                    bool RecentScanTimeHasBeenSet() const;

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
                     * Risk level, low - low risk, high - high risk, middle - medium risk, info - notification, extreme - critical.
                     */
                    std::string m_riskLevel;
                    bool m_riskLevelHasBeenSet;

                    /**
                     * Source of the check task
                     */
                    std::string m_checkFrom;
                    bool m_checkFromHasBeenSet;

                    /**
                     * Enable/Disable. 1-Enable; 0-Disable.
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
                     * CVE
                     */
                    std::string m_cVE;
                    bool m_cVEHasBeenSet;

                    /**
                     * Vulnerability tag
                     */
                    std::vector<std::string> m_vULTag;
                    bool m_vULTagHasBeenSet;

                    /**
                     * Repair method
                     */
                    std::vector<std::string> m_fixMethod;
                    bool m_fixMethodHasBeenSet;

                    /**
                     * Disclosure time
                     */
                    std::string m_releaseTime;
                    bool m_releaseTimeHasBeenSet;

                    /**
                     * Emergency Vulnerability Type. 1-Emergency Vulnerability; 0-Non-emergency Vulnerability.
                     */
                    int64_t m_eMGCVulType;
                    bool m_eMGCVulTypeHasBeenSet;

                    /**
                     * Vulnerability description
                     */
                    std::string m_vULDescribe;
                    bool m_vULDescribeHasBeenSet;

                    /**
                     * Affected component
                     */
                    std::string m_impactComponent;
                    bool m_impactComponentHasBeenSet;

                    /**
                     * Vulnerability Payload
                     */
                    std::string m_payload;
                    bool m_payloadHasBeenSet;

                    /**
                     * Technology reference
                     */
                    std::string m_references;
                    bool m_referencesHasBeenSet;

                    /**
                     * CVSS Score
                     */
                    std::string m_cVSS;
                    bool m_cVSSHasBeenSet;

                    /**
                     * Attack intensity
                     */
                    std::string m_attackHeat;
                    bool m_attackHeatHasBeenSet;

                    /**
                     * Security Product Support Status
                     */
                    std::vector<ServiceSupport> m_serviceSupport;
                    bool m_serviceSupportHasBeenSet;

                    /**
                     * Latest detection time
                     */
                    std::string m_recentScanTime;
                    bool m_recentScanTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_VULRISKADVANCECFGLIST_H_
