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

#ifndef TENCENTCLOUD_INTLPARTNERSMGT_V20220928_MODEL_QUERYCREDITALLOCATIONHISTORYRESPONSE_H_
#define TENCENTCLOUD_INTLPARTNERSMGT_V20220928_MODEL_QUERYCREDITALLOCATIONHISTORYRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/intlpartnersmgt/v20220928/model/QueryCreditAllocationHistoryData.h>


namespace TencentCloud
{
    namespace Intlpartnersmgt
    {
        namespace V20220928
        {
            namespace Model
            {
                /**
                * QueryCreditAllocationHistory response structure.
                */
                class QueryCreditAllocationHistoryResponse : public AbstractModel
                {
                public:
                    QueryCreditAllocationHistoryResponse();
                    ~QueryCreditAllocationHistoryResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Total number of historical records.
                     * @return Total Total number of historical records.
                     * 
                     */
                    uint64_t GetTotal() const;

                    /**
                     * 判断参数 Total 是否已赋值
                     * @return Total 是否已赋值
                     * 
                     */
                    bool TotalHasBeenSet() const;

                    /**
                     * 获取Detailed list of historical information.
                     * @return History Detailed list of historical information.
                     * 
                     */
                    std::vector<QueryCreditAllocationHistoryData> GetHistory() const;

                    /**
                     * 判断参数 History 是否已赋值
                     * @return History 是否已赋值
                     * 
                     */
                    bool HistoryHasBeenSet() const;

                private:

                    /**
                     * Total number of historical records.
                     */
                    uint64_t m_total;
                    bool m_totalHasBeenSet;

                    /**
                     * Detailed list of historical information.
                     */
                    std::vector<QueryCreditAllocationHistoryData> m_history;
                    bool m_historyHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_INTLPARTNERSMGT_V20220928_MODEL_QUERYCREDITALLOCATIONHISTORYRESPONSE_H_
