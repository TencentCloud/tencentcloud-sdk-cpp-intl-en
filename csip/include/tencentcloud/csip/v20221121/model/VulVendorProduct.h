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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_VULVENDORPRODUCT_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_VULVENDORPRODUCT_H_

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
                * Vulnerability Impact Manufacturer and Product
                */
                class VulVendorProduct : public AbstractModel
                {
                public:
                    VulVendorProduct();
                    ~VulVendorProduct() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>supplier</p>
                     * @return Vendor <p>supplier</p>
                     * 
                     */
                    std::string GetVendor() const;

                    /**
                     * 设置<p>supplier</p>
                     * @param _vendor <p>supplier</p>
                     * 
                     */
                    void SetVendor(const std::string& _vendor);

                    /**
                     * 判断参数 Vendor 是否已赋值
                     * @return Vendor 是否已赋值
                     * 
                     */
                    bool VendorHasBeenSet() const;

                    /**
                     * 获取<p>Product name.</p>
                     * @return Product <p>Product name.</p>
                     * 
                     */
                    std::string GetProduct() const;

                    /**
                     * 设置<p>Product name.</p>
                     * @param _product <p>Product name.</p>
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
                     * 获取<p>Affected version</p>
                     * @return VersionRange <p>Affected version</p>
                     * 
                     */
                    std::vector<std::string> GetVersionRange() const;

                    /**
                     * 设置<p>Affected version</p>
                     * @param _versionRange <p>Affected version</p>
                     * 
                     */
                    void SetVersionRange(const std::vector<std::string>& _versionRange);

                    /**
                     * 判断参数 VersionRange 是否已赋值
                     * @return VersionRange 是否已赋值
                     * 
                     */
                    bool VersionRangeHasBeenSet() const;

                private:

                    /**
                     * <p>supplier</p>
                     */
                    std::string m_vendor;
                    bool m_vendorHasBeenSet;

                    /**
                     * <p>Product name.</p>
                     */
                    std::string m_product;
                    bool m_productHasBeenSet;

                    /**
                     * <p>Affected version</p>
                     */
                    std::vector<std::string> m_versionRange;
                    bool m_versionRangeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_VULVENDORPRODUCT_H_
