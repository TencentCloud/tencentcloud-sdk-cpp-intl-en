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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_EXPIRINGPRODUCT_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_EXPIRINGPRODUCT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * Products about to expire
                */
                class ExpiringProduct : public AbstractModel
                {
                public:
                    ExpiringProduct();
                    ~ExpiringProduct() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Product ID</p>
                     * @return ProductId <p>Product ID</p>
                     * 
                     */
                    std::string GetProductId() const;

                    /**
                     * 设置<p>Product ID</p>
                     * @param _productId <p>Product ID</p>
                     * 
                     */
                    void SetProductId(const std::string& _productId);

                    /**
                     * 判断参数 ProductId 是否已赋值
                     * @return ProductId 是否已赋值
                     * 
                     */
                    bool ProductIdHasBeenSet() const;

                    /**
                     * 获取<p>Product name.</p>
                     * @return ProductName <p>Product name.</p>
                     * 
                     */
                    std::string GetProductName() const;

                    /**
                     * 设置<p>Product name.</p>
                     * @param _productName <p>Product name.</p>
                     * 
                     */
                    void SetProductName(const std::string& _productName);

                    /**
                     * 判断参数 ProductName 是否已赋值
                     * @return ProductName 是否已赋值
                     * 
                     */
                    bool ProductNameHasBeenSet() const;

                    /**
                     * 获取<p>Days until expiration<br>Unit: day</p>
                     * @return DaysToExpire <p>Days until expiration<br>Unit: day</p>
                     * 
                     */
                    int64_t GetDaysToExpire() const;

                    /**
                     * 设置<p>Days until expiration<br>Unit: day</p>
                     * @param _daysToExpire <p>Days until expiration<br>Unit: day</p>
                     * 
                     */
                    void SetDaysToExpire(const int64_t& _daysToExpire);

                    /**
                     * 判断参数 DaysToExpire 是否已赋值
                     * @return DaysToExpire 是否已赋值
                     * 
                     */
                    bool DaysToExpireHasBeenSet() const;

                    /**
                     * 获取<p>Expiration time</p>
                     * @return ExpireTime <p>Expiration time</p>
                     * 
                     */
                    std::string GetExpireTime() const;

                    /**
                     * 设置<p>Expiration time</p>
                     * @param _expireTime <p>Expiration time</p>
                     * 
                     */
                    void SetExpireTime(const std::string& _expireTime);

                    /**
                     * 判断参数 ExpireTime 是否已赋值
                     * @return ExpireTime 是否已赋值
                     * 
                     */
                    bool ExpireTimeHasBeenSet() const;

                private:

                    /**
                     * <p>Product ID</p>
                     */
                    std::string m_productId;
                    bool m_productIdHasBeenSet;

                    /**
                     * <p>Product name.</p>
                     */
                    std::string m_productName;
                    bool m_productNameHasBeenSet;

                    /**
                     * <p>Days until expiration<br>Unit: day</p>
                     */
                    int64_t m_daysToExpire;
                    bool m_daysToExpireHasBeenSet;

                    /**
                     * <p>Expiration time</p>
                     */
                    std::string m_expireTime;
                    bool m_expireTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_EXPIRINGPRODUCT_H_
