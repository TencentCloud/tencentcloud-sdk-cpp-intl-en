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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_EMERGENCYVUL_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_EMERGENCYVUL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                * Emergency vulnerability information
                */
                class EmergencyVul : public AbstractModel
                {
                public:
                    EmergencyVul();
                    ~EmergencyVul() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Vulnerability ID
                     * @return VulId Vulnerability ID
                     * 
                     */
                    uint64_t GetVulId() const;

                    /**
                     * 设置Vulnerability ID
                     * @param _vulId Vulnerability ID
                     * 
                     */
                    void SetVulId(const uint64_t& _vulId);

                    /**
                     * 判断参数 VulId 是否已赋值
                     * @return VulId 是否已赋值
                     * 
                     */
                    bool VulIdHasBeenSet() const;

                    /**
                     * 获取Vulnerability level
                     * @return Level Vulnerability level
                     * 
                     */
                    uint64_t GetLevel() const;

                    /**
                     * 设置Vulnerability level
                     * @param _level Vulnerability level
                     * 
                     */
                    void SetLevel(const uint64_t& _level);

                    /**
                     * 判断参数 Level 是否已赋值
                     * @return Level 是否已赋值
                     * 
                     */
                    bool LevelHasBeenSet() const;

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
                     * 获取Release date
                     * @return PublishDate Release date
                     * 
                     */
                    std::string GetPublishDate() const;

                    /**
                     * 设置Release date
                     * @param _publishDate Release date
                     * 
                     */
                    void SetPublishDate(const std::string& _publishDate);

                    /**
                     * 判断参数 PublishDate 是否已赋值
                     * @return PublishDate 是否已赋值
                     * 
                     */
                    bool PublishDateHasBeenSet() const;

                    /**
                     * 获取Vulnerability category
                     * @return Category Vulnerability category
                     * 
                     */
                    uint64_t GetCategory() const;

                    /**
                     * 设置Vulnerability category
                     * @param _category Vulnerability category
                     * 
                     */
                    void SetCategory(const uint64_t& _category);

                    /**
                     * 判断参数 Category 是否已赋值
                     * @return Category 是否已赋值
                     * 
                     */
                    bool CategoryHasBeenSet() const;

                    /**
                     * 获取Vulnerability status. 0: not detected; 1: at risk; 2: not at risk; 3: show progress during check
                     * @return Status Vulnerability status. 0: not detected; 1: at risk; 2: not at risk; 3: show progress during check
                     * 
                     */
                    uint64_t GetStatus() const;

                    /**
                     * 设置Vulnerability status. 0: not detected; 1: at risk; 2: not at risk; 3: show progress during check
                     * @param _status Vulnerability status. 0: not detected; 1: at risk; 2: not at risk; 3: show progress during check
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
                     * 获取Last scan time
                     * @return LastScanTime Last scan time
                     * 
                     */
                    std::string GetLastScanTime() const;

                    /**
                     * 设置Last scan time
                     * @param _lastScanTime Last scan time
                     * 
                     */
                    void SetLastScanTime(const std::string& _lastScanTime);

                    /**
                     * 判断参数 LastScanTime 是否已赋值
                     * @return LastScanTime 是否已赋值
                     * 
                     */
                    bool LastScanTimeHasBeenSet() const;

                    /**
                     * 获取Scan progress
                     * @return Progress Scan progress
                     * 
                     */
                    uint64_t GetProgress() const;

                    /**
                     * 设置Scan progress
                     * @param _progress Scan progress
                     * 
                     */
                    void SetProgress(const uint64_t& _progress);

                    /**
                     * 判断参数 Progress 是否已赋值
                     * @return Progress 是否已赋值
                     * 
                     */
                    bool ProgressHasBeenSet() const;

                    /**
                     * 获取CVE ID
                     * @return CveId CVE ID
                     * 
                     */
                    std::string GetCveId() const;

                    /**
                     * 设置CVE ID
                     * @param _cveId CVE ID
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
                     * 获取CVSS score
                     * @return CvssScore CVSS score
                     * 
                     */
                    double GetCvssScore() const;

                    /**
                     * 设置CVSS score
                     * @param _cvssScore CVSS score
                     * 
                     */
                    void SetCvssScore(const double& _cvssScore);

                    /**
                     * 判断参数 CvssScore 是否已赋值
                     * @return CvssScore 是否已赋值
                     * 
                     */
                    bool CvssScoreHasBeenSet() const;

                    /**
                     * 获取Vulnerability Tags, Separated by Multiple Commas
                     * @return Labels Vulnerability Tags, Separated by Multiple Commas
                     * 
                     */
                    std::string GetLabels() const;

                    /**
                     * 设置Vulnerability Tags, Separated by Multiple Commas
                     * @param _labels Vulnerability Tags, Separated by Multiple Commas
                     * 
                     */
                    void SetLabels(const std::string& _labels);

                    /**
                     * 判断参数 Labels 是否已赋值
                     * @return Labels 是否已赋值
                     * 
                     */
                    bool LabelsHasBeenSet() const;

                    /**
                     * 获取Number of affected machines
                     * @return HostCount Number of affected machines
                     * 
                     */
                    uint64_t GetHostCount() const;

                    /**
                     * 设置Number of affected machines
                     * @param _hostCount Number of affected machines
                     * 
                     */
                    void SetHostCount(const uint64_t& _hostCount);

                    /**
                     * 判断参数 HostCount 是否已赋值
                     * @return HostCount 是否已赋值
                     * 
                     */
                    bool HostCountHasBeenSet() const;

                    /**
                     * 获取Support defense: 0-no support 1-support
                     * @return IsSupportDefense Support defense: 0-no support 1-support
                     * 
                     */
                    uint64_t GetIsSupportDefense() const;

                    /**
                     * 设置Support defense: 0-no support 1-support
                     * @param _isSupportDefense Support defense: 0-no support 1-support
                     * 
                     */
                    void SetIsSupportDefense(const uint64_t& _isSupportDefense);

                    /**
                     * 判断参数 IsSupportDefense 是否已赋值
                     * @return IsSupportDefense 是否已赋值
                     * 
                     */
                    bool IsSupportDefenseHasBeenSet() const;

                    /**
                     * 获取Number of Attacks Defended
                     * @return DefenseAttackCount Number of Attacks Defended
                     * 
                     */
                    uint64_t GetDefenseAttackCount() const;

                    /**
                     * 设置Number of Attacks Defended
                     * @param _defenseAttackCount Number of Attacks Defended
                     * 
                     */
                    void SetDefenseAttackCount(const uint64_t& _defenseAttackCount);

                    /**
                     * 判断参数 DefenseAttackCount 是否已赋值
                     * @return DefenseAttackCount 是否已赋值
                     * 
                     */
                    bool DefenseAttackCountHasBeenSet() const;

                    /**
                     * 获取Detection rule. 0: version comparison, 1: POC verification.
                     * @return Method Detection rule. 0: version comparison, 1: POC verification.
                     * 
                     */
                    uint64_t GetMethod() const;

                    /**
                     * 设置Detection rule. 0: version comparison, 1: POC verification.
                     * @param _method Detection rule. 0: version comparison, 1: POC verification.
                     * 
                     */
                    void SetMethod(const uint64_t& _method);

                    /**
                     * 判断参数 Method 是否已赋值
                     * @return Method 是否已赋值
                     * 
                     */
                    bool MethodHasBeenSet() const;

                    /**
                     * 获取Attack intensity level.
                     * @return AttackLevel Attack intensity level.
                     * 
                     */
                    uint64_t GetAttackLevel() const;

                    /**
                     * 设置Attack intensity level.
                     * @param _attackLevel Attack intensity level.
                     * 
                     */
                    void SetAttackLevel(const uint64_t& _attackLevel);

                    /**
                     * 判断参数 AttackLevel 是否已赋值
                     * @return AttackLevel 是否已赋值
                     * 
                     */
                    bool AttackLevelHasBeenSet() const;

                    /**
                     * 获取Whether vulnerable hosts are enabled with vulnerability defense.
                     * @return DefenseState Whether vulnerable hosts are enabled with vulnerability defense.
                     * 
                     */
                    bool GetDefenseState() const;

                    /**
                     * 设置Whether vulnerable hosts are enabled with vulnerability defense.
                     * @param _defenseState Whether vulnerable hosts are enabled with vulnerability defense.
                     * 
                     */
                    void SetDefenseState(const bool& _defenseState);

                    /**
                     * 判断参数 DefenseState 是否已赋值
                     * @return DefenseState 是否已赋值
                     * 
                     */
                    bool DefenseStateHasBeenSet() const;

                private:

                    /**
                     * Vulnerability ID
                     */
                    uint64_t m_vulId;
                    bool m_vulIdHasBeenSet;

                    /**
                     * Vulnerability level
                     */
                    uint64_t m_level;
                    bool m_levelHasBeenSet;

                    /**
                     * Vulnerability name
                     */
                    std::string m_vulName;
                    bool m_vulNameHasBeenSet;

                    /**
                     * Release date
                     */
                    std::string m_publishDate;
                    bool m_publishDateHasBeenSet;

                    /**
                     * Vulnerability category
                     */
                    uint64_t m_category;
                    bool m_categoryHasBeenSet;

                    /**
                     * Vulnerability status. 0: not detected; 1: at risk; 2: not at risk; 3: show progress during check
                     */
                    uint64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Last scan time
                     */
                    std::string m_lastScanTime;
                    bool m_lastScanTimeHasBeenSet;

                    /**
                     * Scan progress
                     */
                    uint64_t m_progress;
                    bool m_progressHasBeenSet;

                    /**
                     * CVE ID
                     */
                    std::string m_cveId;
                    bool m_cveIdHasBeenSet;

                    /**
                     * CVSS score
                     */
                    double m_cvssScore;
                    bool m_cvssScoreHasBeenSet;

                    /**
                     * Vulnerability Tags, Separated by Multiple Commas
                     */
                    std::string m_labels;
                    bool m_labelsHasBeenSet;

                    /**
                     * Number of affected machines
                     */
                    uint64_t m_hostCount;
                    bool m_hostCountHasBeenSet;

                    /**
                     * Support defense: 0-no support 1-support
                     */
                    uint64_t m_isSupportDefense;
                    bool m_isSupportDefenseHasBeenSet;

                    /**
                     * Number of Attacks Defended
                     */
                    uint64_t m_defenseAttackCount;
                    bool m_defenseAttackCountHasBeenSet;

                    /**
                     * Detection rule. 0: version comparison, 1: POC verification.
                     */
                    uint64_t m_method;
                    bool m_methodHasBeenSet;

                    /**
                     * Attack intensity level.
                     */
                    uint64_t m_attackLevel;
                    bool m_attackLevelHasBeenSet;

                    /**
                     * Whether vulnerable hosts are enabled with vulnerability defense.
                     */
                    bool m_defenseState;
                    bool m_defenseStateHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_EMERGENCYVUL_H_
