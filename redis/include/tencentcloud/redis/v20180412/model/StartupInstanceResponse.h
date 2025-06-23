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

#ifndef TENCENTCLOUD_REDIS_V20180412_MODEL_STARTUPINSTANCERESPONSE_H_
#define TENCENTCLOUD_REDIS_V20180412_MODEL_STARTUPINSTANCERESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Redis
    {
        namespace V20180412
        {
            namespace Model
            {
                /**
                * StartupInstance response structure.
                */
                class StartupInstanceResponse : public AbstractModel
                {
                public:
                    StartupInstanceResponse();
                    ~StartupInstanceResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取This parameter has been deprecated. Determine whether the instance has been deisolated based on the status obtained through the instance query API.
                     * @return TaskId This parameter has been deprecated. Determine whether the instance has been deisolated based on the status obtained through the instance query API.
                     * @deprecated
                     */
                    int64_t GetTaskId() const;

                    /**
                     * 判断参数 TaskId 是否已赋值
                     * @return TaskId 是否已赋值
                     * @deprecated
                     */
                    bool TaskIdHasBeenSet() const;

                private:

                    /**
                     * This parameter has been deprecated. Determine whether the instance has been deisolated based on the status obtained through the instance query API.
                     */
                    int64_t m_taskId;
                    bool m_taskIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_REDIS_V20180412_MODEL_STARTUPINSTANCERESPONSE_H_
