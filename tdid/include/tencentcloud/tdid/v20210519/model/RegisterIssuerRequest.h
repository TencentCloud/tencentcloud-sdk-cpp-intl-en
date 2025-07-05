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

#ifndef TENCENTCLOUD_TDID_V20210519_MODEL_REGISTERISSUERREQUEST_H_
#define TENCENTCLOUD_TDID_V20210519_MODEL_REGISTERISSUERREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tdid
    {
        namespace V20210519
        {
            namespace Model
            {
                /**
                * RegisterIssuer request structure.
                */
                class RegisterIssuerRequest : public AbstractModel
                {
                public:
                    RegisterIssuerRequest();
                    ~RegisterIssuerRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取The DID.
                     * @return Did The DID.
                     * 
                     */
                    std::string GetDid() const;

                    /**
                     * 设置The DID.
                     * @param _did The DID.
                     * 
                     */
                    void SetDid(const std::string& _did);

                    /**
                     * 判断参数 Did 是否已赋值
                     * @return Did 是否已赋值
                     * 
                     */
                    bool DidHasBeenSet() const;

                    /**
                     * 获取The issuing authority name.
                     * @return Name The issuing authority name.
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置The issuing authority name.
                     * @param _name The issuing authority name.
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
                     * 获取Remarks
                     * @return Description Remarks
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置Remarks
                     * @param _description Remarks
                     * 
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                private:

                    /**
                     * The DID.
                     */
                    std::string m_did;
                    bool m_didHasBeenSet;

                    /**
                     * The issuing authority name.
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Remarks
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TDID_V20210519_MODEL_REGISTERISSUERREQUEST_H_
