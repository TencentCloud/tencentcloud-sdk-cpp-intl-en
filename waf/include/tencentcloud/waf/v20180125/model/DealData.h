/*
 * Copyright (c) 2017-2019 THL A29 Limited, a Tencent company. All Rights Reserved.
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

#ifndef TENCENTCLOUD_WAF_V20180125_MODEL_DEALDATA_H_
#define TENCENTCLOUD_WAF_V20180125_MODEL_DEALDATA_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Waf
    {
        namespace V20180125
        {
            namespace Model
            {
                /**
                * Billing order response entity
                */
                class DealData : public AbstractModel
                {
                public:
                    DealData();
                    ~DealData() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Order Number List: the number of elements matches the number of elements in the Goods array of the request package. Product details correspond to orders in sequence
                     * @return DealNames Order Number List: the number of elements matches the number of elements in the Goods array of the request package. Product details correspond to orders in sequence
                     * 
                     */
                    std::vector<std::string> GetDealNames() const;

                    /**
                     * 设置Order Number List: the number of elements matches the number of elements in the Goods array of the request package. Product details correspond to orders in sequence
                     * @param _dealNames Order Number List: the number of elements matches the number of elements in the Goods array of the request package. Product details correspond to orders in sequence
                     * 
                     */
                    void SetDealNames(const std::vector<std::string>& _dealNames);

                    /**
                     * 判断参数 DealNames 是否已赋值
                     * @return DealNames 是否已赋值
                     * 
                     */
                    bool DealNamesHasBeenSet() const;

                    /**
                     * 获取Large Order Number, a large order number can have multiple sub-orders, indicating the same order placement [{},{}]
                     * @return BigDealId Large Order Number, a large order number can have multiple sub-orders, indicating the same order placement [{},{}]
                     * 
                     */
                    std::string GetBigDealId() const;

                    /**
                     * 设置Large Order Number, a large order number can have multiple sub-orders, indicating the same order placement [{},{}]
                     * @param _bigDealId Large Order Number, a large order number can have multiple sub-orders, indicating the same order placement [{},{}]
                     * 
                     */
                    void SetBigDealId(const std::string& _bigDealId);

                    /**
                     * 判断参数 BigDealId 是否已赋值
                     * @return BigDealId 是否已赋值
                     * 
                     */
                    bool BigDealIdHasBeenSet() const;

                private:

                    /**
                     * Order Number List: the number of elements matches the number of elements in the Goods array of the request package. Product details correspond to orders in sequence
                     */
                    std::vector<std::string> m_dealNames;
                    bool m_dealNamesHasBeenSet;

                    /**
                     * Large Order Number, a large order number can have multiple sub-orders, indicating the same order placement [{},{}]
                     */
                    std::string m_bigDealId;
                    bool m_bigDealIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WAF_V20180125_MODEL_DEALDATA_H_
