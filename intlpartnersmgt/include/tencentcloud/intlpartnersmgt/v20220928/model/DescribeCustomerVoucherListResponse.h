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

#ifndef TENCENTCLOUD_INTLPARTNERSMGT_V20220928_MODEL_DESCRIBECUSTOMERVOUCHERLISTRESPONSE_H_
#define TENCENTCLOUD_INTLPARTNERSMGT_V20220928_MODEL_DESCRIBECUSTOMERVOUCHERLISTRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/intlpartnersmgt/v20220928/model/DescribeCustomerVoucherItem.h>


namespace TencentCloud
{
    namespace Intlpartnersmgt
    {
        namespace V20220928
        {
            namespace Model
            {
                /**
                * DescribeCustomerVoucherList response structure.
                */
                class DescribeCustomerVoucherListResponse : public AbstractModel
                {
                public:
                    DescribeCustomerVoucherListResponse();
                    ~DescribeCustomerVoucherListResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Total number of the list.
                     * @return TotalCount Total number of the list.
                     * 
                     */
                    uint64_t GetTotalCount() const;

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     * 
                     */
                    bool TotalCountHasBeenSet() const;

                    /**
                     * 获取Voucher information description.
                     * @return Data Voucher information description.
                     * 
                     */
                    std::vector<DescribeCustomerVoucherItem> GetData() const;

                    /**
                     * 判断参数 Data 是否已赋值
                     * @return Data 是否已赋值
                     * 
                     */
                    bool DataHasBeenSet() const;

                private:

                    /**
                     * Total number of the list.
                     */
                    uint64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * Voucher information description.
                     */
                    std::vector<DescribeCustomerVoucherItem> m_data;
                    bool m_dataHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_INTLPARTNERSMGT_V20220928_MODEL_DESCRIBECUSTOMERVOUCHERLISTRESPONSE_H_
