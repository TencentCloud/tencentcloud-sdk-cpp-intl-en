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

#ifndef TENCENTCLOUD_ADP_V20260520_MODEL_APPWEBSEARCHCONFIG_H_
#define TENCENTCLOUD_ADP_V20260520_MODEL_APPWEBSEARCHCONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Adp
    {
        namespace V20260520
        {
            namespace Model
            {
                /**
                * Online search configuration (for international edition)
                */
                class AppWebSearchConfig : public AbstractModel
                {
                public:
                    AppWebSearchConfig();
                    ~AppWebSearchConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取API key
                     * @return ApiKey API key
                     * 
                     */
                    std::string GetApiKey() const;

                    /**
                     * 设置API key
                     * @param _apiKey API key
                     * 
                     */
                    void SetApiKey(const std::string& _apiKey);

                    /**
                     * 判断参数 ApiKey 是否已赋值
                     * @return ApiKey 是否已赋值
                     * 
                     */
                    bool ApiKeyHasBeenSet() const;

                    /**
                     * 获取Whether enabled
                     * @return Enabled Whether enabled
                     * 
                     */
                    bool GetEnabled() const;

                    /**
                     * 设置Whether enabled
                     * @param _enabled Whether enabled
                     * 
                     */
                    void SetEnabled(const bool& _enabled);

                    /**
                     * 判断参数 Enabled 是否已赋值
                     * @return Enabled 是否已赋值
                     * 
                     */
                    bool EnabledHasBeenSet() const;

                    /**
                     * 获取Service provider
                     * @return Provider Service provider
                     * 
                     */
                    std::string GetProvider() const;

                    /**
                     * 设置Service provider
                     * @param _provider Service provider
                     * 
                     */
                    void SetProvider(const std::string& _provider);

                    /**
                     * 判断参数 Provider 是否已赋值
                     * @return Provider 是否已赋值
                     * 
                     */
                    bool ProviderHasBeenSet() const;

                    /**
                     * 获取Number of returned results.
                     * @return TopN Number of returned results.
                     * 
                     */
                    uint64_t GetTopN() const;

                    /**
                     * 设置Number of returned results.
                     * @param _topN Number of returned results.
                     * 
                     */
                    void SetTopN(const uint64_t& _topN);

                    /**
                     * 判断参数 TopN 是否已赋值
                     * @return TopN 是否已赋值
                     * 
                     */
                    bool TopNHasBeenSet() const;

                private:

                    /**
                     * API key
                     */
                    std::string m_apiKey;
                    bool m_apiKeyHasBeenSet;

                    /**
                     * Whether enabled
                     */
                    bool m_enabled;
                    bool m_enabledHasBeenSet;

                    /**
                     * Service provider
                     */
                    std::string m_provider;
                    bool m_providerHasBeenSet;

                    /**
                     * Number of returned results.
                     */
                    uint64_t m_topN;
                    bool m_topNHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ADP_V20260520_MODEL_APPWEBSEARCHCONFIG_H_
