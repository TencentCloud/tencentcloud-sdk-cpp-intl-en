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

#ifndef TENCENTCLOUD_EMR_V20190103_MODEL_PRICERESULT_H_
#define TENCENTCLOUD_EMR_V20190103_MODEL_PRICERESULT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Emr
    {
        namespace V20190103
        {
            namespace Model
            {
                /**
                * Inquiry results
                */
                class PriceResult : public AbstractModel
                {
                public:
                    PriceResult();
                    ~PriceResult() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Original price.
                     * @return OriginalCost Original price.
                     * 
                     */
                    double GetOriginalCost() const;

                    /**
                     * 设置Original price.
                     * @param _originalCost Original price.
                     * 
                     */
                    void SetOriginalCost(const double& _originalCost);

                    /**
                     * 判断参数 OriginalCost 是否已赋值
                     * @return OriginalCost 是否已赋值
                     * 
                     */
                    bool OriginalCostHasBeenSet() const;

                    /**
                     * 获取Discount price.
                     * @return DiscountCost Discount price.
                     * 
                     */
                    double GetDiscountCost() const;

                    /**
                     * 设置Discount price.
                     * @param _discountCost Discount price.
                     * 
                     */
                    void SetDiscountCost(const double& _discountCost);

                    /**
                     * 判断参数 DiscountCost 是否已赋值
                     * @return DiscountCost 是否已赋值
                     * 
                     */
                    bool DiscountCostHasBeenSet() const;

                private:

                    /**
                     * Original price.
                     */
                    double m_originalCost;
                    bool m_originalCostHasBeenSet;

                    /**
                     * Discount price.
                     */
                    double m_discountCost;
                    bool m_discountCostHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EMR_V20190103_MODEL_PRICERESULT_H_
