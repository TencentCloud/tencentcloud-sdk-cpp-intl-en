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

#ifndef TENCENTCLOUD_MQTT_V20240516_MODEL_PRODUCTSKUITEM_H_
#define TENCENTCLOUD_MQTT_V20240516_MODEL_PRODUCTSKUITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mqtt/v20240516/model/PriceTag.h>


namespace TencentCloud
{
    namespace Mqtt
    {
        namespace V20240516
        {
            namespace Model
            {
                /**
                * MQTT ProductSkuItem
                */
                class ProductSkuItem : public AbstractModel
                {
                public:
                    ProductSkuItem();
                    ~ProductSkuItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Specification type
BASIC: Basic Edition.
PRO: Professional Edition
PLATINUM: Platinum version
                     * @return InstanceType Specification type
BASIC: Basic Edition.
PRO: Professional Edition
PLATINUM: Platinum version
                     * 
                     */
                    std::string GetInstanceType() const;

                    /**
                     * 设置Specification type
BASIC: Basic Edition.
PRO: Professional Edition
PLATINUM: Platinum version
                     * @param _instanceType Specification type
BASIC: Basic Edition.
PRO: Professional Edition
PLATINUM: Platinum version
                     * 
                     */
                    void SetInstanceType(const std::string& _instanceType);

                    /**
                     * 判断参数 InstanceType 是否已赋值
                     * @return InstanceType 是否已赋值
                     * 
                     */
                    bool InstanceTypeHasBeenSet() const;

                    /**
                     * 获取Specification code
                     * @return SkuCode Specification code
                     * 
                     */
                    std::string GetSkuCode() const;

                    /**
                     * 设置Specification code
                     * @param _skuCode Specification code
                     * 
                     */
                    void SetSkuCode(const std::string& _skuCode);

                    /**
                     * 判断参数 SkuCode 是否已赋值
                     * @return SkuCode 是否已赋值
                     * 
                     */
                    bool SkuCodeHasBeenSet() const;

                    /**
                     * 获取whether required or not
1: available for sale
0: unsellable
                     * @return OnSale whether required or not
1: available for sale
0: unsellable
                     * 
                     */
                    bool GetOnSale() const;

                    /**
                     * 设置whether required or not
1: available for sale
0: unsellable
                     * @param _onSale whether required or not
1: available for sale
0: unsellable
                     * 
                     */
                    void SetOnSale(const bool& _onSale);

                    /**
                     * 判断参数 OnSale 是否已赋值
                     * @return OnSale 是否已赋值
                     * 
                     */
                    bool OnSaleHasBeenSet() const;

                    /**
                     * 获取Limit on the number of topics.
                     * @return TopicNumLimit Limit on the number of topics.
                     * 
                     */
                    int64_t GetTopicNumLimit() const;

                    /**
                     * 设置Limit on the number of topics.
                     * @param _topicNumLimit Limit on the number of topics.
                     * 
                     */
                    void SetTopicNumLimit(const int64_t& _topicNumLimit);

                    /**
                     * 判断参数 TopicNumLimit 是否已赋值
                     * @return TopicNumLimit 是否已赋值
                     * 
                     */
                    bool TopicNumLimitHasBeenSet() const;

                    /**
                     * 获取Sum of the quantity of messages produced and consumed per second in an MQTT cluster.
                     * @return TpsLimit Sum of the quantity of messages produced and consumed per second in an MQTT cluster.
                     * 
                     */
                    int64_t GetTpsLimit() const;

                    /**
                     * 设置Sum of the quantity of messages produced and consumed per second in an MQTT cluster.
                     * @param _tpsLimit Sum of the quantity of messages produced and consumed per second in an MQTT cluster.
                     * 
                     */
                    void SetTpsLimit(const int64_t& _tpsLimit);

                    /**
                     * 判断参数 TpsLimit 是否已赋值
                     * @return TpsLimit 是否已赋值
                     * 
                     */
                    bool TpsLimitHasBeenSet() const;

