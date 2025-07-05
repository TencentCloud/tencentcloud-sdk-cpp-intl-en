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
                     * 获取Report name
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @return TaskLogName Report name
Note: This field may return·null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetTaskLogName() const;

                    /**
                     * 设置Report name
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @param _taskLogName Report name
Note: This field may return·null, indicating that no valid values can be obtained.
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
                     * 获取Number of associated assets
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @return AssetsNumber Number of associated assets
Note: This field may return·null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetAssetsNumber() const;

                    /**
                     * 设置Number of associated assets
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @param _assetsNumber Number of associated assets
Note: This field may return·null, indicating that no valid values can be obtained.
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
                     * 获取Number of risks
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @return RiskNumber Number of risks
Note: This field may return·null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetRiskNumber() const;

                    /**
                     * 设置Number of risks
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @param _riskNumber Number of risks
Note: This field may return·null, indicating that no valid values can be obtained.
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
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @return Time Report generation time
Note: This field may return·null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetTime() const;

                    /**
                     * 设置Report generation time
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @param _time Report generation time
Note: This field may return·null, indicating that no valid values can be obtained.
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
                     * 获取Task status. `0`: Initial value; `1`: Scanning; `2`: Completed; `3`: Failed; `4`: Stopped; `5`: Paused; `6`: Retried
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @return Status Task status. `0`: Initial value; `1`: Scanning; `2`: Completed; `3`: Failed; `4`: Stopped; `5`: Paused; `6`: Retried
Note: This field may return·null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置Task status. `0`: Initial value; `1`: Scanning; `2`: Completed; `3`: Failed; `4`: Stopped; `5`: Paused; `6`: Retried
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @param _status Task status. `0`: Initial value; `1`: Scanning; `2`: Completed; `3`: Failed; `4`: Stopped; `5`: Paused; `6`: Retried
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
                     * 获取Name of the associated task
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @return TaskName Name of the associated task
Note: This field may return·null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetTaskName() const;

                    /**
                     * 设置Name of the associated task
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @param _taskName Name of the associated task
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
                     * 获取Scan start time
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @return StartTime Scan start time
Note: This field may return·null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置Scan start time
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @param _startTime Scan start time
Note: This field may return·null, indicating that no valid values can be obtained.
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
                     * 获取Scan task ID
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @return TaskCenterTaskId Scan task ID
Note: This field may return·null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetTaskCenterTaskId() const;

                    /**
                     * 设置Scan task ID
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @param _taskCenterTaskId Scan task ID
Note: This field may return·null, indicating that no valid values can be obtained.
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

                    /**
                     * 获取Report type: `1`: Health check report; `2`: Daily report; `3`: Weekly report; `4`: Monthly report
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @return ReportType Report type: `1`: Health check report; `2`: Daily report; `3`: Weekly report; `4`: Monthly report
Note: This field may return·null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetReportType() const;

                    /**
                     * 设置Report type: `1`: Health check report; `2`: Daily report; `3`: Weekly report; `4`: Monthly report
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @param _reportType Report type: `1`: Health check report; `2`: Daily report; `3`: Weekly report; `4`: Monthly report
Note: This field may return·null, indicating that no valid values can be obtained.
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
                     * 获取Report template ID
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @return TemplateId Report template ID
Note: This field may return·null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetTemplateId() const;

                    /**
                     * 设置Report template ID
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @param _templateId Report template ID
Note: This field may return·null, indicating that no valid values can be obtained.
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
                     * Report name
Note: This field may return·null, indicating that no valid values can be obtained.
                     */
                    std::string m_taskLogName;
                    bool m_taskLogNameHasBeenSet;

                    /**
                     * Report ID.
                     */
                    std::string m_taskLogId;
                    bool m_taskLogIdHasBeenSet;

                    /**
                     * Number of associated assets
Note: This field may return·null, indicating that no valid values can be obtained.
                     */
                    int64_t m_assetsNumber;
                    bool m_assetsNumberHasBeenSet;

                    /**
                     * Number of risks
Note: This field may return·null, indicating that no valid values can be obtained.
                     */
                    int64_t m_riskNumber;
                    bool m_riskNumberHasBeenSet;

                    /**
                     * Report generation time
Note: This field may return·null, indicating that no valid values can be obtained.
                     */
                    std::string m_time;
                    bool m_timeHasBeenSet;

                    /**
                     * Task status. `0`: Initial value; `1`: Scanning; `2`: Completed; `3`: Failed; `4`: Stopped; `5`: Paused; `6`: Retried
Note: This field may return·null, indicating that no valid values can be obtained.
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Name of the associated task
Note: This field may return·null, indicating that no valid values can be obtained.
                     */
                    std::string m_taskName;
                    bool m_taskNameHasBeenSet;

                    /**
                     * Scan start time
Note: This field may return·null, indicating that no valid values can be obtained.
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * Scan task ID
Note: This field may return·null, indicating that no valid values can be obtained.
                     */
                    std::string m_taskCenterTaskId;
                    bool m_taskCenterTaskIdHasBeenSet;

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

                    /**
                     * Report type: `1`: Health check report; `2`: Daily report; `3`: Weekly report; `4`: Monthly report
Note: This field may return·null, indicating that no valid values can be obtained.
                     */
                    int64_t m_reportType;
                    bool m_reportTypeHasBeenSet;

                    /**
                     * Report template ID
Note: This field may return·null, indicating that no valid values can be obtained.
                     */
                    int64_t m_templateId;
                    bool m_templateIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_TASKLOGINFO_H_
