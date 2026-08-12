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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_VULFIXTASKITEM_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_VULFIXTASKITEM_H_

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
                * Vulnerability repair task list item
                */
                class VulFixTaskItem : public AbstractModel
                {
                public:
                    VulFixTaskItem();
                    ~VulFixTaskItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Primary key ID of the fix task
                     * @return Id Primary key ID of the fix task
                     * 
                     */
                    int64_t GetId() const;

                    /**
                     * 设置Primary key ID of the fix task
                     * @param _id Primary key ID of the fix task
                     * 
                     */
                    void SetId(const int64_t& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取Task ID, hash flag for interactive
                     * @return TaskId Task ID, hash flag for interactive
                     * 
                     */
                    int64_t GetTaskId() const;

                    /**
                     * 设置Task ID, hash flag for interactive
                     * @param _taskId Task ID, hash flag for interactive
                     * 
                     */
                    void SetTaskId(const int64_t& _taskId);

                    /**
                     * 判断参数 TaskId 是否已赋值
                     * @return TaskId 是否已赋值
                     * 
                     */
                    bool TaskIdHasBeenSet() const;

                    /**
                     * 获取JobId, corresponding to the Task ID of the task system.
                     * @return JobId JobId, corresponding to the Task ID of the task system.
                     * 
                     */
                    std::string GetJobId() const;

                    /**
                     * 设置JobId, corresponding to the Task ID of the task system.
                     * @param _jobId JobId, corresponding to the Task ID of the task system.
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
                     * 获取List of vulnerability IDs to be fixed
                     * @return VulIds List of vulnerability IDs to be fixed
                     * 
                     */
                    std::vector<int64_t> GetVulIds() const;

                    /**
                     * 设置List of vulnerability IDs to be fixed
                     * @param _vulIds List of vulnerability IDs to be fixed
                     * 
                     */
                    void SetVulIds(const std::vector<int64_t>& _vulIds);

                    /**
                     * 判断参数 VulIds 是否已赋值
                     * @return VulIds 是否已赋值
                     * 
                     */
                    bool VulIdsHasBeenSet() const;

                    /**
                     * 获取List of fixed KB patch IDs
                     * @return KBIds List of fixed KB patch IDs
                     * 
                     */
                    std::vector<int64_t> GetKBIds() const;

                    /**
                     * 设置List of fixed KB patch IDs
                     * @param _kBIds List of fixed KB patch IDs
                     * 
                     */
                    void SetKBIds(const std::vector<int64_t>& _kBIds);

                    /**
                     * 判断参数 KBIds 是否已赋值
                     * @return KBIds 是否已赋值
                     * 
                     */
                    bool KBIdsHasBeenSet() const;

                    /**
                     * 获取Repair the total number of assets
                     * @return AssetCount Repair the total number of assets
                     * 
                     */
                    int64_t GetAssetCount() const;

                    /**
                     * 设置Repair the total number of assets
                     * @param _assetCount Repair the total number of assets
                     * 
                     */
                    void SetAssetCount(const int64_t& _assetCount);

                    /**
                     * 判断参数 AssetCount 是否已赋值
                     * @return AssetCount 是否已赋值
                     * 
                     */
                    bool AssetCountHasBeenSet() const;

                    /**
                     * 获取Number of successfully fixed hosts
                     * @return SuccessCount Number of successfully fixed hosts
                     * 
                     */
                    int64_t GetSuccessCount() const;

                    /**
                     * 设置Number of successfully fixed hosts
                     * @param _successCount Number of successfully fixed hosts
                     * 
                     */
                    void SetSuccessCount(const int64_t& _successCount);

                    /**
                     * 判断参数 SuccessCount 是否已赋值
                     * @return SuccessCount 是否已赋值
                     * 
                     */
                    bool SuccessCountHasBeenSet() const;

                    /**
                     * 获取Number of hosts failed to be fixed
                     * @return FailCount Number of hosts failed to be fixed
                     * 
                     */
                    int64_t GetFailCount() const;

                    /**
                     * 设置Number of hosts failed to be fixed
                     * @param _failCount Number of hosts failed to be fixed
                     * 
                     */
                    void SetFailCount(const int64_t& _failCount);

                    /**
                     * 判断参数 FailCount 是否已赋值
                     * @return FailCount 是否已赋值
                     * 
                     */
                    bool FailCountHasBeenSet() const;

                    /**
                     * 获取Progress percentage of the repair
Valid values: [0, 100]
Supplemental description: Calculation method is (SuccessCount+FailCount)/AssetCount×100.
                     * @return Progress Progress percentage of the repair
Valid values: [0, 100]
Supplemental description: Calculation method is (SuccessCount+FailCount)/AssetCount×100.
                     * 
                     */
                    int64_t GetProgress() const;

                    /**
                     * 设置Progress percentage of the repair
Valid values: [0, 100]
Supplemental description: Calculation method is (SuccessCount+FailCount)/AssetCount×100.
                     * @param _progress Progress percentage of the repair
Valid values: [0, 100]
Supplemental description: Calculation method is (SuccessCount+FailCount)/AssetCount×100.
                     * 
                     */
                    void SetProgress(const int64_t& _progress);

                    /**
                     * 判断参数 Progress 是否已赋值
                     * @return Progress 是否已赋值
                     * 
                     */
                    bool ProgressHasBeenSet() const;

                    /**
                     * 获取Number of users in the fix task
                     * @return TargetAppIdsCount Number of users in the fix task
                     * 
                     */
                    int64_t GetTargetAppIdsCount() const;

                    /**
                     * 设置Number of users in the fix task
                     * @param _targetAppIdsCount Number of users in the fix task
                     * 
                     */
                    void SetTargetAppIdsCount(const int64_t& _targetAppIdsCount);

                    /**
                     * 判断参数 TargetAppIdsCount 是否已赋值
                     * @return TargetAppIdsCount 是否已赋值
                     * 
                     */
                    bool TargetAppIdsCountHasBeenSet() const;

                    /**
                     * 获取Remediation status
Enumeration value:
0: initialization
1: In remediation
2: Repair successful
3: Partially fix failed
4: All fix failures
5: Stop repair
                     * @return FixStatus Remediation status
Enumeration value:
0: initialization
1: In remediation
2: Repair successful
3: Partially fix failed
4: All fix failures
5: Stop repair
                     * 
                     */
                    int64_t GetFixStatus() const;

                    /**
                     * 设置Remediation status
Enumeration value:
0: initialization
1: In remediation
2: Repair successful
3: Partially fix failed
4: All fix failures
5: Stop repair
                     * @param _fixStatus Remediation status
Enumeration value:
0: initialization
1: In remediation
2: Repair successful
3: Partially fix failed
4: All fix failures
5: Stop repair
                     * 
                     */
                    void SetFixStatus(const int64_t& _fixStatus);

                    /**
                     * 判断参数 FixStatus 是否已赋值
                     * @return FixStatus 是否已赋值
                     * 
                     */
                    bool FixStatusHasBeenSet() const;

                    /**
                     * 获取Maximum repair time
Unit: seconds.
                     * @return Timeout Maximum repair time
Unit: seconds.
                     * 
                     */
                    int64_t GetTimeout() const;

                    /**
                     * 设置Maximum repair time
Unit: seconds.
                     * @param _timeout Maximum repair time
Unit: seconds.
                     * 
                     */
                    void SetTimeout(const int64_t& _timeout);

                    /**
                     * 判断参数 Timeout 是否已赋值
                     * @return Timeout 是否已赋值
                     * 
                     */
                    bool TimeoutHasBeenSet() const;

                    /**
                     * 获取Fix startup time
Parameter format: YYYY-MM-DDTHH:mm:ssZ (ISO8601 format).
                     * @return StartTime Fix startup time
Parameter format: YYYY-MM-DDTHH:mm:ssZ (ISO8601 format).
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置Fix startup time
Parameter format: YYYY-MM-DDTHH:mm:ssZ (ISO8601 format).
                     * @param _startTime Fix startup time
Parameter format: YYYY-MM-DDTHH:mm:ssZ (ISO8601 format).
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
                     * 获取Fix end time
Parameter format: YYYY-MM-DDTHH:mm:ssZ (ISO8601 format).
                     * @return EndTime Fix end time
Parameter format: YYYY-MM-DDTHH:mm:ssZ (ISO8601 format).
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置Fix end time
Parameter format: YYYY-MM-DDTHH:mm:ssZ (ISO8601 format).
                     * @param _endTime Fix end time
Parameter format: YYYY-MM-DDTHH:mm:ssZ (ISO8601 format).
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
                     * 获取Record creation time.
Parameter format: YYYY-MM-DDTHH:mm:ssZ (ISO8601 format).
                     * @return CreateTime Record creation time.
Parameter format: YYYY-MM-DDTHH:mm:ssZ (ISO8601 format).
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置Record creation time.
Parameter format: YYYY-MM-DDTHH:mm:ssZ (ISO8601 format).
                     * @param _createTime Record creation time.
Parameter format: YYYY-MM-DDTHH:mm:ssZ (ISO8601 format).
                     * 
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取List of vulnerability names to be fixed, making it easy to show directly on the list page
                     * @return VulNames List of vulnerability names to be fixed, making it easy to show directly on the list page
                     * 
                     */
                    std::vector<std::string> GetVulNames() const;

                    /**
                     * 设置List of vulnerability names to be fixed, making it easy to show directly on the list page
                     * @param _vulNames List of vulnerability names to be fixed, making it easy to show directly on the list page
                     * 
                     */
                    void SetVulNames(const std::vector<std::string>& _vulNames);

                    /**
                     * 判断参数 VulNames 是否已赋值
                     * @return VulNames 是否已赋值
                     * 
                     */
                    bool VulNamesHasBeenSet() const;

                    /**
                     * 获取Vulnerability Type List
Enumeration values:
LINUX: Linux software vulnerability
WINDOWS: Windows system patch vulnerability
WEB_CMS: Web-CMS vulnerabilities
APPLICATION: Application vulnerability
EMERGENCY: Urgent vulnerability
                     * @return VulCategory Vulnerability Type List
Enumeration values:
LINUX: Linux software vulnerability
WINDOWS: Windows system patch vulnerability
WEB_CMS: Web-CMS vulnerabilities
APPLICATION: Application vulnerability
EMERGENCY: Urgent vulnerability
                     * 
                     */
                    std::vector<std::string> GetVulCategory() const;

                    /**
                     * 设置Vulnerability Type List
Enumeration values:
LINUX: Linux software vulnerability
WINDOWS: Windows system patch vulnerability
WEB_CMS: Web-CMS vulnerabilities
APPLICATION: Application vulnerability
EMERGENCY: Urgent vulnerability
                     * @param _vulCategory Vulnerability Type List
Enumeration values:
LINUX: Linux software vulnerability
WINDOWS: Windows system patch vulnerability
WEB_CMS: Web-CMS vulnerabilities
APPLICATION: Application vulnerability
EMERGENCY: Urgent vulnerability
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
                     * 获取Creator AppId
                     * @return AppId Creator AppId
                     * 
                     */
                    uint64_t GetAppId() const;

                    /**
                     * 设置Creator AppId
                     * @param _appId Creator AppId
                     * 
                     */
                    void SetAppId(const uint64_t& _appId);

                    /**
                     * 判断参数 AppId 是否已赋值
                     * @return AppId 是否已赋值
                     * 
                     */
                    bool AppIdHasBeenSet() const;

                private:

                    /**
                     * Primary key ID of the fix task
                     */
                    int64_t m_id;
                    bool m_idHasBeenSet;

                    /**
                     * Task ID, hash flag for interactive
                     */
                    int64_t m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * JobId, corresponding to the Task ID of the task system.
                     */
                    std::string m_jobId;
                    bool m_jobIdHasBeenSet;

                    /**
                     * List of vulnerability IDs to be fixed
                     */
                    std::vector<int64_t> m_vulIds;
                    bool m_vulIdsHasBeenSet;

                    /**
                     * List of fixed KB patch IDs
                     */
                    std::vector<int64_t> m_kBIds;
                    bool m_kBIdsHasBeenSet;

                    /**
                     * Repair the total number of assets
                     */
                    int64_t m_assetCount;
                    bool m_assetCountHasBeenSet;

                    /**
                     * Number of successfully fixed hosts
                     */
                    int64_t m_successCount;
                    bool m_successCountHasBeenSet;

                    /**
                     * Number of hosts failed to be fixed
                     */
                    int64_t m_failCount;
                    bool m_failCountHasBeenSet;

                    /**
                     * Progress percentage of the repair
Valid values: [0, 100]
Supplemental description: Calculation method is (SuccessCount+FailCount)/AssetCount×100.
                     */
                    int64_t m_progress;
                    bool m_progressHasBeenSet;

                    /**
                     * Number of users in the fix task
                     */
                    int64_t m_targetAppIdsCount;
                    bool m_targetAppIdsCountHasBeenSet;

                    /**
                     * Remediation status
Enumeration value:
0: initialization
1: In remediation
2: Repair successful
3: Partially fix failed
4: All fix failures
5: Stop repair
                     */
                    int64_t m_fixStatus;
                    bool m_fixStatusHasBeenSet;

                    /**
                     * Maximum repair time
Unit: seconds.
                     */
                    int64_t m_timeout;
                    bool m_timeoutHasBeenSet;

                    /**
                     * Fix startup time
Parameter format: YYYY-MM-DDTHH:mm:ssZ (ISO8601 format).
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * Fix end time
Parameter format: YYYY-MM-DDTHH:mm:ssZ (ISO8601 format).
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * Record creation time.
Parameter format: YYYY-MM-DDTHH:mm:ssZ (ISO8601 format).
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * List of vulnerability names to be fixed, making it easy to show directly on the list page
                     */
                    std::vector<std::string> m_vulNames;
                    bool m_vulNamesHasBeenSet;

                    /**
                     * Vulnerability Type List
Enumeration values:
LINUX: Linux software vulnerability
WINDOWS: Windows system patch vulnerability
WEB_CMS: Web-CMS vulnerabilities
APPLICATION: Application vulnerability
EMERGENCY: Urgent vulnerability
                     */
                    std::vector<std::string> m_vulCategory;
                    bool m_vulCategoryHasBeenSet;

                    /**
                     * Creator AppId
                     */
                    uint64_t m_appId;
                    bool m_appIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_VULFIXTASKITEM_H_
