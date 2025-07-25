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

#ifndef TENCENTCLOUD_BATCH_V20170312_MODEL_RETRYJOBSREQUEST_H_
#define TENCENTCLOUD_BATCH_V20170312_MODEL_RETRYJOBSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Batch
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * RetryJobs request structure.
                */
                class RetryJobsRequest : public AbstractModel
                {
                public:
                    RetryJobsRequest();
                    ~RetryJobsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取List of job IDs.
                     * @return JobIds List of job IDs.
                     * 
                     */
                    std::vector<std::string> GetJobIds() const;

                    /**
                     * 设置List of job IDs.
                     * @param _jobIds List of job IDs.
                     * 
                     */
                    void SetJobIds(const std::vector<std::string>& _jobIds);

                    /**
                     * 判断参数 JobIds 是否已赋值
                     * @return JobIds 是否已赋值
                     * 
                     */
                    bool JobIdsHasBeenSet() const;

                private:

                    /**
                     * List of job IDs.
                     */
                    std::vector<std::string> m_jobIds;
                    bool m_jobIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BATCH_V20170312_MODEL_RETRYJOBSREQUEST_H_
