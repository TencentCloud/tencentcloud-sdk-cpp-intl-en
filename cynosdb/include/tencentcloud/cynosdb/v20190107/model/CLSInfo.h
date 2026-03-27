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

#ifndef TENCENTCLOUD_CYNOSDB_V20190107_MODEL_CLSINFO_H_
#define TENCENTCLOUD_CYNOSDB_V20190107_MODEL_CLSINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cynosdb
    {
        namespace V20190107
        {
            namespace Model
            {
                /**
                * CLS Log Delivery Configuration
                */
                class CLSInfo : public AbstractModel
                {
                public:
                    CLSInfo();
                    ~CLSInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Log topic operation: optional create, reuse.
create: create a new log topic using TopicName.
reuse: use an existing log topic by specifying TopicId.
Combining the use of an existing log topic and creating a new log set is not allowed.
                     * @return TopicOperation Log topic operation: optional create, reuse.
create: create a new log topic using TopicName.
reuse: use an existing log topic by specifying TopicId.
Combining the use of an existing log topic and creating a new log set is not allowed.
                     * 
                     */
                    std::string GetTopicOperation() const;

                    /**
                     * 设置Log topic operation: optional create, reuse.
create: create a new log topic using TopicName.
reuse: use an existing log topic by specifying TopicId.
Combining the use of an existing log topic and creating a new log set is not allowed.
                     * @param _topicOperation Log topic operation: optional create, reuse.
create: create a new log topic using TopicName.
reuse: use an existing log topic by specifying TopicId.
Combining the use of an existing log topic and creating a new log set is not allowed.
                     * 
                     */
                    void SetTopicOperation(const std::string& _topicOperation);

                    /**
                     * 判断参数 TopicOperation 是否已赋值
                     * @return TopicOperation 是否已赋值
                     * 
                     */
                    bool TopicOperationHasBeenSet() const;

                    /**
                     * 获取Log set operation: optional create, reuse.
create: create a new log set using GroupName.
reuse: use an existing log set by specifying GroupId.
Combining the use of an existing log topic and creating a new log set is not allowed.
                     * @return GroupOperation Log set operation: optional create, reuse.
create: create a new log set using GroupName.
reuse: use an existing log set by specifying GroupId.
Combining the use of an existing log topic and creating a new log set is not allowed.
                     * 
                     */
                    std::string GetGroupOperation() const;

                    /**
                     * 设置Log set operation: optional create, reuse.
create: create a new log set using GroupName.
reuse: use an existing log set by specifying GroupId.
Combining the use of an existing log topic and creating a new log set is not allowed.
                     * @param _groupOperation Log set operation: optional create, reuse.
create: create a new log set using GroupName.
reuse: use an existing log set by specifying GroupId.
Combining the use of an existing log topic and creating a new log set is not allowed.
                     * 
                     */
                    void SetGroupOperation(const std::string& _groupOperation);

                    /**
                     * 判断参数 GroupOperation 是否已赋值
                     * @return GroupOperation 是否已赋值
                     * 
                     */
                    bool GroupOperationHasBeenSet() const;

                    /**
                     * 获取Log Delivery Region
                     * @return Region Log Delivery Region
                     * 
                     */
                    std::string GetRegion() const;

                    /**
                     * 设置Log Delivery Region
                     * @param _region Log Delivery Region
                     * 
                     */
                    void SetRegion(const std::string& _region);

                    /**
                     * 判断参数 Region 是否已赋值
                     * @return Region 是否已赋值
                     * 
                     */
                    bool RegionHasBeenSet() const;

                    /**
                     * 获取log topic id
                     * @return TopicId log topic id
                     * 
                     */
                    std::string GetTopicId() const;

                    /**
                     * 设置log topic id
                     * @param _topicId log topic id
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
                     * 获取log topic name
                     * @return TopicName log topic name
                     * 
                     */
                    std::string GetTopicName() const;

                    /**
                     * 设置log topic name
                     * @param _topicName log topic name
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
                     * 获取log set id
                     * @return GroupId log set id
                     * 
                     */
                    std::string GetGroupId() const;

                    /**
                     * 设置log set id
                     * @param _groupId log set id
                     * 
                     */
                    void SetGroupId(const std::string& _groupId);

                    /**
                     * 判断参数 GroupId 是否已赋值
                     * @return GroupId 是否已赋值
                     * 
                     */
                    bool GroupIdHasBeenSet() const;

                    /**
                     * 获取log set name
                     * @return GroupName log set name
                     * 
                     */
                    std::string GetGroupName() const;

                    /**
                     * 设置log set name
                     * @param _groupName log set name
                     * 
                     */
                    void SetGroupName(const std::string& _groupName);

                    /**
                     * 判断参数 GroupName 是否已赋值
                     * @return GroupName 是否已赋值
                     * 
                     */
                    bool GroupNameHasBeenSet() const;

                private:

                    /**
                     * Log topic operation: optional create, reuse.
create: create a new log topic using TopicName.
reuse: use an existing log topic by specifying TopicId.
Combining the use of an existing log topic and creating a new log set is not allowed.
                     */
                    std::string m_topicOperation;
                    bool m_topicOperationHasBeenSet;

                    /**
                     * Log set operation: optional create, reuse.
create: create a new log set using GroupName.
reuse: use an existing log set by specifying GroupId.
Combining the use of an existing log topic and creating a new log set is not allowed.
                     */
                    std::string m_groupOperation;
                    bool m_groupOperationHasBeenSet;

                    /**
                     * Log Delivery Region
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * log topic id
                     */
                    std::string m_topicId;
                    bool m_topicIdHasBeenSet;

                    /**
                     * log topic name
                     */
                    std::string m_topicName;
                    bool m_topicNameHasBeenSet;

                    /**
                     * log set id
                     */
                    std::string m_groupId;
                    bool m_groupIdHasBeenSet;

                    /**
                     * log set name
                     */
                    std::string m_groupName;
                    bool m_groupNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CYNOSDB_V20190107_MODEL_CLSINFO_H_
