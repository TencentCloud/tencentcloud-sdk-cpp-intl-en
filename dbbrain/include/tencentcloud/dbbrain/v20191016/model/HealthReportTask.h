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

#ifndef TENCENTCLOUD_DBBRAIN_V20191016_MODEL_HEALTHREPORTTASK_H_
#define TENCENTCLOUD_DBBRAIN_V20191016_MODEL_HEALTHREPORTTASK_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dbbrain/v20191016/model/InstanceBasicInfo.h>
#include <tencentcloud/dbbrain/v20191016/model/HealthStatus.h>


namespace TencentCloud
{
    namespace Dbbrain
    {
        namespace V20191016
        {
            namespace Model
            {
                /**
                * Details of health report tasks.
                */
                class HealthReportTask : public AbstractModel
                {
                public:
                    HealthReportTask();
                    ~HealthReportTask() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Async task request ID.
                     * @return AsyncRequestId Async task request ID.
                     * 
                     */
                    int64_t GetAsyncRequestId() const;

                    /**
                     * 设置Async task request ID.
                     * @param _asyncRequestId Async task request ID.
                     * 
                     */
                    void SetAsyncRequestId(const int64_t& _asyncRequestId);

                    /**
                     * 判断参数 AsyncRequestId 是否已赋值
                     * @return AsyncRequestId 是否已赋值
                     * 
                     */
                    bool AsyncRequestIdHasBeenSet() const;

                    /**
                     * 获取Source that triggers the task. Valid values: `DAILY_INSPECTION` (instance inspection), `SCHEDULED` (timed generation), and `MANUAL` (manual trigger).
                     * @return Source Source that triggers the task. Valid values: `DAILY_INSPECTION` (instance inspection), `SCHEDULED` (timed generation), and `MANUAL` (manual trigger).
                     * 
                     */
                    std::string GetSource() const;

                    /**
                     * 设置Source that triggers the task. Valid values: `DAILY_INSPECTION` (instance inspection), `SCHEDULED` (timed generation), and `MANUAL` (manual trigger).
                     * @param _source Source that triggers the task. Valid values: `DAILY_INSPECTION` (instance inspection), `SCHEDULED` (timed generation), and `MANUAL` (manual trigger).
                     * 
                     */
                    void SetSource(const std::string& _source);

                    /**
                     * 判断参数 Source 是否已赋值
                     * @return Source 是否已赋值
                     * 
                     */
                    bool SourceHasBeenSet() const;

                    /**
                     * 获取Task progress in %.
                     * @return Progress Task progress in %.
                     * 
                     */
                    int64_t GetProgress() const;

                    /**
                     * 设置Task progress in %.
                     * @param _progress Task progress in %.
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
                     * 获取Task creation time.
                     * @return CreateTime Task creation time.
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置Task creation time.
                     * @param _createTime Task creation time.
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
                     * 获取Task start time.
                     * @return StartTime Task start time.
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置Task start time.
                     * @param _startTime Task start time.
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
                     * 获取Task end time.
                     * @return EndTime Task end time.
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置Task end time.
                     * @param _endTime Task end time.
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
                     * 获取Basic information about the instance to which the task belongs.
                     * @return InstanceInfo Basic information about the instance to which the task belongs.
                     * 
                     */
                    InstanceBasicInfo GetInstanceInfo() const;

                    /**
                     * 设置Basic information about the instance to which the task belongs.
                     * @param _instanceInfo Basic information about the instance to which the task belongs.
                     * 
                     */
                    void SetInstanceInfo(const InstanceBasicInfo& _instanceInfo);

                    /**
                     * 判断参数 InstanceInfo 是否已赋值
                     * @return InstanceInfo 是否已赋值
                     * 
                     */
                    bool InstanceInfoHasBeenSet() const;

                    /**
                     * 获取Health information in a health report.
                     * @return HealthStatus Health information in a health report.
                     * 
                     */
                    HealthStatus GetHealthStatus() const;

                    /**
                     * 设置Health information in a health report.
                     * @param _healthStatus Health information in a health report.
                     * 
                     */
                    void SetHealthStatus(const HealthStatus& _healthStatus);

                    /**
                     * 判断参数 HealthStatus 是否已赋值
                     * @return HealthStatus 是否已赋值
                     * 
                     */
                    bool HealthStatusHasBeenSet() const;

                private:

                    /**
                     * Async task request ID.
                     */
                    int64_t m_asyncRequestId;
                    bool m_asyncRequestIdHasBeenSet;

                    /**
                     * Source that triggers the task. Valid values: `DAILY_INSPECTION` (instance inspection), `SCHEDULED` (timed generation), and `MANUAL` (manual trigger).
                     */
                    std::string m_source;
                    bool m_sourceHasBeenSet;

                    /**
                     * Task progress in %.
                     */
                    int64_t m_progress;
                    bool m_progressHasBeenSet;

                    /**
                     * Task creation time.
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * Task start time.
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * Task end time.
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * Basic information about the instance to which the task belongs.
                     */
                    InstanceBasicInfo m_instanceInfo;
                    bool m_instanceInfoHasBeenSet;

                    /**
                     * Health information in a health report.
                     */
                    HealthStatus m_healthStatus;
                    bool m_healthStatusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DBBRAIN_V20191016_MODEL_HEALTHREPORTTASK_H_
