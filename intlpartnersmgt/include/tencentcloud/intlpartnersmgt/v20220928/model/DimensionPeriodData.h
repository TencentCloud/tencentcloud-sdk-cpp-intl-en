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

#ifndef TENCENTCLOUD_INTLPARTNERSMGT_V20220928_MODEL_DIMENSIONPERIODDATA_H_
#define TENCENTCLOUD_INTLPARTNERSMGT_V20220928_MODEL_DIMENSIONPERIODDATA_H_

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
                * Cost dimension periodic data
                */
                class DimensionPeriodData : public AbstractModel
                {
                public:
                    DimensionPeriodData();
                    ~DimensionPeriodData() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Function name by dimensional classification</p>
                     * @return Name <p>Function name by dimensional classification</p>
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置<p>Function name by dimensional classification</p>
                     * @param _name <p>Function name by dimensional classification</p>
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取<p>code corresponding to the function name after dimensional classification</p>
                     * @return Code <p>code corresponding to the function name after dimensional classification</p>
                     * 
                     */
                    std::string GetCode() const;

                    /**
                     * 设置<p>code corresponding to the function name after dimensional classification</p>
                     * @param _code <p>code corresponding to the function name after dimensional classification</p>
                     * 
                     */
                    void SetCode(const std::string& _code);

                    /**
                     * 判断参数 Code 是否已赋值
                     * @return Code 是否已赋值
                     * 
                     */
                    bool CodeHasBeenSet() const;

                    /**
                     * 获取<p>Sum value of the current group</p>
                     * @return SumCost <p>Sum value of the current group</p>
                     * 
                     */
                    std::string GetSumCost() const;

                    /**
                     * 设置<p>Sum value of the current group</p>
                     * @param _sumCost <p>Sum value of the current group</p>
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
                     * 获取<p>Amount statistics by date grouping</p>
                     * @return ItemDetail <p>Amount statistics by date grouping</p>
                     * 
                     */
                    std::vector<PeriodItemDetail> GetItemDetail() const;

                    /**
                     * 设置<p>Amount statistics by date grouping</p>
                     * @param _itemDetail <p>Amount statistics by date grouping</p>
                     * 
                     */
                    void SetItemDetail(const std::vector<PeriodItemDetail>& _itemDetail);

                    /**
                     * 判断参数 ItemDetail 是否已赋值
                     * @return ItemDetail 是否已赋值
                     * 
                     */
                    bool ItemDetailHasBeenSet() const;

                private:

                    /**
                     * <p>Function name by dimensional classification</p>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>code corresponding to the function name after dimensional classification</p>
                     */
                    std::string m_code;
                    bool m_codeHasBeenSet;

                    /**
                     * <p>Sum value of the current group</p>
                     */
                    std::string m_sumCost;
                    bool m_sumCostHasBeenSet;

                    /**
                     * <p>Amount statistics by date grouping</p>
                     */
                    std::vector<PeriodItemDetail> m_itemDetail;
                    bool m_itemDetailHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_INTLPARTNERSMGT_V20220928_MODEL_DIMENSIONPERIODDATA_H_
