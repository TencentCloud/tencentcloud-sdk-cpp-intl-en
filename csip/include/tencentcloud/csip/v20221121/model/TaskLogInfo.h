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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_TASKLOGINFO_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_TASKLOGINFO_H_

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
                * Task report information
                */
                class TaskLogInfo : public AbstractModel
                {
                public:
                    TaskLogInfo();
                    ~TaskLogInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取report name
                     * @return TaskLogName report name
                     * 
                     */
                    std::string GetTaskLogName() const;

                    /**
                     * 设置report name
                     * @param _taskLogName report name
                     * 
                     */
                    void SetTaskLogName(const std::string& _taskLogName);

                    /**
                     * 判断参数 TaskLogName 是否已赋值
                     * @return TaskLogName 是否已赋值
                     * 
                     */
                    bool TaskLogNameHasBeenSet() const;

                    /**
                     * 获取Report ID.
                     * @return TaskLogId Report ID.
                     * 
                     */
                    std::string GetTaskLogId() const;

                    /**
                     * 设置Report ID.
                     * @param _taskLogId Report ID.
                     * 
                     */
                    void SetTaskLogId(const std::string& _taskLogId);

                    /**
                     * 判断参数 TaskLogId 是否已赋值
                     * @return TaskLogId 是否已赋值
                     * 
                     */
                    bool TaskLogIdHasBeenSet() const;

                    /**
                     * 获取Associated Asset Count
                     * @return AssetsNumber Associated Asset Count
                     * 
                     */
                    int64_t GetAssetsNumber() const;

                    /**
                     * 设置Associated Asset Count
                     * @param _assetsNumber Associated Asset Count
                     * 
                     */
                    void SetAssetsNumber(const int64_t& _assetsNumber);

                    /**
                     * 判断参数 AssetsNumber 是否已赋值
                     * @return AssetsNumber 是否已赋值
                     * 
                     */
                    bool AssetsNumberHasBeenSet() const;

                    /**
                     * 获取Security Risk Count
                     * @return RiskNumber Security Risk Count
                     * 
                     */
                    int64_t GetRiskNumber() const;

                    /**
                     * 设置Security Risk Count
                     * @param _riskNumber Security Risk Count
                     * 
                     */
                    void SetRiskNumber(const int64_t& _riskNumber);

                    /**
                     * 判断参数 RiskNumber 是否已赋值
                     * @return RiskNumber 是否已赋值
                     * 
                     */
                    bool RiskNumberHasBeenSet() const;

                    /**
                     * 获取Report generation time
                     * @return Time Report generation time
                     * 
                     */
                    std::string GetTime() const;

                    /**
                     * 设置Report generation time
                     * @param _time Report generation time
                     * 
                     */
                    void SetTime(const std::string& _time);

                    /**
                     * 判断参数 Time 是否已赋值
                     * @return Time 是否已赋值
                     * 
                     */
                    bool TimeHasBeenSet() const;

                    /**
                     * 获取Task Status Code. 0-Initial Value; 1-Scanning; 2-Scan Completed; 3-Scan Error; 4-Stopped; 5-Halted; 6-Task Has Been Restarted.
                     * @return Status Task Status Code. 0-Initial Value; 1-Scanning; 2-Scan Completed; 3-Scan Error; 4-Stopped; 5-Halted; 6-Task Has Been Restarted.
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置Task Status Code. 0-Initial Value; 1-Scanning; 2-Scan Completed; 3-Scan Error; 4-Stopped; 5-Halted; 6-Task Has Been Restarted.
                     * @param _status Task Status Code. 0-Initial Value; 1-Scanning; 2-Scan Completed; 3-Scan Error; 4-Stopped; 5-Halted; 6-Task Has Been Restarted.
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
                     * 获取Associated Task Name
                     * @return TaskName Associated Task Name
                     * 
                     */
                    std::string GetTaskName() const;

                    /**
                     * 设置Associated Task Name
                     * @param _taskName Associated Task Name
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
                     * 获取Scan start time
                     * @return StartTime Scan start time
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置Scan start time
                     * @param _startTime Scan start time
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
                     * 获取Task Center Scan Task ID
                     * @return TaskCenterTaskId Task Center Scan Task ID
                     * 
                     */
                    std::string GetTaskCenterTaskId() const;

                    /**
                     * 设置Task Center Scan Task ID
                     * @param _taskCenterTaskId Task Center Scan Task ID
                     * 
                     */
                    void SetTaskCenterTaskId(const std::string& _taskCenterTaskId);

                    /**
                     * 判断参数 TaskCenterTaskId 是否已赋值
                     * @return TaskCenterTaskId 是否已赋值
                     * 
                     */
                    bool TaskCenterTaskIdHasBeenSet() const;

                    /**
                     * 获取Tenant ID
                     * @return AppId Tenant ID
                     * 
                     */
                    std::string GetAppId() const;

                    /**
                     * 设置Tenant ID
                     * @param _appId Tenant ID
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
                     * 获取Host Account ID
                     * @return UIN Host Account ID
                     * 
                     */
                    std::string GetUIN() const;

                    /**
                     * 设置Host Account ID
                     * @param _uIN Host Account ID
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

                    /**
                     * 获取Report Type. 1: Security Checkup; 2: Daily Report; 3: Weekly Report; 4: Monthly Report.
                     * @return ReportType Report Type. 1: Security Checkup; 2: Daily Report; 3: Weekly Report; 4: Monthly Report.
                     * 
                     */
                    int64_t GetReportType() const;

                    /**
                     * 设置Report Type. 1: Security Checkup; 2: Daily Report; 3: Weekly Report; 4: Monthly Report.
                     * @param _reportType Report Type. 1: Security Checkup; 2: Daily Report; 3: Weekly Report; 4: Monthly Report.
                     * 
                     */
                    void SetReportType(const int64_t& _reportType);

                    /**
                     * 判断参数 ReportType 是否已赋值
                     * @return ReportType 是否已赋值
                     * 
                     */
                    bool ReportTypeHasBeenSet() const;

                    /**
                     * 获取Report Template ID
                     * @return TemplateId Report Template ID
                     * 
                     */
                    int64_t GetTemplateId() const;

                    /**
                     * 设置Report Template ID
                     * @param _templateId Report Template ID
                     * 
                     */
                    void SetTemplateId(const int64_t& _templateId);

                    /**
                     * 判断参数 TemplateId 是否已赋值
                     * @return TemplateId 是否已赋值
                     * 
                     */
                    bool TemplateIdHasBeenSet() const;

                private:

                    /**
                     * report name
                     */
                    std::string m_taskLogName;
                    bool m_taskLogNameHasBeenSet;

                    /**
                     * Report ID.
                     */
                    std::string m_taskLogId;
                    bool m_taskLogIdHasBeenSet;

                    /**
                     * Associated Asset Count
                     */
                    int64_t m_assetsNumber;
                    bool m_assetsNumberHasBeenSet;

                    /**
                     * Security Risk Count
                     */
                    int64_t m_riskNumber;
                    bool m_riskNumberHasBeenSet;

                    /**
                     * Report generation time
                     */
                    std::string m_time;
                    bool m_timeHasBeenSet;

                    /**
                     * Task Status Code. 0-Initial Value; 1-Scanning; 2-Scan Completed; 3-Scan Error; 4-Stopped; 5-Halted; 6-Task Has Been Restarted.
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Associated Task Name
                     */
                    std::string m_taskName;
                    bool m_taskNameHasBeenSet;

                    /**
                     * Scan start time
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * Task Center Scan Task ID
                     */
                    std::string m_taskCenterTaskId;
                    bool m_taskCenterTaskIdHasBeenSet;

                    /**
                     * Tenant ID
                     */
                    std::string m_appId;
                    bool m_appIdHasBeenSet;

                    /**
                     * Host Account ID
                     */
                    std::string m_uIN;
                    bool m_uINHasBeenSet;

                    /**
                     * User name
                     */
                    std::string m_userName;
                    bool m_userNameHasBeenSet;

                    /**
                     * Report Type. 1: Security Checkup; 2: Daily Report; 3: Weekly Report; 4: Monthly Report.
                     */
                    int64_t m_reportType;
                    bool m_reportTypeHasBeenSet;

                    /**
                     * Report Template ID
                     */
                    int64_t m_templateId;
                    bool m_templateIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_TASKLOGINFO_H_
