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

#ifndef TENCENTCLOUD_APIGATEWAY_V20180808_MODEL_UPDATEAPIKEYREQUEST_H_
#define TENCENTCLOUD_APIGATEWAY_V20180808_MODEL_UPDATEAPIKEYREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Apigateway
    {
        namespace V20180808
        {
            namespace Model
            {
                /**
                * UpdateApiKey request structure.
                */
                class UpdateApiKeyRequest : public AbstractModel
                {
                public:
                    UpdateApiKeyRequest();
                    ~UpdateApiKeyRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取ID of the key to be changed.
                     * @return AccessKeyId ID of the key to be changed.
                     * 
                     */
                    std::string GetAccessKeyId() const;

                    /**
                     * 设置ID of the key to be changed.
                     * @param _accessKeyId ID of the key to be changed.
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
                     * 获取Key to be updated, which is required when a custom key is updated. It can contain 10-50 letters, digits, and underscores.
                     * @return AccessKeySecret Key to be updated, which is required when a custom key is updated. It can contain 10-50 letters, digits, and underscores.
                     * 
                     */
                    std::string GetAccessKeySecret() const;

                    /**
                     * 设置Key to be updated, which is required when a custom key is updated. It can contain 10-50 letters, digits, and underscores.
                     * @param _accessKeySecret Key to be updated, which is required when a custom key is updated. It can contain 10-50 letters, digits, and underscores.
                     * 
                     */
                    void SetAccessKeySecret(const std::string& _accessKeySecret);

                    /**
                     * 判断参数 AccessKeySecret 是否已赋值
                     * @return AccessKeySecret 是否已赋值
                     * 
                     */
                    bool AccessKeySecretHasBeenSet() const;

                private:

                    /**
                     * ID of the key to be changed.
                     */
                    std::string m_accessKeyId;
                    bool m_accessKeyIdHasBeenSet;

                    /**
                     * Key to be updated, which is required when a custom key is updated. It can contain 10-50 letters, digits, and underscores.
                     */
                    std::string m_accessKeySecret;
                    bool m_accessKeySecretHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_APIGATEWAY_V20180808_MODEL_UPDATEAPIKEYREQUEST_H_
