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
                     * 获取The type. Valid values: `node` (node); `rootDisk` (system disk); `dataDisk` and `metaDB` (cloud data disk)
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return InstanceType The type. Valid values: `node` (node); `rootDisk` (system disk); `dataDisk` and `metaDB` (cloud data disk)
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetInstanceType() const;

                    /**
                     * 设置The type. Valid values: `node` (node); `rootDisk` (system disk); `dataDisk` and `metaDB` (cloud data disk)
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param InstanceType The type. Valid values: `node` (node); `rootDisk` (system disk); `dataDisk` and `metaDB` (cloud data disk)
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetInstanceType(const std::string& _instanceType);

                    /**
                     * 判断参数 InstanceType 是否已赋值
                     * @return InstanceType 是否已赋值
                     */
                    bool InstanceTypeHasBeenSet() const;

                    /**
                     * 获取Rate (original)
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Price Rate (original)
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    double GetPrice() const;

                    /**
                     * 设置Rate (original)
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param Price Rate (original)
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetPrice(const double& _price);

                    /**
                     * 判断参数 Price 是否已赋值
                     * @return Price 是否已赋值
                     */
                    bool PriceHasBeenSet() const;

                    /**
                     * 获取Rate (discounted)
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return RealCost Rate (discounted)
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    double GetRealCost() const;

                    /**
                     * 设置Rate (discounted)
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param RealCost Rate (discounted)
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetRealCost(const double& _realCost);

                    /**
                     * 判断参数 RealCost 是否已赋值
                     * @return RealCost 是否已赋值
                     */
                    bool RealCostHasBeenSet() const;

                    /**
                     * 获取Total price (discounted)
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return RealTotalCost Total price (discounted)
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    double GetRealTotalCost() const;

                    /**
                     * 设置Total price (discounted)
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param RealTotalCost Total price (discounted)
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetRealTotalCost(const double& _realTotalCost);

                    /**
                     * 判断参数 RealTotalCost 是否已赋值
                     * @return RealTotalCost 是否已赋值
                     */
                    bool RealTotalCostHasBeenSet() const;

                    /**
                     * 获取Discount
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Policy Discount
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    double GetPolicy() const;

                    /**
                     * 设置Discount
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param Policy Discount
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetPolicy(const double& _policy);

                    /**
                     * 判断参数 Policy 是否已赋值
                     * @return Policy 是否已赋值
                     */
                    bool PolicyHasBeenSet() const;

                    /**
                     * 获取Quantity
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return GoodsNum Quantity
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t GetGoodsNum() const;

                    /**
                     * 设置Quantity
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param GoodsNum Quantity
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetGoodsNum(const int64_t& _goodsNum);

                    /**
                     * 判断参数 GoodsNum 是否已赋值
                     * @return GoodsNum 是否已赋值
                     */
                    bool GoodsNumHasBeenSet() const;

                private:

                    /**
                     * The type. Valid values: `node` (node); `rootDisk` (system disk); `dataDisk` and `metaDB` (cloud data disk)
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_instanceType;
                    bool m_instanceTypeHasBeenSet;

                    /**
                     * Rate (original)
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    double m_price;
                    bool m_priceHasBeenSet;

                    /**
                     * Rate (discounted)
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    double m_realCost;
                    bool m_realCostHasBeenSet;

                    /**
                     * Total price (discounted)
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    double m_realTotalCost;
                    bool m_realTotalCostHasBeenSet;

                    /**
                     * Discount
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    double m_policy;
                    bool m_policyHasBeenSet;

                    /**
                     * Quantity
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_goodsNum;
                    bool m_goodsNumHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EMR_V20190103_MODEL_PARTDETAILPRICEITEM_H_
