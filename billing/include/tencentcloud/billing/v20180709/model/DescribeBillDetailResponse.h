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

#ifndef TENCENTCLOUD_BILLING_V20180709_MODEL_DESCRIBEBILLDETAILRESPONSE_H_
#define TENCENTCLOUD_BILLING_V20180709_MODEL_DESCRIBEBILLDETAILRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/billing/v20180709/model/BillDetail.h>


namespace TencentCloud
{
    namespace Billing
    {
        namespace V20180709
        {
            namespace Model
            {
                /**
                * DescribeBillDetail response structure.
                */
                class DescribeBillDetailResponse : public AbstractModel
                {
                public:
                    DescribeBillDetailResponse();
                    ~DescribeBillDetailResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Detail list
                     * @return DetailSet Detail list
                     * 
                     */
                    std::vector<BillDetail> GetDetailSet() const;

                    /**
                     * 判断参数 DetailSet 是否已赋值
                     * @return DetailSet 是否已赋值
                     * 
                     */
                    bool DetailSetHasBeenSet() const;

                    /**
                     * 获取Total record count, cached once every 24 hours, may be less than the actual total record count
                     * @return Total Total record count, cached once every 24 hours, may be less than the actual total record count
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
                     * 获取Context information of this request can be used in the request parameter of the next request to accelerate query speed.
                     * @return Context Context information of this request can be used in the request parameter of the next request to accelerate query speed.
                     * 
                     */
                    std::string GetContext() const;

                    /**
                     * 判断参数 Context 是否已赋值
                     * @return Context 是否已赋值
                     * 
                     */
                    bool ContextHasBeenSet() const;

                private:

                    /**
                     * Detail list
                     */
                    std::vector<BillDetail> m_detailSet;
                    bool m_detailSetHasBeenSet;

                    /**
                     * Total record count, cached once every 24 hours, may be less than the actual total record count
                     */
                    uint64_t m_total;
                    bool m_totalHasBeenSet;

                    /**
                     * Context information of this request can be used in the request parameter of the next request to accelerate query speed.
                     */
                    std::string m_context;
                    bool m_contextHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BILLING_V20180709_MODEL_DESCRIBEBILLDETAILRESPONSE_H_
