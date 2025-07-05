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

#ifndef TENCENTCLOUD_APIGATEWAY_V20180808_MODEL_MODIFYAPIINCREMENTREQUEST_H_
#define TENCENTCLOUD_APIGATEWAY_V20180808_MODEL_MODIFYAPIINCREMENTREQUEST_H_

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
                * ModifyApiIncrement request structure.
                */
                class ModifyApiIncrementRequest : public AbstractModel
                {
                public:
                    ModifyApiIncrementRequest();
                    ~ModifyApiIncrementRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Service ID
                     * @return ServiceId Service ID
                     * 
                     */
                    std::string GetServiceId() const;

                    /**
                     * 设置Service ID
                     * @param _serviceId Service ID
                     * 
                     */
                    void SetServiceId(const std::string& _serviceId);

                    /**
                     * 判断参数 ServiceId 是否已赋值
                     * @return ServiceId 是否已赋值
                     * 
                     */
                    bool ServiceIdHasBeenSet() const;

                    /**
                     * 获取API ID
                     * @return ApiId API ID
                     * 
                     */
                    std::string GetApiId() const;

                    /**
                     * 设置API ID
                     * @param _apiId API ID
                     * 
                     */
                    void SetApiId(const std::string& _apiId);

                    /**
                     * 判断参数 ApiId 是否已赋值
                     * @return ApiId 是否已赋值
                     * 
                     */
                    bool ApiIdHasBeenSet() const;

                    /**
                     * 获取Authorization type of the API to be modified (you can select `OAUTH`, i.e., authorization API)
                     * @return BusinessType Authorization type of the API to be modified (you can select `OAUTH`, i.e., authorization API)
                     * 
                     */
                    std::string GetBusinessType() const;

                    /**
                     * 设置Authorization type of the API to be modified (you can select `OAUTH`, i.e., authorization API)
                     * @param _businessType Authorization type of the API to be modified (you can select `OAUTH`, i.e., authorization API)
                     * 
                     */
                    void SetBusinessType(const std::string& _businessType);

                    /**
                     * 判断参数 BusinessType 是否已赋值
                     * @return BusinessType 是否已赋值
                     * 
                     */
                    bool BusinessTypeHasBeenSet() const;

                    /**
                     * 获取Public key value to be modified by OAuth API
                     * @return PublicKey Public key value to be modified by OAuth API
                     * 
                     */
                    std::string GetPublicKey() const;

                    /**
                     * 设置Public key value to be modified by OAuth API
                     * @param _publicKey Public key value to be modified by OAuth API
                     * 
                     */
                    void SetPublicKey(const std::string& _publicKey);

                    /**
                     * 判断参数 PublicKey 是否已赋值
                     * @return PublicKey 是否已赋值
                     * 
                     */
                    bool PublicKeyHasBeenSet() const;

                    /**
                     * 获取OAuth API redirect address
                     * @return LoginRedirectUrl OAuth API redirect address
                     * 
                     */
                    std::string GetLoginRedirectUrl() const;

                    /**
                     * 设置OAuth API redirect address
                     * @param _loginRedirectUrl OAuth API redirect address
                     * 
                     */
                    void SetLoginRedirectUrl(const std::string& _loginRedirectUrl);

                    /**
                     * 判断参数 LoginRedirectUrl 是否已赋值
                     * @return LoginRedirectUrl 是否已赋值
                     * 
                     */
                    bool LoginRedirectUrlHasBeenSet() const;

                private:

                    /**
                     * Service ID
                     */
                    std::string m_serviceId;
                    bool m_serviceIdHasBeenSet;

                    /**
                     * API ID
                     */
                    std::string m_apiId;
                    bool m_apiIdHasBeenSet;

                    /**
                     * Authorization type of the API to be modified (you can select `OAUTH`, i.e., authorization API)
                     */
                    std::string m_businessType;
                    bool m_businessTypeHasBeenSet;

                    /**
                     * Public key value to be modified by OAuth API
                     */
                    std::string m_publicKey;
                    bool m_publicKeyHasBeenSet;

                    /**
                     * OAuth API redirect address
                     */
                    std::string m_loginRedirectUrl;
                    bool m_loginRedirectUrlHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_APIGATEWAY_V20180808_MODEL_MODIFYAPIINCREMENTREQUEST_H_
