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

#ifndef TENCENTCLOUD_TDMYSQL_V20211122_MODEL_DESCRIBEDATABASEOBJECTSREQUEST_H_
#define TENCENTCLOUD_TDMYSQL_V20211122_MODEL_DESCRIBEDATABASEOBJECTSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tdmysql
    {
        namespace V20211122
        {
            namespace Model
            {
                /**
                * DescribeDatabaseObjects request structure.
                */
                class DescribeDatabaseObjectsRequest : public AbstractModel
                {
                public:
                    DescribeDatabaseObjectsRequest();
                    ~DescribeDatabaseObjectsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>Instance ID, such as tdsql3-42f40429.</p>
                     * @return InstanceId <p>Instance ID, such as tdsql3-42f40429.</p>
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置<p>Instance ID, such as tdsql3-42f40429.</p>
                     * @param _instanceId <p>Instance ID, such as tdsql3-42f40429.</p>
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
                     * 获取<p>Database name, obtained via the DescribeDatabases API.</p>
                     * @return DbName <p>Database name, obtained via the DescribeDatabases API.</p>
                     * 
                     */
                    std::string GetDbName() const;

                    /**
                     * 设置<p>Database name, obtained via the DescribeDatabases API.</p>
                     * @param _dbName <p>Database name, obtained via the DescribeDatabases API.</p>
                     * 
                     */
                    void SetDbName(const std::string& _dbName);

                    /**
                     * 判断参数 DbName 是否已赋值
                     * @return DbName 是否已赋值
                     * 
                     */
                    bool DbNameHasBeenSet() const;

                    /**
                     * 获取<p>Pagination index</p>
                     * @return Offset <p>Pagination index</p>
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置<p>Pagination index</p>
                     * @param _offset <p>Pagination index</p>
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
                     * 获取<p>Number of items per page</p>
                     * @return Limit <p>Number of items per page</p>
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置<p>Number of items per page</p>
                     * @param _limit <p>Number of items per page</p>
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
                     * 获取<p>Table name matching expression</p>
                     * @return TableRegexp <p>Table name matching expression</p>
                     * 
                     */
                    std::string GetTableRegexp() const;

                    /**
                     * 设置<p>Table name matching expression</p>
                     * @param _tableRegexp <p>Table name matching expression</p>
                     * 
                     */
                    void SetTableRegexp(const std::string& _tableRegexp);

                    /**
                     * 判断参数 TableRegexp 是否已赋值
                     * @return TableRegexp 是否已赋值
                     * 
                     */
                    bool TableRegexpHasBeenSet() const;

                private:

                    /**
                     * <p>Instance ID, such as tdsql3-42f40429.</p>
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * <p>Database name, obtained via the DescribeDatabases API.</p>
                     */
                    std::string m_dbName;
                    bool m_dbNameHasBeenSet;

                    /**
                     * <p>Pagination index</p>
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * <p>Number of items per page</p>
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * <p>Table name matching expression</p>
                     */
                    std::string m_tableRegexp;
                    bool m_tableRegexpHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TDMYSQL_V20211122_MODEL_DESCRIBEDATABASEOBJECTSREQUEST_H_
