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

#ifndef TENCENTCLOUD_DTS_V20180330_MODEL_DESCRIBESUBSCRIBESREQUEST_H_
#define TENCENTCLOUD_DTS_V20180330_MODEL_DESCRIBESUBSCRIBESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dts/v20180330/model/TagFilter.h>


namespace TencentCloud
{
    namespace Dts
    {
        namespace V20180330
        {
            namespace Model
            {
                /**
                * DescribeSubscribes request structure.
                */
                class DescribeSubscribesRequest : public AbstractModel
                {
                public:
                    DescribeSubscribesRequest();
                    ~DescribeSubscribesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Data subscription instance ID
                     * @return SubscribeId Data subscription instance ID
                     * 
                     */
                    std::string GetSubscribeId() const;

                    /**
                     * 设置Data subscription instance ID
                     * @param _subscribeId Data subscription instance ID
                     * 
                     */
                    void SetSubscribeId(const std::string& _subscribeId);

                    /**
                     * 判断参数 SubscribeId 是否已赋值
                     * @return SubscribeId 是否已赋值
                     * 
                     */
                    bool SubscribeIdHasBeenSet() const;

                    /**
                     * 获取Data subscription instance name
                     * @return SubscribeName Data subscription instance name
                     * 
                     */
                    std::string GetSubscribeName() const;

                    /**
                     * 设置Data subscription instance name
                     * @param _subscribeName Data subscription instance name
                     * 
                     */
                    void SetSubscribeName(const std::string& _subscribeName);

                    /**
                     * 判断参数 SubscribeName 是否已赋值
                     * @return SubscribeName 是否已赋值
                     * 
                     */
                    bool SubscribeNameHasBeenSet() const;

                    /**
                     * 获取ID of bound database instance
                     * @return InstanceId ID of bound database instance
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置ID of bound database instance
                     * @param _instanceId ID of bound database instance
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
                     * 获取Data subscription instance channel ID
                     * @return ChannelId Data subscription instance channel ID
                     * 
                     */
                    std::string GetChannelId() const;

                    /**
                     * 设置Data subscription instance channel ID
                     * @param _channelId Data subscription instance channel ID
                     * 
                     */
                    void SetChannelId(const std::string& _channelId);

                    /**
                     * 判断参数 ChannelId 是否已赋值
                     * @return ChannelId 是否已赋值
                     * 
                     */
                    bool ChannelIdHasBeenSet() const;

                    /**
                     * 获取Billing mode filter. Default value: 1 (pay-as-you-go)
                     * @return PayType Billing mode filter. Default value: 1 (pay-as-you-go)
                     * 
                     */
                    std::string GetPayType() const;

                    /**
                     * 设置Billing mode filter. Default value: 1 (pay-as-you-go)
                     * @param _payType Billing mode filter. Default value: 1 (pay-as-you-go)
                     * 
                     */
                    void SetPayType(const std::string& _payType);

                    /**
                     * 判断参数 PayType 是否已赋值
                     * @return PayType 是否已赋值
                     * 
                     */
                    bool PayTypeHasBeenSet() const;

                    /**
                     * 获取Subscribed database product, such as MySQL
                     * @return Product Subscribed database product, such as MySQL
                     * 
                     */
                    std::string GetProduct() const;

                    /**
                     * 设置Subscribed database product, such as MySQL
                     * @param _product Subscribed database product, such as MySQL
                     * 
                     */
                    void SetProduct(const std::string& _product);

                    /**
                     * 判断参数 Product 是否已赋值
                     * @return Product 是否已赋值
                     * 
                     */
                    bool ProductHasBeenSet() const;

                    /**
                     * 获取Data subscription instance status. Valid values: creating, normal, isolating, isolated, offlining
                     * @return Status Data subscription instance status. Valid values: creating, normal, isolating, isolated, offlining
                     * 
                     */
                    std::vector<std::string> GetStatus() const;

