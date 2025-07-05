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

#ifndef TENCENTCLOUD_TCMPP_V20240801_MODEL_CREATESENSITIVEAPIREQ_H_
#define TENCENTCLOUD_TCMPP_V20240801_MODEL_CREATESENSITIVEAPIREQ_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tcmpp
    {
        namespace V20240801
        {
            namespace Model
            {
                /**
                * New sensitive APIs
                */
                class CreateSensitiveAPIReq : public AbstractModel
                {
                public:
                    CreateSensitiveAPIReq();
                    ~CreateSensitiveAPIReq() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取API name
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ApiName API name
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetApiName() const;

                    /**
                     * 设置API name
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _apiName API name
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetApiName(const std::string& _apiName);

                    /**
                     * 判断参数 ApiName 是否已赋值
                     * @return ApiName 是否已赋值
                     * 
                     */
                    bool ApiNameHasBeenSet() const;

                    /**
                     * 获取API description
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ApiDesc API description
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetApiDesc() const;

                    /**
                     * 设置API description
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _apiDesc API description
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetApiDesc(const std::string& _apiDesc);

                    /**
                     * 判断参数 ApiDesc 是否已赋值
                     * @return ApiDesc 是否已赋值
                     * 
                     */
                    bool ApiDescHasBeenSet() const;

                    /**
                     * 获取API type 1-System API 2-Custom API
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ApiType API type 1-System API 2-Custom API
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetApiType() const;

                    /**
                     * 设置API type 1-System API 2-Custom API
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _apiType API type 1-System API 2-Custom API
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetApiType(const int64_t& _apiType);

                    /**
                     * 判断参数 ApiType 是否已赋值
                     * @return ApiType 是否已赋值
                     * 
                     */
                    bool ApiTypeHasBeenSet() const;

                private:

                    /**
                     * API name
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_apiName;
                    bool m_apiNameHasBeenSet;

                    /**
                     * API description
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_apiDesc;
                    bool m_apiDescHasBeenSet;

                    /**
                     * API type 1-System API 2-Custom API
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_apiType;
                    bool m_apiTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCMPP_V20240801_MODEL_CREATESENSITIVEAPIREQ_H_
