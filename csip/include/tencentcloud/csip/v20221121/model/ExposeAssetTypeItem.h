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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_EXPOSEASSETTYPEITEM_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_EXPOSEASSETTYPEITEM_H_

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
                * Exposed asset category.
                */
                class ExposeAssetTypeItem : public AbstractModel
                {
                public:
                    ExposeAssetTypeItem();
                    ~ExposeAssetTypeItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Cloud service provider.
                     * @return Provider Cloud service provider.
                     * 
                     */
                    std::string GetProvider() const;

                    /**
                     * 设置Cloud service provider.
                     * @param _provider Cloud service provider.
                     * 
                     */
                    void SetProvider(const std::string& _provider);

                    /**
                     * 判断参数 Provider 是否已赋值
                     * @return Provider 是否已赋值
                     * 
                     */
                    bool ProviderHasBeenSet() const;

                    /**
                     * 获取Vendor name.
                     * @return ProviderName Vendor name.
                     * 
                     */
                    std::string GetProviderName() const;

                    /**
                     * 设置Vendor name.
                     * @param _providerName Vendor name.
                     * 
                     */
                    void SetProviderName(const std::string& _providerName);

                    /**
                     * 判断参数 ProviderName 是否已赋值
                     * @return ProviderName 是否已赋值
                     * 
                     */
                    bool ProviderNameHasBeenSet() const;

                    /**
                     * 获取Asset type.
                     * @return AssetType Asset type.
                     * 
                     */
                    std::string GetAssetType() const;

                    /**
                     * 设置Asset type.
                     * @param _assetType Asset type.
                     * 
                     */
                    void SetAssetType(const std::string& _assetType);

                    /**
                     * 判断参数 AssetType 是否已赋值
                     * @return AssetType 是否已赋值
                     * 
                     */
                    bool AssetTypeHasBeenSet() const;

                    /**
                     * 获取Asset type name.
                     * @return AssetTypeName Asset type name.
                     * 
                     */
                    std::string GetAssetTypeName() const;

                    /**
                     * 设置Asset type name.
                     * @param _assetTypeName Asset type name.
                     * 
                     */
                    void SetAssetTypeName(const std::string& _assetTypeName);

                    /**
                     * 判断参数 AssetTypeName 是否已赋值
                     * @return AssetTypeName 是否已赋值
                     * 
                     */
                    bool AssetTypeNameHasBeenSet() const;

                private:

                    /**
                     * Cloud service provider.
                     */
                    std::string m_provider;
                    bool m_providerHasBeenSet;

                    /**
                     * Vendor name.
                     */
                    std::string m_providerName;
                    bool m_providerNameHasBeenSet;

                    /**
                     * Asset type.
                     */
                    std::string m_assetType;
                    bool m_assetTypeHasBeenSet;

                    /**
                     * Asset type name.
                     */
                    std::string m_assetTypeName;
                    bool m_assetTypeNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_EXPOSEASSETTYPEITEM_H_
