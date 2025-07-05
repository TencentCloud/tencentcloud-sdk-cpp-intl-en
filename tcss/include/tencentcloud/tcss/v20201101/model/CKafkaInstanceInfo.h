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

#ifndef TENCENTCLOUD_TCSS_V20201101_MODEL_CKAFKAINSTANCEINFO_H_
#define TENCENTCLOUD_TCSS_V20201101_MODEL_CKAFKAINSTANCEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tcss/v20201101/model/CKafkaTopicInfo.h>
#include <tencentcloud/tcss/v20201101/model/CkafkaRouteInfo.h>


namespace TencentCloud
{
    namespace Tcss
    {
        namespace V20201101
        {
            namespace Model
            {
                /**
                * Optional information of the security log Kafka
                */
                class CKafkaInstanceInfo : public AbstractModel
                {
                public:
                    CKafkaInstanceInfo();
                    ~CKafkaInstanceInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Instance ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return InstanceID Instance ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetInstanceID() const;

                    /**
                     * 设置Instance ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _instanceID Instance ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetInstanceID(const std::string& _instanceID);

                    /**
                     * 判断参数 InstanceID 是否已赋值
                     * @return InstanceID 是否已赋值
                     * 
                     */
                    bool InstanceIDHasBeenSet() const;

                    /**
                     * 获取Instance name
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return InstanceName Instance name
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetInstanceName() const;

                    /**
                     * 设置Instance name
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _instanceName Instance name
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Topic list
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return TopicList Topic list
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<CKafkaTopicInfo> GetTopicList() const;

                    /**
                     * 设置Topic list
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _topicList Topic list
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetTopicList(const std::vector<CKafkaTopicInfo>& _topicList);

                    /**
                     * 判断参数 TopicList 是否已赋值
                     * @return TopicList 是否已赋值
                     * 
                     */
                    bool TopicListHasBeenSet() const;

                    /**
                     * 获取Route list
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return RouteList Route list
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<CkafkaRouteInfo> GetRouteList() const;

                    /**
                     * 设置Route list
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _routeList Route list
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetRouteList(const std::vector<CkafkaRouteInfo>& _routeList);

                    /**
                     * 判断参数 RouteList 是否已赋值
                     * @return RouteList 是否已赋值
                     * 
                     */
                    bool RouteListHasBeenSet() const;

                    /**
                     * 获取Kafka version number
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return KafkaVersion Kafka version number
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetKafkaVersion() const;

                    /**
                     * 设置Kafka version number
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _kafkaVersion Kafka version number
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetKafkaVersion(const std::string& _kafkaVersion);

                    /**
                     * 判断参数 KafkaVersion 是否已赋值
                     * @return KafkaVersion 是否已赋值
                     * 
                     */
                    bool KafkaVersionHasBeenSet() const;

                private:

                    /**
                     * Instance ID
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_instanceID;
                    bool m_instanceIDHasBeenSet;

                    /**
                     * Instance name
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_instanceName;
                    bool m_instanceNameHasBeenSet;

                    /**
                     * Topic list
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<CKafkaTopicInfo> m_topicList;
                    bool m_topicListHasBeenSet;

                    /**
                     * Route list
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<CkafkaRouteInfo> m_routeList;
                    bool m_routeListHasBeenSet;

                    /**
                     * Kafka version number
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_kafkaVersion;
                    bool m_kafkaVersionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSS_V20201101_MODEL_CKAFKAINSTANCEINFO_H_
