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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_CREATEVULFIXRETRYTASKRESPONSE_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_CREATEVULFIXRETRYTASKRESPONSE_H_

#include <string>
#include <vector>
#include <map>
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
                * CreateVulFixRetryTask response structure.
                */
                class CreateVulFixRetryTaskResponse : public AbstractModel
                {
                public:
                    CreateVulFixRetryTaskResponse();
                    ~CreateVulFixRetryTaskResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>ID of the generated new task for retry, used for subsequently querying task status</p>
                     * @return TaskId <p>ID of the generated new task for retry, used for subsequently querying task status</p>
                     * 
                     */
                    int64_t GetTaskId() const;

                    /**
                     * 判断参数 TaskId 是否已赋值
                     * @return TaskId 是否已赋值
                     * 
                     */
                    bool TaskIdHasBeenSet() const;

                    /**
                     * 获取<p>Number of hosts to retry this time</p>
                     * @return RetryCount <p>Number of hosts to retry this time</p>
                     * 
                     */
                    int64_t GetRetryCount() const;

                    /**
                     * 判断参数 RetryCount 是否已赋值
                     * @return RetryCount 是否已赋值
                     * 
                     */
                    bool RetryCountHasBeenSet() const;

                private:

                    /**
                     * <p>ID of the generated new task for retry, used for subsequently querying task status</p>
                     */
                    int64_t m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * <p>Number of hosts to retry this time</p>
                     */
                    int64_t m_retryCount;
                    bool m_retryCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_CREATEVULFIXRETRYTASKRESPONSE_H_
