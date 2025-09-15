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

#ifndef TENCENTCLOUD_EMR_V20190103_MODEL_NODERENEWPRICEDETAIL_H_
#define TENCENTCLOUD_EMR_V20190103_MODEL_NODERENEWPRICEDETAIL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/emr/v20190103/model/RenewPriceDetail.h>


namespace TencentCloud
{
    namespace Emr
    {
        namespace V20190103
        {
            namespace Model
            {
                /**
                * Node renewal pricing details.
                */
                class NodeRenewPriceDetail : public AbstractModel
                {
                public:
                    NodeRenewPriceDetail();
                    ~NodeRenewPriceDetail() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Billing type (1: monthly subscription, 3: committed use).
                     * @return ChargeType Billing type (1: monthly subscription, 3: committed use).
                     * 
                     */
                    int64_t GetChargeType() const;

                    /**
                     * 设置Billing type (1: monthly subscription, 3: committed use).
                     * @param _chargeType Billing type (1: monthly subscription, 3: committed use).
                     * 
                     */
                    void SetChargeType(const int64_t& _chargeType);

                    /**
                     * 判断参数 ChargeType 是否已赋值
                     * @return ChargeType 是否已赋值
                     * 
                     */
                    bool ChargeTypeHasBeenSet() const;

                    /**
                     * 获取EMR resource ID.
                     * @return EmrResourceId EMR resource ID.
                     * 
                     */
                    std::string GetEmrResourceId() const;

                    /**
                     * 设置EMR resource ID.
                     * @param _emrResourceId EMR resource ID.
                     * 
                     */
                    void SetEmrResourceId(const std::string& _emrResourceId);

                    /**
                     * 判断参数 EmrResourceId 是否已赋值
                     * @return EmrResourceId 是否已赋值
                     * 
                     */
                    bool EmrResourceIdHasBeenSet() const;

                    /**
                     * 获取Node type.
                     * @return NodeType Node type.
                     * 
                     */
                    std::string GetNodeType() const;

                    /**
                     * 设置Node type.
                     * @param _nodeType Node type.
                     * 
                     */
                    void SetNodeType(const std::string& _nodeType);

                    /**
                     * 判断参数 NodeType 是否已赋值
                     * @return NodeType 是否已赋值
                     * 
                     */
                    bool NodeTypeHasBeenSet() const;

                    /**
                     * 获取Node private network IP.
                     * @return Ip Node private network IP.
                     * 
                     */
                    std::string GetIp() const;

                    /**
                     * 设置Node private network IP.
                     * @param _ip Node private network IP.
                     * 
                     */
                    void SetIp(const std::string& _ip);

                    /**
                     * 判断参数 Ip 是否已赋值
                     * @return Ip 是否已赋值
                     * 
                     */
                    bool IpHasBeenSet() const;

                    /**
                     * 获取Current expiration time.
                     * @return ExpireTime Current expiration time.
                     * 
                     */
                    std::string GetExpireTime() const;

                    /**
                     * 设置Current expiration time.
                     * @param _expireTime Current expiration time.
                     * 
                     */
                    void SetExpireTime(const std::string& _expireTime);

                    /**
                     * 判断参数 ExpireTime 是否已赋值
                     * @return ExpireTime 是否已赋值
                     * 
                     */
                    bool ExpireTimeHasBeenSet() const;

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

                    /**
                     * 获取Node component renewal pricing list.
                     * @return RenewPriceDetails Node component renewal pricing list.
                     * 
                     */
                    std::vector<RenewPriceDetail> GetRenewPriceDetails() const;

                    /**
                     * 设置Node component renewal pricing list.
                     * @param _renewPriceDetails Node component renewal pricing list.
                     * 
                     */
                    void SetRenewPriceDetails(const std::vector<RenewPriceDetail>& _renewPriceDetails);

                    /**
                     * 判断参数 RenewPriceDetails 是否已赋值
                     * @return RenewPriceDetails 是否已赋值
                     * 
                     */
                    bool RenewPriceDetailsHasBeenSet() const;

                private:

                    /**
                     * Billing type (1: monthly subscription, 3: committed use).
                     */
                    int64_t m_chargeType;
                    bool m_chargeTypeHasBeenSet;

                    /**
                     * EMR resource ID.
                     */
                    std::string m_emrResourceId;
                    bool m_emrResourceIdHasBeenSet;

                    /**
                     * Node type.
                     */
                    std::string m_nodeType;
                    bool m_nodeTypeHasBeenSet;

                    /**
                     * Node private network IP.
                     */
                    std::string m_ip;
                    bool m_ipHasBeenSet;

                    /**
                     * Current expiration time.
                     */
                    std::string m_expireTime;
                    bool m_expireTimeHasBeenSet;

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

                    /**
                     * Node component renewal pricing list.
                     */
                    std::vector<RenewPriceDetail> m_renewPriceDetails;
                    bool m_renewPriceDetailsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EMR_V20190103_MODEL_NODERENEWPRICEDETAIL_H_
