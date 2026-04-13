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

#ifndef TENCENTCLOUD_POSTGRES_V20170312_MODEL_DESCRIBEACCOUNTSREQUEST_H_
#define TENCENTCLOUD_POSTGRES_V20170312_MODEL_DESCRIBEACCOUNTSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Postgres
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * DescribeAccounts request structure.
                */
                class DescribeAccountsRequest : public AbstractModel
                {
                public:
                    DescribeAccountsRequest();
                    ~DescribeAccountsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Instance ID, such as postgres-6fego161. can be obtained through the DescribeDBInstances api (https://www.tencentcloud.com/document/product/409/16773?lang=en).
                     * @return DBInstanceId Instance ID, such as postgres-6fego161. can be obtained through the DescribeDBInstances api (https://www.tencentcloud.com/document/product/409/16773?lang=en).
                     * 
                     */
                    std::string GetDBInstanceId() const;

                    /**
                     * 设置Instance ID, such as postgres-6fego161. can be obtained through the DescribeDBInstances api (https://www.tencentcloud.com/document/product/409/16773?lang=en).
                     * @param _dBInstanceId Instance ID, such as postgres-6fego161. can be obtained through the DescribeDBInstances api (https://www.tencentcloud.com/document/product/409/16773?lang=en).
                     * 
                     */
                    void SetDBInstanceId(const std::string& _dBInstanceId);

                    /**
                     * 判断参数 DBInstanceId 是否已赋值
                     * @return DBInstanceId 是否已赋值
                     * 
                     */
                    bool DBInstanceIdHasBeenSet() const;

                    /**
                     * 获取Pagination return. maximum return per page. default 20. value range 1-100.
                     * @return Limit Pagination return. maximum return per page. default 20. value range 1-100.
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置Pagination return. maximum return per page. default 20. value range 1-100.
                     * @param _limit Pagination return. maximum return per page. default 20. value range 1-100.
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
                     * 获取Data offset, which starts from 0.
                     * @return Offset Data offset, which starts from 0.
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置Data offset, which starts from 0.
                     * @param _offset Data offset, which starts from 0.
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
                     * 获取Return data is sorted by creation time or username. valid values: createTime, name, updateTime. createTime - sort by creation time; name - sort by username; updateTime - sort by update time.
Default value: createTime.
                     * @return OrderBy Return data is sorted by creation time or username. valid values: createTime, name, updateTime. createTime - sort by creation time; name - sort by username; updateTime - sort by update time.
Default value: createTime.
                     * 
                     */
                    std::string GetOrderBy() const;

                    /**
                     * 设置Return data is sorted by creation time or username. valid values: createTime, name, updateTime. createTime - sort by creation time; name - sort by username; updateTime - sort by update time.
Default value: createTime.
                     * @param _orderBy Return data is sorted by creation time or username. valid values: createTime, name, updateTime. createTime - sort by creation time; name - sort by username; updateTime - sort by update time.
Default value: createTime.
                     * 
                     */
                    void SetOrderBy(const std::string& _orderBy);

                    /**
                     * 判断参数 OrderBy 是否已赋值
                     * @return OrderBy 是否已赋值
                     * 
                     */
                    bool OrderByHasBeenSet() const;

                    /**
                     * 获取Specifies whether the returned results are in ascending or descending order. valid values: desc or asc. desc - descending order; asc - ascending order.
Default value: desc.
                     * @return OrderByType Specifies whether the returned results are in ascending or descending order. valid values: desc or asc. desc - descending order; asc - ascending order.
Default value: desc.
                     * 
                     */
                    std::string GetOrderByType() const;

                    /**
                     * 设置Specifies whether the returned results are in ascending or descending order. valid values: desc or asc. desc - descending order; asc - ascending order.
Default value: desc.
                     * @param _orderByType Specifies whether the returned results are in ascending or descending order. valid values: desc or asc. desc - descending order; asc - ascending order.
Default value: desc.
                     * 
                     */
                    void SetOrderByType(const std::string& _orderByType);

                    /**
                     * 判断参数 OrderByType 是否已赋值
                     * @return OrderByType 是否已赋值
                     * 
                     */
                    bool OrderByTypeHasBeenSet() const;

                private:

                    /**
                     * Instance ID, such as postgres-6fego161. can be obtained through the DescribeDBInstances api (https://www.tencentcloud.com/document/product/409/16773?lang=en).
                     */
                    std::string m_dBInstanceId;
                    bool m_dBInstanceIdHasBeenSet;

                    /**
                     * Pagination return. maximum return per page. default 20. value range 1-100.
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * Data offset, which starts from 0.
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * Return data is sorted by creation time or username. valid values: createTime, name, updateTime. createTime - sort by creation time; name - sort by username; updateTime - sort by update time.
Default value: createTime.
                     */
                    std::string m_orderBy;
                    bool m_orderByHasBeenSet;

                    /**
                     * Specifies whether the returned results are in ascending or descending order. valid values: desc or asc. desc - descending order; asc - ascending order.
Default value: desc.
                     */
                    std::string m_orderByType;
                    bool m_orderByTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_POSTGRES_V20170312_MODEL_DESCRIBEACCOUNTSREQUEST_H_
