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

#ifndef TENCENTCLOUD_FACEFUSION_V20220927_MODEL_QUERYVIDEOFACEFUSIONJOBREQUEST_H_
#define TENCENTCLOUD_FACEFUSION_V20220927_MODEL_QUERYVIDEOFACEFUSIONJOBREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Facefusion
    {
        namespace V20220927
        {
            namespace Model
            {
                /**
                * QueryVideoFaceFusionJob request structure.
                */
                class QueryVideoFaceFusionJobRequest : public AbstractModel
                {
                public:
                    QueryVideoFaceFusionJobRequest();
                    ~QueryVideoFaceFusionJobRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Job ID of the video face fusion task
                     * @return JobId Job ID of the video face fusion task
                     * 
                     */
                    std::string GetJobId() const;

                    /**
                     * 设置Job ID of the video face fusion task
                     * @param _jobId Job ID of the video face fusion task
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
                     * Job ID of the video face fusion task
                     */
                    std::string m_jobId;
                    bool m_jobIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_FACEFUSION_V20220927_MODEL_QUERYVIDEOFACEFUSIONJOBREQUEST_H_
