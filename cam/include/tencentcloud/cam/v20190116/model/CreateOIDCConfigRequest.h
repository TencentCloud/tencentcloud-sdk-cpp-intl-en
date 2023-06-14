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

#ifndef TENCENTCLOUD_CAM_V20190116_MODEL_CREATEOIDCCONFIGREQUEST_H_
#define TENCENTCLOUD_CAM_V20190116_MODEL_CREATEOIDCCONFIGREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cam
    {
        namespace V20190116
        {
            namespace Model
            {
                /**
                * CreateOIDCConfig request structure.
                */
                class CreateOIDCConfigRequest : public AbstractModel
                {
                public:
                    CreateOIDCConfigRequest();
                    ~CreateOIDCConfigRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取IdP URL.
                     * @return IdentityUrl IdP URL.
                     * 
                     */
                    std::string GetIdentityUrl() const;

                    /**
                     * 设置IdP URL.
                     * @param _identityUrl IdP URL.
                     * 
                     */
                    void SetIdentityUrl(const std::string& _identityUrl);

                    /**
                     * 判断参数 IdentityUrl 是否已赋值
                     * @return IdentityUrl 是否已赋值
                     * 
                     */
                    bool IdentityUrlHasBeenSet() const;

                    /**
                     * 获取Public key for signature, which must be Base64-encoded.
                     * @return IdentityKey Public key for signature, which must be Base64-encoded.
                     * 
                     */
                    std::string GetIdentityKey() const;

                    /**
                     * 设置Public key for signature, which must be Base64-encoded.
                     * @param _identityKey Public key for signature, which must be Base64-encoded.
                     * 
                     */
                    void SetIdentityKey(const std::string& _identityKey);

                    /**
                     * 判断参数 IdentityKey 是否已赋值
                     * @return IdentityKey 是否已赋值
                     * 
                     */
                    bool IdentityKeyHasBeenSet() const;

                    /**
                     * 获取Client ID.
                     * @return ClientId Client ID.
                     * 
                     */
                    std::vector<std::string> GetClientId() const;

                    /**
                     * 设置Client ID.
                     * @param _clientId Client ID.
                     * 
                     */
                    void SetClientId(const std::vector<std::string>& _clientId);

                    /**
                     * 判断参数 ClientId 是否已赋值
                     * @return ClientId 是否已赋值
                     * 
                     */
                    bool ClientIdHasBeenSet() const;

                    /**
                     * 获取Name.
                     * @return Name Name.
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置Name.
                     * @param _name Name.
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
                     * 获取Description.
                     * @return Description Description.
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置Description.
                     * @param _description Description.
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
                     * IdP URL.
                     */
                    std::string m_identityUrl;
                    bool m_identityUrlHasBeenSet;

                    /**
                     * Public key for signature, which must be Base64-encoded.
                     */
                    std::string m_identityKey;
                    bool m_identityKeyHasBeenSet;

                    /**
                     * Client ID.
                     */
                    std::vector<std::string> m_clientId;
                    bool m_clientIdHasBeenSet;

                    /**
                     * Name.
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Description.
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CAM_V20190116_MODEL_CREATEOIDCCONFIGREQUEST_H_
