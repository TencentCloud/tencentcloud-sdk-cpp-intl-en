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

#ifndef TENCENTCLOUD_DLC_V20210125_MODEL_JOBRESPONSEINFO_H_
#define TENCENTCLOUD_DLC_V20210125_MODEL_JOBRESPONSEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dlc/v20210125/model/StatisticInfo.h>


namespace TencentCloud
{
    namespace Dlc
    {
        namespace V20210125
        {
            namespace Model
            {
                /**
                * Job information
                */
                class JobResponseInfo : public AbstractModel
                {
                public:
                    JobResponseInfo();
                    ~JobResponseInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Job name
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return JobName Job name
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetJobName() const;

                    /**
                     * 设置Job name
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _jobName Job name
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetJobName(const std::string& _jobName);

                    /**
                     * 判断参数 JobName 是否已赋值
                     * @return JobName 是否已赋值
                     * 
                     */
                    bool JobNameHasBeenSet() const;

                    /**
                     * 获取Statistics
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return StatisticInfo Statistics
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    StatisticInfo GetStatisticInfo() const;

                    /**
                     * 设置Statistics
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _statisticInfo Statistics
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetStatisticInfo(const StatisticInfo& _statisticInfo);

                    /**
                     * 判断参数 StatisticInfo 是否已赋值
                     * @return StatisticInfo 是否已赋值
                     * 
                     */
                    bool StatisticInfoHasBeenSet() const;

                    /**
                     * 获取Job configuration
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return JobConfiguration Job configuration
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetJobConfiguration() const;

                    /**
                     * 设置Job configuration
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _jobConfiguration Job configuration
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetJobConfiguration(const std::string& _jobConfiguration);

                    /**
                     * 判断参数 JobConfiguration 是否已赋值
                     * @return JobConfiguration 是否已赋值
                     * 
                     */
                    bool JobConfigurationHasBeenSet() const;

                    /**
                     * 获取The current status of the job: 0: initializing; 1: running; 2: executed; 3: writing data; 4: queuing; -1: execution failed; -3: manually terminated. The job execution result is returned only when the job is successfully executed.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return JobStatus The current status of the job: 0: initializing; 1: running; 2: executed; 3: writing data; 4: queuing; -1: execution failed; -3: manually terminated. The job execution result is returned only when the job is successfully executed.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetJobStatus() const;

                    /**
                     * 设置The current status of the job: 0: initializing; 1: running; 2: executed; 3: writing data; 4: queuing; -1: execution failed; -3: manually terminated. The job execution result is returned only when the job is successfully executed.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _jobStatus The current status of the job: 0: initializing; 1: running; 2: executed; 3: writing data; 4: queuing; -1: execution failed; -3: manually terminated. The job execution result is returned only when the job is successfully executed.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetJobStatus(const int64_t& _jobStatus);

                    /**
                     * 判断参数 JobStatus 是否已赋值
                     * @return JobStatus 是否已赋值
                     * 
                     */
                    bool JobStatusHasBeenSet() const;

                private:

                    /**
                     * Job name
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_jobName;
                    bool m_jobNameHasBeenSet;

                    /**
                     * Statistics
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    StatisticInfo m_statisticInfo;
                    bool m_statisticInfoHasBeenSet;

                    /**
                     * Job configuration
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_jobConfiguration;
                    bool m_jobConfigurationHasBeenSet;

                    /**
                     * The current status of the job: 0: initializing; 1: running; 2: executed; 3: writing data; 4: queuing; -1: execution failed; -3: manually terminated. The job execution result is returned only when the job is successfully executed.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_jobStatus;
                    bool m_jobStatusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DLC_V20210125_MODEL_JOBRESPONSEINFO_H_
