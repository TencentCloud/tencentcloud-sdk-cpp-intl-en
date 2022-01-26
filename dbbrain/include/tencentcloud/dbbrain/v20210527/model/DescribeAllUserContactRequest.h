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

#ifndef TENCENTCLOUD_DBBRAIN_V20210527_MODEL_DESCRIBEALLUSERCONTACTREQUEST_H_
#define TENCENTCLOUD_DBBRAIN_V20210527_MODEL_DESCRIBEALLUSERCONTACTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dbbrain
    {
        namespace V20210527
        {
            namespace Model
            {
                /**
                * DescribeAllUserContact request structure.
                */
                class DescribeAllUserContactRequest : public AbstractModel
                {
                public:
                    DescribeAllUserContactRequest();
                    ~DescribeAllUserContactRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Service type, which is fixed to `mysql`.
                     * @return Product Service type, which is fixed to `mysql`.
                     */
                    std::string GetProduct() const;

                    /**
                     * 设置Service type, which is fixed to `mysql`.
                     * @param Product Service type, which is fixed to `mysql`.
                     */
                    void SetProduct(const std::string& _product);

                    /**
                     * 判断参数 Product 是否已赋值
                     * @return Product 是否已赋值
                     */
                    bool ProductHasBeenSet() const;

                    /**
                     * 获取Array of contact names. Fuzzy search is supported.
                     * @return Names Array of contact names. Fuzzy search is supported.
                     */
                    std::vector<std::string> GetNames() const;

                    /**
                     * 设置Array of contact names. Fuzzy search is supported.
                     * @param Names Array of contact names. Fuzzy search is supported.
                     */
                    void SetNames(const std::vector<std::string>& _names);

                    /**
                     * 判断参数 Names 是否已赋值
                     * @return Names 是否已赋值
                     */
                    bool NamesHasBeenSet() const;

                private:

                    /**
                     * Service type, which is fixed to `mysql`.
                     */
                    std::string m_product;
                    bool m_productHasBeenSet;

                    /**
                     * Array of contact names. Fuzzy search is supported.
                     */
                    std::vector<std::string> m_names;
                    bool m_namesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DBBRAIN_V20210527_MODEL_DESCRIBEALLUSERCONTACTREQUEST_H_
