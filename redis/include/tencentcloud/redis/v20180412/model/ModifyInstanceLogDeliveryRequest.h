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

#ifndef TENCENTCLOUD_REDIS_V20180412_MODEL_MODIFYINSTANCELOGDELIVERYREQUEST_H_
#define TENCENTCLOUD_REDIS_V20180412_MODEL_MODIFYINSTANCELOGDELIVERYREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Redis
    {
        namespace V20180412
        {
            namespace Model
            {
                /**
                * ModifyInstanceLogDelivery request structure.
                */
                class ModifyInstanceLogDeliveryRequest : public AbstractModel
                {
                public:
                    ModifyInstanceLogDeliveryRequest();
                    ~ModifyInstanceLogDeliveryRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Instance ID. Log in to the [Redis console](https://console.tencentcloud.com/redis/instance) and copy it in the instance list.
                     * @return InstanceId Instance ID. Log in to the [Redis console](https://console.tencentcloud.com/redis/instance) and copy it in the instance list.
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置Instance ID. Log in to the [Redis console](https://console.tencentcloud.com/redis/instance) and copy it in the instance list.
                     * @param _instanceId Instance ID. Log in to the [Redis console](https://console.tencentcloud.com/redis/instance) and copy it in the instance list.
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
                     * 获取Log type. Currently, only slowlog is supported, indicating the slow query log.
                     * @return LogType Log type. Currently, only slowlog is supported, indicating the slow query log.
                     * 
                     */
                    std::string GetLogType() const;

                    /**
                     * 设置Log type. Currently, only slowlog is supported, indicating the slow query log.
                     * @param _logType Log type. Currently, only slowlog is supported, indicating the slow query log.
                     * 
                     */
                    void SetLogType(const std::string& _logType);

                    /**
                     * 判断参数 LogType 是否已赋值
                     * @return LogType 是否已赋值
                     * 
                     */
                    bool LogTypeHasBeenSet() const;

                    /**
                     * 获取Whether log shopping is enabled.
- true: enabled.
- false: disabled.
                     * @return Enabled Whether log shopping is enabled.
- true: enabled.
- false: disabled.
                     * 
                     */
                    bool GetEnabled() const;

                    /**
                     * 设置Whether log shopping is enabled.
- true: enabled.
- false: disabled.
                     * @param _enabled Whether log shopping is enabled.
- true: enabled.
- false: disabled.
                     * 
                     */
                    void SetEnabled(const bool& _enabled);

                    /**
                     * 判断参数 Enabled 是否已赋值
                     * @return Enabled 是否已赋值
                     * 
                     */
                    bool EnabledHasBeenSet() const;

                    /**
                     * 获取ID of the shipped logset, which can be obtained through the sub-parameter **LogsetId** of the response parameter **SlowLog** of the API [DescribeInstanceLogDelivery](https://intl.cloud.tencent.com/document/product/239/110878?from_cn_redirect=1).
                     * @return LogsetId ID of the shipped logset, which can be obtained through the sub-parameter **LogsetId** of the response parameter **SlowLog** of the API [DescribeInstanceLogDelivery](https://intl.cloud.tencent.com/document/product/239/110878?from_cn_redirect=1).
                     * 
                     */
                    std::string GetLogsetId() const;

                    /**
                     * 设置ID of the shipped logset, which can be obtained through the sub-parameter **LogsetId** of the response parameter **SlowLog** of the API [DescribeInstanceLogDelivery](https://intl.cloud.tencent.com/document/product/239/110878?from_cn_redirect=1).
                     * @param _logsetId ID of the shipped logset, which can be obtained through the sub-parameter **LogsetId** of the response parameter **SlowLog** of the API [DescribeInstanceLogDelivery](https://intl.cloud.tencent.com/document/product/239/110878?from_cn_redirect=1).
                     * 
                     */
                    void SetLogsetId(const std::string& _logsetId);

                    /**
                     * 判断参数 LogsetId 是否已赋值
                     * @return LogsetId 是否已赋值
                     * 
                     */
                    bool LogsetIdHasBeenSet() const;

                    /**
                     * 获取ID of the shipped log topic, which can be obtained through the sub-parameter **TopicId** of the response parameter **SlowLog** of the API [DescribeInstanceLogDelivery](https://intl.cloud.tencent.com/document/product/239/110878?from_cn_redirect=1).
                     * @return TopicId ID of the shipped log topic, which can be obtained through the sub-parameter **TopicId** of the response parameter **SlowLog** of the API [DescribeInstanceLogDelivery](https://intl.cloud.tencent.com/document/product/239/110878?from_cn_redirect=1).
                     * 
                     */
                    std::string GetTopicId() const;

                    /**
                     * 设置ID of the shipped log topic, which can be obtained through the sub-parameter **TopicId** of the response parameter **SlowLog** of the API [DescribeInstanceLogDelivery](https://intl.cloud.tencent.com/document/product/239/110878?from_cn_redirect=1).
                     * @param _topicId ID of the shipped log topic, which can be obtained through the sub-parameter **TopicId** of the response parameter **SlowLog** of the API [DescribeInstanceLogDelivery](https://intl.cloud.tencent.com/document/product/239/110878?from_cn_redirect=1).
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
                     * 获取Logset name. If **LogsetId** is not specified, this parameter needs to be configured and the system will automatically create a logset with the specified name.
                     * @return LogsetName Logset name. If **LogsetId** is not specified, this parameter needs to be configured and the system will automatically create a logset with the specified name.
                     * 
                     */
                    std::string GetLogsetName() const;

                    /**
                     * 设置Logset name. If **LogsetId** is not specified, this parameter needs to be configured and the system will automatically create a logset with the specified name.
                     * @param _logsetName Logset name. If **LogsetId** is not specified, this parameter needs to be configured and the system will automatically create a logset with the specified name.
                     * 
                     */
                    void SetLogsetName(const std::string& _logsetName);

                    /**
                     * 判断参数 LogsetName 是否已赋值
                     * @return LogsetName 是否已赋值
                     * 
                     */
                    bool LogsetNameHasBeenSet() const;

                    /**
                     * 获取Log topic name. This parameter is required when TopicId is empty, and the system will automatically create a log topic.
                     * @return TopicName Log topic name. This parameter is required when TopicId is empty, and the system will automatically create a log topic.
                     * 
                     */
                    std::string GetTopicName() const;

                    /**
                     * 设置Log topic name. This parameter is required when TopicId is empty, and the system will automatically create a log topic.
                     * @param _topicName Log topic name. This parameter is required when TopicId is empty, and the system will automatically create a log topic.
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
                     * 获取Region where the logset is located. If it is not provided, the region where the instance is located will be used by default.
                     * @return LogRegion Region where the logset is located. If it is not provided, the region where the instance is located will be used by default.
                     * 
                     */
                    std::string GetLogRegion() const;

                    /**
                     * 设置Region where the logset is located. If it is not provided, the region where the instance is located will be used by default.
                     * @param _logRegion Region where the logset is located. If it is not provided, the region where the instance is located will be used by default.
                     * 
                     */
                    void SetLogRegion(const std::string& _logRegion);

                    /**
                     * 判断参数 LogRegion 是否已赋值
                     * @return LogRegion 是否已赋值
                     * 
                     */
                    bool LogRegionHasBeenSet() const;

                    /**
                     * 获取Log storage duration. Default value: 30 days. Value range: 1 to 3600 days.
                     * @return Period Log storage duration. Default value: 30 days. Value range: 1 to 3600 days.
                     * 
                     */
                    int64_t GetPeriod() const;

                    /**
                     * 设置Log storage duration. Default value: 30 days. Value range: 1 to 3600 days.
                     * @param _period Log storage duration. Default value: 30 days. Value range: 1 to 3600 days.
                     * 
                     */
                    void SetPeriod(const int64_t& _period);

                    /**
                     * 判断参数 Period 是否已赋值
                     * @return Period 是否已赋值
                     * 
                     */
                    bool PeriodHasBeenSet() const;

                    /**
                     * 获取Whether to create an index when creating a log topic.
                     * @return CreateIndex Whether to create an index when creating a log topic.
                     * 
                     */
                    bool GetCreateIndex() const;

                    /**
                     * 设置Whether to create an index when creating a log topic.
                     * @param _createIndex Whether to create an index when creating a log topic.
                     * 
                     */
                    void SetCreateIndex(const bool& _createIndex);

                    /**
                     * 判断参数 CreateIndex 是否已赋值
                     * @return CreateIndex 是否已赋值
                     * 
                     */
                    bool CreateIndexHasBeenSet() const;

                private:

                    /**
                     * Instance ID. Log in to the [Redis console](https://console.tencentcloud.com/redis/instance) and copy it in the instance list.
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * Log type. Currently, only slowlog is supported, indicating the slow query log.
                     */
                    std::string m_logType;
                    bool m_logTypeHasBeenSet;

                    /**
                     * Whether log shopping is enabled.
- true: enabled.
- false: disabled.
                     */
                    bool m_enabled;
                    bool m_enabledHasBeenSet;

                    /**
                     * ID of the shipped logset, which can be obtained through the sub-parameter **LogsetId** of the response parameter **SlowLog** of the API [DescribeInstanceLogDelivery](https://intl.cloud.tencent.com/document/product/239/110878?from_cn_redirect=1).
                     */
                    std::string m_logsetId;
                    bool m_logsetIdHasBeenSet;

                    /**
                     * ID of the shipped log topic, which can be obtained through the sub-parameter **TopicId** of the response parameter **SlowLog** of the API [DescribeInstanceLogDelivery](https://intl.cloud.tencent.com/document/product/239/110878?from_cn_redirect=1).
                     */
                    std::string m_topicId;
                    bool m_topicIdHasBeenSet;

                    /**
                     * Logset name. If **LogsetId** is not specified, this parameter needs to be configured and the system will automatically create a logset with the specified name.
                     */
                    std::string m_logsetName;
                    bool m_logsetNameHasBeenSet;

                    /**
                     * Log topic name. This parameter is required when TopicId is empty, and the system will automatically create a log topic.
                     */
                    std::string m_topicName;
                    bool m_topicNameHasBeenSet;

                    /**
                     * Region where the logset is located. If it is not provided, the region where the instance is located will be used by default.
                     */
                    std::string m_logRegion;
                    bool m_logRegionHasBeenSet;

                    /**
                     * Log storage duration. Default value: 30 days. Value range: 1 to 3600 days.
                     */
                    int64_t m_period;
                    bool m_periodHasBeenSet;

                    /**
                     * Whether to create an index when creating a log topic.
                     */
                    bool m_createIndex;
                    bool m_createIndexHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_REDIS_V20180412_MODEL_MODIFYINSTANCELOGDELIVERYREQUEST_H_
