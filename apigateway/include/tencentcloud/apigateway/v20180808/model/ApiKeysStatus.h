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

#ifndef TENCENTCLOUD_APIGATEWAY_V20180808_MODEL_APIKEYSSTATUS_H_
#define TENCENTCLOUD_APIGATEWAY_V20180808_MODEL_APIKEYSSTATUS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/apigateway/v20180808/model/ApiKey.h>


namespace TencentCloud
{
    namespace Apigateway
    {
        namespace V20180808
        {
            namespace Model
            {
                /**
                * Key list
                */
                class ApiKeysStatus : public AbstractModel
                {
                public:
                    ApiKeysStatus();
                    ~ApiKeysStatus() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Number of eligible API keys.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return TotalCount Number of eligible API keys.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetTotalCount() const;

                    /**
                     * 设置Number of eligible API keys.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _totalCount Number of eligible API keys.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetTotalCount(const int64_t& _totalCount);

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     * 
                     */
                    bool TotalCountHasBeenSet() const;

                    /**
                     * 获取API key list.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return ApiKeySet API key list.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<ApiKey> GetApiKeySet() const;

                    /**
                     * 设置API key list.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _apiKeySet API key list.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetApiKeySet(const std::vector<ApiKey>& _apiKeySet);

                    /**
                     * 判断参数 ApiKeySet 是否已赋值
                     * @return ApiKeySet 是否已赋值
                     * 
                     */
                    bool ApiKeySetHasBeenSet() const;

                private:

                    /**
                     * Number of eligible API keys.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * API key list.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<ApiKey> m_apiKeySet;
                    bool m_apiKeySetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_APIGATEWAY_V20180808_MODEL_APIKEYSSTATUS_H_
