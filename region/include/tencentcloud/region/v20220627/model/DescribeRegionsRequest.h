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

#ifndef TENCENTCLOUD_REGION_V20220627_MODEL_DESCRIBEREGIONSREQUEST_H_
#define TENCENTCLOUD_REGION_V20220627_MODEL_DESCRIBEREGIONSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Region
    {
        namespace V20220627
        {
            namespace Model
            {
                /**
                * DescribeRegions request structure.
                */
                class DescribeRegionsRequest : public AbstractModel
                {
                public:
                    DescribeRegionsRequest();
                    ~DescribeRegionsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Name of the product to be queried, such as cvm. for specific value, query the DescribeProducts api.
                     * @return Product Name of the product to be queried, such as cvm. for specific value, query the DescribeProducts api.
                     * 
                     */
                    std::string GetProduct() const;

                    /**
                     * 设置Name of the product to be queried, such as cvm. for specific value, query the DescribeProducts api.
                     * @param _product Name of the product to be queried, such as cvm. for specific value, query the DescribeProducts api.
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
                     * 获取Not passed or 0 means no query [optional business allowlist], 1 means query [optional business allowlist]. if this parameter is set to 1, the allowlist will only be queried when no business allowlist is found.
                     * @return Scene Not passed or 0 means no query [optional business allowlist], 1 means query [optional business allowlist]. if this parameter is set to 1, the allowlist will only be queried when no business allowlist is found.
                     * 
                     */
                    int64_t GetScene() const;

                    /**
                     * 设置Not passed or 0 means no query [optional business allowlist], 1 means query [optional business allowlist]. if this parameter is set to 1, the allowlist will only be queried when no business allowlist is found.
                     * @param _scene Not passed or 0 means no query [optional business allowlist], 1 means query [optional business allowlist]. if this parameter is set to 1, the allowlist will only be queried when no business allowlist is found.
                     * 
                     */
                    void SetScene(const int64_t& _scene);

                    /**
                     * 判断参数 Scene 是否已赋值
                     * @return Scene 是否已赋值
                     * 
                     */
                    bool SceneHasBeenSet() const;

                private:

                    /**
                     * Name of the product to be queried, such as cvm. for specific value, query the DescribeProducts api.
                     */
                    std::string m_product;
                    bool m_productHasBeenSet;

                    /**
                     * Not passed or 0 means no query [optional business allowlist], 1 means query [optional business allowlist]. if this parameter is set to 1, the allowlist will only be queried when no business allowlist is found.
                     */
                    int64_t m_scene;
                    bool m_sceneHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_REGION_V20220627_MODEL_DESCRIBEREGIONSREQUEST_H_
