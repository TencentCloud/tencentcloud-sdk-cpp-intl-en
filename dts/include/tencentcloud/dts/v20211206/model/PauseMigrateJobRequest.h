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

#ifndef TENCENTCLOUD_DTS_V20211206_MODEL_PAUSEMIGRATEJOBREQUEST_H_
#define TENCENTCLOUD_DTS_V20211206_MODEL_PAUSEMIGRATEJOBREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dts
    {
        namespace V20211206
        {
            namespace Model
            {
                /**
                * PauseMigrateJob request structure.
                */
                class PauseMigrateJobRequest : public AbstractModel
                {
                public:
                    PauseMigrateJobRequest();
                    ~PauseMigrateJobRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Data migration task ID
                     * @return JobId Data migration task ID
                     * 
                     */
                    std::string GetJobId() const;

                    /**
                     * 设置Data migration task ID
                     * @param _jobId Data migration task ID
                     * 
                     */
                    void SetJobId(const std::string& _jobId);

                    /**
                     * 判断参数 JobId 是否已赋值
                     * @return JobId 是否已赋值
                     * 
                     */
                    bool JobIdHasBeenSet() const;

                private:

                    /**
                     * Data migration task ID
                     */
                    std::string m_jobId;
                    bool m_jobIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DTS_V20211206_MODEL_PAUSEMIGRATEJOBREQUEST_H_
