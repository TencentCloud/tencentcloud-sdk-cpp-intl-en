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

#ifndef TENCENTCLOUD_DTS_V20211206_MODEL_DESCRIBESUBSCRIBEJOBSREQUEST_H_
#define TENCENTCLOUD_DTS_V20211206_MODEL_DESCRIBESUBSCRIBEJOBSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dts/v20211206/model/TagFilter.h>


namespace TencentCloud
{
    namespace Dts
    {
        namespace V20211206
        {
            namespace Model
            {
                /**
                * DescribeSubscribeJobs request structure.
                */
                class DescribeSubscribeJobsRequest : public AbstractModel
                {
                public:
                    DescribeSubscribeJobsRequest();
                    ~DescribeSubscribeJobsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Subscription ID (exact match)
                     * @return SubscribeId Subscription ID (exact match)
                     * 
                     */
                    std::string GetSubscribeId() const;

                    /**
                     * 设置Subscription ID (exact match)
                     * @param _subscribeId Subscription ID (exact match)
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
                     * 获取Subscription name (prefix fuzzy match)
                     * @return SubscribeName Subscription name (prefix fuzzy match)
                     * 
                     */
                    std::string GetSubscribeName() const;

                    /**
                     * 设置Subscription name (prefix fuzzy match)
                     * @param _subscribeName Subscription name (prefix fuzzy match)
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
                     * 获取Subscribed cloud database instance ID (exact match)
                     * @return InstanceId Subscribed cloud database instance ID (exact match)
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置Subscribed cloud database instance ID (exact match)
                     * @param _instanceId Subscribed cloud database instance ID (exact match)
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
                     * 获取Payment method. Valid values: 0 (monthly subscription); 1 (pay-as-you-go).
                     * @return PayType Payment method. Valid values: 0 (monthly subscription); 1 (pay-as-you-go).
                     * 
                     */
                    int64_t GetPayType() const;

                    /**
                     * 设置Payment method. Valid values: 0 (monthly subscription); 1 (pay-as-you-go).
                     * @param _payType Payment method. Valid values: 0 (monthly subscription); 1 (pay-as-you-go).
                     * 
                     */
                    void SetPayType(const int64_t& _payType);

                    /**
                     * 判断参数 PayType 是否已赋值
                     * @return PayType 是否已赋值
                     * 
                     */
                    bool PayTypeHasBeenSet() const;

                    /**
                     * 获取Subscribed database product. Currently, cynosdbmysql, mariadb, mongodb, mysql, percona, tdpg, tdsqlpercona are supported.
                     * @return Product Subscribed database product. Currently, cynosdbmysql, mariadb, mongodb, mysql, percona, tdpg, tdsqlpercona are supported.
                     * 
                     */
                    std::string GetProduct() const;

                    /**
                     * 设置Subscribed database product. Currently, cynosdbmysql, mariadb, mongodb, mysql, percona, tdpg, tdsqlpercona are supported.
                     * @param _product Subscribed database product. Currently, cynosdbmysql, mariadb, mongodb, mysql, percona, tdpg, tdsqlpercona are supported.
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
                     * 获取Data subscription lifecycle status. Valid values: normal, isolating, isolated, offline, post2PrePayIng.
                     * @return Status Data subscription lifecycle status. Valid values: normal, isolating, isolated, offline, post2PrePayIng.
                     * 
                     */
                    std::vector<std::string> GetStatus() const;

                    /**
                     * 设置Data subscription lifecycle status. Valid values: normal, isolating, isolated, offline, post2PrePayIng.
                     * @param _status Data subscription lifecycle status. Valid values: normal, isolating, isolated, offline, post2PrePayIng.
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
                     * 获取Data subscription status. Valid values: notStarted, checking, checkNotPass, checkPass, starting, running, error.
                     * @return SubsStatus Data subscription status. Valid values: notStarted, checking, checkNotPass, checkPass, starting, running, error.
                     * 
                     */
                    std::vector<std::string> GetSubsStatus() const;

