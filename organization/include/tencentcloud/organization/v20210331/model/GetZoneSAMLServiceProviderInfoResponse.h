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

#ifndef TENCENTCLOUD_ORGANIZATION_V20210331_MODEL_GETZONESAMLSERVICEPROVIDERINFORESPONSE_H_
#define TENCENTCLOUD_ORGANIZATION_V20210331_MODEL_GETZONESAMLSERVICEPROVIDERINFORESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/organization/v20210331/model/SAMLServiceProvider.h>


namespace TencentCloud
{
    namespace Organization
    {
        namespace V20210331
        {
            namespace Model
            {
                /**
                * GetZoneSAMLServiceProviderInfo response structure.
                */
                class GetZoneSAMLServiceProviderInfoResponse : public AbstractModel
                {
                public:
                    GetZoneSAMLServiceProviderInfoResponse();
                    ~GetZoneSAMLServiceProviderInfoResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取SAML service provider configuration information.
                     * @return SAMLServiceProvider SAML service provider configuration information.
                     * 
                     */
                    SAMLServiceProvider GetSAMLServiceProvider() const;

                    /**
                     * 判断参数 SAMLServiceProvider 是否已赋值
                     * @return SAMLServiceProvider 是否已赋值
                     * 
                     */
                    bool SAMLServiceProviderHasBeenSet() const;

                private:

                    /**
                     * SAML service provider configuration information.
                     */
                    SAMLServiceProvider m_sAMLServiceProvider;
                    bool m_sAMLServiceProviderHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ORGANIZATION_V20210331_MODEL_GETZONESAMLSERVICEPROVIDERINFORESPONSE_H_
