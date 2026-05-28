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

#ifndef TENCENTCLOUD_INTLPARTNERSMGT_V20220928_MODEL_DESCRIBECUSTOMEROWNCOSTEXPLORERSUMMARYRESPONSE_H_
#define TENCENTCLOUD_INTLPARTNERSMGT_V20220928_MODEL_DESCRIBECUSTOMEROWNCOSTEXPLORERSUMMARYRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/intlpartnersmgt/v20220928/model/DimensionPeriodData.h>
#include <tencentcloud/intlpartnersmgt/v20220928/model/CostAnalyzeDimensionData.h>


namespace TencentCloud
{
    namespace Intlpartnersmgt
    {
        namespace V20220928
        {
            namespace Model
            {
                /**
                * DescribeCustomerOwnCostExplorerSummary response structure.
                */
                class DescribeCustomerOwnCostExplorerSummaryResponse : public AbstractModel
                {
                public:
                    DescribeCustomerOwnCostExplorerSummaryResponse();
                    ~DescribeCustomerOwnCostExplorerSummaryResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>Classification dimension</p>
                     * @return DimensionName <p>Classification dimension</p>
                     * 
                     */
                    std::string GetDimensionName() const;

                    /**
                     * 判断参数 DimensionName 是否已赋值
                     * @return DimensionName 是否已赋值
                     * 
                     */
                    bool DimensionNameHasBeenSet() const;

                    /**
                     * 获取<p>Details</p>
                     * @return Detail <p>Details</p>
                     * 
                     */
                    std::vector<DimensionPeriodData> GetDetail() const;

                    /**
                     * 判断参数 Detail 是否已赋值
                     * @return Detail 是否已赋值
                     * 
                     */
                    bool DetailHasBeenSet() const;

                    /**
                     * 获取<p>Classification dimension statistics</p>
                     * @return TotalDetail <p>Classification dimension statistics</p>
                     * 
                     */
                    CostAnalyzeDimensionData GetTotalDetail() const;

                    /**
                     * 判断参数 TotalDetail 是否已赋值
                     * @return TotalDetail 是否已赋值
                     * 
                     */
                    bool TotalDetailHasBeenSet() const;

                private:

                    /**
                     * <p>Classification dimension</p>
                     */
                    std::string m_dimensionName;
                    bool m_dimensionNameHasBeenSet;

                    /**
                     * <p>Details</p>
                     */
                    std::vector<DimensionPeriodData> m_detail;
                    bool m_detailHasBeenSet;

                    /**
                     * <p>Classification dimension statistics</p>
                     */
                    CostAnalyzeDimensionData m_totalDetail;
                    bool m_totalDetailHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_INTLPARTNERSMGT_V20220928_MODEL_DESCRIBECUSTOMEROWNCOSTEXPLORERSUMMARYRESPONSE_H_
