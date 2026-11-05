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

#ifndef TENCENTCLOUD_ADP_V20260520_MODEL_DESCRIBECONSUMPTIONDETAILLISTRESPONSE_H_
#define TENCENTCLOUD_ADP_V20260520_MODEL_DESCRIBECONSUMPTIONDETAILLISTRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/adp/v20260520/model/ConsumptionDetail.h>


namespace TencentCloud
{
    namespace Adp
    {
        namespace V20260520
        {
            namespace Model
            {
                /**
                * DescribeConsumptionDetailList response structure.
                */
                class DescribeConsumptionDetailListResponse : public AbstractModel
                {
                public:
                    DescribeConsumptionDetailListResponse();
                    ~DescribeConsumptionDetailListResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>Resource consumption details list</p>
                     * @return ConsumptionDetailList <p>Resource consumption details list</p>
                     * 
                     */
                    std::vector<ConsumptionDetail> GetConsumptionDetailList() const;

                    /**
                     * 判断参数 ConsumptionDetailList 是否已赋值
                     * @return ConsumptionDetailList 是否已赋值
                     * 
                     */
                    bool ConsumptionDetailListHasBeenSet() const;

                    /**
                     * 获取<p>Total record count for frontend pagination</p>
                     * @return TotalCount <p>Total record count for frontend pagination</p>
                     * 
                     */
                    std::string GetTotalCount() const;

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     * 
                     */
                    bool TotalCountHasBeenSet() const;

                private:

                    /**
                     * <p>Resource consumption details list</p>
                     */
                    std::vector<ConsumptionDetail> m_consumptionDetailList;
                    bool m_consumptionDetailListHasBeenSet;

                    /**
                     * <p>Total record count for frontend pagination</p>
                     */
                    std::string m_totalCount;
                    bool m_totalCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ADP_V20260520_MODEL_DESCRIBECONSUMPTIONDETAILLISTRESPONSE_H_
