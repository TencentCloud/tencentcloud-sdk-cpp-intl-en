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

#ifndef TENCENTCLOUD_DTS_V20211206_MODEL_CREATESUBSCRIBEREQUEST_H_
#define TENCENTCLOUD_DTS_V20211206_MODEL_CREATESUBSCRIBEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dts/v20211206/model/TagItem.h>


namespace TencentCloud
{
    namespace Dts
    {
        namespace V20211206
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
                     * 获取Subscription database type. Currently, cynosdbmysql, mariadb, mongodb, mysql, percona, tdpg, and tdsqlpercona are supported.
                     * @return Product Subscription database type. Currently, cynosdbmysql, mariadb, mongodb, mysql, percona, tdpg, and tdsqlpercona are supported.
                     * 
                     */
                    std::string GetProduct() const;

                    /**
                     * 设置Subscription database type. Currently, cynosdbmysql, mariadb, mongodb, mysql, percona, tdpg, and tdsqlpercona are supported.
                     * @param _product Subscription database type. Currently, cynosdbmysql, mariadb, mongodb, mysql, percona, tdpg, and tdsqlpercona are supported.
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
                     * 获取Payment method. Valid values: 0 (monthly subscription); 1 (pay-as-you-go).
                     * @return PayType Payment method. Valid values: 0 (monthly subscription); 1 (pay-as-you-go).
                     * 
                     */
                    int64_t GetPayType() const;

                    /**
                     * 设置Payment method. Valid values: 0 (monthly subscription); 1 (pay-as-you-go).
                     * @param _payType Payment method. Valid values: 0 (monthly subscription); 1 (pay-as-you-go).
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
                     * 获取Purchase duration. This field needs to be filled in when the payType is monthly subscription. The unit is month. Value range: 1-120. Default value: 1.
                     * @return Duration Purchase duration. This field needs to be filled in when the payType is monthly subscription. The unit is month. Value range: 1-120. Default value: 1.
                     * 
                     */
                    int64_t GetDuration() const;

                    /**
                     * 设置Purchase duration. This field needs to be filled in when the payType is monthly subscription. The unit is month. Value range: 1-120. Default value: 1.
                     * @param _duration Purchase duration. This field needs to be filled in when the payType is monthly subscription. The unit is month. Value range: 1-120. Default value: 1.
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
                     * 获取Whether to renew automatically. This field needs to be filled in when the payType is monthly subscription. Valid values: 0 (auto-renewal disabled); 1 (auto-renewal enabled). Automatic renewal is not performed by default. This flag is invalid for pay-as-you-go.
                     * @return AutoRenew Whether to renew automatically. This field needs to be filled in when the payType is monthly subscription. Valid values: 0 (auto-renewal disabled); 1 (auto-renewal enabled). Automatic renewal is not performed by default. This flag is invalid for pay-as-you-go.
                     * 
                     */
                    int64_t GetAutoRenew() const;

                    /**
                     * 设置Whether to renew automatically. This field needs to be filled in when the payType is monthly subscription. Valid values: 0 (auto-renewal disabled); 1 (auto-renewal enabled). Automatic renewal is not performed by default. This flag is invalid for pay-as-you-go.
                     * @param _autoRenew Whether to renew automatically. This field needs to be filled in when the payType is monthly subscription. Valid values: 0 (auto-renewal disabled); 1 (auto-renewal enabled). Automatic renewal is not performed by default. This flag is invalid for pay-as-you-go.
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
                     * 获取Quantity. Default value: 1. Maximum value: 10.
                     * @return Count Quantity. Default value: 1. Maximum value: 10.
                     * 
                     */
                    int64_t GetCount() const;

                    /**
                     * 设置Quantity. Default value: 1. Maximum value: 10.
                     * @param _count Quantity. Default value: 1. Maximum value: 10.
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
                     * 获取Custom task name
                     * @return Name Custom task name
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置Custom task name
                     * @param _name Custom task name
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
                     * Subscription database type. Currently, cynosdbmysql, mariadb, mongodb, mysql, percona, tdpg, and tdsqlpercona are supported.
                     */
                    std::string m_product;
                    bool m_productHasBeenSet;

                    /**
                     * Payment method. Valid values: 0 (monthly subscription); 1 (pay-as-you-go).
                     */
                    int64_t m_payType;
                    bool m_payTypeHasBeenSet;

                    /**
                     * Purchase duration. This field needs to be filled in when the payType is monthly subscription. The unit is month. Value range: 1-120. Default value: 1.
                     */
                    int64_t m_duration;
                    bool m_durationHasBeenSet;

                    /**
                     * Whether to renew automatically. This field needs to be filled in when the payType is monthly subscription. Valid values: 0 (auto-renewal disabled); 1 (auto-renewal enabled). Automatic renewal is not performed by default. This flag is invalid for pay-as-you-go.
                     */
                    int64_t m_autoRenew;
                    bool m_autoRenewHasBeenSet;

                    /**
                     * Quantity. Default value: 1. Maximum value: 10.
                     */
                    int64_t m_count;
                    bool m_countHasBeenSet;

                    /**
                     * Instance resource tags
                     */
                    std::vector<TagItem> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * Custom task name
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DTS_V20211206_MODEL_CREATESUBSCRIBEREQUEST_H_
