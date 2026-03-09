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

#ifndef TENCENTCLOUD_LIGHTHOUSE_V20200324_MODEL_DATADISKPRICE_H_
#define TENCENTCLOUD_LIGHTHOUSE_V20200324_MODEL_DATADISKPRICE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Lighthouse
    {
        namespace V20200324
        {
            namespace Model
            {
                /**
                * Data disk price
                */
                class DataDiskPrice : public AbstractModel
                {
                public:
                    DataDiskPrice();
                    ~DataDiskPrice() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Cloud disk ID.</p>.
                     * @return DiskId <p>Cloud disk ID.</p>.
                     * 
                     */
                    std::string GetDiskId() const;

                    /**
                     * 设置<p>Cloud disk ID.</p>.
                     * @param _diskId <p>Cloud disk ID.</p>.
                     * 
                     */
                    void SetDiskId(const std::string& _diskId);

                    /**
                     * 判断参数 DiskId 是否已赋值
                     * @return DiskId 是否已赋值
                     * 
                     */
                    bool DiskIdHasBeenSet() const;

                    /**
                     * 获取<P>Cloud block storage (cbs) unit price.</p><p>unit: usd</p>.
                     * @return OriginalDiskPrice <P>Cloud block storage (cbs) unit price.</p><p>unit: usd</p>.
                     * 
                     */
                    double GetOriginalDiskPrice() const;

                    /**
                     * 设置<P>Cloud block storage (cbs) unit price.</p><p>unit: usd</p>.
                     * @param _originalDiskPrice <P>Cloud block storage (cbs) unit price.</p><p>unit: usd</p>.
                     * 
                     */
                    void SetOriginalDiskPrice(const double& _originalDiskPrice);

                    /**
                     * 判断参数 OriginalDiskPrice 是否已赋值
                     * @return OriginalDiskPrice 是否已赋值
                     * 
                     */
                    bool OriginalDiskPriceHasBeenSet() const;

                    /**
                     * 获取<P>Total CBS price.</p><p>unit: usd</p>.
                     * @return OriginalPrice <P>Total CBS price.</p><p>unit: usd</p>.
                     * 
                     */
                    double GetOriginalPrice() const;

                    /**
                     * 设置<P>Total CBS price.</p><p>unit: usd</p>.
                     * @param _originalPrice <P>Total CBS price.</p><p>unit: usd</p>.
                     * 
                     */
                    void SetOriginalPrice(const double& _originalPrice);

                    /**
                     * 判断参数 OriginalPrice 是否已赋值
                     * @return OriginalPrice 是否已赋值
                     * 
                     */
                    bool OriginalPriceHasBeenSet() const;

                    /**
                     * 获取<p>Discount.</p>.
                     * @return Discount <p>Discount.</p>.
                     * 
                     */
                    double GetDiscount() const;

                    /**
                     * 设置<p>Discount.</p>.
                     * @param _discount <p>Discount.</p>.
                     * 
                     */
                    void SetDiscount(const double& _discount);

                    /**
                     * 判断参数 Discount 是否已赋值
                     * @return Discount 是否已赋值
                     * 
                     */
                    bool DiscountHasBeenSet() const;

                    /**
                     * 获取<P>Discounted total price.</p><p>unit: usd</p>.
                     * @return DiscountPrice <P>Discounted total price.</p><p>unit: usd</p>.
                     * 
                     */
                    double GetDiscountPrice() const;

                    /**
                     * 设置<P>Discounted total price.</p><p>unit: usd</p>.
                     * @param _discountPrice <P>Discounted total price.</p><p>unit: usd</p>.
                     * 
                     */
                    void SetDiscountPrice(const double& _discountPrice);

                    /**
                     * 判断参数 DiscountPrice 是否已赋值
                     * @return DiscountPrice 是否已赋值
                     * 
                     */
                    bool DiscountPriceHasBeenSet() const;

                    /**
                     * 获取<p>Instance ID for data disk mounting.</p>.
                     * @return InstanceId <p>Instance ID for data disk mounting.</p>.
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置<p>Instance ID for data disk mounting.</p>.
                     * @param _instanceId <p>Instance ID for data disk mounting.</p>.
                     * 
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                private:

                    /**
                     * <p>Cloud disk ID.</p>.
                     */
                    std::string m_diskId;
                    bool m_diskIdHasBeenSet;

                    /**
                     * <P>Cloud block storage (cbs) unit price.</p><p>unit: usd</p>.
                     */
                    double m_originalDiskPrice;
                    bool m_originalDiskPriceHasBeenSet;

                    /**
                     * <P>Total CBS price.</p><p>unit: usd</p>.
                     */
                    double m_originalPrice;
                    bool m_originalPriceHasBeenSet;

                    /**
                     * <p>Discount.</p>.
                     */
                    double m_discount;
                    bool m_discountHasBeenSet;

                    /**
                     * <P>Discounted total price.</p><p>unit: usd</p>.
                     */
                    double m_discountPrice;
                    bool m_discountPriceHasBeenSet;

                    /**
                     * <p>Instance ID for data disk mounting.</p>.
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LIGHTHOUSE_V20200324_MODEL_DATADISKPRICE_H_
