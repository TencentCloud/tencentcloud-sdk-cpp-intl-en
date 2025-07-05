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

#ifndef TENCENTCLOUD_IP_V20210409_MODEL_QUERYCREDITALLOCATIONHISTORYRESPONSE_H_
#define TENCENTCLOUD_IP_V20210409_MODEL_QUERYCREDITALLOCATIONHISTORYRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ip/v20210409/model/QueryCreditAllocationHistoryData.h>


namespace TencentCloud
{
    namespace Ip
    {
        namespace V20210409
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
                     * 获取Total number of records
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return Total Total number of records
Note: this field may return null, indicating that no valid values can be obtained.
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
                     * 获取List of record details
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return History List of record details
Note: this field may return null, indicating that no valid values can be obtained.
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
                     * Total number of records
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_total;
                    bool m_totalHasBeenSet;

                    /**
                     * List of record details
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<QueryCreditAllocationHistoryData> m_history;
                    bool m_historyHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IP_V20210409_MODEL_QUERYCREDITALLOCATIONHISTORYRESPONSE_H_
