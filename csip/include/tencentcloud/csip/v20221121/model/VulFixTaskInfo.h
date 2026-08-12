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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_VULFIXTASKINFO_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_VULFIXTASKINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/csip/v20221121/model/VulFixStatusItem.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * Task summary of vulnerability repair
                */
                class VulFixTaskInfo : public AbstractModel
                {
                public:
                    VulFixTaskInfo();
                    ~VulFixTaskInfo() = default;
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
                     * 获取Task ID.
                     * @return TaskId Task ID.
                     * 
                     */
                    int64_t GetTaskId() const;

                    /**
                     * 设置Task ID.
                     * @param _taskId Task ID.
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
                     * 获取Remediation status
Enumeration values:
0: initialization
1: In remediation
2: Repair successful
3: Partially fix failed
4: All fix failures
5: Stop repair
                     * @return FixStatus Remediation status
Enumeration values:
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
Enumeration values:
0: initialization
1: In remediation
2: Repair successful
3: Partially fix failed
4: All fix failures
5: Stop repair
                     * @param _fixStatus Remediation status
Enumeration values:
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
                     * 获取Repair total number of assets
                     * @return AssetCount Repair total number of assets
                     * 
                     */
                    int64_t GetAssetCount() const;

                    /**
                     * 设置Repair total number of assets
                     * @param _assetCount Repair total number of assets
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
                     * 获取Number of successful fixes
                     * @return SuccessCount Number of successful fixes
                     * 
                     */
                    int64_t GetSuccessCount() const;

                    /**
                     * 设置Number of successful fixes
                     * @param _successCount Number of successful fixes
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
                     * 获取FIX_FAILURE count
                     * @return FailCount FIX_FAILURE count
                     * 
                     */
                    int64_t GetFailCount() const;

                    /**
                     * 设置FIX_FAILURE count
                     * @param _failCount FIX_FAILURE count
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
                     * 获取Number of hosts in remediation
                     * @return FixingCount Number of hosts in remediation
                     * 
                     */
                    int64_t GetFixingCount() const;

                    /**
                     * 设置Number of hosts in remediation
                     * @param _fixingCount Number of hosts in remediation
                     * 
                     */
                    void SetFixingCount(const int64_t& _fixingCount);

                    /**
                     * 判断参数 FixingCount 是否已赋值
                     * @return FixingCount 是否已赋值
                     * 
                     */
                    bool FixingCountHasBeenSet() const;

                    /**
                     * 获取Number in queue (waiting for distribution or snapshot creation)
                     * @return QueueCount Number in queue (waiting for distribution or snapshot creation)
                     * 
                     */
                    int64_t GetQueueCount() const;

                    /**
                     * 设置Number in queue (waiting for distribution or snapshot creation)
                     * @param _queueCount Number in queue (waiting for distribution or snapshot creation)
                     * 
                     */
                    void SetQueueCount(const int64_t& _queueCount);

                    /**
                     * 判断参数 QueueCount 是否已赋值
                     * @return QueueCount 是否已赋值
                     * 
                     */
                    bool QueueCountHasBeenSet() const;

                    /**
                     * 获取Progress percentage of the repair
Value range: [0, 100].
Supplemental description: Calculation method is (SuccessCount+FailCount)/AssetCount×100.
                     * @return Progress Progress percentage of the repair
Value range: [0, 100].
Supplemental description: Calculation method is (SuccessCount+FailCount)/AssetCount×100.
                     * 
                     */
                    int64_t GetProgress() const;

                    /**
                     * 设置Progress percentage of the repair
Value range: [0, 100].
Supplemental description: Calculation method is (SuccessCount+FailCount)/AssetCount×100.
                     * @param _progress Progress percentage of the repair
Value range: [0, 100].
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
                     * 获取Number of successfully fixed vulnerabilities
                     * @return SuccessVulCount Number of successfully fixed vulnerabilities
                     * 
                     */
                    int64_t GetSuccessVulCount() const;

                    /**
                     * 设置Number of successfully fixed vulnerabilities
                     * @param _successVulCount Number of successfully fixed vulnerabilities
                     * 
                     */
                    void SetSuccessVulCount(const int64_t& _successVulCount);

                    /**
                     * 判断参数 SuccessVulCount 是否已赋值
                     * @return SuccessVulCount 是否已赋值
                     * 
                     */
                    bool SuccessVulCountHasBeenSet() const;

                    /**
                     * 获取Number of vulnerabilities that failed to fix
                     * @return FailVulCount Number of vulnerabilities that failed to fix
                     * 
                     */
                    int64_t GetFailVulCount() const;

                    /**
                     * 设置Number of vulnerabilities that failed to fix
                     * @param _failVulCount Number of vulnerabilities that failed to fix
                     * 
                     */
                    void SetFailVulCount(const int64_t& _failVulCount);

                    /**
                     * 判断参数 FailVulCount 是否已赋值
                     * @return FailVulCount 是否已赋值
                     * 
                     */
                    bool FailVulCountHasBeenSet() const;

                    /**
                     * 获取List of vulnerability names to be fixed
                     * @return VulNames List of vulnerability names to be fixed
                     * 
                     */
                    std::vector<std::string> GetVulNames() const;

                    /**
                     * 设置List of vulnerability names to be fixed
                     * @param _vulNames List of vulnerability names to be fixed
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
                     * 获取Fixing end time
Parameter format: YYYY-MM-DDTHH:mm:ssZ (ISO8601 format).
                     * @return EndTime Fixing end time
Parameter format: YYYY-MM-DDTHH:mm:ssZ (ISO8601 format).
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置Fixing end time
Parameter format: YYYY-MM-DDTHH:mm:ssZ (ISO8601 format).
                     * @param _endTime Fixing end time
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
                     * 获取List of vulnerability dimensional remediation status, status details of each vulnerability
                     * @return VulFixStatusList List of vulnerability dimensional remediation status, status details of each vulnerability
                     * 
                     */
                    std::vector<VulFixStatusItem> GetVulFixStatusList() const;

                    /**
                     * 设置List of vulnerability dimensional remediation status, status details of each vulnerability
                     * @param _vulFixStatusList List of vulnerability dimensional remediation status, status details of each vulnerability
                     * 
                     */
                    void SetVulFixStatusList(const std::vector<VulFixStatusItem>& _vulFixStatusList);

                    /**
                     * 判断参数 VulFixStatusList 是否已赋值
                     * @return VulFixStatusList 是否已赋值
                     * 
                     */
                    bool VulFixStatusListHasBeenSet() const;

                private:

                    /**
                     * Primary key ID of the fix task
                     */
                    int64_t m_id;
                    bool m_idHasBeenSet;

                    /**
                     * Task ID.
                     */
                    int64_t m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * Remediation status
Enumeration values:
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
                     * Repair total number of assets
                     */
                    int64_t m_assetCount;
                    bool m_assetCountHasBeenSet;

                    /**
                     * Number of successful fixes
                     */
                    int64_t m_successCount;
                    bool m_successCountHasBeenSet;

                    /**
                     * FIX_FAILURE count
                     */
                    int64_t m_failCount;
                    bool m_failCountHasBeenSet;

                    /**
                     * Number of hosts in remediation
                     */
                    int64_t m_fixingCount;
                    bool m_fixingCountHasBeenSet;

                    /**
                     * Number in queue (waiting for distribution or snapshot creation)
                     */
                    int64_t m_queueCount;
                    bool m_queueCountHasBeenSet;

                    /**
                     * Progress percentage of the repair
Value range: [0, 100].
Supplemental description: Calculation method is (SuccessCount+FailCount)/AssetCount×100.
                     */
                    int64_t m_progress;
                    bool m_progressHasBeenSet;

                    /**
                     * Number of successfully fixed vulnerabilities
                     */
                    int64_t m_successVulCount;
                    bool m_successVulCountHasBeenSet;

                    /**
                     * Number of vulnerabilities that failed to fix
                     */
                    int64_t m_failVulCount;
                    bool m_failVulCountHasBeenSet;

                    /**
                     * List of vulnerability names to be fixed
                     */
                    std::vector<std::string> m_vulNames;
                    bool m_vulNamesHasBeenSet;

                    /**
                     * Fix startup time
Parameter format: YYYY-MM-DDTHH:mm:ssZ (ISO8601 format).
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * Fixing end time
Parameter format: YYYY-MM-DDTHH:mm:ssZ (ISO8601 format).
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * List of vulnerability dimensional remediation status, status details of each vulnerability
                     */
                    std::vector<VulFixStatusItem> m_vulFixStatusList;
                    bool m_vulFixStatusListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_VULFIXTASKINFO_H_
