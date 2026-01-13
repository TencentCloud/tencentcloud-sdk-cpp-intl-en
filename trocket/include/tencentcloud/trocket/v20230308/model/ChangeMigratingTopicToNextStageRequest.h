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

#ifndef TENCENTCLOUD_TROCKET_V20230308_MODEL_CHANGEMIGRATINGTOPICTONEXTSTAGEREQUEST_H_
#define TENCENTCLOUD_TROCKET_V20230308_MODEL_CHANGEMIGRATINGTOPICTONEXTSTAGEREQUEST_H_

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
                * ChangeMigratingTopicToNextStage request structure.
                */
                class ChangeMigratingTopicToNextStageRequest : public AbstractModel
                {
                public:
                    ChangeMigratingTopicToNextStageRequest();
                    ~ChangeMigratingTopicToNextStageRequest() = default;
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
                     * 获取List of topic names. topic name can be obtained from [MigratingTopic](https://www.tencentcloud.com/document/api/1493/96031?from_cn_redirect=1#MigratingTopic) returned by the api [DescribeMigratingTopicList](https://www.tencentcloud.com/document/api/1493/118007?from_cn_redirect=1) in data type.

                     * @return TopicNameList List of topic names. topic name can be obtained from [MigratingTopic](https://www.tencentcloud.com/document/api/1493/96031?from_cn_redirect=1#MigratingTopic) returned by the api [DescribeMigratingTopicList](https://www.tencentcloud.com/document/api/1493/118007?from_cn_redirect=1) in data type.

                     * 
                     */
                    std::vector<std::string> GetTopicNameList() const;

                    /**
                     * 设置List of topic names. topic name can be obtained from [MigratingTopic](https://www.tencentcloud.com/document/api/1493/96031?from_cn_redirect=1#MigratingTopic) returned by the api [DescribeMigratingTopicList](https://www.tencentcloud.com/document/api/1493/118007?from_cn_redirect=1) in data type.

                     * @param _topicNameList List of topic names. topic name can be obtained from [MigratingTopic](https://www.tencentcloud.com/document/api/1493/96031?from_cn_redirect=1#MigratingTopic) returned by the api [DescribeMigratingTopicList](https://www.tencentcloud.com/document/api/1493/118007?from_cn_redirect=1) in data type.

                     * 
                     */
                    void SetTopicNameList(const std::vector<std::string>& _topicNameList);

                    /**
                     * 判断参数 TopicNameList 是否已赋值
                     * @return TopicNameList 是否已赋值
                     * 
                     */
                    bool TopicNameListHasBeenSet() const;

                    /**
                     * 获取Namespace list. It is valid only for 4.x clusters and has a one-to-one relationship with TopicNameList. The list can be obtained from [MigratingTopic](https://www.tencentcloud.com/document/api/1493/96031?from_cn_redirect=1#MigratingTopic) returned by the API [DescribeMigratingTopicList](https://www.tencentcloud.com/document/api/1493/118007?from_cn_redirect=1) in Data Type.
                     * @return NamespaceList Namespace list. It is valid only for 4.x clusters and has a one-to-one relationship with TopicNameList. The list can be obtained from [MigratingTopic](https://www.tencentcloud.com/document/api/1493/96031?from_cn_redirect=1#MigratingTopic) returned by the API [DescribeMigratingTopicList](https://www.tencentcloud.com/document/api/1493/118007?from_cn_redirect=1) in Data Type.
                     * 
                     */
                    std::vector<std::string> GetNamespaceList() const;

                    /**
                     * 设置Namespace list. It is valid only for 4.x clusters and has a one-to-one relationship with TopicNameList. The list can be obtained from [MigratingTopic](https://www.tencentcloud.com/document/api/1493/96031?from_cn_redirect=1#MigratingTopic) returned by the API [DescribeMigratingTopicList](https://www.tencentcloud.com/document/api/1493/118007?from_cn_redirect=1) in Data Type.
                     * @param _namespaceList Namespace list. It is valid only for 4.x clusters and has a one-to-one relationship with TopicNameList. The list can be obtained from [MigratingTopic](https://www.tencentcloud.com/document/api/1493/96031?from_cn_redirect=1#MigratingTopic) returned by the API [DescribeMigratingTopicList](https://www.tencentcloud.com/document/api/1493/118007?from_cn_redirect=1) in Data Type.
                     * 
                     */
                    void SetNamespaceList(const std::vector<std::string>& _namespaceList);

                    /**
                     * 判断参数 NamespaceList 是否已赋值
                     * @return NamespaceList 是否已赋值
                     * 
                     */
                    bool NamespaceListHasBeenSet() const;

                private:

                    /**
                     * Task ID. It can be obtained from [SmoothMigrationTaskItem](https://www.tencentcloud.com/document/api/1493/96031?from_cn_redirect=1#SmoothMigrationTaskItem) returned by the API [DescribeSmoothMigrationTaskList](https://www.tencentcloud.com/document/api/1493/119997?from_cn_redirect=1) or from the console.

                     */
                    std::string m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * List of topic names. topic name can be obtained from [MigratingTopic](https://www.tencentcloud.com/document/api/1493/96031?from_cn_redirect=1#MigratingTopic) returned by the api [DescribeMigratingTopicList](https://www.tencentcloud.com/document/api/1493/118007?from_cn_redirect=1) in data type.

                     */
                    std::vector<std::string> m_topicNameList;
                    bool m_topicNameListHasBeenSet;

                    /**
                     * Namespace list. It is valid only for 4.x clusters and has a one-to-one relationship with TopicNameList. The list can be obtained from [MigratingTopic](https://www.tencentcloud.com/document/api/1493/96031?from_cn_redirect=1#MigratingTopic) returned by the API [DescribeMigratingTopicList](https://www.tencentcloud.com/document/api/1493/118007?from_cn_redirect=1) in Data Type.
                     */
                    std::vector<std::string> m_namespaceList;
                    bool m_namespaceListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TROCKET_V20230308_MODEL_CHANGEMIGRATINGTOPICTONEXTSTAGEREQUEST_H_