                    /**
                     * 获取Number of client connections
                     * @return ClientNumLimit Number of client connections
                     * 
                     */
                    int64_t GetClientNumLimit() const;

                    /**
                     * 设置Number of client connections
                     * @param _clientNumLimit Number of client connections
                     * 
                     */
                    void SetClientNumLimit(const int64_t& _clientNumLimit);

                    /**
                     * 判断参数 ClientNumLimit 是否已赋值
                     * @return ClientNumLimit 是否已赋值
                     * 
                     */
                    bool ClientNumLimitHasBeenSet() const;

                    /**
                     * 获取Maximum number of subscriptions for a single client
                     * @return MaxSubscriptionPerClient Maximum number of subscriptions for a single client
                     * 
                     */
                    int64_t GetMaxSubscriptionPerClient() const;

                    /**
                     * 设置Maximum number of subscriptions for a single client
                     * @param _maxSubscriptionPerClient Maximum number of subscriptions for a single client
                     * 
                     */
                    void SetMaxSubscriptionPerClient(const int64_t& _maxSubscriptionPerClient);

                    /**
                     * 判断参数 MaxSubscriptionPerClient 是否已赋值
                     * @return MaxSubscriptionPerClient 是否已赋值
                     * 
                     */
                    bool MaxSubscriptionPerClientHasBeenSet() const;

                    /**
                     * 获取Number of authorization rules
                     * @return AuthorizationPolicyLimit Number of authorization rules
                     * 
                     */
                    int64_t GetAuthorizationPolicyLimit() const;

                    /**
                     * 设置Number of authorization rules
                     * @param _authorizationPolicyLimit Number of authorization rules
                     * 
                     */
                    void SetAuthorizationPolicyLimit(const int64_t& _authorizationPolicyLimit);

                    /**
                     * 判断参数 AuthorizationPolicyLimit 是否已赋值
                     * @return AuthorizationPolicyLimit 是否已赋值
                     * 
                     */
                    bool AuthorizationPolicyLimitHasBeenSet() const;

                    /**
                     * 获取Billing item information
                     * @return PriceTags Billing item information
                     * 
                     */
                    std::vector<PriceTag> GetPriceTags() const;

                    /**
                     * 设置Billing item information
                     * @param _priceTags Billing item information
                     * 
                     */
                    void SetPriceTags(const std::vector<PriceTag>& _priceTags);

                    /**
                     * 判断参数 PriceTags 是否已赋值
                     * @return PriceTags 是否已赋值
                     * 
                     */
                    bool PriceTagsHasBeenSet() const;

                private:

                    /**
                     * Specification type
BASIC: Basic Edition.
PRO: Professional Edition
PLATINUM: Platinum version
                     */
                    std::string m_instanceType;
                    bool m_instanceTypeHasBeenSet;

                    /**
                     * Specification code
                     */
                    std::string m_skuCode;
                    bool m_skuCodeHasBeenSet;

                    /**
                     * whether required or not
1: available for sale
0: unsellable
                     */
                    bool m_onSale;
                    bool m_onSaleHasBeenSet;

                    /**
                     * Limit on the number of topics.
                     */
                    int64_t m_topicNumLimit;
                    bool m_topicNumLimitHasBeenSet;

                    /**
                     * Sum of the quantity of messages produced and consumed per second in an MQTT cluster.
                     */
                    int64_t m_tpsLimit;
                    bool m_tpsLimitHasBeenSet;

                    /**
                     * Number of client connections
                     */
                    int64_t m_clientNumLimit;
                    bool m_clientNumLimitHasBeenSet;

                    /**
                     * Maximum number of subscriptions for a single client
                     */
                    int64_t m_maxSubscriptionPerClient;
                    bool m_maxSubscriptionPerClientHasBeenSet;

                    /**
                     * Number of authorization rules
                     */
                    int64_t m_authorizationPolicyLimit;
                    bool m_authorizationPolicyLimitHasBeenSet;

                    /**
                     * Billing item information
                     */
                    std::vector<PriceTag> m_priceTags;
                    bool m_priceTagsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MQTT_V20240516_MODEL_PRODUCTSKUITEM_H_
