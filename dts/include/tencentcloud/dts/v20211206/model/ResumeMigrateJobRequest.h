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

#ifndef TENCENTCLOUD_DTS_V20211206_MODEL_RESUMEMIGRATEJOBREQUEST_H_
#define TENCENTCLOUD_DTS_V20211206_MODEL_RESUMEMIGRATEJOBREQUEST_H_

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
                * ResumeMigrateJob request structure.
                */
                class ResumeMigrateJobRequest : public AbstractModel
                {
                public:
                    ResumeMigrateJobRequest();
                    ~ResumeMigrateJobRequest() = default;
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

                    /**
                     * 获取Task resumption mode. Valid values: `clearData` (Clearing the target instance data); `overwrite` (Executing the task in overwrite mode); `normal` (Following the normal process without additional operations). `clearData` and `overwrite` are only valid for Redis links and `normal` for non-Redis links.
                     * @return ResumeOption Task resumption mode. Valid values: `clearData` (Clearing the target instance data); `overwrite` (Executing the task in overwrite mode); `normal` (Following the normal process without additional operations). `clearData` and `overwrite` are only valid for Redis links and `normal` for non-Redis links.
                     * 
                     */
                    std::string GetResumeOption() const;

                    /**
                     * 设置Task resumption mode. Valid values: `clearData` (Clearing the target instance data); `overwrite` (Executing the task in overwrite mode); `normal` (Following the normal process without additional operations). `clearData` and `overwrite` are only valid for Redis links and `normal` for non-Redis links.
                     * @param _resumeOption Task resumption mode. Valid values: `clearData` (Clearing the target instance data); `overwrite` (Executing the task in overwrite mode); `normal` (Following the normal process without additional operations). `clearData` and `overwrite` are only valid for Redis links and `normal` for non-Redis links.
                     * 
                     */
                    void SetResumeOption(const std::string& _resumeOption);

                    /**
                     * 判断参数 ResumeOption 是否已赋值
                     * @return ResumeOption 是否已赋值
                     * 
                     */
                    bool ResumeOptionHasBeenSet() const;

                private:

                    /**
                     * Data migration task ID
                     */
                    std::string m_jobId;
                    bool m_jobIdHasBeenSet;

                    /**
                     * Task resumption mode. Valid values: `clearData` (Clearing the target instance data); `overwrite` (Executing the task in overwrite mode); `normal` (Following the normal process without additional operations). `clearData` and `overwrite` are only valid for Redis links and `normal` for non-Redis links.
                     */
                    std::string m_resumeOption;
                    bool m_resumeOptionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DTS_V20211206_MODEL_RESUMEMIGRATEJOBREQUEST_H_
