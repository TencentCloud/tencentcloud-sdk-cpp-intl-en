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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBEVULINFOCVSSRESPONSE_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBEVULINFOCVSSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cwp
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * DescribeVulInfoCvss response structure.
                */
                class DescribeVulInfoCvssResponse : public AbstractModel
                {
                public:
                    DescribeVulInfoCvssResponse();
                    ~DescribeVulInfoCvssResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Vulnerability ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return VulId Vulnerability ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetVulId() const;

                    /**
                     * 判断参数 VulId 是否已赋值
                     * @return VulId 是否已赋值
                     * 
                     */
                    bool VulIdHasBeenSet() const;

                    /**
                     * 获取Vulnerability name
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return VulName Vulnerability name
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetVulName() const;

                    /**
                     * 判断参数 VulName 是否已赋值
                     * @return VulName 是否已赋值
                     * 
                     */
                    bool VulNameHasBeenSet() const;

                    /**
                     * 获取Hazard level: 1-Low-risk; 2-Medium-risk; 3-High-risk; 4-Critical
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return VulLevel Hazard level: 1-Low-risk; 2-Medium-risk; 3-High-risk; 4-Critical
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetVulLevel() const;

                    /**
                     * 判断参数 VulLevel 是否已赋值
                     * @return VulLevel 是否已赋值
                     * 
                     */
                    bool VulLevelHasBeenSet() const;

                    /**
                     * 获取Vulnerability Classification: 1: Web-CMS Vulnerability 2: Application Vulnerabilities 4: Linux Software Vulnerabilities 5: Windows System Vulnerabilities
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return VulType Vulnerability Classification: 1: Web-CMS Vulnerability 2: Application Vulnerabilities 4: Linux Software Vulnerabilities 5: Windows System Vulnerabilities
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetVulType() const;

                    /**
                     * 判断参数 VulType 是否已赋值
                     * @return VulType 是否已赋值
                     * 
                     */
                    bool VulTypeHasBeenSet() const;

                    /**
                     * 获取Vulnerability Description Information
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Description Vulnerability Description Information
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                    /**
                     * 获取Fixing solution
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return RepairPlan Fixing solution
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetRepairPlan() const;

                    /**
                     * 判断参数 RepairPlan 是否已赋值
                     * @return RepairPlan 是否已赋值
                     * 
                     */
                    bool RepairPlanHasBeenSet() const;

                    /**
                     * 获取Vulnerability CVE ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return CveId Vulnerability CVE ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetCveId() const;

                    /**
                     * 判断参数 CveId 是否已赋值
                     * @return CveId 是否已赋值
                     * 
                     */
                    bool CveIdHasBeenSet() const;

                    /**
                     * 获取Reference link
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Reference Reference link
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetReference() const;

                    /**
                     * 判断参数 Reference 是否已赋值
                     * @return Reference 是否已赋值
                     * 
                     */
                    bool ReferenceHasBeenSet() const;

                    /**
                     * 获取CVSS Information
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return CVSS CVSS Information
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetCVSS() const;

                    /**
                     * 判断参数 CVSS 是否已赋值
                     * @return CVSS 是否已赋值
                     * 
                     */
                    bool CVSSHasBeenSet() const;

                    /**
                     * 获取Release date
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return PublicDate Release date
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetPublicDate() const;

                    /**
                     * 判断参数 PublicDate 是否已赋值
                     * @return PublicDate 是否已赋值
                     * 
                     */
                    bool PublicDateHasBeenSet() const;

                    /**
                     * 获取CVSS Score
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return CvssScore CVSS Score
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetCvssScore() const;

                    /**
                     * 判断参数 CvssScore 是否已赋值
                     * @return CvssScore 是否已赋值
                     * 
                     */
                    bool CvssScoreHasBeenSet() const;

                    /**
                     * 获取CVSS Details
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return CveInfo CVSS Details
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetCveInfo() const;

                    /**
                     * 判断参数 CveInfo 是否已赋值
                     * @return CveInfo 是否已赋值
                     * 
                     */
                    bool CveInfoHasBeenSet() const;

                    /**
                     * 获取CVSS score, floating point type
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return CvssScoreFloat CVSS score, floating point type
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    double GetCvssScoreFloat() const;

                    /**
                     * 判断参数 CvssScoreFloat 是否已赋值
                     * @return CvssScoreFloat 是否已赋值
                     * 
                     */
                    bool CvssScoreFloatHasBeenSet() const;

                    /**
                     * 获取Vulnerability Tags, Separated by Multiple Commas
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Labels Vulnerability Tags, Separated by Multiple Commas
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetLabels() const;

                    /**
                     * 判断参数 Labels 是否已赋值
                     * @return Labels 是否已赋值
                     * 
                     */
                    bool LabelsHasBeenSet() const;

                    /**
                     * 获取Number of Attacks Defended
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return DefenseAttackCount Number of Attacks Defended
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetDefenseAttackCount() const;

                    /**
                     * 判断参数 DefenseAttackCount 是否已赋值
                     * @return DefenseAttackCount 是否已赋值
                     * 
                     */
                    bool DefenseAttackCountHasBeenSet() const;

                    /**
                     * 获取Total Number of Successful Network Repairs. Returns 0 by default for unsupported auto-repair vulnerabilities.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return SuccessFixCount Total Number of Successful Network Repairs. Returns 0 by default for unsupported auto-repair vulnerabilities.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetSuccessFixCount() const;

                    /**
                     * 判断参数 SuccessFixCount 是否已赋值
                     * @return SuccessFixCount 是否已赋值
                     * 
                     */
                    bool SuccessFixCountHasBeenSet() const;

                    /**
                     * 获取Repair support: 0 - Neither Windows nor Linux supports for repair; 1 - Both Windows and Linux support for repair; 2 - Only Linux supports for repair; 3 - Only Windows supports for repair.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return FixSwitch Repair support: 0 - Neither Windows nor Linux supports for repair; 1 - Both Windows and Linux support for repair; 2 - Only Linux supports for repair; 3 - Only Windows supports for repair.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetFixSwitch() const;

                    /**
                     * 判断参数 FixSwitch 是否已赋值
                     * @return FixSwitch 是否已赋值
                     * 
                     */
                    bool FixSwitchHasBeenSet() const;

                private:

                    /**
                     * Vulnerability ID
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_vulId;
                    bool m_vulIdHasBeenSet;

                    /**
                     * Vulnerability name
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_vulName;
                    bool m_vulNameHasBeenSet;

                    /**
                     * Hazard level: 1-Low-risk; 2-Medium-risk; 3-High-risk; 4-Critical
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_vulLevel;
                    bool m_vulLevelHasBeenSet;

                    /**
                     * Vulnerability Classification: 1: Web-CMS Vulnerability 2: Application Vulnerabilities 4: Linux Software Vulnerabilities 5: Windows System Vulnerabilities
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_vulType;
                    bool m_vulTypeHasBeenSet;

                    /**
                     * Vulnerability Description Information
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * Fixing solution
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_repairPlan;
                    bool m_repairPlanHasBeenSet;

                    /**
                     * Vulnerability CVE ID
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_cveId;
                    bool m_cveIdHasBeenSet;

                    /**
                     * Reference link
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_reference;
                    bool m_referenceHasBeenSet;

                    /**
                     * CVSS Information
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_cVSS;
                    bool m_cVSSHasBeenSet;

                    /**
                     * Release date
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_publicDate;
                    bool m_publicDateHasBeenSet;

                    /**
                     * CVSS Score
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_cvssScore;
                    bool m_cvssScoreHasBeenSet;

                    /**
                     * CVSS Details
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_cveInfo;
                    bool m_cveInfoHasBeenSet;

                    /**
                     * CVSS score, floating point type
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    double m_cvssScoreFloat;
                    bool m_cvssScoreFloatHasBeenSet;

                    /**
                     * Vulnerability Tags, Separated by Multiple Commas
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_labels;
                    bool m_labelsHasBeenSet;

                    /**
                     * Number of Attacks Defended
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_defenseAttackCount;
                    bool m_defenseAttackCountHasBeenSet;

                    /**
                     * Total Number of Successful Network Repairs. Returns 0 by default for unsupported auto-repair vulnerabilities.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_successFixCount;
                    bool m_successFixCountHasBeenSet;

                    /**
                     * Repair support: 0 - Neither Windows nor Linux supports for repair; 1 - Both Windows and Linux support for repair; 2 - Only Linux supports for repair; 3 - Only Windows supports for repair.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_fixSwitch;
                    bool m_fixSwitchHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBEVULINFOCVSSRESPONSE_H_
