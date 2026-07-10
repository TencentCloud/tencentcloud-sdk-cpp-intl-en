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

#ifndef TENCENTCLOUD_TOKENHUB_V20260322_MODEL_DESCRIBEAPIKEYREQUEST_H_
#define TENCENTCLOUD_TOKENHUB_V20260322_MODEL_DESCRIBEAPIKEYREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tokenhub
    {
        namespace V20260322
        {
            namespace Model
            {
                /**
                * DescribeApiKey request structure.
                */
                class DescribeApiKeyRequest : public AbstractModel
                {
                public:
                    DescribeApiKeyRequest();
                    ~DescribeApiKeyRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Platform type. Currently supported values: maas.
                     * @return Platform Platform type. Currently supported values: maas.
                     * 
                     */
                    std::string GetPlatform() const;

                    /**
                     * 设置Platform type. Currently supported values: maas.
                     * @param _platform Platform type. Currently supported values: maas.
                     * 
                     */
                    void SetPlatform(const std::string& _platform);

                    /**
                     * 判断参数 Platform 是否已赋值
                     * @return Platform 是否已赋值
                     * 
                     */
                    bool PlatformHasBeenSet() const;

                    /**
                     * 获取API Key ID. At least one of this or ApiKey is required. Prioritize ApiKeyId.
                     * @return ApiKeyId API Key ID. At least one of this or ApiKey is required. Prioritize ApiKeyId.
                     * 
                     */
                    std::string GetApiKeyId() const;

                    /**
                     * 设置API Key ID. At least one of this or ApiKey is required. Prioritize ApiKeyId.
                     * @param _apiKeyId API Key ID. At least one of this or ApiKey is required. Prioritize ApiKeyId.
                     * 
                     */
                    void SetApiKeyId(const std::string& _apiKeyId);

                    /**
                     * 判断参数 ApiKeyId 是否已赋值
                     * @return ApiKeyId 是否已赋值
                     * 
                     */
                    bool ApiKeyIdHasBeenSet() const;

                    /**
                     * 获取API key plaintext. At least one of it and ApiKeyId must be imported.
                     * @return ApiKey API key plaintext. At least one of it and ApiKeyId must be imported.
                     * 
                     */
                    std::string GetApiKey() const;

                    /**
                     * 设置API key plaintext. At least one of it and ApiKeyId must be imported.
                     * @param _apiKey API key plaintext. At least one of it and ApiKeyId must be imported.
                     * 
                     */
                    void SetApiKey(const std::string& _apiKey);

                    /**
                     * 判断参数 ApiKey 是否已赋值
                     * @return ApiKey 是否已赋值
                     * 
                     */
                    bool ApiKeyHasBeenSet() const;

                private:

                    /**
                     * Platform type. Currently supported values: maas.
                     */
                    std::string m_platform;
                    bool m_platformHasBeenSet;

                    /**
                     * API Key ID. At least one of this or ApiKey is required. Prioritize ApiKeyId.
                     */
                    std::string m_apiKeyId;
                    bool m_apiKeyIdHasBeenSet;

                    /**
                     * API key plaintext. At least one of it and ApiKeyId must be imported.
                     */
                    std::string m_apiKey;
                    bool m_apiKeyHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TOKENHUB_V20260322_MODEL_DESCRIBEAPIKEYREQUEST_H_
