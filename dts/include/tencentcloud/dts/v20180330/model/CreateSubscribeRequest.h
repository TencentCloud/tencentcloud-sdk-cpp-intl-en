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

#ifndef TENCENTCLOUD_DTS_V20180330_MODEL_CREATESUBSCRIBEREQUEST_H_
#define TENCENTCLOUD_DTS_V20180330_MODEL_CREATESUBSCRIBEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dts
    {
        namespace V20180330
        {
            namespace Model
            {
                /**
                * CreateSubscribe request structure.
                */
                class CreateSubscribeRequest : public AbstractModel
                {
                public:
                    CreateSubscribeRequest();
                    ~CreateSubscribeRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Subscribed database type. Currently, MySQL is supported
                     * @return Product Subscribed database type. Currently, MySQL is supported
                     */
                    std::string GetProduct() const;

                    /**
                     * 设置Subscribed database type. Currently, MySQL is supported
                     * @param Product Subscribed database type. Currently, MySQL is supported
                     */
                    void SetProduct(const std::string& _product);

                    /**
                     * 判断参数 Product 是否已赋值
                     * @return Product 是否已赋值
                     */
                    bool ProductHasBeenSet() const;

                    /**
                     * 获取Instance billing mode, which is always 1 (hourly billing),
                     * @return PayType Instance billing mode, which is always 1 (hourly billing),
                     */
                    int64_t GetPayType() const;

                    /**
                     * 设置Instance billing mode, which is always 1 (hourly billing),
                     * @param PayType Instance billing mode, which is always 1 (hourly billing),
                     */
                    void SetPayType(const int64_t& _payType);

                    /**
                     * 判断参数 PayType 是否已赋值
                     * @return PayType 是否已赋值
                     */
                    bool PayTypeHasBeenSet() const;

                    /**
                     * 获取Purchase duration in months, which is required if `PayType` is 0. Maximum value: 120 (this field is not required of global site users and is better to be hidden)
                     * @return Duration Purchase duration in months, which is required if `PayType` is 0. Maximum value: 120 (this field is not required of global site users and is better to be hidden)
                     */
                    int64_t GetDuration() const;

                    /**
                     * 设置Purchase duration in months, which is required if `PayType` is 0. Maximum value: 120 (this field is not required of global site users and is better to be hidden)
                     * @param Duration Purchase duration in months, which is required if `PayType` is 0. Maximum value: 120 (this field is not required of global site users and is better to be hidden)
                     */
                    void SetDuration(const int64_t& _duration);

                    /**
                     * 判断参数 Duration 是否已赋值
                     * @return Duration 是否已赋值
                     */
                    bool DurationHasBeenSet() const;

                    /**
                     * 获取Quantity. Default value: 1. Maximum value: 10
                     * @return Count Quantity. Default value: 1. Maximum value: 10
                     */
                    int64_t GetCount() const;

                    /**
                     * 设置Quantity. Default value: 1. Maximum value: 10
                     * @param Count Quantity. Default value: 1. Maximum value: 10
                     */
                    void SetCount(const int64_t& _count);

                    /**
                     * 判断参数 Count 是否已赋值
                     * @return Count 是否已赋值
                     */
                    bool CountHasBeenSet() const;

                    /**
                     * 获取Whether to auto-renew. Default value: 0. This flag does not take effect for hourly billed instances (this field should be hidden from global site users)
                     * @return AutoRenew Whether to auto-renew. Default value: 0. This flag does not take effect for hourly billed instances (this field should be hidden from global site users)
                     */
                    int64_t GetAutoRenew() const;

                    /**
                     * 设置Whether to auto-renew. Default value: 0. This flag does not take effect for hourly billed instances (this field should be hidden from global site users)
                     * @param AutoRenew Whether to auto-renew. Default value: 0. This flag does not take effect for hourly billed instances (this field should be hidden from global site users)
                     */
                    void SetAutoRenew(const int64_t& _autoRenew);

                    /**
                     * 判断参数 AutoRenew 是否已赋值
                     * @return AutoRenew 是否已赋值
                     */
                    bool AutoRenewHasBeenSet() const;

                private:

                    /**
                     * Subscribed database type. Currently, MySQL is supported
                     */
                    std::string m_product;
                    bool m_productHasBeenSet;

                    /**
                     * Instance billing mode, which is always 1 (hourly billing),
                     */
                    int64_t m_payType;
                    bool m_payTypeHasBeenSet;

                    /**
                     * Purchase duration in months, which is required if `PayType` is 0. Maximum value: 120 (this field is not required of global site users and is better to be hidden)
                     */
                    int64_t m_duration;
                    bool m_durationHasBeenSet;

                    /**
                     * Quantity. Default value: 1. Maximum value: 10
                     */
                    int64_t m_count;
                    bool m_countHasBeenSet;

                    /**
                     * Whether to auto-renew. Default value: 0. This flag does not take effect for hourly billed instances (this field should be hidden from global site users)
                     */
                    int64_t m_autoRenew;
                    bool m_autoRenewHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DTS_V20180330_MODEL_CREATESUBSCRIBEREQUEST_H_
