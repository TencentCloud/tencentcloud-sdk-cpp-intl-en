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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_VULSCANTASK_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_VULSCANTASK_H_

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
                * Vulnerability scanning task history
                */
                class VulScanTask : public AbstractModel
                {
                public:
                    VulScanTask();
                    ~VulScanTask() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Task ID.</p>
                     * @return Id <p>Task ID.</p>
                     * 
                     */
                    uint64_t GetId() const;

                    /**
                     * 设置<p>Task ID.</p>
                     * @param _id <p>Task ID.</p>
                     * 
                     */
                    void SetId(const uint64_t& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取<p>Task ID.</p>
                     * @return JobId <p>Task ID.</p>
                     * 
                     */
                    std::string GetJobId() const;

                    /**
                     * 设置<p>Task ID.</p>
                     * @param _jobId <p>Task ID.</p>
                     * 
                     */
                    void SetJobId(const std::string& _jobId);

                    /**
                     * 判断参数 JobId 是否已赋值
                     * @return JobId 是否已赋值
                     * 
                     */
                    bool JobIdHasBeenSet() const;

                    /**
                     * 获取<p>Associated user appid of the task</p>
                     * @return AppId <p>Associated user appid of the task</p>
                     * 
                     */
                    uint64_t GetAppId() const;

                    /**
                     * 设置<p>Associated user appid of the task</p>
                     * @param _appId <p>Associated user appid of the task</p>
                     * 
                     */
                    void SetAppId(const uint64_t& _appId);

                    /**
                     * 判断参数 AppId 是否已赋值
                     * @return AppId 是否已赋值
                     * 
                     */
                    bool AppIdHasBeenSet() const;

                    /**
                     * 获取<p>Task type</p><p>Enumeration value:</p><ul><li>0: One-click scan</li><li>1: Period scanning</li></ul>
                     * @return TaskType <p>Task type</p><p>Enumeration value:</p><ul><li>0: One-click scan</li><li>1: Period scanning</li></ul>
                     * 
                     */
                    uint64_t GetTaskType() const;

                    /**
                     * 设置<p>Task type</p><p>Enumeration value:</p><ul><li>0: One-click scan</li><li>1: Period scanning</li></ul>
                     * @param _taskType <p>Task type</p><p>Enumeration value:</p><ul><li>0: One-click scan</li><li>1: Period scanning</li></ul>
                     * 
                     */
                    void SetTaskType(const uint64_t& _taskType);

                    /**
                     * 判断参数 TaskType 是否已赋值
                     * @return TaskType 是否已赋值
                     * 
                     */
                    bool TaskTypeHasBeenSet() const;

                    /**
                     * 获取<p>Vulnerability type</p><p>Enumeration value:</p><ul><li>LINUX: Linux software vulnerability</li><li>WINDOWS: Windows system patch</li><li>WEB_CMS: Web-CMS vulnerability</li><li>APPLICATION: Application vulnerability</li><li>EMERGENCY: Emergency vulnerability</li></ul>
                     * @return VulCategory <p>Vulnerability type</p><p>Enumeration value:</p><ul><li>LINUX: Linux software vulnerability</li><li>WINDOWS: Windows system patch</li><li>WEB_CMS: Web-CMS vulnerability</li><li>APPLICATION: Application vulnerability</li><li>EMERGENCY: Emergency vulnerability</li></ul>
                     * 
                     */
                    std::vector<std::string> GetVulCategory() const;

                    /**
                     * 设置<p>Vulnerability type</p><p>Enumeration value:</p><ul><li>LINUX: Linux software vulnerability</li><li>WINDOWS: Windows system patch</li><li>WEB_CMS: Web-CMS vulnerability</li><li>APPLICATION: Application vulnerability</li><li>EMERGENCY: Emergency vulnerability</li></ul>
                     * @param _vulCategory <p>Vulnerability type</p><p>Enumeration value:</p><ul><li>LINUX: Linux software vulnerability</li><li>WINDOWS: Windows system patch</li><li>WEB_CMS: Web-CMS vulnerability</li><li>APPLICATION: Application vulnerability</li><li>EMERGENCY: Emergency vulnerability</li></ul>
                     * 
                     */
                    void SetVulCategory(const std::vector<std::string>& _vulCategory);

                    /**
                     * 判断参数 VulCategory 是否已赋值
                     * @return VulCategory 是否已赋值
                     * 
                     */
                    bool VulCategoryHasBeenSet() const;

                    /**
                     * 获取<p>Vulnerability name</p>
                     * @return VulName <p>Vulnerability name</p>
                     * 
                     */
                    std::vector<std::string> GetVulName() const;

                    /**
                     * 设置<p>Vulnerability name</p>
                     * @param _vulName <p>Vulnerability name</p>
                     * 
                     */
                    void SetVulName(const std::vector<std::string>& _vulName);

                    /**
                     * 判断参数 VulName 是否已赋值
                     * @return VulName 是否已赋值
                     * 
                     */
                    bool VulNameHasBeenSet() const;

                    /**
                     * 获取<p>kb name.</p>
                     * @return KbName <p>kb name.</p>
                     * 
                     */
                    std::vector<std::string> GetKbName() const;

                    /**
                     * 设置<p>kb name.</p>
                     * @param _kbName <p>kb name.</p>
                     * 
                     */
                    void SetKbName(const std::vector<std::string>& _kbName);

                    /**
                     * 判断参数 KbName 是否已赋值
                     * @return KbName 是否已赋值
                     * 
                     */
                    bool KbNameHasBeenSet() const;

                    /**
                     * 获取<p>Whether an emergency vulnerability</p><p>Enumeration value:</p><ul><li>0: No</li><li>1: Yes</li></ul>
                     * @return Emergency <p>Whether an emergency vulnerability</p><p>Enumeration value:</p><ul><li>0: No</li><li>1: Yes</li></ul>
                     * 
                     */
                    uint64_t GetEmergency() const;

                    /**
                     * 设置<p>Whether an emergency vulnerability</p><p>Enumeration value:</p><ul><li>0: No</li><li>1: Yes</li></ul>
                     * @param _emergency <p>Whether an emergency vulnerability</p><p>Enumeration value:</p><ul><li>0: No</li><li>1: Yes</li></ul>
                     * 
                     */
                    void SetEmergency(const uint64_t& _emergency);

                    /**
                     * 判断参数 Emergency 是否已赋值
                     * @return Emergency 是否已赋值
                     * 
                     */
                    bool EmergencyHasBeenSet() const;

                    /**
                     * 获取<p>Number of accounts to scan (0: all accounts, others: number of accounts)</p>
                     * @return Account <p>Number of accounts to scan (0: all accounts, others: number of accounts)</p>
                     * 
                     */
                    uint64_t GetAccount() const;

                    /**
                     * 设置<p>Number of accounts to scan (0: all accounts, others: number of accounts)</p>
                     * @param _account <p>Number of accounts to scan (0: all accounts, others: number of accounts)</p>
                     * 
                     */
                    void SetAccount(const uint64_t& _account);

                    /**
                     * 判断参数 Account 是否已赋值
                     * @return Account 是否已赋值
                     * 
                     */
                    bool AccountHasBeenSet() const;

                    /**
                     * 获取<p>Scan start time</p>
                     * @return StartTime <p>Scan start time</p>
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置<p>Scan start time</p>
                     * @param _startTime <p>Scan start time</p>
                     * 
                     */
                    void SetStartTime(const std::string& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     * 
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取<p>Scan end time</p>
                     * @return EndTime <p>Scan end time</p>
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置<p>Scan end time</p>
                     * @param _endTime <p>Scan end time</p>
                     * 
                     */
                    void SetEndTime(const std::string& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     * 
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取<p>Scan status (INITIALIZING: Initialization, SCANNING: Scanning, SUCCESS: Scan successful, TOTAL_FAIL: Total scan failure)</p><p>Enumeration value:</p><ul><li>STOPPED: Stopped</li></ul>
                     * @return Status <p>Scan status (INITIALIZING: Initialization, SCANNING: Scanning, SUCCESS: Scan successful, TOTAL_FAIL: Total scan failure)</p><p>Enumeration value:</p><ul><li>STOPPED: Stopped</li></ul>
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置<p>Scan status (INITIALIZING: Initialization, SCANNING: Scanning, SUCCESS: Scan successful, TOTAL_FAIL: Total scan failure)</p><p>Enumeration value:</p><ul><li>STOPPED: Stopped</li></ul>
                     * @param _status <p>Scan status (INITIALIZING: Initialization, SCANNING: Scanning, SUCCESS: Scan successful, TOTAL_FAIL: Total scan failure)</p><p>Enumeration value:</p><ul><li>STOPPED: Stopped</li></ul>
                     * 
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取<p>Vulnerability threat level</p><p>Enumeration value:</p><ul><li>LOW: Low risk</li><li>MEDIUM: Medium risk</li><li>HIGH: High risk</li><li>CRITICAL: Critical</li></ul>
                     * @return Level <p>Vulnerability threat level</p><p>Enumeration value:</p><ul><li>LOW: Low risk</li><li>MEDIUM: Medium risk</li><li>HIGH: High risk</li><li>CRITICAL: Critical</li></ul>
                     * 
                     */
                    std::vector<std::string> GetLevel() const;

                    /**
                     * 设置<p>Vulnerability threat level</p><p>Enumeration value:</p><ul><li>LOW: Low risk</li><li>MEDIUM: Medium risk</li><li>HIGH: High risk</li><li>CRITICAL: Critical</li></ul>
                     * @param _level <p>Vulnerability threat level</p><p>Enumeration value:</p><ul><li>LOW: Low risk</li><li>MEDIUM: Medium risk</li><li>HIGH: High risk</li><li>CRITICAL: Critical</li></ul>
                     * 
                     */
                    void SetLevel(const std::vector<std::string>& _level);

                    /**
                     * 判断参数 Level 是否已赋值
                     * @return Level 是否已赋值
                     * 
                     */
                    bool LevelHasBeenSet() const;

                    /**
                     * 获取<p>Scanning method</p><p>Enumeration value:</p><ul><li>VersionCompare: version comparison</li><li>POC: POC detection</li><li>VersionComparePOC: version comparison+POC detection</li></ul>
                     * @return Method <p>Scanning method</p><p>Enumeration value:</p><ul><li>VersionCompare: version comparison</li><li>POC: POC detection</li><li>VersionComparePOC: version comparison+POC detection</li></ul>
                     * 
                     */
                    std::vector<std::string> GetMethod() const;

                    /**
                     * 设置<p>Scanning method</p><p>Enumeration value:</p><ul><li>VersionCompare: version comparison</li><li>POC: POC detection</li><li>VersionComparePOC: version comparison+POC detection</li></ul>
                     * @param _method <p>Scanning method</p><p>Enumeration value:</p><ul><li>VersionCompare: version comparison</li><li>POC: POC detection</li><li>VersionComparePOC: version comparison+POC detection</li></ul>
                     * 
                     */
                    void SetMethod(const std::vector<std::string>& _method);

                    /**
                     * 判断参数 Method 是否已赋值
                     * @return Method 是否已赋值
                     * 
                     */
                    bool MethodHasBeenSet() const;

                    /**
                     * 获取<p>Asset list</p>
                     * @return AssetList <p>Asset list</p>
                     * 
                     */
                    std::vector<std::string> GetAssetList() const;

                    /**
                     * 设置<p>Asset list</p>
                     * @param _assetList <p>Asset list</p>
                     * 
                     */
                    void SetAssetList(const std::vector<std::string>& _assetList);

                    /**
                     * 判断参数 AssetList 是否已赋值
                     * @return AssetList 是否已赋值
                     * 
                     */
                    bool AssetListHasBeenSet() const;

                    /**
                     * 获取<p>Asset scope</p><p>Enumeration value:</p><ul><li>0: All assets</li><li>1: Custom assets</li><li>2: Selected excluded assets</li></ul>
                     * @return AssetRange <p>Asset scope</p><p>Enumeration value:</p><ul><li>0: All assets</li><li>1: Custom assets</li><li>2: Selected excluded assets</li></ul>
                     * 
                     */
                    uint64_t GetAssetRange() const;

                    /**
                     * 设置<p>Asset scope</p><p>Enumeration value:</p><ul><li>0: All assets</li><li>1: Custom assets</li><li>2: Selected excluded assets</li></ul>
                     * @param _assetRange <p>Asset scope</p><p>Enumeration value:</p><ul><li>0: All assets</li><li>1: Custom assets</li><li>2: Selected excluded assets</li></ul>
                     * 
                     */
                    void SetAssetRange(const uint64_t& _assetRange);

                    /**
                     * 判断参数 AssetRange 是否已赋值
                     * @return AssetRange 是否已赋值
                     * 
                     */
                    bool AssetRangeHasBeenSet() const;

                private:

                    /**
                     * <p>Task ID.</p>
                     */
                    uint64_t m_id;
                    bool m_idHasBeenSet;

                    /**
                     * <p>Task ID.</p>
                     */
                    std::string m_jobId;
                    bool m_jobIdHasBeenSet;

                    /**
                     * <p>Associated user appid of the task</p>
                     */
                    uint64_t m_appId;
                    bool m_appIdHasBeenSet;

                    /**
                     * <p>Task type</p><p>Enumeration value:</p><ul><li>0: One-click scan</li><li>1: Period scanning</li></ul>
                     */
                    uint64_t m_taskType;
                    bool m_taskTypeHasBeenSet;

                    /**
                     * <p>Vulnerability type</p><p>Enumeration value:</p><ul><li>LINUX: Linux software vulnerability</li><li>WINDOWS: Windows system patch</li><li>WEB_CMS: Web-CMS vulnerability</li><li>APPLICATION: Application vulnerability</li><li>EMERGENCY: Emergency vulnerability</li></ul>
                     */
                    std::vector<std::string> m_vulCategory;
                    bool m_vulCategoryHasBeenSet;

                    /**
                     * <p>Vulnerability name</p>
                     */
                    std::vector<std::string> m_vulName;
                    bool m_vulNameHasBeenSet;

                    /**
                     * <p>kb name.</p>
                     */
                    std::vector<std::string> m_kbName;
                    bool m_kbNameHasBeenSet;

                    /**
                     * <p>Whether an emergency vulnerability</p><p>Enumeration value:</p><ul><li>0: No</li><li>1: Yes</li></ul>
                     */
                    uint64_t m_emergency;
                    bool m_emergencyHasBeenSet;

                    /**
                     * <p>Number of accounts to scan (0: all accounts, others: number of accounts)</p>
                     */
                    uint64_t m_account;
                    bool m_accountHasBeenSet;

                    /**
                     * <p>Scan start time</p>
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * <p>Scan end time</p>
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * <p>Scan status (INITIALIZING: Initialization, SCANNING: Scanning, SUCCESS: Scan successful, TOTAL_FAIL: Total scan failure)</p><p>Enumeration value:</p><ul><li>STOPPED: Stopped</li></ul>
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>Vulnerability threat level</p><p>Enumeration value:</p><ul><li>LOW: Low risk</li><li>MEDIUM: Medium risk</li><li>HIGH: High risk</li><li>CRITICAL: Critical</li></ul>
                     */
                    std::vector<std::string> m_level;
                    bool m_levelHasBeenSet;

                    /**
                     * <p>Scanning method</p><p>Enumeration value:</p><ul><li>VersionCompare: version comparison</li><li>POC: POC detection</li><li>VersionComparePOC: version comparison+POC detection</li></ul>
                     */
                    std::vector<std::string> m_method;
                    bool m_methodHasBeenSet;

                    /**
                     * <p>Asset list</p>
                     */
                    std::vector<std::string> m_assetList;
                    bool m_assetListHasBeenSet;

                    /**
                     * <p>Asset scope</p><p>Enumeration value:</p><ul><li>0: All assets</li><li>1: Custom assets</li><li>2: Selected excluded assets</li></ul>
                     */
                    uint64_t m_assetRange;
                    bool m_assetRangeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_VULSCANTASK_H_
