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

#ifndef TENCENTCLOUD_DTS_V20180330_MODEL_CREATESUBSCRIBEREQUEST_H_
#define TENCENTCLOUD_DTS_V20180330_MODEL_CREATESUBSCRIBEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dts/v20180330/model/TagItem.h>


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
                     * 
                     */
                    std::string GetProduct() const;

                    /**
                     * 设置Subscribed database type. Currently, MySQL is supported
                     * @param _product Subscribed database type. Currently, MySQL is supported
                     * 
                     */
                    void SetProduct(const std::string& _product);

                    /**
                     * 判断参数 Product 是否已赋值
                     * @return Product 是否已赋值
                     * 
                     */
                    bool ProductHasBeenSet() const;

                    /**
                     * 获取Instance billing mode, which is always 1 (hourly billing),
                     * @return PayType Instance billing mode, which is always 1 (hourly billing),
                     * 
                     */
                    int64_t GetPayType() const;

                    /**
                     * 设置Instance billing mode, which is always 1 (hourly billing),
                     * @param _payType Instance billing mode, which is always 1 (hourly billing),
                     * 
                     */
                    void SetPayType(const int64_t& _payType);

                    /**
                     * 判断参数 PayType 是否已赋值
                     * @return PayType 是否已赋值
                     * 
                     */
                    bool PayTypeHasBeenSet() const;

                    /**
                     * 获取Purchase duration in months, which is required if `PayType` is 0. Maximum value: 120 (this field is not required of global site users and is better to be hidden)
                     * @return Duration Purchase duration in months, which is required if `PayType` is 0. Maximum value: 120 (this field is not required of global site users and is better to be hidden)
                     * 
                     */
                    int64_t GetDuration() const;

                    /**
                     * 设置Purchase duration in months, which is required if `PayType` is 0. Maximum value: 120 (this field is not required of global site users and is better to be hidden)
                     * @param _duration Purchase duration in months, which is required if `PayType` is 0. Maximum value: 120 (this field is not required of global site users and is better to be hidden)
                     * 
                     */
                    void SetDuration(const int64_t& _duration);

                    /**
                     * 判断参数 Duration 是否已赋值
                     * @return Duration 是否已赋值
                     * 
                     */
                    bool DurationHasBeenSet() const;

                    /**
                     * 获取Quantity. Default value: 1. Maximum value: 10
                     * @return Count Quantity. Default value: 1. Maximum value: 10
                     * 
                     */
                    int64_t GetCount() const;

                    /**
                     * 设置Quantity. Default value: 1. Maximum value: 10
                     * @param _count Quantity. Default value: 1. Maximum value: 10
                     * 
                     */
                    void SetCount(const int64_t& _count);

                    /**
                     * 判断参数 Count 是否已赋值
                     * @return Count 是否已赋值
                     * 
                     */
                    bool CountHasBeenSet() const;

                    /**
                     * 获取Whether to auto-renew. Default value: 0. This flag does not take effect for hourly billed instances (this field should be hidden from global site users)
                     * @return AutoRenew Whether to auto-renew. Default value: 0. This flag does not take effect for hourly billed instances (this field should be hidden from global site users)
                     * 
                     */
                    int64_t GetAutoRenew() const;

                    /**
                     * 设置Whether to auto-renew. Default value: 0. This flag does not take effect for hourly billed instances (this field should be hidden from global site users)
                     * @param _autoRenew Whether to auto-renew. Default value: 0. This flag does not take effect for hourly billed instances (this field should be hidden from global site users)
                     * 
                     */
                    void SetAutoRenew(const int64_t& _autoRenew);

                    /**
                     * 判断参数 AutoRenew 是否已赋值
                     * @return AutoRenew 是否已赋值
                     * 
                     */
                    bool AutoRenewHasBeenSet() const;

                    /**
                     * 获取Instance resource tags
                     * @return Tags Instance resource tags
                     * 
                     */
                    std::vector<TagItem> GetTags() const;

                    /**
                     * 设置Instance resource tags
                     * @param _tags Instance resource tags
                     * 
                     */
                    void SetTags(const std::vector<TagItem>& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     * 
                     */
                    bool TagsHasBeenSet() const;

                    /**
                     * 获取A custom instance name.
                     * @return Name A custom instance name.
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置A custom instance name.
                     * @param _name A custom instance name.
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

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

                    /**
                     * Instance resource tags
                     */
                    std::vector<TagItem> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * A custom instance name.
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DTS_V20180330_MODEL_CREATESUBSCRIBEREQUEST_H_
