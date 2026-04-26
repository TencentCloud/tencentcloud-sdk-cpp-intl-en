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

#ifndef TENCENTCLOUD_BILLING_V20180709_MODEL_ALLOCATIONAVERAGEDATA_H_
#define TENCENTCLOUD_BILLING_V20180709_MODEL_ALLOCATIONAVERAGEDATA_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Billing
    {
        namespace V20180709
        {
            namespace Model
            {
                /**
                * Average value for the trend graph of a cost allocation bill
                */
                class AllocationAverageData : public AbstractModel
                {
                public:
                    AllocationAverageData();
                    ~AllocationAverageData() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Start month
                     * @return BeginMonth Start month
                     * 
                     */
                    std::string GetBeginMonth() const;

                    /**
                     * 设置Start month
                     * @param _beginMonth Start month
                     * 
                     */
                    void SetBeginMonth(const std::string& _beginMonth);

                    /**
                     * 判断参数 BeginMonth 是否已赋值
                     * @return BeginMonth 是否已赋值
                     * 
                     */
                    bool BeginMonthHasBeenSet() const;

                    /**
                     * 获取End month.
                     * @return EndMonth End month.
                     * 
                     */
                    std::string GetEndMonth() const;

                    /**
                     * 设置End month.
                     * @param _endMonth End month.
                     * 
                     */
                    void SetEndMonth(const std::string& _endMonth);

                    /**
                     * 判断参数 EndMonth 是否已赋值
                     * @return EndMonth 是否已赋值
                     * 
                     */
                    bool EndMonthHasBeenSet() const;

                    /**
                     * 获取Average value of total fees (discounted total)
                     * @return RealTotalCost Average value of total fees (discounted total)
                     * 
                     */
                    std::string GetRealTotalCost() const;

                    /**
                     * 设置Average value of total fees (discounted total)
                     * @param _realTotalCost Average value of total fees (discounted total)
                     * 
                     */
                    void SetRealTotalCost(const std::string& _realTotalCost);

                    /**
                     * 判断参数 RealTotalCost 是否已赋值
                     * @return RealTotalCost 是否已赋值
                     * 
                     */
                    bool RealTotalCostHasBeenSet() const;

                private:

                    /**
                     * Start month
                     */
                    std::string m_beginMonth;
                    bool m_beginMonthHasBeenSet;

                    /**
                     * End month.
                     */
                    std::string m_endMonth;
                    bool m_endMonthHasBeenSet;

                    /**
                     * Average value of total fees (discounted total)
                     */
                    std::string m_realTotalCost;
                    bool m_realTotalCostHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BILLING_V20180709_MODEL_ALLOCATIONAVERAGEDATA_H_
