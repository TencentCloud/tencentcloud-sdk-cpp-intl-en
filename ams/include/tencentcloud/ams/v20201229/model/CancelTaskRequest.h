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

#ifndef TENCENTCLOUD_AMS_V20201229_MODEL_CANCELTASKREQUEST_H_
#define TENCENTCLOUD_AMS_V20201229_MODEL_CANCELTASKREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ams
    {
        namespace V20201229
        {
            namespace Model
            {
                /**
                * CancelTask request structure.
                */
                class CancelTaskRequest : public AbstractModel
                {
                public:
                    CancelTaskRequest();
                    ~CancelTaskRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取This field indicates the task ID (in the `Results` parameter) returned after an audio moderation task is created. It is used to identify the moderation task to be canceled.
                     * @return TaskId This field indicates the task ID (in the `Results` parameter) returned after an audio moderation task is created. It is used to identify the moderation task to be canceled.
                     */
                    std::string GetTaskId() const;

                    /**
                     * 设置This field indicates the task ID (in the `Results` parameter) returned after an audio moderation task is created. It is used to identify the moderation task to be canceled.
                     * @param TaskId This field indicates the task ID (in the `Results` parameter) returned after an audio moderation task is created. It is used to identify the moderation task to be canceled.
                     */
                    void SetTaskId(const std::string& _taskId);

                    /**
                     * 判断参数 TaskId 是否已赋值
                     * @return TaskId 是否已赋值
                     */
                    bool TaskIdHasBeenSet() const;

                private:

                    /**
                     * This field indicates the task ID (in the `Results` parameter) returned after an audio moderation task is created. It is used to identify the moderation task to be canceled.
                     */
                    std::string m_taskId;
                    bool m_taskIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_AMS_V20201229_MODEL_CANCELTASKREQUEST_H_
