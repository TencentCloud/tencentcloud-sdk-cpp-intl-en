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

#ifndef TENCENTCLOUD_CLS_V20201016_MODEL_DELETEASYNCCONTEXTTASKREQUEST_H_
#define TENCENTCLOUD_CLS_V20201016_MODEL_DELETEASYNCCONTEXTTASKREQUEST_H_

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
                * DeleteAsyncContextTask request structure.
                */
                class DeleteAsyncContextTaskRequest : public AbstractModel
                {
                public:
                    DeleteAsyncContextTaskRequest();
                    ~DeleteAsyncContextTaskRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Log topic ID
                     * @return TopicId Log topic ID
                     */
                    std::string GetTopicId() const;

                    /**
                     * 设置Log topic ID
                     * @param TopicId Log topic ID
                     */
                    void SetTopicId(const std::string& _topicId);

                    /**
                     * 判断参数 TopicId 是否已赋值
                     * @return TopicId 是否已赋值
                     */
                    bool TopicIdHasBeenSet() const;

                    /**
                     * 获取Offline context search task ID
                     * @return AsyncContextTaskId Offline context search task ID
                     */
                    std::string GetAsyncContextTaskId() const;

                    /**
                     * 设置Offline context search task ID
                     * @param AsyncContextTaskId Offline context search task ID
                     */
                    void SetAsyncContextTaskId(const std::string& _asyncContextTaskId);

                    /**
                     * 判断参数 AsyncContextTaskId 是否已赋值
                     * @return AsyncContextTaskId 是否已赋值
                     */
                    bool AsyncContextTaskIdHasBeenSet() const;

                private:

                    /**
                     * Log topic ID
                     */
                    std::string m_topicId;
                    bool m_topicIdHasBeenSet;

                    /**
                     * Offline context search task ID
                     */
                    std::string m_asyncContextTaskId;
                    bool m_asyncContextTaskIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLS_V20201016_MODEL_DELETEASYNCCONTEXTTASKREQUEST_H_
