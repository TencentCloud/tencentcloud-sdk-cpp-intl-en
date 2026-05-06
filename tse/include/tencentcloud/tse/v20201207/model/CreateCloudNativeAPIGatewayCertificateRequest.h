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

#ifndef TENCENTCLOUD_TSE_V20201207_MODEL_CREATECLOUDNATIVEAPIGATEWAYCERTIFICATEREQUEST_H_
#define TENCENTCLOUD_TSE_V20201207_MODEL_CREATECLOUDNATIVEAPIGATEWAYCERTIFICATEREQUEST_H_

#include <string>
#include <vector>
#include <map>
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
                * CreateCloudNativeAPIGatewayCertificate request structure.
                */
                class CreateCloudNativeAPIGatewayCertificateRequest : public AbstractModel
                {
                public:
                    CreateCloudNativeAPIGatewayCertificateRequest();
                    ~CreateCloudNativeAPIGatewayCertificateRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Gateway ID
                     * @return GatewayId Gateway ID
                     * 
                     */
                    std::string GetGatewayId() const;

                    /**
                     * 设置Gateway ID
                     * @param _gatewayId Gateway ID
                     * 
                     */
                    void SetGatewayId(const std::string& _gatewayId);

                    /**
                     * 判断参数 GatewayId 是否已赋值
                     * @return GatewayId 是否已赋值
                     * 
                     */
                    bool GatewayIdHasBeenSet() const;

                    /**
                     * 获取Bound domain name
                     * @return BindDomains Bound domain name
                     * 
                     */
                    std::vector<std::string> GetBindDomains() const;

                    /**
                     * 设置Bound domain name
                     * @param _bindDomains Bound domain name
                     * 
                     */
                    void SetBindDomains(const std::vector<std::string>& _bindDomains);

                    /**
                     * 判断参数 BindDomains 是否已赋值
                     * @return BindDomains 是否已赋值
                     * 
                     */
                    bool BindDomainsHasBeenSet() const;

                    /**
                     * 获取ssl platform cert Id
                     * @return CertId ssl platform cert Id
                     * 
                     */
                    std::string GetCertId() const;

                    /**
                     * 设置ssl platform cert Id
                     * @param _certId ssl platform cert Id
                     * 
                     */
                    void SetCertId(const std::string& _certId);

                    /**
                     * 判断参数 CertId 是否已赋值
                     * @return CertId 是否已赋值
                     * 
                     */
                    bool CertIdHasBeenSet() const;

                    /**
                     * 获取Certificate Name
                     * @return Name Certificate Name
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置Certificate Name
                     * @param _name Certificate Name
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取Certificate Private Key
                     * @return Key Certificate Private Key
                     * @deprecated
                     */
                    std::string GetKey() const;

                    /**
                     * 设置Certificate Private Key
                     * @param _key Certificate Private Key
                     * @deprecated
                     */
                    void SetKey(const std::string& _key);

                    /**
                     * 判断参数 Key 是否已赋值
                     * @return Key 是否已赋值
                     * @deprecated
                     */
                    bool KeyHasBeenSet() const;

                    /**
                     * 获取Certificate in pem format
                     * @return Crt Certificate in pem format
                     * @deprecated
                     */
                    std::string GetCrt() const;

                    /**
                     * 设置Certificate in pem format
                     * @param _crt Certificate in pem format
                     * @deprecated
                     */
                    void SetCrt(const std::string& _crt);

                    /**
                     * 判断参数 Crt 是否已赋值
                     * @return Crt 是否已赋值
                     * @deprecated
                     */
                    bool CrtHasBeenSet() const;

                private:

                    /**
                     * Gateway ID
                     */
                    std::string m_gatewayId;
                    bool m_gatewayIdHasBeenSet;

                    /**
                     * Bound domain name
                     */
                    std::vector<std::string> m_bindDomains;
                    bool m_bindDomainsHasBeenSet;

                    /**
                     * ssl platform cert Id
                     */
                    std::string m_certId;
                    bool m_certIdHasBeenSet;

                    /**
                     * Certificate Name
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Certificate Private Key
                     */
                    std::string m_key;
                    bool m_keyHasBeenSet;

                    /**
                     * Certificate in pem format
                     */
                    std::string m_crt;
                    bool m_crtHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TSE_V20201207_MODEL_CREATECLOUDNATIVEAPIGATEWAYCERTIFICATEREQUEST_H_
