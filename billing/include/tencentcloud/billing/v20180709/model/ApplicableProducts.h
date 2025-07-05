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

#ifndef TENCENTCLOUD_BILLING_V20180709_MODEL_APPLICABLEPRODUCTS_H_
#define TENCENTCLOUD_BILLING_V20180709_MODEL_APPLICABLEPRODUCTS_H_

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
                * The products that are applicable.
                */
                class ApplicableProducts : public AbstractModel
                {
                public:
                    ApplicableProducts();
                    ~ApplicableProducts() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Valid values: `all products` or names of the applicable products (string). Multiple names are separated by commas.
                     * @return GoodsName Valid values: `all products` or names of the applicable products (string). Multiple names are separated by commas.
                     * 
                     */
                    std::string GetGoodsName() const;

                    /**
                     * 设置Valid values: `all products` or names of the applicable products (string). Multiple names are separated by commas.
                     * @param _goodsName Valid values: `all products` or names of the applicable products (string). Multiple names are separated by commas.
                     * 
                     */
                    void SetGoodsName(const std::string& _goodsName);

                    /**
                     * 判断参数 GoodsName 是否已赋值
                     * @return GoodsName 是否已赋值
                     * 
                     */
                    bool GoodsNameHasBeenSet() const;

                    /**
                     * 获取Valid values: `postPay`: pay-as-you-go; `prePay`: prepaid; `riPay`: reserved instance; empty or `*`: all. If `GoodsName` contains multiple product names and `PayMode` is `*`, it indicates that the voucher can be used in all billing modes for each of the products.
                     * @return PayMode Valid values: `postPay`: pay-as-you-go; `prePay`: prepaid; `riPay`: reserved instance; empty or `*`: all. If `GoodsName` contains multiple product names and `PayMode` is `*`, it indicates that the voucher can be used in all billing modes for each of the products.
                     * 
                     */
                    std::string GetPayMode() const;

                    /**
                     * 设置Valid values: `postPay`: pay-as-you-go; `prePay`: prepaid; `riPay`: reserved instance; empty or `*`: all. If `GoodsName` contains multiple product names and `PayMode` is `*`, it indicates that the voucher can be used in all billing modes for each of the products.
                     * @param _payMode Valid values: `postPay`: pay-as-you-go; `prePay`: prepaid; `riPay`: reserved instance; empty or `*`: all. If `GoodsName` contains multiple product names and `PayMode` is `*`, it indicates that the voucher can be used in all billing modes for each of the products.
                     * 
                     */
                    void SetPayMode(const std::string& _payMode);

                    /**
                     * 判断参数 PayMode 是否已赋值
                     * @return PayMode 是否已赋值
                     * 
                     */
                    bool PayModeHasBeenSet() const;

                private:

                    /**
                     * Valid values: `all products` or names of the applicable products (string). Multiple names are separated by commas.
                     */
                    std::string m_goodsName;
                    bool m_goodsNameHasBeenSet;

                    /**
                     * Valid values: `postPay`: pay-as-you-go; `prePay`: prepaid; `riPay`: reserved instance; empty or `*`: all. If `GoodsName` contains multiple product names and `PayMode` is `*`, it indicates that the voucher can be used in all billing modes for each of the products.
                     */
                    std::string m_payMode;
                    bool m_payModeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BILLING_V20180709_MODEL_APPLICABLEPRODUCTS_H_
