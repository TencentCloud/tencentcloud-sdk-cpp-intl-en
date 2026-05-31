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
                * 
                */
                class CLSInfo : public AbstractModel
                {
                public:
                    CLSInfo();
                    ~CLSInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取
                     * @return TopicOperation 
                     * 
                     */
                    std::string GetTopicOperation() const;

                    /**
                     * 设置
                     * @param _topicOperation 
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
                     * 获取
                     * @return GroupOperation 
                     * 
                     */
                    std::string GetGroupOperation() const;

                    /**
                     * 设置
                     * @param _groupOperation 
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
                     * 获取
                     * @return Region 
                     * 
                     */
                    std::string GetRegion() const;

                    /**
                     * 设置
                     * @param _region 
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
                     * 获取
                     * @return TopicId 
                     * 
                     */
                    std::string GetTopicId() const;

                    /**
                     * 设置
                     * @param _topicId 
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
                     * 获取
                     * @return TopicName 
                     * 
                     */
                    std::string GetTopicName() const;

                    /**
                     * 设置
                     * @param _topicName 
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
                     * 获取
                     * @return GroupId 
                     * 
                     */
                    std::string GetGroupId() const;

                    /**
                     * 设置
                     * @param _groupId 
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
                     * 获取
                     * @return GroupName 
                     * 
                     */
                    std::string GetGroupName() const;

                    /**
                     * 设置
                     * @param _groupName 
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
                     * 
                     */
                    std::string m_topicOperation;
                    bool m_topicOperationHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_groupOperation;
                    bool m_groupOperationHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_topicId;
                    bool m_topicIdHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_topicName;
                    bool m_topicNameHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_groupId;
                    bool m_groupIdHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_groupName;
                    bool m_groupNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CYNOSDB_V20190107_MODEL_CLSINFO_H_
