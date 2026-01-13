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

#ifndef TENCENTCLOUD_TROCKET_V20230308_MODEL_REMOVEMIGRATINGTOPICREQUEST_H_
#define TENCENTCLOUD_TROCKET_V20230308_MODEL_REMOVEMIGRATINGTOPICREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Trocket
    {
        namespace V20230308
        {
            namespace Model
            {
                /**
                * RemoveMigratingTopic request structure.
                */
                class RemoveMigratingTopicRequest : public AbstractModel
                {
                public:
                    RemoveMigratingTopicRequest();
                    ~RemoveMigratingTopicRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Task ID. It can be obtained from [SmoothMigrationTaskItem](https://www.tencentcloud.com/document/api/1493/96031?from_cn_redirect=1#SmoothMigrationTaskItem) returned by the API [DescribeSmoothMigrationTaskList](https://www.tencentcloud.com/document/api/1493/119997?from_cn_redirect=1) or from the console.
                     * @return TaskId Task ID. It can be obtained from [SmoothMigrationTaskItem](https://www.tencentcloud.com/document/api/1493/96031?from_cn_redirect=1#SmoothMigrationTaskItem) returned by the API [DescribeSmoothMigrationTaskList](https://www.tencentcloud.com/document/api/1493/119997?from_cn_redirect=1) or from the console.
                     * 
                     */
                    std::string GetTaskId() const;

                    /**
                     * 设置Task ID. It can be obtained from [SmoothMigrationTaskItem](https://www.tencentcloud.com/document/api/1493/96031?from_cn_redirect=1#SmoothMigrationTaskItem) returned by the API [DescribeSmoothMigrationTaskList](https://www.tencentcloud.com/document/api/1493/119997?from_cn_redirect=1) or from the console.
                     * @param _taskId Task ID. It can be obtained from [SmoothMigrationTaskItem](https://www.tencentcloud.com/document/api/1493/96031?from_cn_redirect=1#SmoothMigrationTaskItem) returned by the API [DescribeSmoothMigrationTaskList](https://www.tencentcloud.com/document/api/1493/119997?from_cn_redirect=1) or from the console.
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
                     * 获取Topic name. It can be obtained from [MigratingTopic](https://www.tencentcloud.com/document/api/1493/96031?from_cn_redirect=1#MigratingTopic) returned by the API [DescribeMigratingTopicList](https://www.tencentcloud.com/document/api/1493/118007?from_cn_redirect=1) in Data Type.

                     * @return TopicName Topic name. It can be obtained from [MigratingTopic](https://www.tencentcloud.com/document/api/1493/96031?from_cn_redirect=1#MigratingTopic) returned by the API [DescribeMigratingTopicList](https://www.tencentcloud.com/document/api/1493/118007?from_cn_redirect=1) in Data Type.

                     * 
                     */
                    std::string GetTopicName() const;

                    /**
                     * 设置Topic name. It can be obtained from [MigratingTopic](https://www.tencentcloud.com/document/api/1493/96031?from_cn_redirect=1#MigratingTopic) returned by the API [DescribeMigratingTopicList](https://www.tencentcloud.com/document/api/1493/118007?from_cn_redirect=1) in Data Type.

                     * @param _topicName Topic name. It can be obtained from [MigratingTopic](https://www.tencentcloud.com/document/api/1493/96031?from_cn_redirect=1#MigratingTopic) returned by the API [DescribeMigratingTopicList](https://www.tencentcloud.com/document/api/1493/118007?from_cn_redirect=1) in Data Type.

                     * 
                     */
                    void SetTopicName(const std::string& _topicName);

                    /**
                     * 判断参数 TopicName 是否已赋值
                     * @return TopicName 是否已赋值
                     * 
                     */
                    bool TopicNameHasBeenSet() const;

                    /**
                     * 获取Namespace. This parameter is valid only for migration to a 4.x cluster. The namespace can be obtained from [MigratingTopic](https://www.tencentcloud.com/document/api/1493/96031?from_cn_redirect=1#MigratingTopic) returned by the API [DescribeMigratingTopicList](https://www.tencentcloud.com/document/api/1493/118007?from_cn_redirect=1) in Data Type.
                     * @return Namespace Namespace. This parameter is valid only for migration to a 4.x cluster. The namespace can be obtained from [MigratingTopic](https://www.tencentcloud.com/document/api/1493/96031?from_cn_redirect=1#MigratingTopic) returned by the API [DescribeMigratingTopicList](https://www.tencentcloud.com/document/api/1493/118007?from_cn_redirect=1) in Data Type.
                     * 
                     */
                    std::string GetNamespace() const;

                    /**
                     * 设置Namespace. This parameter is valid only for migration to a 4.x cluster. The namespace can be obtained from [MigratingTopic](https://www.tencentcloud.com/document/api/1493/96031?from_cn_redirect=1#MigratingTopic) returned by the API [DescribeMigratingTopicList](https://www.tencentcloud.com/document/api/1493/118007?from_cn_redirect=1) in Data Type.
                     * @param _namespace Namespace. This parameter is valid only for migration to a 4.x cluster. The namespace can be obtained from [MigratingTopic](https://www.tencentcloud.com/document/api/1493/96031?from_cn_redirect=1#MigratingTopic) returned by the API [DescribeMigratingTopicList](https://www.tencentcloud.com/document/api/1493/118007?from_cn_redirect=1) in Data Type.
                     * 
                     */
                    void SetNamespace(const std::string& _namespace);

                    /**
                     * 判断参数 Namespace 是否已赋值
                     * @return Namespace 是否已赋值
                     * 
                     */
                    bool NamespaceHasBeenSet() const;

                private:

                    /**
                     * Task ID. It can be obtained from [SmoothMigrationTaskItem](https://www.tencentcloud.com/document/api/1493/96031?from_cn_redirect=1#SmoothMigrationTaskItem) returned by the API [DescribeSmoothMigrationTaskList](https://www.tencentcloud.com/document/api/1493/119997?from_cn_redirect=1) or from the console.
                     */
                    std::string m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * Topic name. It can be obtained from [MigratingTopic](https://www.tencentcloud.com/document/api/1493/96031?from_cn_redirect=1#MigratingTopic) returned by the API [DescribeMigratingTopicList](https://www.tencentcloud.com/document/api/1493/118007?from_cn_redirect=1) in Data Type.

                     */
                    std::string m_topicName;
                    bool m_topicNameHasBeenSet;

                    /**
                     * Namespace. This parameter is valid only for migration to a 4.x cluster. The namespace can be obtained from [MigratingTopic](https://www.tencentcloud.com/document/api/1493/96031?from_cn_redirect=1#MigratingTopic) returned by the API [DescribeMigratingTopicList](https://www.tencentcloud.com/document/api/1493/118007?from_cn_redirect=1) in Data Type.
                     */
                    std::string m_namespace;
                    bool m_namespaceHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TROCKET_V20230308_MODEL_REMOVEMIGRATINGTOPICREQUEST_H_
