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

#ifndef TENCENTCLOUD_CLS_V20201016_MODEL_DELETEMETRICSUBSCRIBEREQUEST_H_
#define TENCENTCLOUD_CLS_V20201016_MODEL_DELETEMETRICSUBSCRIBEREQUEST_H_

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
                * DeleteMetricSubscribe request structure.
                */
                class DeleteMetricSubscribeRequest : public AbstractModel
                {
                public:
                    DeleteMetricSubscribeRequest();
                    ~DeleteMetricSubscribeRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Metric collection task ID.
                     * @return TaskId Metric collection task ID.
                     * 
                     */
                    std::string GetTaskId() const;

                    /**
                     * 设置Metric collection task ID.
                     * @param _taskId Metric collection task ID.
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
                     * 获取Log topic ID of a metric collection task configuration.
                     * @return TopicId Log topic ID of a metric collection task configuration.
                     * 
                     */
                    std::string GetTopicId() const;

                    /**
                     * 设置Log topic ID of a metric collection task configuration.
                     * @param _topicId Log topic ID of a metric collection task configuration.
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
                     * Metric collection task ID.
                     */
                    std::string m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * Log topic ID of a metric collection task configuration.
                     */
                    std::string m_topicId;
                    bool m_topicIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLS_V20201016_MODEL_DELETEMETRICSUBSCRIBEREQUEST_H_
