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

#ifndef TENCENTCLOUD_REDIS_V20180412_MODEL_ENABLEREPLICAREADONLYRESPONSE_H_
#define TENCENTCLOUD_REDIS_V20180412_MODEL_ENABLEREPLICAREADONLYRESPONSE_H_

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
                * EnableReplicaReadonly response structure.
                */
                class EnableReplicaReadonlyResponse : public AbstractModel
                {
                public:
                    EnableReplicaReadonlyResponse();
                    ~EnableReplicaReadonlyResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Valid values: `ERROR`, `OK`. This field has been disused.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Status Valid values: `ERROR`, `OK`. This field has been disused.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @deprecated
                     */
                    std::string GetStatus() const;

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * @deprecated
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取Task ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return TaskId Task ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetTaskId() const;

                    /**
                     * 判断参数 TaskId 是否已赋值
                     * @return TaskId 是否已赋值
                     * 
                     */
                    bool TaskIdHasBeenSet() const;

                private:

                    /**
                     * Valid values: `ERROR`, `OK`. This field has been disused.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Task ID
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_taskId;
                    bool m_taskIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_REDIS_V20180412_MODEL_ENABLEREPLICAREADONLYRESPONSE_H_
