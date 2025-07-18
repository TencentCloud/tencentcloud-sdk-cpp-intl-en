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

#ifndef TENCENTCLOUD_CYNOSDB_V20190107_MODEL_DESCRIBECLUSTERDETAILDATABASESRESPONSE_H_
#define TENCENTCLOUD_CYNOSDB_V20190107_MODEL_DESCRIBECLUSTERDETAILDATABASESRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cynosdb/v20190107/model/DbInfo.h>


namespace TencentCloud
{
    namespace Cynosdb
    {
        namespace V20190107
        {
            namespace Model
            {
                /**
                * DescribeClusterDetailDatabases response structure.
                */
                class DescribeClusterDetailDatabasesResponse : public AbstractModel
                {
                public:
                    DescribeClusterDetailDatabasesResponse();
                    ~DescribeClusterDetailDatabasesResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Database information
                     * @return DbInfos Database information
                     * 
                     */
                    std::vector<DbInfo> GetDbInfos() const;

                    /**
                     * 判断参数 DbInfos 是否已赋值
                     * @return DbInfos 是否已赋值
                     * 
                     */
                    bool DbInfosHasBeenSet() const;

                    /**
                     * 获取The total count
                     * @return TotalCount The total count
                     * 
                     */
                    int64_t GetTotalCount() const;

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     * 
                     */
                    bool TotalCountHasBeenSet() const;

                private:

                    /**
                     * Database information
                     */
                    std::vector<DbInfo> m_dbInfos;
                    bool m_dbInfosHasBeenSet;

                    /**
                     * The total count
                     */
                    int64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CYNOSDB_V20190107_MODEL_DESCRIBECLUSTERDETAILDATABASESRESPONSE_H_
