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

#ifndef TENCENTCLOUD_CLS_V20201016_MODEL_DELETEREMOTEWRITETASKREQUEST_H_
#define TENCENTCLOUD_CLS_V20201016_MODEL_DELETEREMOTEWRITETASKREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cls
    {
        namespace V20201016
        {
            namespace Model
            {
                /**
                * DeleteRemoteWriteTask request structure.
                */
                class DeleteRemoteWriteTaskRequest : public AbstractModel
                {
                public:
                    DeleteRemoteWriteTaskRequest();
                    ~DeleteRemoteWriteTaskRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取RemoteWrite import task ID
                     * @return TaskId RemoteWrite import task ID
                     * 
                     */
                    std::string GetTaskId() const;

                    /**
                     * 设置RemoteWrite import task ID
                     * @param _taskId RemoteWrite import task ID
                     * 
                     */
                    void SetTaskId(const std::string& _taskId);

                    /**
                     * 判断参数 TaskId 是否已赋值
                     * @return TaskId 是否已赋值
                     * 
                     */
                    bool TaskIdHasBeenSet() const;

                    /**
                     * 获取Log topic ID
                     * @return TopicId Log topic ID
                     * 
                     */
                    std::string GetTopicId() const;

                    /**
                     * 设置Log topic ID
                     * @param _topicId Log topic ID
                     * 
                     */
                    void SetTopicId(const std::string& _topicId);

                    /**
                     * 判断参数 TopicId 是否已赋值
                     * @return TopicId 是否已赋值
                     * 
                     */
                    bool TopicIdHasBeenSet() const;

                private:

                    /**
                     * RemoteWrite import task ID
                     */
                    std::string m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * Log topic ID
                     */
                    std::string m_topicId;
                    bool m_topicIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLS_V20201016_MODEL_DELETEREMOTEWRITETASKREQUEST_H_
