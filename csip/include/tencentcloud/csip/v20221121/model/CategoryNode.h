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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_CATEGORYNODE_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_CATEGORYNODE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/csip/v20221121/model/AssetTypeNode.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * Asset tree - Asset category node
                */
                class CategoryNode : public AbstractModel
                {
                public:
                    CategoryNode();
                    ~CategoryNode() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Asset category name</p>
                     * @return Category <p>Asset category name</p>
                     * 
                     */
                    std::string GetCategory() const;

                    /**
                     * 设置<p>Asset category name</p>
                     * @param _category <p>Asset category name</p>
                     * 
                     */
                    void SetCategory(const std::string& _category);

                    /**
                     * 判断参数 Category 是否已赋值
                     * @return Category 是否已赋值
                     * 
                     */
                    bool CategoryHasBeenSet() const;

                    /**
                     * 获取<p>Display order</p>
                     * @return DisplayOrder <p>Display order</p>
                     * 
                     */
                    uint64_t GetDisplayOrder() const;

                    /**
                     * 设置<p>Display order</p>
                     * @param _displayOrder <p>Display order</p>
                     * 
                     */
                    void SetDisplayOrder(const uint64_t& _displayOrder);

                    /**
                     * 判断参数 DisplayOrder 是否已赋值
                     * @return DisplayOrder 是否已赋值
                     * 
                     */
                    bool DisplayOrderHasBeenSet() const;

                    /**
                     * 获取<p>Subordinate asset type node</p>
                     * @return AssetTypes <p>Subordinate asset type node</p>
                     * 
                     */
                    std::vector<AssetTypeNode> GetAssetTypes() const;

                    /**
                     * 设置<p>Subordinate asset type node</p>
                     * @param _assetTypes <p>Subordinate asset type node</p>
                     * 
                     */
                    void SetAssetTypes(const std::vector<AssetTypeNode>& _assetTypes);

                    /**
                     * 判断参数 AssetTypes 是否已赋值
                     * @return AssetTypes 是否已赋值
                     * 
                     */
                    bool AssetTypesHasBeenSet() const;

                private:

                    /**
                     * <p>Asset category name</p>
                     */
                    std::string m_category;
                    bool m_categoryHasBeenSet;

                    /**
                     * <p>Display order</p>
                     */
                    uint64_t m_displayOrder;
                    bool m_displayOrderHasBeenSet;

                    /**
                     * <p>Subordinate asset type node</p>
                     */
                    std::vector<AssetTypeNode> m_assetTypes;
                    bool m_assetTypesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_CATEGORYNODE_H_