                    /**
                     * 设置Data subscription status. Valid values: notStarted, checking, checkNotPass, checkPass, starting, running, error.
                     * @param _subsStatus Data subscription status. Valid values: notStarted, checking, checkNotPass, checkPass, starting, running, error.
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
                     * 获取Starting offset for returned results. Default value: 0.
                     * @return Offset Starting offset for returned results. Default value: 0.
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置Starting offset for returned results. Default value: 0.
                     * @param _offset Starting offset for returned results. Default value: 0.
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
                     * 获取Number of results to be returned at a time. Default value: 20. Maximum value: 100.
                     * @return Limit Number of results to be returned at a time. Default value: 20. Maximum value: 100.
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置Number of results to be returned at a time. Default value: 20. Maximum value: 100.
                     * @param _limit Number of results to be returned at a time. Default value: 20. Maximum value: 100.
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
                     * 获取Sorting order. Valid values: DESC, ASC. Default value: DESC, indicating descending by creation time.
                     * @return OrderDirection Sorting order. Valid values: DESC, ASC. Default value: DESC, indicating descending by creation time.
                     * 
                     */
                    std::string GetOrderDirection() const;

                    /**
                     * 设置Sorting order. Valid values: DESC, ASC. Default value: DESC, indicating descending by creation time.
                     * @param _orderDirection Sorting order. Valid values: DESC, ASC. Default value: DESC, indicating descending by creation time.
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
                     * 获取Tag filter condition, the relationship between multiple TagFilters is and.
                     * @return TagFilters Tag filter condition, the relationship between multiple TagFilters is and.
                     * 
                     */
                    std::vector<TagFilter> GetTagFilters() const;

                    /**
                     * 设置Tag filter condition, the relationship between multiple TagFilters is and.
                     * @param _tagFilters Tag filter condition, the relationship between multiple TagFilters is and.
                     * 
                     */
                    void SetTagFilters(const std::vector<TagFilter>& _tagFilters);

                    /**
                     * 判断参数 TagFilters 是否已赋值
                     * @return TagFilters 是否已赋值
                     * 
                     */
                    bool TagFiltersHasBeenSet() const;

                private:

                    /**
                     * Subscription ID (exact match)
                     */
                    std::string m_subscribeId;
                    bool m_subscribeIdHasBeenSet;

                    /**
                     * Subscription name (prefix fuzzy match)
                     */
                    std::string m_subscribeName;
                    bool m_subscribeNameHasBeenSet;

                    /**
                     * Subscribed cloud database instance ID (exact match)
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * Payment method. Valid values: 0 (monthly subscription); 1 (pay-as-you-go).
                     */
                    int64_t m_payType;
                    bool m_payTypeHasBeenSet;

                    /**
                     * Subscribed database product. Currently, cynosdbmysql, mariadb, mongodb, mysql, percona, tdpg, tdsqlpercona are supported.
                     */
                    std::string m_product;
                    bool m_productHasBeenSet;

                    /**
                     * Data subscription lifecycle status. Valid values: normal, isolating, isolated, offline, post2PrePayIng.
                     */
                    std::vector<std::string> m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Data subscription status. Valid values: notStarted, checking, checkNotPass, checkPass, starting, running, error.
                     */
                    std::vector<std::string> m_subsStatus;
                    bool m_subsStatusHasBeenSet;

                    /**
                     * Starting offset for returned results. Default value: 0.
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * Number of results to be returned at a time. Default value: 20. Maximum value: 100.
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * Sorting order. Valid values: DESC, ASC. Default value: DESC, indicating descending by creation time.
                     */
                    std::string m_orderDirection;
                    bool m_orderDirectionHasBeenSet;

                    /**
                     * Tag filter condition, the relationship between multiple TagFilters is and.
                     */
                    std::vector<TagFilter> m_tagFilters;
                    bool m_tagFiltersHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DTS_V20211206_MODEL_DESCRIBESUBSCRIBEJOBSREQUEST_H_
