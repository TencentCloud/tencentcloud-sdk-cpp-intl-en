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

#ifndef TENCENTCLOUD_DTS_V20211206_MODEL_RESIZESYNCJOBREQUEST_H_
#define TENCENTCLOUD_DTS_V20211206_MODEL_RESIZESYNCJOBREQUEST_H_

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
                * ResizeSyncJob request structure.
                */
                class ResizeSyncJobRequest : public AbstractModel
                {
                public:
                    ResizeSyncJobRequest();
                    ~ResizeSyncJobRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Sync task ID
                     * @return JobId Sync task ID
                     * 
                     */
                    std::string GetJobId() const;

                    /**
                     * 设置Sync task ID
                     * @param _jobId Sync task ID
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
                     * 获取Task specification
                     * @return NewInstanceClass Task specification
                     * 
                     */
                    std::string GetNewInstanceClass() const;

                    /**
                     * 设置Task specification
                     * @param _newInstanceClass Task specification
                     * 
                     */
                    void SetNewInstanceClass(const std::string& _newInstanceClass);

                    /**
                     * 判断参数 NewInstanceClass 是否已赋值
                     * @return NewInstanceClass 是否已赋值
                     * 
                     */
                    bool NewInstanceClassHasBeenSet() const;

                private:

                    /**
                     * Sync task ID
                     */
                    std::string m_jobId;
                    bool m_jobIdHasBeenSet;

                    /**
                     * Task specification
                     */
                    std::string m_newInstanceClass;
                    bool m_newInstanceClassHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DTS_V20211206_MODEL_RESIZESYNCJOBREQUEST_H_
