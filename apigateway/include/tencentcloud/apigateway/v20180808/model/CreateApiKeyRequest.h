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

#ifndef TENCENTCLOUD_APIGATEWAY_V20180808_MODEL_CREATEAPIKEYREQUEST_H_
#define TENCENTCLOUD_APIGATEWAY_V20180808_MODEL_CREATEAPIKEYREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/apigateway/v20180808/model/Tag.h>


namespace TencentCloud
{
    namespace Apigateway
    {
        namespace V20180808
        {
            namespace Model
            {
                /**
                * CreateApiKey request structure.
                */
                class CreateApiKeyRequest : public AbstractModel
                {
                public:
                    CreateApiKeyRequest();
                    ~CreateApiKeyRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Custom key name.
                     * @return SecretName Custom key name.
                     * 
                     */
                    std::string GetSecretName() const;

                    /**
                     * 设置Custom key name.
                     * @param _secretName Custom key name.
                     * 
                     */
                    void SetSecretName(const std::string& _secretName);

                    /**
                     * 判断参数 SecretName 是否已赋值
                     * @return SecretName 是否已赋值
                     * 
                     */
                    bool SecretNameHasBeenSet() const;

                    /**
                     * 获取Key type. Valid values: auto, manual (custom key). Default value: auto.
                     * @return AccessKeyType Key type. Valid values: auto, manual (custom key). Default value: auto.
                     * 
                     */
                    std::string GetAccessKeyType() const;

                    /**
                     * 设置Key type. Valid values: auto, manual (custom key). Default value: auto.
                     * @param _accessKeyType Key type. Valid values: auto, manual (custom key). Default value: auto.
                     * 
                     */
                    void SetAccessKeyType(const std::string& _accessKeyType);

                    /**
                     * 判断参数 AccessKeyType 是否已赋值
                     * @return AccessKeyType 是否已赋值
                     * 
                     */
                    bool AccessKeyTypeHasBeenSet() const;

                    /**
                     * 获取Custom key ID, which is required if `AccessKeyType` is `manual`. It can contain 5-50 letters, digits, and underscores.
                     * @return AccessKeyId Custom key ID, which is required if `AccessKeyType` is `manual`. It can contain 5-50 letters, digits, and underscores.
                     * 
                     */
                    std::string GetAccessKeyId() const;

                    /**
                     * 设置Custom key ID, which is required if `AccessKeyType` is `manual`. It can contain 5-50 letters, digits, and underscores.
                     * @param _accessKeyId Custom key ID, which is required if `AccessKeyType` is `manual`. It can contain 5-50 letters, digits, and underscores.
                     * 
                     */
                    void SetAccessKeyId(const std::string& _accessKeyId);

                    /**
                     * 判断参数 AccessKeyId 是否已赋值
                     * @return AccessKeyId 是否已赋值
                     * 
                     */
                    bool AccessKeyIdHasBeenSet() const;

                    /**
                     * 获取Custom key, which is required if `AccessKeyType` is `manual`. It can contain 10-50 letters, digits, and underscores.
                     * @return AccessKeySecret Custom key, which is required if `AccessKeyType` is `manual`. It can contain 10-50 letters, digits, and underscores.
                     * 
                     */
                    std::string GetAccessKeySecret() const;

                    /**
                     * 设置Custom key, which is required if `AccessKeyType` is `manual`. It can contain 10-50 letters, digits, and underscores.
                     * @param _accessKeySecret Custom key, which is required if `AccessKeyType` is `manual`. It can contain 10-50 letters, digits, and underscores.
                     * 
                     */
                    void SetAccessKeySecret(const std::string& _accessKeySecret);

                    /**
                     * 判断参数 AccessKeySecret 是否已赋值
                     * @return AccessKeySecret 是否已赋值
                     * 
                     */
                    bool AccessKeySecretHasBeenSet() const;

                    /**
                     * 获取
                     * @return Tags 
                     * 
                     */
                    std::vector<Tag> GetTags() const;

                    /**
                     * 设置
                     * @param _tags 
                     * 
                     */
                    void SetTags(const std::vector<Tag>& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     * 
                     */
                    bool TagsHasBeenSet() const;

                private:

                    /**
                     * Custom key name.
                     */
                    std::string m_secretName;
                    bool m_secretNameHasBeenSet;

                    /**
                     * Key type. Valid values: auto, manual (custom key). Default value: auto.
                     */
                    std::string m_accessKeyType;
                    bool m_accessKeyTypeHasBeenSet;

                    /**
                     * Custom key ID, which is required if `AccessKeyType` is `manual`. It can contain 5-50 letters, digits, and underscores.
                     */
                    std::string m_accessKeyId;
                    bool m_accessKeyIdHasBeenSet;

                    /**
                     * Custom key, which is required if `AccessKeyType` is `manual`. It can contain 10-50 letters, digits, and underscores.
                     */
                    std::string m_accessKeySecret;
                    bool m_accessKeySecretHasBeenSet;

                    /**
                     * 
                     */
                    std::vector<Tag> m_tags;
                    bool m_tagsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_APIGATEWAY_V20180808_MODEL_CREATEAPIKEYREQUEST_H_
