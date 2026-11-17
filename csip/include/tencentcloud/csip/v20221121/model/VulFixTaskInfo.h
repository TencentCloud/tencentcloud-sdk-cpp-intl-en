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
                * Vulnerability repair task summary information
                */
                class VulFixTaskInfo : public AbstractModel
                {
                public:
                    VulFixTaskInfo();
                    ~VulFixTaskInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Repair task primary key ID
                     * @return Id Repair task primary key ID
                     * 
                     */
                    int64_t GetId() const;

                    /**
                     * 设置Repair task primary key ID
                     * @param _id Repair task primary key ID
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
3: Partially fixed
4: All fix failures
5: Stop repair
                     * @return FixStatus Remediation status
Enumeration values:
0: initialization
1: In remediation
2: Repair successful
3: Partially fixed
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
3: Partially fixed
4: All fix failures
5: Stop repair
                     * @param _fixStatus Remediation status
Enumeration values:
0: initialization
1: In remediation
2: Repair successful
3: Partially fixed
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
                     * 获取Total number of repaired assets
                     * @return AssetCount Total number of repaired assets
                     * 
                     */
                    int64_t GetAssetCount() const;

                    /**
                     * 设置Total number of repaired assets
                     * @param _assetCount Total number of repaired assets
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
                     * 获取Number of failed fixes
                     * @return FailCount Number of failed fixes
                     * 
                     */
                    int64_t GetFailCount() const;

                    /**
                     * 设置Number of failed fixes
                     * @param _failCount Number of failed fixes
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
                     * 获取Repair progress percentage
Value range: [0, 100].
Supplemental description: Calculation method: (SuccessCount+FailCount)/AssetCount×100
                     * @return Progress Repair progress percentage
Value range: [0, 100].
Supplemental description: Calculation method: (SuccessCount+FailCount)/AssetCount×100
                     * 
                     */
                    int64_t GetProgress() const;

                    /**
                     * 设置Repair progress percentage
Value range: [0, 100].
Supplemental description: Calculation method: (SuccessCount+FailCount)/AssetCount×100
                     * @param _progress Repair progress percentage
Value range: [0, 100].
Supplemental description: Calculation method: (SuccessCount+FailCount)/AssetCount×100
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
                     * 获取Number of vulnerabilities with successful fixes
                     * @return SuccessVulCount Number of vulnerabilities with successful fixes
                     * 
                     */
                    int64_t GetSuccessVulCount() const;

                    /**
                     * 设置Number of vulnerabilities with successful fixes
                     * @param _successVulCount Number of vulnerabilities with successful fixes
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
                     * 获取List of fixed vulnerability names
                     * @return VulNames List of fixed vulnerability names
                     * 
                     */
                    std::vector<std::string> GetVulNames() const;

                    /**
                     * 设置List of fixed vulnerability names
                     * @param _vulNames List of fixed vulnerability names
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
                     * 获取Startup time for repair
Parameter format: YYYY-MM-DDTHH:mm:ssZ (ISO8601 format)
                     * @return StartTime Startup time for repair
Parameter format: YYYY-MM-DDTHH:mm:ssZ (ISO8601 format)
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置Startup time for repair
Parameter format: YYYY-MM-DDTHH:mm:ssZ (ISO8601 format)
                     * @param _startTime Startup time for repair
Parameter format: YYYY-MM-DDTHH:mm:ssZ (ISO8601 format)
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
                     * 获取Repair end time
Parameter format: YYYY-MM-DDTHH:mm:ssZ (ISO8601 format)
                     * @return EndTime Repair end time
Parameter format: YYYY-MM-DDTHH:mm:ssZ (ISO8601 format)
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置Repair end time
Parameter format: YYYY-MM-DDTHH:mm:ssZ (ISO8601 format)
                     * @param _endTime Repair end time
Parameter format: YYYY-MM-DDTHH:mm:ssZ (ISO8601 format)
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
                     * 获取List of vulnerability dimensional remediation statuses, with status details for each vulnerability
                     * @return VulFixStatusList List of vulnerability dimensional remediation statuses, with status details for each vulnerability
                     * 
                     */
                    std::vector<VulFixStatusItem> GetVulFixStatusList() const;

                    /**
                     * 设置List of vulnerability dimensional remediation statuses, with status details for each vulnerability
                     * @param _vulFixStatusList List of vulnerability dimensional remediation statuses, with status details for each vulnerability
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
                     * Repair task primary key ID
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
3: Partially fixed
4: All fix failures
5: Stop repair
                     */
                    int64_t m_fixStatus;
                    bool m_fixStatusHasBeenSet;

                    /**
                     * Total number of repaired assets
                     */
                    int64_t m_assetCount;
                    bool m_assetCountHasBeenSet;

                    /**
                     * Number of successful fixes
                     */
                    int64_t m_successCount;
                    bool m_successCountHasBeenSet;

                    /**
                     * Number of failed fixes
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
                     * Repair progress percentage
Value range: [0, 100].
Supplemental description: Calculation method: (SuccessCount+FailCount)/AssetCount×100
                     */
                    int64_t m_progress;
                    bool m_progressHasBeenSet;

                    /**
                     * Number of vulnerabilities with successful fixes
                     */
                    int64_t m_successVulCount;
                    bool m_successVulCountHasBeenSet;

                    /**
                     * Number of vulnerabilities that failed to fix
                     */
                    int64_t m_failVulCount;
                    bool m_failVulCountHasBeenSet;

                    /**
                     * List of fixed vulnerability names
                     */
                    std::vector<std::string> m_vulNames;
                    bool m_vulNamesHasBeenSet;

                    /**
                     * Startup time for repair
Parameter format: YYYY-MM-DDTHH:mm:ssZ (ISO8601 format)
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * Repair end time
Parameter format: YYYY-MM-DDTHH:mm:ssZ (ISO8601 format)
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * List of vulnerability dimensional remediation statuses, with status details for each vulnerability
                     */
                    std::vector<VulFixStatusItem> m_vulFixStatusList;
                    bool m_vulFixStatusListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_VULFIXTASKINFO_H_
