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

#ifndef TENCENTCLOUD_CLS_V20201016_MODEL_DESCRIBEREBUILDINDEXTASKSREQUEST_H_
#define TENCENTCLOUD_CLS_V20201016_MODEL_DESCRIBEREBUILDINDEXTASKSREQUEST_H_

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
                * DescribeRebuildIndexTasks request structure.
                */
                class DescribeRebuildIndexTasksRequest : public AbstractModel
                {
                public:
                    DescribeRebuildIndexTasksRequest();
                    ~DescribeRebuildIndexTasksRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>Log topic ID.</p>
                     * @return TopicId <p>Log topic ID.</p>
                     * 
                     */
                    std::string GetTopicId() const;

                    /**
                     * 设置<p>Log topic ID.</p>
                     * @param _topicId <p>Log topic ID.</p>
                     * 
                     */
                    void SetTopicId(const std::string& _topicId);

                    /**
                     * 判断参数 TopicId 是否已赋值
                     * @return TopicId 是否已赋值
                     * 
                     */
                    bool TopicIdHasBeenSet() const;

                    /**
                     * 获取<p>Index rebuild task ID</p>
                     * @return TaskId <p>Index rebuild task ID</p>
                     * 
                     */
                    std::string GetTaskId() const;

                    /**
                     * 设置<p>Index rebuild task ID</p>
                     * @param _taskId <p>Index rebuild task ID</p>
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
                     * 获取<p>Index rebuild task status. Leave it blank to return the task list of all statuses. Multiple statuses are separated by commas.</p><p>Enumeration value:</p><ul><li>0: Reindexing task created</li><li>1: Creating reindexing resources</li><li>2: Index rebuild resource created</li><li>3: Rebuilding</li><li>4: Suspension</li><li>5: Rebuild complete</li><li>6: Rebuild successful (retrievable)</li><li>7: Rebuilding failed</li><li>8: Task cancellation</li><li>9: Metadata and index deleted</li></ul>
                     * @return Status <p>Index rebuild task status. Leave it blank to return the task list of all statuses. Multiple statuses are separated by commas.</p><p>Enumeration value:</p><ul><li>0: Reindexing task created</li><li>1: Creating reindexing resources</li><li>2: Index rebuild resource created</li><li>3: Rebuilding</li><li>4: Suspension</li><li>5: Rebuild complete</li><li>6: Rebuild successful (retrievable)</li><li>7: Rebuilding failed</li><li>8: Task cancellation</li><li>9: Metadata and index deleted</li></ul>
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置<p>Index rebuild task status. Leave it blank to return the task list of all statuses. Multiple statuses are separated by commas.</p><p>Enumeration value:</p><ul><li>0: Reindexing task created</li><li>1: Creating reindexing resources</li><li>2: Index rebuild resource created</li><li>3: Rebuilding</li><li>4: Suspension</li><li>5: Rebuild complete</li><li>6: Rebuild successful (retrievable)</li><li>7: Rebuilding failed</li><li>8: Task cancellation</li><li>9: Metadata and index deleted</li></ul>
                     * @param _status <p>Index rebuild task status. Leave it blank to return the task list of all statuses. Multiple statuses are separated by commas.</p><p>Enumeration value:</p><ul><li>0: Reindexing task created</li><li>1: Creating reindexing resources</li><li>2: Index rebuild resource created</li><li>3: Rebuilding</li><li>4: Suspension</li><li>5: Rebuild complete</li><li>6: Rebuild successful (retrievable)</li><li>7: Rebuilding failed</li><li>8: Task cancellation</li><li>9: Metadata and index deleted</li></ul>
                     * 
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取<p>Pagination offset. Default value: 0.</p>
                     * @return Offset <p>Pagination offset. Default value: 0.</p>
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置<p>Pagination offset. Default value: 0.</p>
                     * @param _offset <p>Pagination offset. Default value: 0.</p>
                     * 
                     */
                    void SetOffset(const uint64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取<p>Number of entries per page. Default value: 10. Maximum value: 20.</p>
                     * @return Limit <p>Number of entries per page. Default value: 10. Maximum value: 20.</p>
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置<p>Number of entries per page. Default value: 10. Maximum value: 20.</p>
                     * @param _limit <p>Number of entries per page. Default value: 10. Maximum value: 20.</p>
                     * 
                     */
                    void SetLimit(const uint64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                private:

                    /**
                     * <p>Log topic ID.</p>
                     */
                    std::string m_topicId;
                    bool m_topicIdHasBeenSet;

                    /**
                     * <p>Index rebuild task ID</p>
                     */
                    std::string m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * <p>Index rebuild task status. Leave it blank to return the task list of all statuses. Multiple statuses are separated by commas.</p><p>Enumeration value:</p><ul><li>0: Reindexing task created</li><li>1: Creating reindexing resources</li><li>2: Index rebuild resource created</li><li>3: Rebuilding</li><li>4: Suspension</li><li>5: Rebuild complete</li><li>6: Rebuild successful (retrievable)</li><li>7: Rebuilding failed</li><li>8: Task cancellation</li><li>9: Metadata and index deleted</li></ul>
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>Pagination offset. Default value: 0.</p>
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * <p>Number of entries per page. Default value: 10. Maximum value: 20.</p>
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLS_V20201016_MODEL_DESCRIBEREBUILDINDEXTASKSREQUEST_H_
