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
#include <tencentcloud/csip/v20221121/model/VPRExplainInfo.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * Information of fixed vulnerabilities
                */
                class VulFixedItem : public AbstractModel
                {
                public:
                    VulFixedItem();
                    ~VulFixedItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Vulnerability ID</p>
                     * @return VulId <p>Vulnerability ID</p>
                     * 
                     */
                    int64_t GetVulId() const;

                    /**
                     * 设置<p>Vulnerability ID</p>
                     * @param _vulId <p>Vulnerability ID</p>
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
                     * 获取<p>Vulnerability name</p>
                     * @return VulName <p>Vulnerability name</p>
                     * 
                     */
                    std::string GetVulName() const;

                    /**
                     * 设置<p>Vulnerability name</p>
                     * @param _vulName <p>Vulnerability name</p>
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
                     * 获取<p>Vulnerability level<br>Enumeration values:<br>LOW: Low risk<br>MEDIUM: Medium risk<br>HIGH: High risk<br>CRITICAL: Critical</p>
                     * @return Level <p>Vulnerability level<br>Enumeration values:<br>LOW: Low risk<br>MEDIUM: Medium risk<br>HIGH: High risk<br>CRITICAL: Critical</p>
                     * 
                     */
                    std::string GetLevel() const;

                    /**
                     * 设置<p>Vulnerability level<br>Enumeration values:<br>LOW: Low risk<br>MEDIUM: Medium risk<br>HIGH: High risk<br>CRITICAL: Critical</p>
                     * @param _level <p>Vulnerability level<br>Enumeration values:<br>LOW: Low risk<br>MEDIUM: Medium risk<br>HIGH: High risk<br>CRITICAL: Critical</p>
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
                     * 获取<p>VPR rating information (including rating result, description, and staged score), consistent with DescribeHostVulRiskList</p>
                     * @return VRPRatingInfo <p>VPR rating information (including rating result, description, and staged score), consistent with DescribeHostVulRiskList</p>
                     * 
                     */
                    VPRRatingInfo GetVRPRatingInfo() const;

                    /**
                     * 设置<p>VPR rating information (including rating result, description, and staged score), consistent with DescribeHostVulRiskList</p>
                     * @param _vRPRatingInfo <p>VPR rating information (including rating result, description, and staged score), consistent with DescribeHostVulRiskList</p>
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
                     * 获取<p>Vulnerability type<br>Enumeration values:<br>LINUX: Linux software vulnerability<br>WINDOWS: Windows system patch vulnerability<br>WEB_CMS: Web-CMS vulnerability<br>APPLICATION: Application vulnerability<br>EMERGENCY: Urgent vulnerability</p>
                     * @return VulCategory <p>Vulnerability type<br>Enumeration values:<br>LINUX: Linux software vulnerability<br>WINDOWS: Windows system patch vulnerability<br>WEB_CMS: Web-CMS vulnerability<br>APPLICATION: Application vulnerability<br>EMERGENCY: Urgent vulnerability</p>
                     * 
                     */
                    std::string GetVulCategory() const;

                    /**
                     * 设置<p>Vulnerability type<br>Enumeration values:<br>LINUX: Linux software vulnerability<br>WINDOWS: Windows system patch vulnerability<br>WEB_CMS: Web-CMS vulnerability<br>APPLICATION: Application vulnerability<br>EMERGENCY: Urgent vulnerability</p>
                     * @param _vulCategory <p>Vulnerability type<br>Enumeration values:<br>LINUX: Linux software vulnerability<br>WINDOWS: Windows system patch vulnerability<br>WEB_CMS: Web-CMS vulnerability<br>APPLICATION: Application vulnerability<br>EMERGENCY: Urgent vulnerability</p>
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
                     * 获取<p>CVE id</p>
                     * @return CveId <p>CVE id</p>
                     * 
                     */
                    std::string GetCveId() const;

                    /**
                     * 设置<p>CVE id</p>
                     * @param _cveId <p>CVE id</p>
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
                     * 获取<p>Repair host name</p>
                     * @return MachineName <p>Repair host name</p>
                     * 
                     */
                    std::string GetMachineName() const;

                    /**
                     * 设置<p>Repair host name</p>
                     * @param _machineName <p>Repair host name</p>
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
                     * 获取<p>Repair host instance ID</p>
                     * @return InstanceId <p>Repair host instance ID</p>
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置<p>Repair host instance ID</p>
                     * @param _instanceId <p>Repair host instance ID</p>
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
                     * 获取<p>Associated component &amp; number of paths</p>
                     * @return ComponentCount <p>Associated component &amp; number of paths</p>
                     * 
                     */
                    int64_t GetComponentCount() const;

                    /**
                     * 设置<p>Associated component &amp; number of paths</p>
                     * @param _componentCount <p>Associated component &amp; number of paths</p>
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
                     * 获取<p>Associated component &amp; path list</p>
                     * @return Components <p>Associated component &amp; path list</p>
                     * 
                     */
                    std::vector<std::string> GetComponents() const;

                    /**
                     * 设置<p>Associated component &amp; path list</p>
                     * @param _components <p>Associated component &amp; path list</p>
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
                     * 获取<p>Last repair time<br>Parameter format: YYYY-MM-DDTHH:mm:ssZ (ISO8601 format)</p>
                     * @return LatestFixTime <p>Last repair time<br>Parameter format: YYYY-MM-DDTHH:mm:ssZ (ISO8601 format)</p>
                     * 
                     */
                    std::string GetLatestFixTime() const;

                    /**
                     * 设置<p>Last repair time<br>Parameter format: YYYY-MM-DDTHH:mm:ssZ (ISO8601 format)</p>
                     * @param _latestFixTime <p>Last repair time<br>Parameter format: YYYY-MM-DDTHH:mm:ssZ (ISO8601 format)</p>
                     * 
                     */
                    void SetLatestFixTime(const std::string& _latestFixTime);

                    /**
                     * 判断参数 LatestFixTime 是否已赋值
                     * @return LatestFixTime 是否已赋值
                     * 
                     */
                    bool LatestFixTimeHasBeenSet() const;

                    /**
                     * 获取<p>VPR rating basis</p>
                     * @return VPRExplainInfo <p>VPR rating basis</p>
                     * 
                     */
                    VPRExplainInfo GetVPRExplainInfo() const;

                    /**
                     * 设置<p>VPR rating basis</p>
                     * @param _vPRExplainInfo <p>VPR rating basis</p>
                     * 
                     */
                    void SetVPRExplainInfo(const VPRExplainInfo& _vPRExplainInfo);

                    /**
                     * 判断参数 VPRExplainInfo 是否已赋值
                     * @return VPRExplainInfo 是否已赋值
                     * 
                     */
                    bool VPRExplainInfoHasBeenSet() const;

                private:

                    /**
                     * <p>Vulnerability ID</p>
                     */
                    int64_t m_vulId;
                    bool m_vulIdHasBeenSet;

                    /**
                     * <p>Vulnerability name</p>
                     */
                    std::string m_vulName;
                    bool m_vulNameHasBeenSet;

                    /**
                     * <p>Vulnerability level<br>Enumeration values:<br>LOW: Low risk<br>MEDIUM: Medium risk<br>HIGH: High risk<br>CRITICAL: Critical</p>
                     */
                    std::string m_level;
                    bool m_levelHasBeenSet;

                    /**
                     * <p>VPR rating information (including rating result, description, and staged score), consistent with DescribeHostVulRiskList</p>
                     */
                    VPRRatingInfo m_vRPRatingInfo;
                    bool m_vRPRatingInfoHasBeenSet;

                    /**
                     * <p>Vulnerability type<br>Enumeration values:<br>LINUX: Linux software vulnerability<br>WINDOWS: Windows system patch vulnerability<br>WEB_CMS: Web-CMS vulnerability<br>APPLICATION: Application vulnerability<br>EMERGENCY: Urgent vulnerability</p>
                     */
                    std::string m_vulCategory;
                    bool m_vulCategoryHasBeenSet;

                    /**
                     * <p>CVE id</p>
                     */
                    std::string m_cveId;
                    bool m_cveIdHasBeenSet;

                    /**
                     * <p>Repair host name</p>
                     */
                    std::string m_machineName;
                    bool m_machineNameHasBeenSet;

                    /**
                     * <p>Repair host instance ID</p>
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * <p>Associated component &amp; number of paths</p>
                     */
                    int64_t m_componentCount;
                    bool m_componentCountHasBeenSet;

                    /**
                     * <p>Associated component &amp; path list</p>
                     */
                    std::vector<std::string> m_components;
                    bool m_componentsHasBeenSet;

                    /**
                     * <p>Last repair time<br>Parameter format: YYYY-MM-DDTHH:mm:ssZ (ISO8601 format)</p>
                     */
                    std::string m_latestFixTime;
                    bool m_latestFixTimeHasBeenSet;

                    /**
                     * <p>VPR rating basis</p>
                     */
                    VPRExplainInfo m_vPRExplainInfo;
                    bool m_vPRExplainInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_VULFIXEDITEM_H_
