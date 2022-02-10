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

#ifndef TENCENTCLOUD_TCR_V20190924_MODEL_CREATEINSTANCETOKENREQUEST_H_
#define TENCENTCLOUD_TCR_V20190924_MODEL_CREATEINSTANCETOKENREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tcr
    {
        namespace V20190924
        {
            namespace Model
            {
                /**
                * CreateInstanceToken request structure.
                */
                class CreateInstanceTokenRequest : public AbstractModel
                {
                public:
                    CreateInstanceTokenRequest();
                    ~CreateInstanceTokenRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Instance ID
                     * @return RegistryId Instance ID
                     */
                    std::string GetRegistryId() const;

                    /**
                     * 设置Instance ID
                     * @param RegistryId Instance ID
                     */
                    void SetRegistryId(const std::string& _registryId);

                    /**
                     * 判断参数 RegistryId 是否已赋值
                     * @return RegistryId 是否已赋值
                     */
                    bool RegistryIdHasBeenSet() const;

                    /**
                     * 获取Access credential type. Values: `longterm` and `temp` (default, valid for one hour)
                     * @return TokenType Access credential type. Values: `longterm` and `temp` (default, valid for one hour)
                     */
                    std::string GetTokenType() const;

                    /**
                     * 设置Access credential type. Values: `longterm` and `temp` (default, valid for one hour)
                     * @param TokenType Access credential type. Values: `longterm` and `temp` (default, valid for one hour)
                     */
                    void SetTokenType(const std::string& _tokenType);

                    /**
                     * 判断参数 TokenType 是否已赋值
                     * @return TokenType 是否已赋值
                     */
                    bool TokenTypeHasBeenSet() const;

                    /**
                     * 获取Description of the long-term access credential
                     * @return Desc Description of the long-term access credential
                     */
                    std::string GetDesc() const;

                    /**
                     * 设置Description of the long-term access credential
                     * @param Desc Description of the long-term access credential
                     */
                    void SetDesc(const std::string& _desc);

                    /**
                     * 判断参数 Desc 是否已赋值
                     * @return Desc 是否已赋值
                     */
                    bool DescHasBeenSet() const;

                private:

                    /**
                     * Instance ID
                     */
                    std::string m_registryId;
                    bool m_registryIdHasBeenSet;

                    /**
                     * Access credential type. Values: `longterm` and `temp` (default, valid for one hour)
                     */
                    std::string m_tokenType;
                    bool m_tokenTypeHasBeenSet;

                    /**
                     * Description of the long-term access credential
                     */
                    std::string m_desc;
                    bool m_descHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCR_V20190924_MODEL_CREATEINSTANCETOKENREQUEST_H_