                    /**
                     * 设置Data subscription instance status. Valid values: creating, normal, isolating, isolated, offlining
                     * @param _status Data subscription instance status. Valid values: creating, normal, isolating, isolated, offlining
                     * 
                     */
                    void SetStatus(const std::vector<std::string>& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取Data subscription instance configuration status. Valid values: unconfigure, configuring, configured
                     * @return SubsStatus Data subscription instance configuration status. Valid values: unconfigure, configuring, configured
                     * 
                     */
                    std::vector<std::string> GetSubsStatus() const;

                    /**
                     * 设置Data subscription instance configuration status. Valid values: unconfigure, configuring, configured
                     * @param _subsStatus Data subscription instance configuration status. Valid values: unconfigure, configuring, configured
                     * 
                     */
                    void SetSubsStatus(const std::vector<std::string>& _subsStatus);

                    /**
                     * 判断参数 SubsStatus 是否已赋值
                     * @return SubsStatus 是否已赋值
                     * 
                     */
                    bool SubsStatusHasBeenSet() const;

                    /**
                     * 获取Starting offset of returned results
                     * @return Offset Starting offset of returned results
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置Starting offset of returned results
                     * @param _offset Starting offset of returned results
                     * 
                     */
                    void SetOffset(const int64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取Number of results to be returned at a time
                     * @return Limit Number of results to be returned at a time
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置Number of results to be returned at a time
                     * @param _limit Number of results to be returned at a time
                     * 
                     */
                    void SetLimit(const int64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取Sorting order. Valid values: DESC, ASC. Default value: DESC, indicating descending by creation time
                     * @return OrderDirection Sorting order. Valid values: DESC, ASC. Default value: DESC, indicating descending by creation time
                     * 
                     */
                    std::string GetOrderDirection() const;

                    /**
                     * 设置Sorting order. Valid values: DESC, ASC. Default value: DESC, indicating descending by creation time
                     * @param _orderDirection Sorting order. Valid values: DESC, ASC. Default value: DESC, indicating descending by creation time
                     * 
                     */
                    void SetOrderDirection(const std::string& _orderDirection);

                    /**
                     * 判断参数 OrderDirection 是否已赋值
                     * @return OrderDirection 是否已赋值
                     * 
                     */
                    bool OrderDirectionHasBeenSet() const;

                    /**
                     * 获取Tag filtering condition
                     * @return TagFilters Tag filtering condition
                     * 
                     */
                    std::vector<TagFilter> GetTagFilters() const;

                    /**
                     * 设置Tag filtering condition
                     * @param _tagFilters Tag filtering condition
                     * 
                     */
                    void SetTagFilters(const std::vector<TagFilter>& _tagFilters);

                    /**
                     * 判断参数 TagFilters 是否已赋值
                     * @return TagFilters 是否已赋值
                     * 
                     */
                    bool TagFiltersHasBeenSet() const;

                    /**
                     * 获取Subscription instance edition. `txdts`: legacy data subscription; `kafka`: data subscription in Kafka edition
                     * @return SubscribeVersion Subscription instance edition. `txdts`: legacy data subscription; `kafka`: data subscription in Kafka edition
                     * 
                     */
                    std::string GetSubscribeVersion() const;

                    /**
                     * 设置Subscription instance edition. `txdts`: legacy data subscription; `kafka`: data subscription in Kafka edition
                     * @param _subscribeVersion Subscription instance edition. `txdts`: legacy data subscription; `kafka`: data subscription in Kafka edition
                     * 
                     */
                    void SetSubscribeVersion(const std::string& _subscribeVersion);

                    /**
                     * 判断参数 SubscribeVersion 是否已赋值
                     * @return SubscribeVersion 是否已赋值
                     * 
                     */
                    bool SubscribeVersionHasBeenSet() const;

                private:

                    /**
                     * Data subscription instance ID
                     */
                    std::string m_subscribeId;
                    bool m_subscribeIdHasBeenSet;

                    /**
                     * Data subscription instance name
                     */
                    std::string m_subscribeName;
                    bool m_subscribeNameHasBeenSet;

                    /**
                     * ID of bound database instance
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * Data subscription instance channel ID
                     */
                    std::string m_channelId;
                    bool m_channelIdHasBeenSet;

                    /**
                     * Billing mode filter. Default value: 1 (pay-as-you-go)
                     */
                    std::string m_payType;
                    bool m_payTypeHasBeenSet;

                    /**
                     * Subscribed database product, such as MySQL
                     */
                    std::string m_product;
                    bool m_productHasBeenSet;

                    /**
                     * Data subscription instance status. Valid values: creating, normal, isolating, isolated, offlining
                     */
                    std::vector<std::string> m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Data subscription instance configuration status. Valid values: unconfigure, configuring, configured
                     */
                    std::vector<std::string> m_subsStatus;
                    bool m_subsStatusHasBeenSet;

                    /**
                     * Starting offset of returned results
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * Number of results to be returned at a time
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * Sorting order. Valid values: DESC, ASC. Default value: DESC, indicating descending by creation time
                     */
                    std::string m_orderDirection;
                    bool m_orderDirectionHasBeenSet;

                    /**
                     * Tag filtering condition
                     */
                    std::vector<TagFilter> m_tagFilters;
                    bool m_tagFiltersHasBeenSet;

                    /**
                     * Subscription instance edition. `txdts`: legacy data subscription; `kafka`: data subscription in Kafka edition
                     */
                    std::string m_subscribeVersion;
                    bool m_subscribeVersionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DTS_V20180330_MODEL_DESCRIBESUBSCRIBESREQUEST_H_
