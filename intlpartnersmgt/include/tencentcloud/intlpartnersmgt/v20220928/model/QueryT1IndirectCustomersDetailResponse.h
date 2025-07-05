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

#ifndef TENCENTCLOUD_INTLPARTNERSMGT_V20220928_MODEL_QUERYT1INDIRECTCUSTOMERSDETAILRESPONSE_H_
#define TENCENTCLOUD_INTLPARTNERSMGT_V20220928_MODEL_QUERYT1INDIRECTCUSTOMERSDETAILRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/intlpartnersmgt/v20220928/model/QueryT1IndirectCustomersDetailResponseData.h>


namespace TencentCloud
{
    namespace Intlpartnersmgt
    {
        namespace V20220928
        {
            namespace Model
            {
                /**
                * QueryT1IndirectCustomersDetail response structure.
                */
                class QueryT1IndirectCustomersDetailResponse : public AbstractModel
                {
                public:
                    QueryT1IndirectCustomersDetailResponse();
                    ~QueryT1IndirectCustomersDetailResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取The number of indirect sub-customers of a distributor.
                     * @return Total The number of indirect sub-customers of a distributor.
                     * 
                     */
                    int64_t GetTotal() const;

                    /**
                     * 判断参数 Total 是否已赋值
                     * @return Total 是否已赋值
                     * 
                     */
                    bool TotalHasBeenSet() const;

                    /**
                     * 获取Second-level reseller UIN.
                     * @return SubAgentUin Second-level reseller UIN.
                     * 
                     */
                    int64_t GetSubAgentUin() const;

                    /**
                     * 判断参数 SubAgentUin 是否已赋值
                     * @return SubAgentUin 是否已赋值
                     * 
                     */
                    bool SubAgentUinHasBeenSet() const;

                    /**
                     * 获取Second-Level reseller name.
                     * @return SubAgentName Second-Level reseller name.
                     * 
                     */
                    std::string GetSubAgentName() const;

                    /**
                     * 判断参数 SubAgentName 是否已赋值
                     * @return SubAgentName 是否已赋值
                     * 
                     */
                    bool SubAgentNameHasBeenSet() const;

                    /**
                     * 获取Indirect sub-customer information.
                     * @return Data Indirect sub-customer information.
                     * 
                     */
                    std::vector<QueryT1IndirectCustomersDetailResponseData> GetData() const;

                    /**
                     * 判断参数 Data 是否已赋值
                     * @return Data 是否已赋值
                     * 
                     */
                    bool DataHasBeenSet() const;

                private:

                    /**
                     * The number of indirect sub-customers of a distributor.
                     */
                    int64_t m_total;
                    bool m_totalHasBeenSet;

                    /**
                     * Second-level reseller UIN.
                     */
                    int64_t m_subAgentUin;
                    bool m_subAgentUinHasBeenSet;

                    /**
                     * Second-Level reseller name.
                     */
                    std::string m_subAgentName;
                    bool m_subAgentNameHasBeenSet;

                    /**
                     * Indirect sub-customer information.
                     */
                    std::vector<QueryT1IndirectCustomersDetailResponseData> m_data;
                    bool m_dataHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_INTLPARTNERSMGT_V20220928_MODEL_QUERYT1INDIRECTCUSTOMERSDETAILRESPONSE_H_
