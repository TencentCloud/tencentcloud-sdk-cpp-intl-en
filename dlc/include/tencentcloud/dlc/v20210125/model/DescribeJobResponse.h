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

#ifndef TENCENTCLOUD_DLC_V20210125_MODEL_DESCRIBEJOBRESPONSE_H_
#define TENCENTCLOUD_DLC_V20210125_MODEL_DESCRIBEJOBRESPONSE_H_

#include <string>
#include <vector>
#include <map>
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
                * DescribeJob response structure.
                */
                class DescribeJobResponse : public AbstractModel
                {
                public:
                    DescribeJobResponse();
                    ~DescribeJobResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Job name
                     * @return JobName Job name
                     * 
                     */
                    std::string GetJobName() const;

                    /**
                     * 判断参数 JobName 是否已赋值
                     * @return JobName 是否已赋值
                     * 
                     */
                    bool JobNameHasBeenSet() const;

                    /**
                     * 获取Task statistics information.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return StatisticInfo Task statistics information.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    StatisticInfo GetStatisticInfo() const;

                    /**
                     * 判断参数 StatisticInfo 是否已赋值
                     * @return StatisticInfo 是否已赋值
                     * 
                     */
                    bool StatisticInfoHasBeenSet() const;

                    /**
                     * 获取Job configuration
                     * @return JobConfiguration Job configuration
                     * 
                     */
                    std::string GetJobConfiguration() const;

                    /**
                     * 判断参数 JobConfiguration 是否已赋值
                     * @return JobConfiguration 是否已赋值
                     * 
                     */
                    bool JobConfigurationHasBeenSet() const;

                    /**
                     * 获取Job status:
                     * @return JobStatus Job status:
                     * 
                     */
                    int64_t GetJobStatus() const;

                    /**
                     * 判断参数 JobStatus 是否已赋值
                     * @return JobStatus 是否已赋值
                     * 
                     */
                    bool JobStatusHasBeenSet() const;

                private:

                    /**
                     * Job name
                     */
                    std::string m_jobName;
                    bool m_jobNameHasBeenSet;

                    /**
                     * Task statistics information.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    StatisticInfo m_statisticInfo;
                    bool m_statisticInfoHasBeenSet;

                    /**
                     * Job configuration
                     */
                    std::string m_jobConfiguration;
                    bool m_jobConfigurationHasBeenSet;

                    /**
                     * Job status:
                     */
                    int64_t m_jobStatus;
                    bool m_jobStatusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DLC_V20210125_MODEL_DESCRIBEJOBRESPONSE_H_
