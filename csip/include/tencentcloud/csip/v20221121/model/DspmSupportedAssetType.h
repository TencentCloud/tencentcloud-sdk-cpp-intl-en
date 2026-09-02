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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_DSPMSUPPORTEDASSETTYPE_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_DSPMSUPPORTEDASSETTYPE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/csip/v20221121/model/RegionConfig.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * dspm-supported product information
                */
                class DspmSupportedAssetType : public AbstractModel
                {
                public:
                    DspmSupportedAssetType();
                    ~DspmSupportedAssetType() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Product name (used for querying)</p>
                     * @return Product <p>Product name (used for querying)</p>
                     * 
                     */
                    std::string GetProduct() const;

                    /**
                     * 设置<p>Product name (used for querying)</p>
                     * @param _product <p>Product name (used for querying)</p>
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
                     * 获取<p>Region list.</p>
                     * @return Regions <p>Region list.</p>
                     * 
                     */
                    std::vector<RegionConfig> GetRegions() const;

                    /**
                     * 设置<p>Region list.</p>
                     * @param _regions <p>Region list.</p>
                     * 
                     */
                    void SetRegions(const std::vector<RegionConfig>& _regions);

                    /**
                     * 判断参数 Regions 是否已赋值
                     * @return Regions 是否已赋值
                     * 
                     */
                    bool RegionsHasBeenSet() const;

                    /**
                     * 获取<p>Product name-for display</p>
                     * @return ProductDisplayName <p>Product name-for display</p>
                     * 
                     */
                    std::string GetProductDisplayName() const;

                    /**
                     * 设置<p>Product name-for display</p>
                     * @param _productDisplayName <p>Product name-for display</p>
                     * 
                     */
                    void SetProductDisplayName(const std::string& _productDisplayName);

                    /**
                     * 判断参数 ProductDisplayName 是否已赋值
                     * @return ProductDisplayName 是否已赋值
                     * 
                     */
                    bool ProductDisplayNameHasBeenSet() const;

                    /**
                     * 获取<p>Product group name</p>
                     * @return ProductGroup <p>Product group name</p>
                     * 
                     */
                    std::string GetProductGroup() const;

                    /**
                     * 设置<p>Product group name</p>
                     * @param _productGroup <p>Product group name</p>
                     * 
                     */
                    void SetProductGroup(const std::string& _productGroup);

                    /**
                     * 判断参数 ProductGroup 是否已赋值
                     * @return ProductGroup 是否已赋值
                     * 
                     */
                    bool ProductGroupHasBeenSet() const;

                    /**
                     * 获取<p>Total number of asset instances for a given asset type</p>
                     * @return AssetTotal <p>Total number of asset instances for a given asset type</p>
                     * 
                     */
                    int64_t GetAssetTotal() const;

                    /**
                     * 设置<p>Total number of asset instances for a given asset type</p>
                     * @param _assetTotal <p>Total number of asset instances for a given asset type</p>
                     * 
                     */
                    void SetAssetTotal(const int64_t& _assetTotal);

                    /**
                     * 判断参数 AssetTotal 是否已赋值
                     * @return AssetTotal 是否已赋值
                     * 
                     */
                    bool AssetTotalHasBeenSet() const;

                private:

                    /**
                     * <p>Product name (used for querying)</p>
                     */
                    std::string m_product;
                    bool m_productHasBeenSet;

                    /**
                     * <p>Region list.</p>
                     */
                    std::vector<RegionConfig> m_regions;
                    bool m_regionsHasBeenSet;

                    /**
                     * <p>Product name-for display</p>
                     */
                    std::string m_productDisplayName;
                    bool m_productDisplayNameHasBeenSet;

                    /**
                     * <p>Product group name</p>
                     */
                    std::string m_productGroup;
                    bool m_productGroupHasBeenSet;

                    /**
                     * <p>Total number of asset instances for a given asset type</p>
                     */
                    int64_t m_assetTotal;
                    bool m_assetTotalHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_DSPMSUPPORTEDASSETTYPE_H_
