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

#ifndef TENCENTCLOUD_EMR_V20190103_MODEL_PARTDETAILPRICEITEM_H_
#define TENCENTCLOUD_EMR_V20190103_MODEL_PARTDETAILPRICEITEM_H_

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
                * Price details by node part, used for creating the cluster price list
                */
                class PartDetailPriceItem : public AbstractModel
                {
                public:
                    PartDetailPriceItem();
                    ~PartDetailPriceItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Types, including node: node (denoting node), rootDisk (denoting system disk), dataDisk (denoting cloud data disk), and metaDB.
                     * @return InstanceType Types, including node: node (denoting node), rootDisk (denoting system disk), dataDisk (denoting cloud data disk), and metaDB.
                     * 
                     */
                    std::string GetInstanceType() const;

                    /**
                     * 设置Types, including node: node (denoting node), rootDisk (denoting system disk), dataDisk (denoting cloud data disk), and metaDB.
                     * @param _instanceType Types, including node: node (denoting node), rootDisk (denoting system disk), dataDisk (denoting cloud data disk), and metaDB.
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
                     * 获取Unit price (original price).
                     * @return Price Unit price (original price).
                     * 
                     */
                    double GetPrice() const;

                    /**
                     * 设置Unit price (original price).
                     * @param _price Unit price (original price).
                     * 
                     */
                    void SetPrice(const double& _price);

                    /**
                     * 判断参数 Price 是否已赋值
                     * @return Price 是否已赋值
                     * 
                     */
                    bool PriceHasBeenSet() const;

                    /**
                     * 获取Unit price (discounted price).
                     * @return RealCost Unit price (discounted price).
                     * 
                     */
                    double GetRealCost() const;

                    /**
                     * 设置Unit price (discounted price).
                     * @param _realCost Unit price (discounted price).
                     * 
                     */
                    void SetRealCost(const double& _realCost);

                    /**
                     * 判断参数 RealCost 是否已赋值
                     * @return RealCost 是否已赋值
                     * 
                     */
                    bool RealCostHasBeenSet() const;

                    /**
                     * 获取Total price (discounted price).
                     * @return RealTotalCost Total price (discounted price).
                     * 
                     */
                    double GetRealTotalCost() const;

                    /**
                     * 设置Total price (discounted price).
                     * @param _realTotalCost Total price (discounted price).
                     * 
                     */
                    void SetRealTotalCost(const double& _realTotalCost);

                    /**
                     * 判断参数 RealTotalCost 是否已赋值
                     * @return RealTotalCost 是否已赋值
                     * 
                     */
                    bool RealTotalCostHasBeenSet() const;

                    /**
                     * 获取Discount.
                     * @return Policy Discount.
                     * 
                     */
                    double GetPolicy() const;

                    /**
                     * 设置Discount.
                     * @param _policy Discount.
                     * 
                     */
                    void SetPolicy(const double& _policy);

                    /**
                     * 判断参数 Policy 是否已赋值
                     * @return Policy 是否已赋值
                     * 
                     */
                    bool PolicyHasBeenSet() const;

                    /**
                     * 获取Quantity.
                     * @return GoodsNum Quantity.
                     * 
                     */
                    int64_t GetGoodsNum() const;

                    /**
                     * 设置Quantity.
                     * @param _goodsNum Quantity.
                     * 
                     */
                    void SetGoodsNum(const int64_t& _goodsNum);

                    /**
                     * 判断参数 GoodsNum 是否已赋值
                     * @return GoodsNum 是否已赋值
                     * 
                     */
                    bool GoodsNumHasBeenSet() const;

                private:

                    /**
                     * Types, including node: node (denoting node), rootDisk (denoting system disk), dataDisk (denoting cloud data disk), and metaDB.
                     */
                    std::string m_instanceType;
                    bool m_instanceTypeHasBeenSet;

                    /**
                     * Unit price (original price).
                     */
                    double m_price;
                    bool m_priceHasBeenSet;

                    /**
                     * Unit price (discounted price).
                     */
                    double m_realCost;
                    bool m_realCostHasBeenSet;

                    /**
                     * Total price (discounted price).
                     */
                    double m_realTotalCost;
                    bool m_realTotalCostHasBeenSet;

                    /**
                     * Discount.
                     */
                    double m_policy;
                    bool m_policyHasBeenSet;

                    /**
                     * Quantity.
                     */
                    int64_t m_goodsNum;
                    bool m_goodsNumHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EMR_V20190103_MODEL_PARTDETAILPRICEITEM_H_
