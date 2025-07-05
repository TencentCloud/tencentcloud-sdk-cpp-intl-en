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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_VULINFOLIST_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_VULINFOLIST_H_

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
                * Vulnerability list on the vulnerability management page of CWPP
                */
                class VulInfoList : public AbstractModel
                {
                public:
                    VulInfoList();
                    ~VulInfoList() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取IDs of events corresponding to a vulnerability, separated by commas (,)
                     * @return Ids IDs of events corresponding to a vulnerability, separated by commas (,)
                     * 
                     */
                    std::string GetIds() const;

                    /**
                     * 设置IDs of events corresponding to a vulnerability, separated by commas (,)
                     * @param _ids IDs of events corresponding to a vulnerability, separated by commas (,)
                     * 
                     */
                    void SetIds(const std::string& _ids);

                    /**
                     * 判断参数 Ids 是否已赋值
                     * @return Ids 是否已赋值
                     * 
                     */
                    bool IdsHasBeenSet() const;

                    /**
                     * 获取Vulnerability name
                     * @return Name Vulnerability name
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置Vulnerability name
                     * @param _name Vulnerability name
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取0: pending; 1: ignored; 3: fixed; 5: detecting; 6: fixing; 8: fixing failed
                     * @return Status 0: pending; 1: ignored; 3: fixed; 5: detecting; 6: fixing; 8: fixing failed
                     * 
                     */
                    uint64_t GetStatus() const;

                    /**
                     * 设置0: pending; 1: ignored; 3: fixed; 5: detecting; 6: fixing; 8: fixing failed
                     * @param _status 0: pending; 1: ignored; 3: fixed; 5: detecting; 6: fixing; 8: fixing failed
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
                     * 获取Vulnerability disclosure time
                     * @return PublishTime Vulnerability disclosure time
                     * 
                     */
                    std::string GetPublishTime() const;

                    /**
                     * 设置Vulnerability disclosure time
                     * @param _publishTime Vulnerability disclosure time
                     * 
                     */
                    void SetPublishTime(const std::string& _publishTime);

                    /**
                     * 判断参数 PublishTime 是否已赋值
                     * @return PublishTime 是否已赋值
                     * 
                     */
                    bool PublishTimeHasBeenSet() const;

                    /**
                     * 获取Last detection time
                     * @return LastTime Last detection time
                     * 
                     */
                    std::string GetLastTime() const;

                    /**
                     * 设置Last detection time
                     * @param _lastTime Last detection time
                     * 
                     */
                    void SetLastTime(const std::string& _lastTime);

                    /**
                     * 判断参数 LastTime 是否已赋值
                     * @return LastTime 是否已赋值
                     * 
                     */
                    bool LastTimeHasBeenSet() const;

                    /**
                     * 获取Number of affected hosts
                     * @return HostCount Number of affected hosts
                     * 
                     */
                    uint64_t GetHostCount() const;

                    /**
                     * 设置Number of affected hosts
                     * @param _hostCount Number of affected hosts
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
                     * 获取Vulnerability level. 1: low-risk; 2: medium-risk; 3: high-risk; 4: critical.
                     * @return Level Vulnerability level. 1: low-risk; 2: medium-risk; 3: high-risk; 4: critical.
                     * 
                     */
                    uint64_t GetLevel() const;

                    /**
                     * 设置Vulnerability level. 1: low-risk; 2: medium-risk; 3: high-risk; 4: critical.
                     * @param _level Vulnerability level. 1: low-risk; 2: medium-risk; 3: high-risk; 4: critical.
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
                     * 获取This field has been deprecated.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return From This field has been deprecated.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetFrom() const;

                    /**
                     * 设置This field has been deprecated.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _from This field has been deprecated.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetFrom(const uint64_t& _from);

                    /**
                     * 判断参数 From 是否已赋值
                     * @return From 是否已赋值
                     * 
                     */
                    bool FromHasBeenSet() const;

                    /**
                     * 获取Description
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Descript Description
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetDescript() const;

                    /**
                     * 设置Description
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _descript Description
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetDescript(const std::string& _descript);

                    /**
                     * 判断参数 Descript 是否已赋值
                     * @return Descript 是否已赋值
                     * 
                     */
                    bool DescriptHasBeenSet() const;

                    /**
                     * 获取This field has been deprecated.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return PublishTimeWisteria This field has been deprecated.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetPublishTimeWisteria() const;

                    /**
                     * 设置This field has been deprecated.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _publishTimeWisteria This field has been deprecated.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetPublishTimeWisteria(const std::string& _publishTimeWisteria);

                    /**
                     * 判断参数 PublishTimeWisteria 是否已赋值
                     * @return PublishTimeWisteria 是否已赋值
                     * 
                     */
                    bool PublishTimeWisteriaHasBeenSet() const;

                    /**
                     * 获取This field has been deprecated.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return NameWisteria This field has been deprecated.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetNameWisteria() const;

                    /**
                     * 设置This field has been deprecated.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _nameWisteria This field has been deprecated.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetNameWisteria(const std::string& _nameWisteria);

                    /**
                     * 判断参数 NameWisteria 是否已赋值
                     * @return NameWisteria 是否已赋值
                     * 
                     */
                    bool NameWisteriaHasBeenSet() const;

                    /**
                     * 获取This field has been deprecated.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return DescriptWisteria This field has been deprecated.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetDescriptWisteria() const;

                    /**
                     * 设置This field has been deprecated.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _descriptWisteria This field has been deprecated.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetDescriptWisteria(const std::string& _descriptWisteria);

                    /**
                     * 判断参数 DescriptWisteria 是否已赋值
                     * @return DescriptWisteria 是否已赋值
                     * 
                     */
                    bool DescriptWisteriaHasBeenSet() const;

                    /**
                     * 获取Event status after aggregation
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return StatusStr Event status after aggregation
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetStatusStr() const;

                    /**
                     * 设置Event status after aggregation
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _statusStr Event status after aggregation
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetStatusStr(const std::string& _statusStr);

                    /**
                     * 判断参数 StatusStr 是否已赋值
                     * @return StatusStr 是否已赋值
                     * 
                     */
                    bool StatusStrHasBeenSet() const;

                    /**
                     * 获取CVE ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return CveId CVE ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetCveId() const;

                    /**
                     * 设置CVE ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _cveId CVE ID
Note: This field may return null, indicating that no valid values can be obtained.
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
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return CvssScore CVSS score
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    double GetCvssScore() const;

                    /**
                     * 设置CVSS score
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _cvssScore CVSS score
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Vulnerability tags, separated by multiple commas
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Labels Vulnerability tags, separated by multiple commas
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetLabels() const;

                    /**
                     * 设置Vulnerability tags, separated by multiple commas
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _labels Vulnerability tags, separated by multiple commas
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Whether automatic fixing is supported and hosts that support automatic fixing are included. 0: no; 1: yes.Note: This field may return null, indicating that no valid values can be obtained.
                     * @return FixSwitch Whether automatic fixing is supported and hosts that support automatic fixing are included. 0: no; 1: yes.Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetFixSwitch() const;

                    /**
                     * 设置Whether automatic fixing is supported and hosts that support automatic fixing are included. 0: no; 1: yes.Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _fixSwitch Whether automatic fixing is supported and hosts that support automatic fixing are included. 0: no; 1: yes.Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetFixSwitch(const uint64_t& _fixSwitch);

                    /**
                     * 判断参数 FixSwitch 是否已赋值
                     * @return FixSwitch 是否已赋值
                     * 
                     */
                    bool FixSwitchHasBeenSet() const;

                    /**
                     * 获取ID of the last scan task
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return TaskId ID of the last scan task
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetTaskId() const;

                    /**
                     * 设置ID of the last scan task
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _taskId ID of the last scan task
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetTaskId(const uint64_t& _taskId);

                    /**
                     * 判断参数 TaskId 是否已赋值
                     * @return TaskId 是否已赋值
                     * 
                     */
                    bool TaskIdHasBeenSet() const;

                    /**
                     * 获取Whether defense is supported. 0: not supported; 1: supported.Note: This field may return null, indicating that no valid values can be obtained.
                     * @return IsSupportDefense Whether defense is supported. 0: not supported; 1: supported.Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetIsSupportDefense() const;

                    /**
                     * 设置Whether defense is supported. 0: not supported; 1: supported.Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _isSupportDefense Whether defense is supported. 0: not supported; 1: supported.Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Number of attacks defended
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return DefenseAttackCount Number of attacks defended
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetDefenseAttackCount() const;

                    /**
                     * 设置Number of attacks defended
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _defenseAttackCount Number of attacks defended
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取First occurrence time
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return FirstAppearTime First occurrence time
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetFirstAppearTime() const;

                    /**
                     * 设置First occurrence time
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _firstAppearTime First occurrence time
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetFirstAppearTime(const std::string& _firstAppearTime);

                    /**
                     * 判断参数 FirstAppearTime 是否已赋值
                     * @return FirstAppearTime 是否已赋值
                     * 
                     */
                    bool FirstAppearTimeHasBeenSet() const;

                    /**
                     * 获取Vulnerability category. 1: web CMS vulnerability; 2: application vulnerability; 4: Linux software vulnerability; 5: Windows system vulnerability.Note: This field may return null, indicating that no valid values can be obtained.
                     * @return VulCategory Vulnerability category. 1: web CMS vulnerability; 2: application vulnerability; 4: Linux software vulnerability; 5: Windows system vulnerability.Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetVulCategory() const;

                    /**
                     * 设置Vulnerability category. 1: web CMS vulnerability; 2: application vulnerability; 4: Linux software vulnerability; 5: Windows system vulnerability.Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _vulCategory Vulnerability category. 1: web CMS vulnerability; 2: application vulnerability; 4: Linux software vulnerability; 5: Windows system vulnerability.Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetVulCategory(const uint64_t& _vulCategory);

                    /**
                     * 判断参数 VulCategory 是否已赋值
                     * @return VulCategory 是否已赋值
                     * 
                     */
                    bool VulCategoryHasBeenSet() const;

                    /**
                     * 获取Attack intensity
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return AttackLevel Attack intensity
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetAttackLevel() const;

                    /**
                     * 设置Attack intensity
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _attackLevel Attack intensity
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Whether a restart is required after the vulnerability is fixed
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return FixNoNeedRestart Whether a restart is required after the vulnerability is fixed
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    bool GetFixNoNeedRestart() const;

                    /**
                     * 设置Whether a restart is required after the vulnerability is fixed
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _fixNoNeedRestart Whether a restart is required after the vulnerability is fixed
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetFixNoNeedRestart(const bool& _fixNoNeedRestart);

                    /**
                     * 判断参数 FixNoNeedRestart 是否已赋值
                     * @return FixNoNeedRestart 是否已赋值
                     * 
                     */
                    bool FixNoNeedRestartHasBeenSet() const;

                    /**
                     * 获取Detection method. 0: version comparison; 1: POC verification.Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Method Detection method. 0: version comparison; 1: POC verification.Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetMethod() const;

                    /**
                     * 设置Detection method. 0: version comparison; 1: POC verification.Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _method Detection method. 0: version comparison; 1: POC verification.Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetMethod(const uint64_t& _method);

                    /**
                     * 判断参数 Method 是否已赋值
                     * @return Method 是否已赋值
                     * 
                     */
                    bool MethodHasBeenSet() const;

                private:

                    /**
                     * IDs of events corresponding to a vulnerability, separated by commas (,)
                     */
                    std::string m_ids;
                    bool m_idsHasBeenSet;

                    /**
                     * Vulnerability name
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 0: pending; 1: ignored; 3: fixed; 5: detecting; 6: fixing; 8: fixing failed
                     */
                    uint64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Vulnerability ID
                     */
                    uint64_t m_vulId;
                    bool m_vulIdHasBeenSet;

                    /**
                     * Vulnerability disclosure time
                     */
                    std::string m_publishTime;
                    bool m_publishTimeHasBeenSet;

                    /**
                     * Last detection time
                     */
                    std::string m_lastTime;
                    bool m_lastTimeHasBeenSet;

                    /**
                     * Number of affected hosts
                     */
                    uint64_t m_hostCount;
                    bool m_hostCountHasBeenSet;

                    /**
                     * Vulnerability level. 1: low-risk; 2: medium-risk; 3: high-risk; 4: critical.
                     */
                    uint64_t m_level;
                    bool m_levelHasBeenSet;

                    /**
                     * This field has been deprecated.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_from;
                    bool m_fromHasBeenSet;

                    /**
                     * Description
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_descript;
                    bool m_descriptHasBeenSet;

                    /**
                     * This field has been deprecated.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_publishTimeWisteria;
                    bool m_publishTimeWisteriaHasBeenSet;

                    /**
                     * This field has been deprecated.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_nameWisteria;
                    bool m_nameWisteriaHasBeenSet;

                    /**
                     * This field has been deprecated.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_descriptWisteria;
                    bool m_descriptWisteriaHasBeenSet;

                    /**
                     * Event status after aggregation
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_statusStr;
                    bool m_statusStrHasBeenSet;

                    /**
                     * CVE ID
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_cveId;
                    bool m_cveIdHasBeenSet;

                    /**
                     * CVSS score
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    double m_cvssScore;
                    bool m_cvssScoreHasBeenSet;

                    /**
                     * Vulnerability tags, separated by multiple commas
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_labels;
                    bool m_labelsHasBeenSet;

                    /**
                     * Whether automatic fixing is supported and hosts that support automatic fixing are included. 0: no; 1: yes.Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_fixSwitch;
                    bool m_fixSwitchHasBeenSet;

                    /**
                     * ID of the last scan task
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * Whether defense is supported. 0: not supported; 1: supported.Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_isSupportDefense;
                    bool m_isSupportDefenseHasBeenSet;

                    /**
                     * Number of attacks defended
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_defenseAttackCount;
                    bool m_defenseAttackCountHasBeenSet;

                    /**
                     * First occurrence time
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_firstAppearTime;
                    bool m_firstAppearTimeHasBeenSet;

                    /**
                     * Vulnerability category. 1: web CMS vulnerability; 2: application vulnerability; 4: Linux software vulnerability; 5: Windows system vulnerability.Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_vulCategory;
                    bool m_vulCategoryHasBeenSet;

                    /**
                     * Attack intensity
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_attackLevel;
                    bool m_attackLevelHasBeenSet;

                    /**
                     * Whether a restart is required after the vulnerability is fixed
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    bool m_fixNoNeedRestart;
                    bool m_fixNoNeedRestartHasBeenSet;

                    /**
                     * Detection method. 0: version comparison; 1: POC verification.Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_method;
                    bool m_methodHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_VULINFOLIST_H_
