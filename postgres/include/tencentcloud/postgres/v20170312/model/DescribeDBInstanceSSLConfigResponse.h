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

#ifndef TENCENTCLOUD_POSTGRES_V20170312_MODEL_DESCRIBEDBINSTANCESSLCONFIGRESPONSE_H_
#define TENCENTCLOUD_POSTGRES_V20170312_MODEL_DESCRIBEDBINSTANCESSLCONFIGRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Postgres
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * DescribeDBInstanceSSLConfig response structure.
                */
                class DescribeDBInstanceSSLConfigResponse : public AbstractModel
                {
                public:
                    DescribeDBInstanceSSLConfigResponse();
                    ~DescribeDBInstanceSSLConfigResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取true represents enabled. false represents not enabled.
                     * @return SSLEnabled true represents enabled. false represents not enabled.
                     * 
                     */
                    bool GetSSLEnabled() const;

                    /**
                     * 判断参数 SSLEnabled 是否已赋值
                     * @return SSLEnabled 是否已赋值
                     * 
                     */
                    bool SSLEnabledHasBeenSet() const;

                    /**
                     * 获取Certificate download url for the cloud root certificate.
                     * @return CAUrl Certificate download url for the cloud root certificate.
                     * 
                     */
                    std::string GetCAUrl() const;

                    /**
                     * 判断参数 CAUrl 是否已赋值
                     * @return CAUrl 是否已赋值
                     * 
                     */
                    bool CAUrlHasBeenSet() const;

                    /**
                     * 获取Specifies the intranet or public network connection address in the server certificate.
                     * @return ConnectAddress Specifies the intranet or public network connection address in the server certificate.
                     * 
                     */
                    std::string GetConnectAddress() const;

                    /**
                     * 判断参数 ConnectAddress 是否已赋值
                     * @return ConnectAddress 是否已赋值
                     * 
                     */
                    bool ConnectAddressHasBeenSet() const;

                private:

                    /**
                     * true represents enabled. false represents not enabled.
                     */
                    bool m_sSLEnabled;
                    bool m_sSLEnabledHasBeenSet;

                    /**
                     * Certificate download url for the cloud root certificate.
                     */
                    std::string m_cAUrl;
                    bool m_cAUrlHasBeenSet;

                    /**
                     * Specifies the intranet or public network connection address in the server certificate.
                     */
                    std::string m_connectAddress;
                    bool m_connectAddressHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_POSTGRES_V20170312_MODEL_DESCRIBEDBINSTANCESSLCONFIGRESPONSE_H_
