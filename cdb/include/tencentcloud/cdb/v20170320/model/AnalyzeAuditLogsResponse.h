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

#ifndef TENCENTCLOUD_CDB_V20170320_MODEL_ANALYZEAUDITLOGSRESPONSE_H_
#define TENCENTCLOUD_CDB_V20170320_MODEL_ANALYZEAUDITLOGSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cdb/v20170320/model/AuditLogAggregationResult.h>


namespace TencentCloud
{
    namespace Cdb
    {
        namespace V20170320
        {
            namespace Model
            {
                /**
                * AnalyzeAuditLogs response structure.
                */
                class AnalyzeAuditLogsResponse : public AbstractModel
                {
                public:
                    AnalyzeAuditLogsResponse();
                    ~AnalyzeAuditLogsResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Information set of the aggregation bucket returned
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Items Information set of the aggregation bucket returned
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<AuditLogAggregationResult> GetItems() const;

                    /**
                     * 判断参数 Items 是否已赋值
                     * @return Items 是否已赋值
                     * 
                     */
                    bool ItemsHasBeenSet() const;

                    /**
                     * 获取Number of scanned logs
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return TotalCount Number of scanned logs
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * Information set of the aggregation bucket returned
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<AuditLogAggregationResult> m_items;
                    bool m_itemsHasBeenSet;

                    /**
                     * Number of scanned logs
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDB_V20170320_MODEL_ANALYZEAUDITLOGSRESPONSE_H_
