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

#ifndef TENCENTCLOUD_SQLSERVER_V20180328_MODEL_DESCRIBEDATABASESNORMALRESPONSE_H_
#define TENCENTCLOUD_SQLSERVER_V20180328_MODEL_DESCRIBEDATABASESNORMALRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/sqlserver/v20180328/model/DbNormalDetail.h>


namespace TencentCloud
{
    namespace Sqlserver
    {
        namespace V20180328
        {
            namespace Model
            {
                /**
                * DescribeDatabasesNormal response structure.
                */
                class DescribeDatabasesNormalResponse : public AbstractModel
                {
                public:
                    DescribeDatabasesNormalResponse();
                    ~DescribeDatabasesNormalResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Indicates the total number of databases under the current instance.
                     * @return TotalCount Indicates the total number of databases under the current instance.
                     * 
                     */
                    int64_t GetTotalCount() const;

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     * 
                     */
                    bool TotalCountHasBeenSet() const;

                    /**
                     * 获取Returns detailed configuration information of the databases, such as whether CDC and CT are enabled for the databases.
                     * @return DBList Returns detailed configuration information of the databases, such as whether CDC and CT are enabled for the databases.
                     * 
                     */
                    std::vector<DbNormalDetail> GetDBList() const;

                    /**
                     * 判断参数 DBList 是否已赋值
                     * @return DBList 是否已赋值
                     * 
                     */
                    bool DBListHasBeenSet() const;

                private:

                    /**
                     * Indicates the total number of databases under the current instance.
                     */
                    int64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * Returns detailed configuration information of the databases, such as whether CDC and CT are enabled for the databases.
                     */
                    std::vector<DbNormalDetail> m_dBList;
                    bool m_dBListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SQLSERVER_V20180328_MODEL_DESCRIBEDATABASESNORMALRESPONSE_H_
