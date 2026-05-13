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

#ifndef TENCENTCLOUD_CCC_V20200210_MODEL_HTTPCALLBACKCONFIG_H_
#define TENCENTCLOUD_CCC_V20200210_MODEL_HTTPCALLBACKCONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ccc/v20200210/model/HeaderParams.h>
#include <tencentcloud/ccc/v20200210/model/HttpParams.h>
#include <tencentcloud/ccc/v20200210/model/ReturnKey.h>
#include <tencentcloud/ccc/v20200210/model/BasicAuth.h>
#include <tencentcloud/ccc/v20200210/model/BearerAuth.h>
#include <tencentcloud/ccc/v20200210/model/OauthConfig.h>


namespace TencentCloud
{
    namespace Ccc
    {
        namespace V20200210
        {
            namespace Model
            {
                /**
                * 
                */
                class HttpCallbackConfig : public AbstractModel
                {
                public:
                    HttpCallbackConfig();
                    ~HttpCallbackConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取
                     * @return Url 
                     * 
                     */
                    std::string GetUrl() const;

                    /**
                     * 设置
                     * @param _url 
                     * 
                     */
                    void SetUrl(const std::string& _url);

                    /**
                     * 判断参数 Url 是否已赋值
                     * @return Url 是否已赋值
                     * 
                     */
                    bool UrlHasBeenSet() const;

                    /**
                     * 获取
                     * @return HeaderParams 
                     * 
                     */
                    std::vector<HeaderParams> GetHeaderParams() const;

                    /**
                     * 设置
                     * @param _headerParams 
                     * 
                     */
                    void SetHeaderParams(const std::vector<HeaderParams>& _headerParams);

                    /**
                     * 判断参数 HeaderParams 是否已赋值
                     * @return HeaderParams 是否已赋值
                     * 
                     */
                    bool HeaderParamsHasBeenSet() const;

                    /**
                     * 获取
                     * @return Params 
                     * 
                     */
                    std::vector<HttpParams> GetParams() const;

                    /**
                     * 设置
                     * @param _params 
                     * 
                     */
                    void SetParams(const std::vector<HttpParams>& _params);

                    /**
                     * 判断参数 Params 是否已赋值
                     * @return Params 是否已赋值
                     * 
                     */
                    bool ParamsHasBeenSet() const;

                    /**
                     * 获取
                     * @return Returns 
                     * 
                     */
                    std::vector<ReturnKey> GetReturns() const;

                    /**
                     * 设置
                     * @param _returns 
                     * 
                     */
                    void SetReturns(const std::vector<ReturnKey>& _returns);

                    /**
                     * 判断参数 Returns 是否已赋值
                     * @return Returns 是否已赋值
                     * 
                     */
                    bool ReturnsHasBeenSet() const;

                    /**
                     * 获取
                     * @return Async 
                     * 
                     */
                    bool GetAsync() const;

                    /**
                     * 设置
                     * @param _async 
                     * 
                     */
                    void SetAsync(const bool& _async);

                    /**
                     * 判断参数 Async 是否已赋值
                     * @return Async 是否已赋值
                     * 
                     */
                    bool AsyncHasBeenSet() const;

                    /**
                     * 获取
                     * @return AuthType 
                     * 
                     */
                    uint64_t GetAuthType() const;

                    /**
                     * 设置
                     * @param _authType 
                     * 
                     */
                    void SetAuthType(const uint64_t& _authType);

                    /**
                     * 判断参数 AuthType 是否已赋值
                     * @return AuthType 是否已赋值
                     * 
                     */
                    bool AuthTypeHasBeenSet() const;

                    /**
                     * 获取
                     * @return BasicAuth 
                     * 
                     */
                    BasicAuth GetBasicAuth() const;

                    /**
                     * 设置
                     * @param _basicAuth 
                     * 
                     */
                    void SetBasicAuth(const BasicAuth& _basicAuth);

                    /**
                     * 判断参数 BasicAuth 是否已赋值
                     * @return BasicAuth 是否已赋值
                     * 
                     */
                    bool BasicAuthHasBeenSet() const;

                    /**
                     * 获取
                     * @return BearerAuth 
                     * 
                     */
                    BearerAuth GetBearerAuth() const;

                    /**
                     * 设置
                     * @param _bearerAuth 
                     * 
                     */
                    void SetBearerAuth(const BearerAuth& _bearerAuth);

                    /**
                     * 判断参数 BearerAuth 是否已赋值
                     * @return BearerAuth 是否已赋值
                     * 
                     */
                    bool BearerAuthHasBeenSet() const;

                    /**
                     * 获取
                     * @return CustomAuth 
                     * 
                     */
                    HttpParams GetCustomAuth() const;

                    /**
                     * 设置
                     * @param _customAuth 
                     * 
                     */
                    void SetCustomAuth(const HttpParams& _customAuth);

                    /**
                     * 判断参数 CustomAuth 是否已赋值
                     * @return CustomAuth 是否已赋值
                     * 
                     */
                    bool CustomAuthHasBeenSet() const;

                    /**
                     * 获取
                     * @return Oauth2Auth 
                     * 
                     */
                    OauthConfig GetOauth2Auth() const;

                    /**
                     * 设置
                     * @param _oauth2Auth 
                     * 
                     */
                    void SetOauth2Auth(const OauthConfig& _oauth2Auth);

                    /**
                     * 判断参数 Oauth2Auth 是否已赋值
                     * @return Oauth2Auth 是否已赋值
                     * 
                     */
                    bool Oauth2AuthHasBeenSet() const;

                private:

                    /**
                     * 
                     */
                    std::string m_url;
                    bool m_urlHasBeenSet;

                    /**
                     * 
                     */
                    std::vector<HeaderParams> m_headerParams;
                    bool m_headerParamsHasBeenSet;

                    /**
                     * 
                     */
                    std::vector<HttpParams> m_params;
                    bool m_paramsHasBeenSet;

                    /**
                     * 
                     */
                    std::vector<ReturnKey> m_returns;
                    bool m_returnsHasBeenSet;

                    /**
                     * 
                     */
                    bool m_async;
                    bool m_asyncHasBeenSet;

                    /**
                     * 
                     */
                    uint64_t m_authType;
                    bool m_authTypeHasBeenSet;

                    /**
                     * 
                     */
                    BasicAuth m_basicAuth;
                    bool m_basicAuthHasBeenSet;

                    /**
                     * 
                     */
                    BearerAuth m_bearerAuth;
                    bool m_bearerAuthHasBeenSet;

                    /**
                     * 
                     */
                    HttpParams m_customAuth;
                    bool m_customAuthHasBeenSet;

                    /**
                     * 
                     */
                    OauthConfig m_oauth2Auth;
                    bool m_oauth2AuthHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CCC_V20200210_MODEL_HTTPCALLBACKCONFIG_H_
