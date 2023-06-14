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
                     * 获取Instance ID in the format of postgres-6fego161
                     * @return DBInstanceId Instance ID in the format of postgres-6fego161
                     * 
                     */
                    std::string GetDBInstanceId() const;

                    /**
                     * 设置Instance ID in the format of postgres-6fego161
                     * @param _dBInstanceId Instance ID in the format of postgres-6fego161
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
                     * 获取Number of entries returned per page. Default value: 10. Value range: 1–100.
                     * @return Limit Number of entries returned per page. Default value: 10. Value range: 1–100.
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置Number of entries returned per page. Default value: 10. Value range: 1–100.
                     * @param _limit Number of entries returned per page. Default value: 10. Value range: 1–100.
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
                     * 获取Whether to sort by creation time or username. Valid values: `createTime` (sort by creation time), `name` (sort by username)
                     * @return OrderBy Whether to sort by creation time or username. Valid values: `createTime` (sort by creation time), `name` (sort by username)
                     * 
                     */
                    std::string GetOrderBy() const;

                    /**
                     * 设置Whether to sort by creation time or username. Valid values: `createTime` (sort by creation time), `name` (sort by username)
                     * @param _orderBy Whether to sort by creation time or username. Valid values: `createTime` (sort by creation time), `name` (sort by username)
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
                     * 获取Whether returns are sorted in ascending or descending order. Valid values: `desc` (descending), `asc` (ascending)
                     * @return OrderByType Whether returns are sorted in ascending or descending order. Valid values: `desc` (descending), `asc` (ascending)
                     * 
                     */
                    std::string GetOrderByType() const;

                    /**
                     * 设置Whether returns are sorted in ascending or descending order. Valid values: `desc` (descending), `asc` (ascending)
                     * @param _orderByType Whether returns are sorted in ascending or descending order. Valid values: `desc` (descending), `asc` (ascending)
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
                     * Instance ID in the format of postgres-6fego161
                     */
                    std::string m_dBInstanceId;
                    bool m_dBInstanceIdHasBeenSet;

                    /**
                     * Number of entries returned per page. Default value: 10. Value range: 1–100.
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * Data offset, which starts from 0.
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * Whether to sort by creation time or username. Valid values: `createTime` (sort by creation time), `name` (sort by username)
                     */
                    std::string m_orderBy;
                    bool m_orderByHasBeenSet;

                    /**
                     * Whether returns are sorted in ascending or descending order. Valid values: `desc` (descending), `asc` (ascending)
                     */
                    std::string m_orderByType;
                    bool m_orderByTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_POSTGRES_V20170312_MODEL_DESCRIBEACCOUNTSREQUEST_H_
