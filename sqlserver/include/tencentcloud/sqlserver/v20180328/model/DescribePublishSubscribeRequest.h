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

#ifndef TENCENTCLOUD_SQLSERVER_V20180328_MODEL_DESCRIBEPUBLISHSUBSCRIBEREQUEST_H_
#define TENCENTCLOUD_SQLSERVER_V20180328_MODEL_DESCRIBEPUBLISHSUBSCRIBEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Sqlserver
    {
        namespace V20180328
        {
            namespace Model
            {
                /**
                * DescribePublishSubscribe request structure.
                */
                class DescribePublishSubscribeRequest : public AbstractModel
                {
                public:
                    DescribePublishSubscribeRequest();
                    ~DescribePublishSubscribeRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Instance ID. For example, mssql-j8kv137v.
                     * @return InstanceId Instance ID. For example, mssql-j8kv137v.
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置Instance ID. For example, mssql-j8kv137v.
                     * @param _instanceId Instance ID. For example, mssql-j8kv137v.
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
                     * 获取Publish/subscribe instance ID, which is related to whether InstanceId is a publishing instance or a subscription instance. When the value of InstanceId is a publishing instance, filtering by subscription instance ID is performed for this field. When the value of InstanceId is a subscription instance, filtering by publishing instance ID is performed for this field.
                     * @return PubOrSubInstanceId Publish/subscribe instance ID, which is related to whether InstanceId is a publishing instance or a subscription instance. When the value of InstanceId is a publishing instance, filtering by subscription instance ID is performed for this field. When the value of InstanceId is a subscription instance, filtering by publishing instance ID is performed for this field.
                     * 
                     */
                    std::string GetPubOrSubInstanceId() const;

                    /**
                     * 设置Publish/subscribe instance ID, which is related to whether InstanceId is a publishing instance or a subscription instance. When the value of InstanceId is a publishing instance, filtering by subscription instance ID is performed for this field. When the value of InstanceId is a subscription instance, filtering by publishing instance ID is performed for this field.
                     * @param _pubOrSubInstanceId Publish/subscribe instance ID, which is related to whether InstanceId is a publishing instance or a subscription instance. When the value of InstanceId is a publishing instance, filtering by subscription instance ID is performed for this field. When the value of InstanceId is a subscription instance, filtering by publishing instance ID is performed for this field.
                     * 
                     */
                    void SetPubOrSubInstanceId(const std::string& _pubOrSubInstanceId);

                    /**
                     * 判断参数 PubOrSubInstanceId 是否已赋值
                     * @return PubOrSubInstanceId 是否已赋值
                     * 
                     */
                    bool PubOrSubInstanceIdHasBeenSet() const;

                    /**
                     * 获取Private address of the publish/subscribe instance, which is related to whether InstanceId is a publishing instance or a subscription instance. When the value of InstanceId is a publishing instance, filtering by private IP address of the subscription instance is performed for this field. When the value of InstanceId is a subscription instance, filtering by private IP address of the publishing instance is performed for this field.
                     * @return PubOrSubInstanceIp Private address of the publish/subscribe instance, which is related to whether InstanceId is a publishing instance or a subscription instance. When the value of InstanceId is a publishing instance, filtering by private IP address of the subscription instance is performed for this field. When the value of InstanceId is a subscription instance, filtering by private IP address of the publishing instance is performed for this field.
                     * 
                     */
                    std::string GetPubOrSubInstanceIp() const;

                    /**
                     * 设置Private address of the publish/subscribe instance, which is related to whether InstanceId is a publishing instance or a subscription instance. When the value of InstanceId is a publishing instance, filtering by private IP address of the subscription instance is performed for this field. When the value of InstanceId is a subscription instance, filtering by private IP address of the publishing instance is performed for this field.
                     * @param _pubOrSubInstanceIp Private address of the publish/subscribe instance, which is related to whether InstanceId is a publishing instance or a subscription instance. When the value of InstanceId is a publishing instance, filtering by private IP address of the subscription instance is performed for this field. When the value of InstanceId is a subscription instance, filtering by private IP address of the publishing instance is performed for this field.
                     * 
                     */
                    void SetPubOrSubInstanceIp(const std::string& _pubOrSubInstanceIp);

                    /**
                     * 判断参数 PubOrSubInstanceIp 是否已赋值
                     * @return PubOrSubInstanceIp 是否已赋值
                     * 
                     */
                    bool PubOrSubInstanceIpHasBeenSet() const;

                    /**
                     * 获取Publish/subscribe ID, which is used for filtering.
                     * @return PublishSubscribeId Publish/subscribe ID, which is used for filtering.
                     * 
                     */
                    uint64_t GetPublishSubscribeId() const;

                    /**
                     * 设置Publish/subscribe ID, which is used for filtering.
                     * @param _publishSubscribeId Publish/subscribe ID, which is used for filtering.
                     * 
                     */
                    void SetPublishSubscribeId(const uint64_t& _publishSubscribeId);

                    /**
                     * 判断参数 PublishSubscribeId 是否已赋值
                     * @return PublishSubscribeId 是否已赋值
                     * 
                     */
                    bool PublishSubscribeIdHasBeenSet() const;

                    /**
                     * 获取Publish/subscribe name, which is used for filtering.
                     * @return PublishSubscribeName Publish/subscribe name, which is used for filtering.
                     * 
                     */
                    std::string GetPublishSubscribeName() const;

                    /**
                     * 设置Publish/subscribe name, which is used for filtering.
                     * @param _publishSubscribeName Publish/subscribe name, which is used for filtering.
                     * 
                     */
                    void SetPublishSubscribeName(const std::string& _publishSubscribeName);

                    /**
                     * 判断参数 PublishSubscribeName 是否已赋值
                     * @return PublishSubscribeName 是否已赋值
                     * 
                     */
                    bool PublishSubscribeNameHasBeenSet() const;

                    /**
                     * 获取Publishing database name, which is used for filtering.
                     * @return PublishDBName Publishing database name, which is used for filtering.
                     * 
                     */
                    std::string GetPublishDBName() const;

                    /**
                     * 设置Publishing database name, which is used for filtering.
                     * @param _publishDBName Publishing database name, which is used for filtering.
                     * 
                     */
                    void SetPublishDBName(const std::string& _publishDBName);

                    /**
                     * 判断参数 PublishDBName 是否已赋值
                     * @return PublishDBName 是否已赋值
                     * 
                     */
                    bool PublishDBNameHasBeenSet() const;

                    /**
                     * 获取Subscription database name, which is used for filtering.
                     * @return SubscribeDBName Subscription database name, which is used for filtering.
                     * 
                     */
                    std::string GetSubscribeDBName() const;

                    /**
                     * 设置Subscription database name, which is used for filtering.
                     * @param _subscribeDBName Subscription database name, which is used for filtering.
                     * 
                     */
                    void SetSubscribeDBName(const std::string& _subscribeDBName);

                    /**
                     * 判断参数 SubscribeDBName 是否已赋值
                     * @return SubscribeDBName 是否已赋值
                     * 
                     */
                    bool SubscribeDBNameHasBeenSet() const;

                    /**
                     * 获取Pagination number.
                     * @return Offset Pagination number.
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置Pagination number.
                     * @param _offset Pagination number.
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
                     * 获取Pagination size.
                     * @return Limit Pagination size.
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置Pagination size.
                     * @param _limit Pagination size.
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
                     * Instance ID. For example, mssql-j8kv137v.
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * Publish/subscribe instance ID, which is related to whether InstanceId is a publishing instance or a subscription instance. When the value of InstanceId is a publishing instance, filtering by subscription instance ID is performed for this field. When the value of InstanceId is a subscription instance, filtering by publishing instance ID is performed for this field.
                     */
                    std::string m_pubOrSubInstanceId;
                    bool m_pubOrSubInstanceIdHasBeenSet;

                    /**
                     * Private address of the publish/subscribe instance, which is related to whether InstanceId is a publishing instance or a subscription instance. When the value of InstanceId is a publishing instance, filtering by private IP address of the subscription instance is performed for this field. When the value of InstanceId is a subscription instance, filtering by private IP address of the publishing instance is performed for this field.
                     */
                    std::string m_pubOrSubInstanceIp;
                    bool m_pubOrSubInstanceIpHasBeenSet;

                    /**
                     * Publish/subscribe ID, which is used for filtering.
                     */
                    uint64_t m_publishSubscribeId;
                    bool m_publishSubscribeIdHasBeenSet;

                    /**
                     * Publish/subscribe name, which is used for filtering.
                     */
                    std::string m_publishSubscribeName;
                    bool m_publishSubscribeNameHasBeenSet;

                    /**
                     * Publishing database name, which is used for filtering.
                     */
                    std::string m_publishDBName;
                    bool m_publishDBNameHasBeenSet;

                    /**
                     * Subscription database name, which is used for filtering.
                     */
                    std::string m_subscribeDBName;
                    bool m_subscribeDBNameHasBeenSet;

                    /**
                     * Pagination number.
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * Pagination size.
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SQLSERVER_V20180328_MODEL_DESCRIBEPUBLISHSUBSCRIBEREQUEST_H_
