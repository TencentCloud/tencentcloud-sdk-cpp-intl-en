/*
 * Copyright (c) 2017-2019 THL A29 Limited, a Tencent company. All Rights Reserved.
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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_SCANTASKINFO_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_SCANTASKINFO_H_

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
                * Details of a scan task
                */
                class ScanTaskInfo : public AbstractModel
                {
                public:
                    ScanTaskInfo();
                    ~ScanTaskInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Task ID Id
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @return TaskId Task ID Id
Note: This field may return·null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetTaskId() const;

                    /**
                     * 设置Task ID Id
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @param _taskId Task ID Id
Note: This field may return·null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetTaskId(const std::string& _taskId);

                    /**
                     * 判断参数 TaskId 是否已赋值
                     * @return TaskId 是否已赋值
                     * 
                     */
                    bool TaskIdHasBeenSet() const;

                    /**
                     * 获取Task name
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @return TaskName Task name
Note: This field may return·null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetTaskName() const;

                    /**
                     * 设置Task name
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @param _taskName Task name
Note: This field may return·null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetTaskName(const std::string& _taskName);

                    /**
                     * 判断参数 TaskName 是否已赋值
                     * @return TaskName 是否已赋值
                     * 
                     */
                    bool TaskNameHasBeenSet() const;

                    /**
                     * 获取Task status. `1`: Pending start; `2`: Scanning; `3`: Failed; `4`: Completed
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @return Status Task status. `1`: Pending start; `2`: Scanning; `3`: Failed; `4`: Completed
Note: This field may return·null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置Task status. `1`: Pending start; `2`: Scanning; `3`: Failed; `4`: Completed
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @param _status Task status. `1`: Pending start; `2`: Scanning; `3`: Failed; `4`: Completed
Note: This field may return·null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetStatus(const int64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取Task progress
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @return Progress Task progress
Note: This field may return·null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetProgress() const;

                    /**
                     * 设置Task progress
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @param _progress Task progress
Note: This field may return·null, indicating that no valid values can be obtained.
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
                     * 获取Displayed time point
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @return TaskTime Displayed time point
Note: This field may return·null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetTaskTime() const;

                    /**
                     * 设置Displayed time point
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @param _taskTime Displayed time point
Note: This field may return·null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetTaskTime(const std::string& _taskTime);

                    /**
                     * 判断参数 TaskTime 是否已赋值
                     * @return TaskTime 是否已赋值
                     * 
                     */
                    bool TaskTimeHasBeenSet() const;

                    /**
                     * 获取Report ID
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @return ReportId Report ID
Note: This field may return·null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetReportId() const;

                    /**
                     * 设置Report ID
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @param _reportId Report ID
Note: This field may return·null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetReportId(const std::string& _reportId);

                    /**
                     * 判断参数 ReportId 是否已赋值
                     * @return ReportId 是否已赋值
                     * 
                     */
                    bool ReportIdHasBeenSet() const;

                    /**
                     * 获取Report name
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @return ReportName Report name
Note: This field may return·null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetReportName() const;

                    /**
                     * 设置Report name
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @param _reportName Report name
Note: This field may return·null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetReportName(const std::string& _reportName);

                    /**
                     * 判断参数 ReportName 是否已赋值
                     * @return ReportName 是否已赋值
                     * 
                     */
                    bool ReportNameHasBeenSet() const;

                    /**
                     * 获取Task type. `0`: Scheduled task, `1`: Scan immediately; `2`: Scanned at the specified time; `3`: Custom. 
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @return ScanPlan Task type. `0`: Scheduled task, `1`: Scan immediately; `2`: Scanned at the specified time; `3`: Custom. 
Note: This field may return·null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetScanPlan() const;

                    /**
                     * 设置Task type. `0`: Scheduled task, `1`: Scan immediately; `2`: Scanned at the specified time; `3`: Custom. 
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @param _scanPlan Task type. `0`: Scheduled task, `1`: Scan immediately; `2`: Scanned at the specified time; `3`: Custom. 
Note: This field may return·null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetScanPlan(const int64_t& _scanPlan);

                    /**
                     * 判断参数 ScanPlan 是否已赋值
                     * @return ScanPlan 是否已赋值
                     * 
                     */
                    bool ScanPlanHasBeenSet() const;

                    /**
                     * 获取Number of associated assets
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @return AssetCount Number of associated assets
Note: This field may return·null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetAssetCount() const;

                    /**
                     * 设置Number of associated assets
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @param _assetCount Number of associated assets
Note: This field may return·null, indicating that no valid values can be obtained.
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
                     * 获取User AppId
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @return AppId User AppId
Note: This field may return·null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetAppId() const;

                    /**
                     * 设置User AppId
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @param _appId User AppId
Note: This field may return·null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetAppId(const std::string& _appId);

                    /**
                     * 判断参数 AppId 是否已赋值
                     * @return AppId 是否已赋值
                     * 
                     */
                    bool AppIdHasBeenSet() const;

                    /**
                     * 获取User UIN
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @return UIN User UIN
Note: This field may return·null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetUIN() const;

                    /**
                     * 设置User UIN
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @param _uIN User UIN
Note: This field may return·null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetUIN(const std::string& _uIN);

                    /**
                     * 判断参数 UIN 是否已赋值
                     * @return UIN 是否已赋值
                     * 
                     */
                    bool UINHasBeenSet() const;

                    /**
                     * 获取User name.
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @return UserName User name.
Note: This field may return·null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetUserName() const;

                    /**
                     * 设置User name.
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @param _userName User name.
Note: This field may return·null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetUserName(const std::string& _userName);

                    /**
                     * 判断参数 UserName 是否已赋值
                     * @return UserName 是否已赋值
                     * 
                     */
                    bool UserNameHasBeenSet() const;

                private:

                    /**
                     * Task ID Id
Note: This field may return·null, indicating that no valid values can be obtained.
                     */
                    std::string m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * Task name
Note: This field may return·null, indicating that no valid values can be obtained.
                     */
                    std::string m_taskName;
                    bool m_taskNameHasBeenSet;

                    /**
                     * Task status. `1`: Pending start; `2`: Scanning; `3`: Failed; `4`: Completed
Note: This field may return·null, indicating that no valid values can be obtained.
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Task progress
Note: This field may return·null, indicating that no valid values can be obtained.
                     */
                    int64_t m_progress;
                    bool m_progressHasBeenSet;

                    /**
                     * Displayed time point
Note: This field may return·null, indicating that no valid values can be obtained.
                     */
                    std::string m_taskTime;
                    bool m_taskTimeHasBeenSet;

                    /**
                     * Report ID
Note: This field may return·null, indicating that no valid values can be obtained.
                     */
                    std::string m_reportId;
                    bool m_reportIdHasBeenSet;

                    /**
                     * Report name
Note: This field may return·null, indicating that no valid values can be obtained.
                     */
                    std::string m_reportName;
                    bool m_reportNameHasBeenSet;

                    /**
                     * Task type. `0`: Scheduled task, `1`: Scan immediately; `2`: Scanned at the specified time; `3`: Custom. 
Note: This field may return·null, indicating that no valid values can be obtained.
                     */
                    int64_t m_scanPlan;
                    bool m_scanPlanHasBeenSet;

                    /**
                     * Number of associated assets
Note: This field may return·null, indicating that no valid values can be obtained.
                     */
                    int64_t m_assetCount;
                    bool m_assetCountHasBeenSet;

                    /**
                     * User AppId
Note: This field may return·null, indicating that no valid values can be obtained.
                     */
                    std::string m_appId;
                    bool m_appIdHasBeenSet;

                    /**
                     * User UIN
Note: This field may return·null, indicating that no valid values can be obtained.
                     */
                    std::string m_uIN;
                    bool m_uINHasBeenSet;

                    /**
                     * User name.
Note: This field may return·null, indicating that no valid values can be obtained.
                     */
                    std::string m_userName;
                    bool m_userNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_SCANTASKINFO_H_
