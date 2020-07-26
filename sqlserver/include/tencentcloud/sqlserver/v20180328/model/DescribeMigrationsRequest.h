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

#ifndef TENCENTCLOUD_SQLSERVER_V20180328_MODEL_DESCRIBEMIGRATIONSREQUEST_H_
#define TENCENTCLOUD_SQLSERVER_V20180328_MODEL_DESCRIBEMIGRATIONSREQUEST_H_

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
                * DescribeMigrations request structure.
                */
                class DescribeMigrationsRequest : public AbstractModel
                {
                public:
                    DescribeMigrationsRequest();
                    ~DescribeMigrationsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Status set. As long as a migration task is in a status therein, it will be listed
                     * @return StatusSet Status set. As long as a migration task is in a status therein, it will be listed
                     */
                    std::vector<int64_t> GetStatusSet() const;

                    /**
                     * 设置Status set. As long as a migration task is in a status therein, it will be listed
                     * @param StatusSet Status set. As long as a migration task is in a status therein, it will be listed
                     */
                    void SetStatusSet(const std::vector<int64_t>& _statusSet);

                    /**
                     * 判断参数 StatusSet 是否已赋值
                     * @return StatusSet 是否已赋值
                     */
                    bool StatusSetHasBeenSet() const;

                    /**
                     * 获取Migration task name (fuzzy match)
                     * @return MigrateName Migration task name (fuzzy match)
                     */
                    std::string GetMigrateName() const;

                    /**
                     * 设置Migration task name (fuzzy match)
                     * @param MigrateName Migration task name (fuzzy match)
                     */
                    void SetMigrateName(const std::string& _migrateName);

                    /**
                     * 判断参数 MigrateName 是否已赋值
                     * @return MigrateName 是否已赋值
                     */
                    bool MigrateNameHasBeenSet() const;

                    /**
                     * 获取Number of results per page. Value range: 1–100. Default value: 100
                     * @return Limit Number of results per page. Value range: 1–100. Default value: 100
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置Number of results per page. Value range: 1–100. Default value: 100
                     * @param Limit Number of results per page. Value range: 1–100. Default value: 100
                     */
                    void SetLimit(const int64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取Page number. Default value: 0
                     * @return Offset Page number. Default value: 0
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置Page number. Default value: 0
                     * @param Offset Page number. Default value: 0
                     */
                    void SetOffset(const int64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取The query results are sorted by keyword. Valid values: name, createTime, startTime, endTime, status
                     * @return OrderBy The query results are sorted by keyword. Valid values: name, createTime, startTime, endTime, status
                     */
                    std::string GetOrderBy() const;

                    /**
                     * 设置The query results are sorted by keyword. Valid values: name, createTime, startTime, endTime, status
                     * @param OrderBy The query results are sorted by keyword. Valid values: name, createTime, startTime, endTime, status
                     */
                    void SetOrderBy(const std::string& _orderBy);

                    /**
                     * 判断参数 OrderBy 是否已赋值
                     * @return OrderBy 是否已赋值
                     */
                    bool OrderByHasBeenSet() const;

                    /**
                     * 获取Sorting order. Valid values: desc, asc
                     * @return OrderByType Sorting order. Valid values: desc, asc
                     */
                    std::string GetOrderByType() const;

                    /**
                     * 设置Sorting order. Valid values: desc, asc
                     * @param OrderByType Sorting order. Valid values: desc, asc
                     */
                    void SetOrderByType(const std::string& _orderByType);

                    /**
                     * 判断参数 OrderByType 是否已赋值
                     * @return OrderByType 是否已赋值
                     */
                    bool OrderByTypeHasBeenSet() const;

                private:

                    /**
                     * Status set. As long as a migration task is in a status therein, it will be listed
                     */
                    std::vector<int64_t> m_statusSet;
                    bool m_statusSetHasBeenSet;

                    /**
                     * Migration task name (fuzzy match)
                     */
                    std::string m_migrateName;
                    bool m_migrateNameHasBeenSet;

                    /**
                     * Number of results per page. Value range: 1–100. Default value: 100
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * Page number. Default value: 0
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * The query results are sorted by keyword. Valid values: name, createTime, startTime, endTime, status
                     */
                    std::string m_orderBy;
                    bool m_orderByHasBeenSet;

                    /**
                     * Sorting order. Valid values: desc, asc
                     */
                    std::string m_orderByType;
                    bool m_orderByTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SQLSERVER_V20180328_MODEL_DESCRIBEMIGRATIONSREQUEST_H_
