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

#ifndef TENCENTCLOUD_CDWDORIS_V20211228_MODEL_DESCRIBESLOWQUERYRECORDSRESPONSE_H_
#define TENCENTCLOUD_CDWDORIS_V20211228_MODEL_DESCRIBESLOWQUERYRECORDSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cdwdoris/v20211228/model/SlowQueryRecord.h>


namespace TencentCloud
{
    namespace Cdwdoris
    {
        namespace V20211228
        {
            namespace Model
            {
                /**
                * DescribeSlowQueryRecords response structure.
                */
                class DescribeSlowQueryRecordsResponse : public AbstractModel
                {
                public:
                    DescribeSlowQueryRecordsResponse();
                    ~DescribeSlowQueryRecordsResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Total
                     * @return TotalCount Total
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
                     * 获取Record list
                     * @return SlowQueryRecords Record list
                     * 
                     */
                    std::vector<SlowQueryRecord> GetSlowQueryRecords() const;

                    /**
                     * 判断参数 SlowQueryRecords 是否已赋值
                     * @return SlowQueryRecords 是否已赋值
                     * 
                     */
                    bool SlowQueryRecordsHasBeenSet() const;

                    /**
                     * 获取All database names
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return DBNameList All database names
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<std::string> GetDBNameList() const;

                    /**
                     * 判断参数 DBNameList 是否已赋值
                     * @return DBNameList 是否已赋值
                     * 
                     */
                    bool DBNameListHasBeenSet() const;

                    /**
                     * 获取All catalog names
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return CatalogNameList All catalog names
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<std::string> GetCatalogNameList() const;

                    /**
                     * 判断参数 CatalogNameList 是否已赋值
                     * @return CatalogNameList 是否已赋值
                     * 
                     */
                    bool CatalogNameListHasBeenSet() const;

                private:

                    /**
                     * Total
                     */
                    int64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * Record list
                     */
                    std::vector<SlowQueryRecord> m_slowQueryRecords;
                    bool m_slowQueryRecordsHasBeenSet;

                    /**
                     * All database names
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<std::string> m_dBNameList;
                    bool m_dBNameListHasBeenSet;

                    /**
                     * All catalog names
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<std::string> m_catalogNameList;
                    bool m_catalogNameListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDWDORIS_V20211228_MODEL_DESCRIBESLOWQUERYRECORDSRESPONSE_H_
