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

#ifndef TENCENTCLOUD_INTLPARTNERSMGT_V20220928_MODEL_COSTANALYZEDIMENSIONDATA_H_
#define TENCENTCLOUD_INTLPARTNERSMGT_V20220928_MODEL_COSTANALYZEDIMENSIONDATA_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/intlpartnersmgt/v20220928/model/PeriodItemDetail.h>


namespace TencentCloud
{
    namespace Intlpartnersmgt
    {
        namespace V20220928
        {
            namespace Model
            {
                /**
                * Cost analysis dimension data
                */
                class CostAnalyzeDimensionData : public AbstractModel
                {
                public:
                    CostAnalyzeDimensionData();
                    ~CostAnalyzeDimensionData() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Total number of entries by dimension statistics</p>
                     * @return TotalCount <p>Total number of entries by dimension statistics</p>
                     * 
                     */
                    int64_t GetTotalCount() const;

                    /**
                     * 设置<p>Total number of entries by dimension statistics</p>
                     * @param _totalCount <p>Total number of entries by dimension statistics</p>
                     * 
                     */
                    void SetTotalCount(const int64_t& _totalCount);

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     * 
                     */
                    bool TotalCountHasBeenSet() const;

                    /**
                     * 获取<p>Sum value</p>
                     * @return SumCost <p>Sum value</p>
                     * 
                     */
                    std::string GetSumCost() const;

                    /**
                     * 设置<p>Sum value</p>
                     * @param _sumCost <p>Sum value</p>
                     * 
                     */
                    void SetSumCost(const std::string& _sumCost);

                    /**
                     * 判断参数 SumCost 是否已赋值
                     * @return SumCost 是否已赋值
                     * 
                     */
                    bool SumCostHasBeenSet() const;

                    /**
                     * 获取<p>Total amount by date dimension</p>
                     * @return PeriodItemDetail <p>Total amount by date dimension</p>
                     * 
                     */
                    std::vector<PeriodItemDetail> GetPeriodItemDetail() const;

                    /**
                     * 设置<p>Total amount by date dimension</p>
                     * @param _periodItemDetail <p>Total amount by date dimension</p>
                     * 
                     */
                    void SetPeriodItemDetail(const std::vector<PeriodItemDetail>& _periodItemDetail);

                    /**
                     * 判断参数 PeriodItemDetail 是否已赋值
                     * @return PeriodItemDetail 是否已赋值
                     * 
                     */
                    bool PeriodItemDetailHasBeenSet() const;

                private:

                    /**
                     * <p>Total number of entries by dimension statistics</p>
                     */
                    int64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * <p>Sum value</p>
                     */
                    std::string m_sumCost;
                    bool m_sumCostHasBeenSet;

                    /**
                     * <p>Total amount by date dimension</p>
                     */
                    std::vector<PeriodItemDetail> m_periodItemDetail;
                    bool m_periodItemDetailHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_INTLPARTNERSMGT_V20220928_MODEL_COSTANALYZEDIMENSIONDATA_H_
