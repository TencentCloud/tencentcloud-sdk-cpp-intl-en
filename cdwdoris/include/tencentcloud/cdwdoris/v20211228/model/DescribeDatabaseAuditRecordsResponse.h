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

#ifndef TENCENTCLOUD_CDWDORIS_V20211228_MODEL_DESCRIBEDATABASEAUDITRECORDSRESPONSE_H_
#define TENCENTCLOUD_CDWDORIS_V20211228_MODEL_DESCRIBEDATABASEAUDITRECORDSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cdwdoris/v20211228/model/DataBaseAuditRecord.h>


namespace TencentCloud
{
    namespace Cdwdoris
    {
        namespace V20211228
        {
            namespace Model
            {
                /**
                * DescribeDatabaseAuditRecords response structure.
                */
                class DescribeDatabaseAuditRecordsResponse : public AbstractModel
                {
                public:
                    DescribeDatabaseAuditRecordsResponse();
                    ~DescribeDatabaseAuditRecordsResponse() = default;
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
                    DataBaseAuditRecord GetSlowQueryRecords() const;

                    /**
                     * 判断参数 SlowQueryRecords 是否已赋值
                     * @return SlowQueryRecords 是否已赋值
                     * 
                     */
                    bool SlowQueryRecordsHasBeenSet() const;

                private:

                    /**
                     * Total
                     */
                    int64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * Record list
                     */
                    DataBaseAuditRecord m_slowQueryRecords;
                    bool m_slowQueryRecordsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDWDORIS_V20211228_MODEL_DESCRIBEDATABASEAUDITRECORDSRESPONSE_H_
