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

#ifndef TENCENTCLOUD_CMQ_V20190304_MODEL_SUBSCRIPTION_H_
#define TENCENTCLOUD_CMQ_V20190304_MODEL_SUBSCRIPTION_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cmq
    {
        namespace V20190304
        {
            namespace Model
            {
                /**
                * Subscription response parameter
                */
                class Subscription : public AbstractModel
                {
                public:
                    Subscription();
                    ~Subscription() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取SubscriptionName
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return SubscriptionName SubscriptionName
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetSubscriptionName() const;

                    /**
                     * 设置SubscriptionName
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _subscriptionName SubscriptionName
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetSubscriptionName(const std::string& _subscriptionName);

                    /**
                     * 判断参数 SubscriptionName 是否已赋值
                     * @return SubscriptionName 是否已赋值
                     * 
                     */
                    bool SubscriptionNameHasBeenSet() const;

                    /**
                     * 获取SubscriptionId
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return SubscriptionId SubscriptionId
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetSubscriptionId() const;

                    /**
                     * 设置SubscriptionId
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _subscriptionId SubscriptionId
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetSubscriptionId(const std::string& _subscriptionId);

                    /**
                     * 判断参数 SubscriptionId 是否已赋值
                     * @return SubscriptionId 是否已赋值
                     * 
                     */
                    bool SubscriptionIdHasBeenSet() const;

                    /**
                     * 获取TopicOwner
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return TopicOwner TopicOwner
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetTopicOwner() const;

                    /**
                     * 设置TopicOwner
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _topicOwner TopicOwner
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetTopicOwner(const uint64_t& _topicOwner);

                    /**
                     * 判断参数 TopicOwner 是否已赋值
                     * @return TopicOwner 是否已赋值
                     * 
                     */
                    bool TopicOwnerHasBeenSet() const;

                    /**
                     * 获取MsgCount
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return MsgCount MsgCount
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetMsgCount() const;

                    /**
                     * 设置MsgCount
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _msgCount MsgCount
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetMsgCount(const uint64_t& _msgCount);

                    /**
                     * 判断参数 MsgCount 是否已赋值
                     * @return MsgCount 是否已赋值
                     * 
                     */
                    bool MsgCountHasBeenSet() const;

                    /**
                     * 获取LastModifyTime
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return LastModifyTime LastModifyTime
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetLastModifyTime() const;

                    /**
                     * 设置LastModifyTime
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _lastModifyTime LastModifyTime
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetLastModifyTime(const uint64_t& _lastModifyTime);

                    /**
                     * 判断参数 LastModifyTime 是否已赋值
                     * @return LastModifyTime 是否已赋值
                     * 
                     */
                    bool LastModifyTimeHasBeenSet() const;

                    /**
                     * 获取CreateTime
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return CreateTime CreateTime
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetCreateTime() const;

                    /**
                     * 设置CreateTime
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _createTime CreateTime
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetCreateTime(const uint64_t& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取BindingKey
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return BindingKey BindingKey
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<std::string> GetBindingKey() const;

                    /**
                     * 设置BindingKey
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _bindingKey BindingKey
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetBindingKey(const std::vector<std::string>& _bindingKey);

                    /**
                     * 判断参数 BindingKey 是否已赋值
                     * @return BindingKey 是否已赋值
                     * 
                     */
                    bool BindingKeyHasBeenSet() const;

                    /**
                     * 获取Endpoint
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return Endpoint Endpoint
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetEndpoint() const;

                    /**
                     * 设置Endpoint
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _endpoint Endpoint
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetEndpoint(const std::string& _endpoint);

                    /**
                     * 判断参数 Endpoint 是否已赋值
                     * @return Endpoint 是否已赋值
                     * 
                     */
                    bool EndpointHasBeenSet() const;

                    /**
                     * 获取FilterTags
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return FilterTags FilterTags
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<std::string> GetFilterTags() const;

                    /**
                     * 设置FilterTags
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _filterTags FilterTags
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetFilterTags(const std::vector<std::string>& _filterTags);

                    /**
                     * 判断参数 FilterTags 是否已赋值
                     * @return FilterTags 是否已赋值
                     * 
                     */
                    bool FilterTagsHasBeenSet() const;

                    /**
                     * 获取Protocol
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return Protocol Protocol
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetProtocol() const;

                    /**
                     * 设置Protocol
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _protocol Protocol
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetProtocol(const std::string& _protocol);

                    /**
                     * 判断参数 Protocol 是否已赋值
                     * @return Protocol 是否已赋值
                     * 
                     */
                    bool ProtocolHasBeenSet() const;

                    /**
                     * 获取NotifyStrategy
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return NotifyStrategy NotifyStrategy
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetNotifyStrategy() const;

                    /**
                     * 设置NotifyStrategy
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _notifyStrategy NotifyStrategy
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetNotifyStrategy(const std::string& _notifyStrategy);

                    /**
                     * 判断参数 NotifyStrategy 是否已赋值
                     * @return NotifyStrategy 是否已赋值
                     * 
                     */
                    bool NotifyStrategyHasBeenSet() const;

                    /**
                     * 获取NotifyContentFormat
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return NotifyContentFormat NotifyContentFormat
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetNotifyContentFormat() const;

                    /**
                     * 设置NotifyContentFormat
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _notifyContentFormat NotifyContentFormat
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetNotifyContentFormat(const std::string& _notifyContentFormat);

                    /**
                     * 判断参数 NotifyContentFormat 是否已赋值
                     * @return NotifyContentFormat 是否已赋值
                     * 
                     */
                    bool NotifyContentFormatHasBeenSet() const;

                private:

                    /**
                     * SubscriptionName
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_subscriptionName;
                    bool m_subscriptionNameHasBeenSet;

                    /**
                     * SubscriptionId
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_subscriptionId;
                    bool m_subscriptionIdHasBeenSet;

                    /**
                     * TopicOwner
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_topicOwner;
                    bool m_topicOwnerHasBeenSet;

                    /**
                     * MsgCount
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_msgCount;
                    bool m_msgCountHasBeenSet;

                    /**
                     * LastModifyTime
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_lastModifyTime;
                    bool m_lastModifyTimeHasBeenSet;

                    /**
                     * CreateTime
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * BindingKey
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<std::string> m_bindingKey;
                    bool m_bindingKeyHasBeenSet;

                    /**
                     * Endpoint
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_endpoint;
                    bool m_endpointHasBeenSet;

                    /**
                     * FilterTags
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<std::string> m_filterTags;
                    bool m_filterTagsHasBeenSet;

                    /**
                     * Protocol
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_protocol;
                    bool m_protocolHasBeenSet;

                    /**
                     * NotifyStrategy
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_notifyStrategy;
                    bool m_notifyStrategyHasBeenSet;

                    /**
                     * NotifyContentFormat
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_notifyContentFormat;
                    bool m_notifyContentFormatHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CMQ_V20190304_MODEL_SUBSCRIPTION_H_
