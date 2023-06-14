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

#ifndef TENCENTCLOUD_ORGANIZATION_V20210331_MODEL_DESCRIBEORGANIZATIONREQUEST_H_
#define TENCENTCLOUD_ORGANIZATION_V20210331_MODEL_DESCRIBEORGANIZATIONREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Organization
    {
        namespace V20210331
        {
            namespace Model
            {
                /**
                * DescribeOrganization request structure.
                */
                class DescribeOrganizationRequest : public AbstractModel
                {
                public:
                    DescribeOrganizationRequest();
                    ~DescribeOrganizationRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Valid values: `en` (Tencent Cloud International); `zh` (Tencent Cloud).
                     * @return Lang Valid values: `en` (Tencent Cloud International); `zh` (Tencent Cloud).
                     * 
                     */
                    std::string GetLang() const;

                    /**
                     * 设置Valid values: `en` (Tencent Cloud International); `zh` (Tencent Cloud).
                     * @param _lang Valid values: `en` (Tencent Cloud International); `zh` (Tencent Cloud).
                     * 
                     */
                    void SetLang(const std::string& _lang);

                    /**
                     * 判断参数 Lang 是否已赋值
                     * @return Lang 是否已赋值
                     * 
                     */
                    bool LangHasBeenSet() const;

                    /**
                     * 获取Abbreviation of the trusted service, which is required during querying the trusted service admin.
                     * @return Product Abbreviation of the trusted service, which is required during querying the trusted service admin.
                     * 
                     */
                    std::string GetProduct() const;

                    /**
                     * 设置Abbreviation of the trusted service, which is required during querying the trusted service admin.
                     * @param _product Abbreviation of the trusted service, which is required during querying the trusted service admin.
                     * 
                     */
                    void SetProduct(const std::string& _product);

                    /**
                     * 判断参数 Product 是否已赋值
                     * @return Product 是否已赋值
                     * 
                     */
                    bool ProductHasBeenSet() const;

                private:

                    /**
                     * Valid values: `en` (Tencent Cloud International); `zh` (Tencent Cloud).
                     */
                    std::string m_lang;
                    bool m_langHasBeenSet;

                    /**
                     * Abbreviation of the trusted service, which is required during querying the trusted service admin.
                     */
                    std::string m_product;
                    bool m_productHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ORGANIZATION_V20210331_MODEL_DESCRIBEORGANIZATIONREQUEST_H_
