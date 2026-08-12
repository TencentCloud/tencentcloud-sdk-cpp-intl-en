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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_VULFIXEDITEM_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_VULFIXEDITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/csip/v20221121/model/VPRRatingInfo.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * Fixed vulnerability information
                */
                class VulFixedItem : public AbstractModel
                {
                public:
                    VulFixedItem();
                    ~VulFixedItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Vulnerability ID
                     * @return VulId Vulnerability ID
                     * 
                     */
                    int64_t GetVulId() const;

                    /**
                     * 设置Vulnerability ID
                     * @param _vulId Vulnerability ID
                     * 
                     */
                    void SetVulId(const int64_t& _vulId);

                    /**
                     * 判断参数 VulId 是否已赋值
                     * @return VulId 是否已赋值
                     * 
                     */
                    bool VulIdHasBeenSet() const;

                    /**
                     * 获取Vulnerability name
                     * @return VulName Vulnerability name
                     * 
                     */
                    std::string GetVulName() const;

                    /**
                     * 设置Vulnerability name
                     * @param _vulName Vulnerability name
                     * 
                     */
                    void SetVulName(const std::string& _vulName);

                    /**
                     * 判断参数 VulName 是否已赋值
                     * @return VulName 是否已赋值
                     * 
                     */
                    bool VulNameHasBeenSet() const;

                    /**
                     * 获取Vulnerability level
Enumeration values:
LOW: low-risk
MEDIUM: Medium risk
HIGH: High risk
CRITICAL
                     * @return Level Vulnerability level
Enumeration values:
LOW: low-risk
MEDIUM: Medium risk
HIGH: High risk
CRITICAL
                     * 
                     */
                    std::string GetLevel() const;

                    /**
                     * 设置Vulnerability level
Enumeration values:
LOW: low-risk
MEDIUM: Medium risk
HIGH: High risk
CRITICAL
                     * @param _level Vulnerability level
Enumeration values:
LOW: low-risk
MEDIUM: Medium risk
HIGH: High risk
CRITICAL
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
                     * 获取VPR rating information (including rating result, description, and phased score), consistent with DescribeHostVulRiskList
                     * @return VRPRatingInfo VPR rating information (including rating result, description, and phased score), consistent with DescribeHostVulRiskList
                     * 
                     */
                    VPRRatingInfo GetVRPRatingInfo() const;

                    /**
                     * 设置VPR rating information (including rating result, description, and phased score), consistent with DescribeHostVulRiskList
                     * @param _vRPRatingInfo VPR rating information (including rating result, description, and phased score), consistent with DescribeHostVulRiskList
                     * 
                     */
                    void SetVRPRatingInfo(const VPRRatingInfo& _vRPRatingInfo);

                    /**
                     * 判断参数 VRPRatingInfo 是否已赋值
                     * @return VRPRatingInfo 是否已赋值
                     * 
                     */
                    bool VRPRatingInfoHasBeenSet() const;

                    /**
                     * 获取Vulnerability Type
Enumeration values:
LINUX: Linux software vulnerability
WINDOWS: Windows system patch vulnerability
WEB_CMS: Web-CMS vulnerabilities
APPLICATION: Application vulnerability
EMERGENCY: Urgent vulnerability
                     * @return VulCategory Vulnerability Type
Enumeration values:
LINUX: Linux software vulnerability
WINDOWS: Windows system patch vulnerability
WEB_CMS: Web-CMS vulnerabilities
APPLICATION: Application vulnerability
EMERGENCY: Urgent vulnerability
                     * 
                     */
                    std::string GetVulCategory() const;

                    /**
                     * 设置Vulnerability Type
Enumeration values:
LINUX: Linux software vulnerability
WINDOWS: Windows system patch vulnerability
WEB_CMS: Web-CMS vulnerabilities
APPLICATION: Application vulnerability
EMERGENCY: Urgent vulnerability
                     * @param _vulCategory Vulnerability Type
Enumeration values:
LINUX: Linux software vulnerability
WINDOWS: Windows system patch vulnerability
WEB_CMS: Web-CMS vulnerabilities
APPLICATION: Application vulnerability
EMERGENCY: Urgent vulnerability
                     * 
                     */
                    void SetVulCategory(const std::string& _vulCategory);

                    /**
                     * 判断参数 VulCategory 是否已赋值
                     * @return VulCategory 是否已赋值
                     * 
                     */
                    bool VulCategoryHasBeenSet() const;

                    /**
                     * 获取CVE id
                     * @return CveId CVE id
                     * 
                     */
                    std::string GetCveId() const;

                    /**
                     * 设置CVE id
                     * @param _cveId CVE id
                     * 
                     */
                    void SetCveId(const std::string& _cveId);

                    /**
                     * 判断参数 CveId 是否已赋值
                     * @return CveId 是否已赋值
                     * 
                     */
                    bool CveIdHasBeenSet() const;

                    /**
                     * 获取Repair the host name
                     * @return MachineName Repair the host name
                     * 
                     */
                    std::string GetMachineName() const;

                    /**
                     * 设置Repair the host name
                     * @param _machineName Repair the host name
                     * 
                     */
                    void SetMachineName(const std::string& _machineName);

                    /**
                     * 判断参数 MachineName 是否已赋值
                     * @return MachineName 是否已赋值
                     * 
                     */
                    bool MachineNameHasBeenSet() const;

                    /**
                     * 获取Repair the host instance ID
                     * @return InstanceId Repair the host instance ID
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置Repair the host instance ID
                     * @param _instanceId Repair the host instance ID
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
                     * 获取Associated component & number of paths
                     * @return ComponentCount Associated component & number of paths
                     * 
                     */
                    int64_t GetComponentCount() const;

                    /**
                     * 设置Associated component & number of paths
                     * @param _componentCount Associated component & number of paths
                     * 
                     */
                    void SetComponentCount(const int64_t& _componentCount);

                    /**
                     * 判断参数 ComponentCount 是否已赋值
                     * @return ComponentCount 是否已赋值
                     * 
                     */
                    bool ComponentCountHasBeenSet() const;

                    /**
                     * 获取Associated component & path list
                     * @return Components Associated component & path list
                     * 
                     */
                    std::vector<std::string> GetComponents() const;

                    /**
                     * 设置Associated component & path list
                     * @param _components Associated component & path list
                     * 
                     */
                    void SetComponents(const std::vector<std::string>& _components);

                    /**
                     * 判断参数 Components 是否已赋值
                     * @return Components 是否已赋值
                     * 
                     */
                    bool ComponentsHasBeenSet() const;

                    /**
                     * 获取Last repair time
Parameter format: YYYY-MM-DDTHH:mm:ssZ (ISO8601 format).
                     * @return LatestFixTime Last repair time
Parameter format: YYYY-MM-DDTHH:mm:ssZ (ISO8601 format).
                     * 
                     */
                    std::string GetLatestFixTime() const;

                    /**
                     * 设置Last repair time
Parameter format: YYYY-MM-DDTHH:mm:ssZ (ISO8601 format).
                     * @param _latestFixTime Last repair time
Parameter format: YYYY-MM-DDTHH:mm:ssZ (ISO8601 format).
                     * 
                     */
                    void SetLatestFixTime(const std::string& _latestFixTime);

                    /**
                     * 判断参数 LatestFixTime 是否已赋值
                     * @return LatestFixTime 是否已赋值
                     * 
                     */
                    bool LatestFixTimeHasBeenSet() const;

                private:

                    /**
                     * Vulnerability ID
                     */
                    int64_t m_vulId;
                    bool m_vulIdHasBeenSet;

                    /**
                     * Vulnerability name
                     */
                    std::string m_vulName;
                    bool m_vulNameHasBeenSet;

                    /**
                     * Vulnerability level
Enumeration values:
LOW: low-risk
MEDIUM: Medium risk
HIGH: High risk
CRITICAL
                     */
                    std::string m_level;
                    bool m_levelHasBeenSet;

                    /**
                     * VPR rating information (including rating result, description, and phased score), consistent with DescribeHostVulRiskList
                     */
                    VPRRatingInfo m_vRPRatingInfo;
                    bool m_vRPRatingInfoHasBeenSet;

                    /**
                     * Vulnerability Type
Enumeration values:
LINUX: Linux software vulnerability
WINDOWS: Windows system patch vulnerability
WEB_CMS: Web-CMS vulnerabilities
APPLICATION: Application vulnerability
EMERGENCY: Urgent vulnerability
                     */
                    std::string m_vulCategory;
                    bool m_vulCategoryHasBeenSet;

                    /**
                     * CVE id
                     */
                    std::string m_cveId;
                    bool m_cveIdHasBeenSet;

                    /**
                     * Repair the host name
                     */
                    std::string m_machineName;
                    bool m_machineNameHasBeenSet;

                    /**
                     * Repair the host instance ID
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * Associated component & number of paths
                     */
                    int64_t m_componentCount;
                    bool m_componentCountHasBeenSet;

                    /**
                     * Associated component & path list
                     */
                    std::vector<std::string> m_components;
                    bool m_componentsHasBeenSet;

                    /**
                     * Last repair time
Parameter format: YYYY-MM-DDTHH:mm:ssZ (ISO8601 format).
                     */
                    std::string m_latestFixTime;
                    bool m_latestFixTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_VULFIXEDITEM_H_
