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

#ifndef TENCENTCLOUD_DLC_V20210125_MODEL_DESCRIBESPARKAPPJOBREQUEST_H_
#define TENCENTCLOUD_DLC_V20210125_MODEL_DESCRIBESPARKAPPJOBREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dlc
    {
        namespace V20210125
        {
            namespace Model
            {
                /**
                * DescribeSparkAppJob request structure.
                */
                class DescribeSparkAppJobRequest : public AbstractModel
                {
                public:
                    DescribeSparkAppJobRequest();
                    ~DescribeSparkAppJobRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Spark job ID. If it co-exists with `JobName`, `JobName` will become invalid.
                     * @return JobId Spark job ID. If it co-exists with `JobName`, `JobName` will become invalid.
                     * 
                     */
                    std::string GetJobId() const;

                    /**
                     * 设置Spark job ID. If it co-exists with `JobName`, `JobName` will become invalid.
                     * @param _jobId Spark job ID. If it co-exists with `JobName`, `JobName` will become invalid.
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
                     * 获取Spark job name
                     * @return JobName Spark job name
                     * 
                     */
                    std::string GetJobName() const;

                    /**
                     * 设置Spark job name
                     * @param _jobName Spark job name
                     * 
                     */
                    void SetJobName(const std::string& _jobName);

                    /**
                     * 判断参数 JobName 是否已赋值
                     * @return JobName 是否已赋值
                     * 
                     */
                    bool JobNameHasBeenSet() const;

                private:

                    /**
                     * Spark job ID. If it co-exists with `JobName`, `JobName` will become invalid.
                     */
                    std::string m_jobId;
                    bool m_jobIdHasBeenSet;

                    /**
                     * Spark job name
                     */
                    std::string m_jobName;
                    bool m_jobNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DLC_V20210125_MODEL_DESCRIBESPARKAPPJOBREQUEST_H_
