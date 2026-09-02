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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_PROVIDERNODE_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_PROVIDERNODE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/csip/v20221121/model/CategoryNode.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * Asset tree - Cloud service provider node
                */
                class ProviderNode : public AbstractModel
                {
                public:
                    ProviderNode();
                    ~ProviderNode() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Cloud service provider</p>
                     * @return Provider <p>Cloud service provider</p>
                     * 
                     */
                    std::string GetProvider() const;

                    /**
                     * 设置<p>Cloud service provider</p>
                     * @param _provider <p>Cloud service provider</p>
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
                     * 获取<p>Cloud vendor name</p>
                     * @return ProviderName <p>Cloud vendor name</p>
                     * 
                     */
                    std::string GetProviderName() const;

                    /**
                     * 设置<p>Cloud vendor name</p>
                     * @param _providerName <p>Cloud vendor name</p>
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
                     * 获取<p>Subordinate asset category node</p>
                     * @return Categories <p>Subordinate asset category node</p>
                     * 
                     */
                    std::vector<CategoryNode> GetCategories() const;

                    /**
                     * 设置<p>Subordinate asset category node</p>
                     * @param _categories <p>Subordinate asset category node</p>
                     * 
                     */
                    void SetCategories(const std::vector<CategoryNode>& _categories);

                    /**
                     * 判断参数 Categories 是否已赋值
                     * @return Categories 是否已赋值
                     * 
                     */
                    bool CategoriesHasBeenSet() const;

                private:

                    /**
                     * <p>Cloud service provider</p>
                     */
                    std::string m_provider;
                    bool m_providerHasBeenSet;

                    /**
                     * <p>Cloud vendor name</p>
                     */
                    std::string m_providerName;
                    bool m_providerNameHasBeenSet;

                    /**
                     * <p>Subordinate asset category node</p>
                     */
                    std::vector<CategoryNode> m_categories;
                    bool m_categoriesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_PROVIDERNODE_H_
