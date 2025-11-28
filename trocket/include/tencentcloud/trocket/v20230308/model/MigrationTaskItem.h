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

#ifndef TENCENTCLOUD_TROCKET_V20230308_MODEL_MIGRATIONTASKITEM_H_
#define TENCENTCLOUD_TROCKET_V20230308_MODEL_MIGRATIONTASKITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                * Migration task information.
                */
                class MigrationTaskItem : public AbstractModel
                {
                public:
                    MigrationTaskItem();
                    ~MigrationTaskItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Task ID
                     * @return TaskId Task ID
                     * 
                     */
                    std::string GetTaskId() const;

                    /**
                     * 设置Task ID
                     * @param _taskId Task ID
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
                     * 获取Instance ID.
                     * @return InstanceId Instance ID.
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置Instance ID.
                     * @param _instanceId Instance ID.
                     * 
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取0 - not specified (existing).
Metadata import.
                     * @return Type 0 - not specified (existing).
Metadata import.
                     * 
                     */
                    int64_t GetType() const;

                    /**
                     * 设置0 - not specified (existing).
Metadata import.
                     * @param _type 0 - not specified (existing).
Metadata import.
                     * 
                     */
                    void SetType(const int64_t& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取Total number of topics.
                     * @return TopicNum Total number of topics.
                     * 
                     */
                    int64_t GetTopicNum() const;

                    /**
                     * 设置Total number of topics.
                     * @param _topicNum Total number of topics.
                     * 
                     */
                    void SetTopicNum(const int64_t& _topicNum);

                    /**
                     * 判断参数 TopicNum 是否已赋值
                     * @return TopicNum 是否已赋值
                     * 
                     */
                    bool TopicNumHasBeenSet() const;

                    /**
                     * 获取Total Number of Consumer Groups
                     * @return GroupNum Total Number of Consumer Groups
                     * 
                     */
                    int64_t GetGroupNum() const;

                    /**
                     * 设置Total Number of Consumer Groups
                     * @param _groupNum Total Number of Consumer Groups
                     * 
                     */
                    void SetGroupNum(const int64_t& _groupNum);

                    /**
                     * 判断参数 GroupNum 是否已赋值
                     * @return GroupNum 是否已赋值
                     * 
                     */
                    bool GroupNumHasBeenSet() const;

                    /**
                     * 获取Task status. 0: migrating; 1: migration successful; 2: migration completed, with only part of the data migrated.
                     * @return Status Task status. 0: migrating; 1: migration successful; 2: migration completed, with only part of the data migrated.
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置Task status. 0: migrating; 1: migration successful; 2: migration completed, with only part of the data migrated.
                     * @param _status Task status. 0: migrating; 1: migration successful; 2: migration completed, with only part of the data migrated.
                     * 
                     */
                    void SetStatus(const int64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取Creation time.
                     * @return CreateTime Creation time.
                     * 
                     */
                    int64_t GetCreateTime() const;

                    /**
                     * 设置Creation time.
                     * @param _createTime Creation time.
                     * 
                     */
                    void SetCreateTime(const int64_t& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                private:

                    /**
                     * Task ID
                     */
                    std::string m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * Instance ID.
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 0 - not specified (existing).
Metadata import.
                     */
                    int64_t m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * Total number of topics.
                     */
                    int64_t m_topicNum;
                    bool m_topicNumHasBeenSet;

                    /**
                     * Total Number of Consumer Groups
                     */
                    int64_t m_groupNum;
                    bool m_groupNumHasBeenSet;

                    /**
                     * Task status. 0: migrating; 1: migration successful; 2: migration completed, with only part of the data migrated.
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Creation time.
                     */
                    int64_t m_createTime;
                    bool m_createTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TROCKET_V20230308_MODEL_MIGRATIONTASKITEM_H_
