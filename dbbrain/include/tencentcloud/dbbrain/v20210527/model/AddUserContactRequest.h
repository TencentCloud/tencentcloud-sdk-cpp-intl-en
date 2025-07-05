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

#ifndef TENCENTCLOUD_DBBRAIN_V20210527_MODEL_ADDUSERCONTACTREQUEST_H_
#define TENCENTCLOUD_DBBRAIN_V20210527_MODEL_ADDUSERCONTACTREQUEST_H_

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
                * AddUserContact request structure.
                */
                class AddUserContactRequest : public AbstractModel
                {
                public:
                    AddUserContactRequest();
                    ~AddUserContactRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Recipient name, which can contain up to 20 letters, digits, spaces, and symbols `!@#$%^&*()_+-=()` and cannot begin with an underscore.
                     * @return Name Recipient name, which can contain up to 20 letters, digits, spaces, and symbols `!@#$%^&*()_+-=()` and cannot begin with an underscore.
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置Recipient name, which can contain up to 20 letters, digits, spaces, and symbols `!@#$%^&*()_+-=()` and cannot begin with an underscore.
                     * @param _name Recipient name, which can contain up to 20 letters, digits, spaces, and symbols `!@#$%^&*()_+-=()` and cannot begin with an underscore.
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取Email address, which can contain letters, digits, underscores, and the @ symbol, cannot begin with an underscore, and must be unique.
                     * @return ContactInfo Email address, which can contain letters, digits, underscores, and the @ symbol, cannot begin with an underscore, and must be unique.
                     * 
                     */
                    std::string GetContactInfo() const;

                    /**
                     * 设置Email address, which can contain letters, digits, underscores, and the @ symbol, cannot begin with an underscore, and must be unique.
                     * @param _contactInfo Email address, which can contain letters, digits, underscores, and the @ symbol, cannot begin with an underscore, and must be unique.
                     * 
                     */
                    void SetContactInfo(const std::string& _contactInfo);

                    /**
                     * 判断参数 ContactInfo 是否已赋值
                     * @return ContactInfo 是否已赋值
                     * 
                     */
                    bool ContactInfoHasBeenSet() const;

                    /**
                     * 获取Service type, which is fixed to `mysql`.
                     * @return Product Service type, which is fixed to `mysql`.
                     * 
                     */
                    std::string GetProduct() const;

                    /**
                     * 设置Service type, which is fixed to `mysql`.
                     * @param _product Service type, which is fixed to `mysql`.
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
                     * Recipient name, which can contain up to 20 letters, digits, spaces, and symbols `!@#$%^&*()_+-=()` and cannot begin with an underscore.
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Email address, which can contain letters, digits, underscores, and the @ symbol, cannot begin with an underscore, and must be unique.
                     */
                    std::string m_contactInfo;
                    bool m_contactInfoHasBeenSet;

                    /**
                     * Service type, which is fixed to `mysql`.
                     */
                    std::string m_product;
                    bool m_productHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DBBRAIN_V20210527_MODEL_ADDUSERCONTACTREQUEST_H_
