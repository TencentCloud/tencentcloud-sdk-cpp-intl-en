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

#ifndef TENCENTCLOUD_DBBRAIN_V20210527_MODEL_DESCRIBEPROXYPROCESSSTATISTICSREQUEST_H_
#define TENCENTCLOUD_DBBRAIN_V20210527_MODEL_DESCRIBEPROXYPROCESSSTATISTICSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dbbrain
    {
        namespace V20210527
        {
            namespace Model
            {
                /**
                * DescribeProxyProcessStatistics request structure.
                */
                class DescribeProxyProcessStatisticsRequest : public AbstractModel
                {
                public:
                    DescribeProxyProcessStatisticsRequest();
                    ~DescribeProxyProcessStatisticsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Instance ID.
                     * @return InstanceId Instance ID.
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置Instance ID.
                     * @param InstanceId Instance ID.
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取The proxy ID you want to query under the instance
                     * @return InstanceProxyId The proxy ID you want to query under the instance
                     */
                    std::string GetInstanceProxyId() const;

                    /**
                     * 设置The proxy ID you want to query under the instance
                     * @param InstanceProxyId The proxy ID you want to query under the instance
                     */
                    void SetInstanceProxyId(const std::string& _instanceProxyId);

                    /**
                     * 判断参数 InstanceProxyId 是否已赋值
                     * @return InstanceProxyId 是否已赋值
                     */
                    bool InstanceProxyIdHasBeenSet() const;

                    /**
                     * 获取Number of returned results.
                     * @return Limit Number of returned results.
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置Number of returned results.
                     * @param Limit Number of returned results.
                     */
                    void SetLimit(const int64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取Service type. Valid value: `redis` (TencentDB for Redis).
                     * @return Product Service type. Valid value: `redis` (TencentDB for Redis).
                     */
                    std::string GetProduct() const;

                    /**
                     * 设置Service type. Valid value: `redis` (TencentDB for Redis).
                     * @param Product Service type. Valid value: `redis` (TencentDB for Redis).
                     */
                    void SetProduct(const std::string& _product);

                    /**
                     * 判断参数 Product 是否已赋值
                     * @return Product 是否已赋值
                     */
                    bool ProductHasBeenSet() const;

                    /**
                     * 获取Offset. Default value: `0`.
                     * @return Offset Offset. Default value: `0`.
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置Offset. Default value: `0`.
                     * @param Offset Offset. Default value: `0`.
                     */
                    void SetOffset(const int64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取Sort by field. Valid values: `AllConn`, `ActiveConn`, `Ip`.
                     * @return SortBy Sort by field. Valid values: `AllConn`, `ActiveConn`, `Ip`.
                     */
                    std::string GetSortBy() const;

                    /**
                     * 设置Sort by field. Valid values: `AllConn`, `ActiveConn`, `Ip`.
                     * @param SortBy Sort by field. Valid values: `AllConn`, `ActiveConn`, `Ip`.
                     */
                    void SetSortBy(const std::string& _sortBy);

                    /**
                     * 判断参数 SortBy 是否已赋值
                     * @return SortBy 是否已赋值
                     */
                    bool SortByHasBeenSet() const;

                    /**
                     * 获取Sorting order. Valid values: `DESC`, `ASC`.
                     * @return OrderDirection Sorting order. Valid values: `DESC`, `ASC`.
                     */
                    std::string GetOrderDirection() const;

                    /**
                     * 设置Sorting order. Valid values: `DESC`, `ASC`.
                     * @param OrderDirection Sorting order. Valid values: `DESC`, `ASC`.
                     */
                    void SetOrderDirection(const std::string& _orderDirection);

                    /**
                     * 判断参数 OrderDirection 是否已赋值
                     * @return OrderDirection 是否已赋值
                     */
                    bool OrderDirectionHasBeenSet() const;

                private:

                    /**
                     * Instance ID.
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * The proxy ID you want to query under the instance
                     */
                    std::string m_instanceProxyId;
                    bool m_instanceProxyIdHasBeenSet;

                    /**
                     * Number of returned results.
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * Service type. Valid value: `redis` (TencentDB for Redis).
                     */
                    std::string m_product;
                    bool m_productHasBeenSet;

                    /**
                     * Offset. Default value: `0`.
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * Sort by field. Valid values: `AllConn`, `ActiveConn`, `Ip`.
                     */
                    std::string m_sortBy;
                    bool m_sortByHasBeenSet;

                    /**
                     * Sorting order. Valid values: `DESC`, `ASC`.
                     */
                    std::string m_orderDirection;
                    bool m_orderDirectionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DBBRAIN_V20210527_MODEL_DESCRIBEPROXYPROCESSSTATISTICSREQUEST_H_
