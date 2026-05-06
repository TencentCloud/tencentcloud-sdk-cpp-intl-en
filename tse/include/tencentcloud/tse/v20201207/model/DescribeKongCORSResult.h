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

#ifndef TENCENTCLOUD_TSE_V20201207_MODEL_DESCRIBEKONGCORSRESULT_H_
#define TENCENTCLOUD_TSE_V20201207_MODEL_DESCRIBEKONGCORSRESULT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tse
    {
        namespace V20201207
        {
            namespace Model
            {
                /**
                * Query cross-origin configuration output parameters
                */
                class DescribeKongCORSResult : public AbstractModel
                {
                public:
                    DescribeKongCORSResult();
                    ~DescribeKongCORSResult() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Resource type.
                     * @return SourceType Resource type.
                     * 
                     */
                    std::string GetSourceType() const;

                    /**
                     * 设置Resource type.
                     * @param _sourceType Resource type.
                     * 
                     */
                    void SetSourceType(const std::string& _sourceType);

                    /**
                     * 判断参数 SourceType 是否已赋值
                     * @return SourceType 是否已赋值
                     * 
                     */
                    bool SourceTypeHasBeenSet() const;

                    /**
                     * 获取Resource ID
                     * @return SourceId Resource ID
                     * 
                     */
                    std::string GetSourceId() const;

                    /**
                     * 设置Resource ID
                     * @param _sourceId Resource ID
                     * 
                     */
                    void SetSourceId(const std::string& _sourceId);

                    /**
                     * 判断参数 SourceId 是否已赋值
                     * @return SourceId 是否已赋值
                     * 
                     */
                    bool SourceIdHasBeenSet() const;

                    /**
                     * 获取enabled or not
                     * @return Enabled enabled or not
                     * 
                     */
                    bool GetEnabled() const;

                    /**
                     * 设置enabled or not
                     * @param _enabled enabled or not
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
                     * 获取Cross-origin Origins
                     * @return Origins Cross-origin Origins
                     * 
                     */
                    std::vector<std::string> GetOrigins() const;

                    /**
                     * 设置Cross-origin Origins
                     * @param _origins Cross-origin Origins
                     * 
                     */
                    void SetOrigins(const std::vector<std::string>& _origins);

                    /**
                     * 判断参数 Origins 是否已赋值
                     * @return Origins 是否已赋值
                     * 
                     */
                    bool OriginsHasBeenSet() const;

                    /**
                     * 获取Cross-Origin Headers
                     * @return Headers Cross-Origin Headers
                     * 
                     */
                    std::vector<std::string> GetHeaders() const;

                    /**
                     * 设置Cross-Origin Headers
                     * @param _headers Cross-Origin Headers
                     * 
                     */
                    void SetHeaders(const std::vector<std::string>& _headers);

                    /**
                     * 判断参数 Headers 是否已赋值
                     * @return Headers 是否已赋值
                     * 
                     */
                    bool HeadersHasBeenSet() const;

                    /**
                     * 获取Cross-origin Methods
                     * @return Methods Cross-origin Methods
                     * 
                     */
                    std::vector<std::string> GetMethods() const;

                    /**
                     * 设置Cross-origin Methods
                     * @param _methods Cross-origin Methods
                     * 
                     */
                    void SetMethods(const std::vector<std::string>& _methods);

                    /**
                     * 判断参数 Methods 是否已赋值
                     * @return Methods 是否已赋值
                     * 
                     */
                    bool MethodsHasBeenSet() const;

                    /**
                     * 获取Cross-Origin ExposedHeaders
                     * @return ExposedHeaders Cross-Origin ExposedHeaders
                     * 
                     */
                    std::vector<std::string> GetExposedHeaders() const;

                    /**
                     * 设置Cross-Origin ExposedHeaders
                     * @param _exposedHeaders Cross-Origin ExposedHeaders
                     * 
                     */
                    void SetExposedHeaders(const std::vector<std::string>& _exposedHeaders);

                    /**
                     * 判断参数 ExposedHeaders 是否已赋值
                     * @return ExposedHeaders 是否已赋值
                     * 
                     */
                    bool ExposedHeadersHasBeenSet() const;

                    /**
                     * 获取Cache time of cross-origin OPTIONS request
                     * @return MaxAge Cache time of cross-origin OPTIONS request
                     * 
                     */
                    int64_t GetMaxAge() const;

                    /**
                     * 设置Cache time of cross-origin OPTIONS request
                     * @param _maxAge Cache time of cross-origin OPTIONS request
                     * 
                     */
                    void SetMaxAge(const int64_t& _maxAge);

                    /**
                     * 判断参数 MaxAge 是否已赋值
                     * @return MaxAge 是否已赋值
                     * 
                     */
                    bool MaxAgeHasBeenSet() const;

                    /**
                     * 获取Whether cross-origin access requests are allowed to carry identity information
                     * @return Credentials Whether cross-origin access requests are allowed to carry identity information
                     * 
                     */
                    bool GetCredentials() const;

                    /**
                     * 设置Whether cross-origin access requests are allowed to carry identity information
                     * @param _credentials Whether cross-origin access requests are allowed to carry identity information
                     * 
                     */
                    void SetCredentials(const bool& _credentials);

                    /**
                     * 判断参数 Credentials 是否已赋值
                     * @return Credentials 是否已赋值
                     * 
                     */
                    bool CredentialsHasBeenSet() const;

                    /**
                     * 获取Whether to forward cross-origin access requests to the backend
                     * @return PreFlightContinue Whether to forward cross-origin access requests to the backend
                     * 
                     */
                    bool GetPreFlightContinue() const;

                    /**
                     * 设置Whether to forward cross-origin access requests to the backend
                     * @param _preFlightContinue Whether to forward cross-origin access requests to the backend
                     * 
                     */
                    void SetPreFlightContinue(const bool& _preFlightContinue);

                    /**
                     * 判断参数 PreFlightContinue 是否已赋值
                     * @return PreFlightContinue 是否已赋值
                     * 
                     */
                    bool PreFlightContinueHasBeenSet() const;

                private:

                    /**
                     * Resource type.
                     */
                    std::string m_sourceType;
                    bool m_sourceTypeHasBeenSet;

                    /**
                     * Resource ID
                     */
                    std::string m_sourceId;
                    bool m_sourceIdHasBeenSet;

                    /**
                     * enabled or not
                     */
                    bool m_enabled;
                    bool m_enabledHasBeenSet;

                    /**
                     * Cross-origin Origins
                     */
                    std::vector<std::string> m_origins;
                    bool m_originsHasBeenSet;

                    /**
                     * Cross-Origin Headers
                     */
                    std::vector<std::string> m_headers;
                    bool m_headersHasBeenSet;

                    /**
                     * Cross-origin Methods
                     */
                    std::vector<std::string> m_methods;
                    bool m_methodsHasBeenSet;

                    /**
                     * Cross-Origin ExposedHeaders
                     */
                    std::vector<std::string> m_exposedHeaders;
                    bool m_exposedHeadersHasBeenSet;

                    /**
                     * Cache time of cross-origin OPTIONS request
                     */
                    int64_t m_maxAge;
                    bool m_maxAgeHasBeenSet;

                    /**
                     * Whether cross-origin access requests are allowed to carry identity information
                     */
                    bool m_credentials;
                    bool m_credentialsHasBeenSet;

                    /**
                     * Whether to forward cross-origin access requests to the backend
                     */
                    bool m_preFlightContinue;
                    bool m_preFlightContinueHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TSE_V20201207_MODEL_DESCRIBEKONGCORSRESULT_H_
