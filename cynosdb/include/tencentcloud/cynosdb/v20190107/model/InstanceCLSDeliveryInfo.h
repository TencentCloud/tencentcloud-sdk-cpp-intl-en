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

#ifndef TENCENTCLOUD_CYNOSDB_V20190107_MODEL_INSTANCECLSDELIVERYINFO_H_
#define TENCENTCLOUD_CYNOSDB_V20190107_MODEL_INSTANCECLSDELIVERYINFO_H_

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
                class InstanceCLSDeliveryInfo : public AbstractModel
                {
                public:
                    InstanceCLSDeliveryInfo();
                    ~InstanceCLSDeliveryInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Instance ID
                     * @return InstanceId Instance ID
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置Instance ID
                     * @param _instanceId Instance ID
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
                     * 获取Instance name


                     * @return InstanceName Instance name


                     * 
                     */
                    std::string GetInstanceName() const;

                    /**
                     * 设置Instance name


                     * @param _instanceName Instance name


                     * 
                     */
                    void SetInstanceName(const std::string& _instanceName);

                    /**
                     * 判断参数 InstanceName 是否已赋值
                     * @return InstanceName 是否已赋值
                     * 
                     */
                    bool InstanceNameHasBeenSet() const;

                    /**
                     * 获取Log topic id.

                     * @return TopicId Log topic id.

                     * 
                     */
                    std::string GetTopicId() const;

                    /**
                     * 设置Log topic id.

                     * @param _topicId Log topic id.

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
                     * 获取Log topic name
                     * @return TopicName Log topic name
                     * 
                     */
                    std::string GetTopicName() const;

                    /**
                     * 设置Log topic name
                     * @param _topicName Log topic name
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
                     * 获取Log set id.

                     * @return GroupId Log set id.

                     * 
                     */
                    std::string GetGroupId() const;

                    /**
                     * 设置Log set id.

                     * @param _groupId Log set id.

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
                     * 获取Log set name.


                     * @return GroupName Log set name.


                     * 
                     */
                    std::string GetGroupName() const;

                    /**
                     * 设置Log set name.


                     * @param _groupName Log set name.


                     * 
                     */
                    void SetGroupName(const std::string& _groupName);

                    /**
                     * 判断参数 GroupName 是否已赋值
                     * @return GroupName 是否已赋值
                     * 
                     */
                    bool GroupNameHasBeenSet() const;

                    /**
                     * 获取Log delivery region.

                     * @return Region Log delivery region.

                     * 
                     */
                    std::string GetRegion() const;

                    /**
                     * 设置Log delivery region.

                     * @param _region Log delivery region.

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
                     * 获取Delivery status: creating, running, offlining, offlined.

                     * @return Status Delivery status: creating, running, offlining, offlined.

                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置Delivery status: creating, running, offlining, offlined.

                     * @param _status Delivery status: creating, running, offlining, offlined.

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
                     * 获取Log type.
                     * @return LogType Log type.
                     * 
                     */
                    std::string GetLogType() const;

                    /**
                     * 设置Log type.
                     * @param _logType Log type.
                     * 
                     */
                    void SetLogType(const std::string& _logType);

                    /**
                     * 判断参数 LogType 是否已赋值
                     * @return LogType 是否已赋值
                     * 
                     */
                    bool LogTypeHasBeenSet() const;

                private:

                    /**
                     * Instance ID
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * Instance name


                     */
                    std::string m_instanceName;
                    bool m_instanceNameHasBeenSet;

                    /**
                     * Log topic id.

                     */
                    std::string m_topicId;
                    bool m_topicIdHasBeenSet;

                    /**
                     * Log topic name
                     */
                    std::string m_topicName;
                    bool m_topicNameHasBeenSet;

                    /**
                     * Log set id.

                     */
                    std::string m_groupId;
                    bool m_groupIdHasBeenSet;

                    /**
                     * Log set name.


                     */
                    std::string m_groupName;
                    bool m_groupNameHasBeenSet;

                    /**
                     * Log delivery region.

                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * Delivery status: creating, running, offlining, offlined.

                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Log type.
                     */
                    std::string m_logType;
                    bool m_logTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CYNOSDB_V20190107_MODEL_INSTANCECLSDELIVERYINFO_H_
