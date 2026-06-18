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
                     * 获取Task ID
                     * @return TaskId Task ID
                     * 
                     */
                    std::string GetTaskId() const;

                    /**
                     * 设置Task ID
                     * @param _taskId Task ID
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
                     * 获取Task name.
                     * @return TaskName Task name.
                     * 
                     */
                    std::string GetTaskName() const;

                    /**
                     * 设置Task name.
                     * @param _taskName Task name.
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
                     * 获取Task Status Code: 1-Awaiting Start, 2-Scanning, 3-Scan Error, 4-Scan Completed.
                     * @return Status Task Status Code: 1-Awaiting Start, 2-Scanning, 3-Scan Error, 4-Scan Completed.
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置Task Status Code: 1-Awaiting Start, 2-Scanning, 3-Scan Error, 4-Scan Completed.
                     * @param _status Task Status Code: 1-Awaiting Start, 2-Scanning, 3-Scan Error, 4-Scan Completed.
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
                     * @return Progress Task progress
                     * 
                     */
                    int64_t GetProgress() const;

                    /**
                     * 设置Task progress
                     * @param _progress Task progress
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
                     * 获取Task Completion Time
                     * @return TaskTime Task Completion Time
                     * 
                     */
                    std::string GetTaskTime() const;

                    /**
                     * 设置Task Completion Time
                     * @param _taskTime Task Completion Time
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
                     * 获取report ID
                     * @return ReportId report ID
                     * 
                     */
                    std::string GetReportId() const;

                    /**
                     * 设置report ID
                     * @param _reportId report ID
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
                     * 获取report name
                     * @return ReportName report name
                     * 
                     */
                    std::string GetReportName() const;

                    /**
                     * 设置report name
                     * @param _reportName report name
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
                     * 获取Scanning Schedule. 0-Periodic Task; 1-Scan Now; 2-Scheduled Scan; 3-Custom.
                     * @return ScanPlan Scanning Schedule. 0-Periodic Task; 1-Scan Now; 2-Scheduled Scan; 3-Custom.
                     * 
                     */
                    int64_t GetScanPlan() const;

                    /**
                     * 设置Scanning Schedule. 0-Periodic Task; 1-Scan Now; 2-Scheduled Scan; 3-Custom.
                     * @param _scanPlan Scanning Schedule. 0-Periodic Task; 1-Scan Now; 2-Scheduled Scan; 3-Custom.
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
                     * 获取Number of Associated Assets
                     * @return AssetCount Number of Associated Assets
                     * 
                     */
                    int64_t GetAssetCount() const;

                    /**
                     * 设置Number of Associated Assets
                     * @param _assetCount Number of Associated Assets
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
                     * 获取APP ID
                     * @return AppId APP ID
                     * 
                     */
                    std::string GetAppId() const;

                    /**
                     * 设置APP ID
                     * @param _appId APP ID
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
                     * 获取User Host Account ID
                     * @return UIN User Host Account ID
                     * 
                     */
                    std::string GetUIN() const;

                    /**
                     * 设置User Host Account ID
                     * @param _uIN User Host Account ID
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
                     * 获取User name
                     * @return UserName User name
                     * 
                     */
                    std::string GetUserName() const;

                    /**
                     * 设置User name
                     * @param _userName User name
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
                     * Task ID
                     */
                    std::string m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * Task name.
                     */
                    std::string m_taskName;
                    bool m_taskNameHasBeenSet;

                    /**
                     * Task Status Code: 1-Awaiting Start, 2-Scanning, 3-Scan Error, 4-Scan Completed.
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Task progress
                     */
                    int64_t m_progress;
                    bool m_progressHasBeenSet;

                    /**
                     * Task Completion Time
                     */
                    std::string m_taskTime;
                    bool m_taskTimeHasBeenSet;

                    /**
                     * report ID
                     */
                    std::string m_reportId;
                    bool m_reportIdHasBeenSet;

                    /**
                     * report name
                     */
                    std::string m_reportName;
                    bool m_reportNameHasBeenSet;

                    /**
                     * Scanning Schedule. 0-Periodic Task; 1-Scan Now; 2-Scheduled Scan; 3-Custom.
                     */
                    int64_t m_scanPlan;
                    bool m_scanPlanHasBeenSet;

                    /**
                     * Number of Associated Assets
                     */
                    int64_t m_assetCount;
                    bool m_assetCountHasBeenSet;

                    /**
                     * APP ID
                     */
                    std::string m_appId;
                    bool m_appIdHasBeenSet;

                    /**
                     * User Host Account ID
                     */
                    std::string m_uIN;
                    bool m_uINHasBeenSet;

                    /**
                     * User name
                     */
                    std::string m_userName;
                    bool m_userNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_SCANTASKINFO_H_
