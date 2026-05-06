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

#ifndef TENCENTCLOUD_TSE_V20201207_MODEL_MODIFYCLOUDNATIVEAPIGATEWAYCERTIFICATEREQUEST_H_
#define TENCENTCLOUD_TSE_V20201207_MODEL_MODIFYCLOUDNATIVEAPIGATEWAYCERTIFICATEREQUEST_H_

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
                * ModifyCloudNativeAPIGatewayCertificate request structure.
                */
                class ModifyCloudNativeAPIGatewayCertificateRequest : public AbstractModel
                {
                public:
                    ModifyCloudNativeAPIGatewayCertificateRequest();
                    ~ModifyCloudNativeAPIGatewayCertificateRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取gateway ID
                     * @return GatewayId gateway ID
                     * 
                     */
                    std::string GetGatewayId() const;

                    /**
                     * 设置gateway ID
                     * @param _gatewayId gateway ID
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
                     * 获取Certificate ID.
                     * @return Id Certificate ID.
                     * 
                     */
                    std::string GetId() const;

                    /**
                     * 设置Certificate ID.
                     * @param _id Certificate ID.
                     * 
                     */
                    void SetId(const std::string& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取Certificate name, will already be deprecated
                     * @return Name Certificate name, will already be deprecated
                     * @deprecated
                     */
                    std::string GetName() const;

                    /**
                     * 设置Certificate name, will already be deprecated
                     * @param _name Certificate name, will already be deprecated
                     * @deprecated
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * @deprecated
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取Certificate private key. Required when CertSource is native.
                     * @return Key Certificate private key. Required when CertSource is native.
                     * 
                     */
                    std::string GetKey() const;

                    /**
                     * 设置Certificate private key. Required when CertSource is native.
                     * @param _key Certificate private key. Required when CertSource is native.
                     * 
                     */
                    void SetKey(const std::string& _key);

                    /**
                     * 判断参数 Key 是否已赋值
                     * @return Key 是否已赋值
                     * 
                     */
                    bool KeyHasBeenSet() const;

                    /**
                     * 获取Certificate in pem format. Required when CertSource is native.
                     * @return Crt Certificate in pem format. Required when CertSource is native.
                     * 
                     */
                    std::string GetCrt() const;

                    /**
                     * 设置Certificate in pem format. Required when CertSource is native.
                     * @param _crt Certificate in pem format. Required when CertSource is native.
                     * 
                     */
                    void SetCrt(const std::string& _crt);

                    /**
                     * 判断参数 Crt 是否已赋值
                     * @return Crt 是否已赋值
                     * 
                     */
                    bool CrtHasBeenSet() const;

                    /**
                     * 获取Bound domain names will already be deprecated
                     * @return BindDomains Bound domain names will already be deprecated
                     * @deprecated
                     */
                    std::vector<std::string> GetBindDomains() const;

                    /**
                     * 设置Bound domain names will already be deprecated
                     * @param _bindDomains Bound domain names will already be deprecated
                     * @deprecated
                     */
                    void SetBindDomains(const std::vector<std::string>& _bindDomains);

                    /**
                     * 判断参数 BindDomains 是否已赋值
                     * @return BindDomains 是否已赋值
                     * @deprecated
                     */
                    bool BindDomainsHasBeenSet() const;

                    /**
                     * 获取ssl platform cert Id. Required when CertSource is ssl.
                     * @return CertId ssl platform cert Id. Required when CertSource is ssl.
                     * 
                     */
                    std::string GetCertId() const;

                    /**
                     * 设置ssl platform cert Id. Required when CertSource is ssl.
                     * @param _certId ssl platform cert Id. Required when CertSource is ssl.
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
                     * 获取Certificate source
-ssl (Platform Cert), default value
-native (kong custom certificate) 

                     * @return CertSource Certificate source
-ssl (Platform Cert), default value
-native (kong custom certificate) 

                     * 
                     */
                    std::string GetCertSource() const;

                    /**
                     * 设置Certificate source
-ssl (Platform Cert), default value
-native (kong custom certificate) 

                     * @param _certSource Certificate source
-ssl (Platform Cert), default value
-native (kong custom certificate) 

                     * 
                     */
                    void SetCertSource(const std::string& _certSource);

                    /**
                     * 判断参数 CertSource 是否已赋值
                     * @return CertSource 是否已赋值
                     * 
                     */
                    bool CertSourceHasBeenSet() const;

                private:

                    /**
                     * gateway ID
                     */
                    std::string m_gatewayId;
                    bool m_gatewayIdHasBeenSet;

                    /**
                     * Certificate ID.
                     */
                    std::string m_id;
                    bool m_idHasBeenSet;

                    /**
                     * Certificate name, will already be deprecated
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Certificate private key. Required when CertSource is native.
                     */
                    std::string m_key;
                    bool m_keyHasBeenSet;

                    /**
                     * Certificate in pem format. Required when CertSource is native.
                     */
                    std::string m_crt;
                    bool m_crtHasBeenSet;

                    /**
                     * Bound domain names will already be deprecated
                     */
                    std::vector<std::string> m_bindDomains;
                    bool m_bindDomainsHasBeenSet;

                    /**
                     * ssl platform cert Id. Required when CertSource is ssl.
                     */
                    std::string m_certId;
                    bool m_certIdHasBeenSet;

                    /**
                     * Certificate source
-ssl (Platform Cert), default value
-native (kong custom certificate) 

                     */
                    std::string m_certSource;
                    bool m_certSourceHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TSE_V20201207_MODEL_MODIFYCLOUDNATIVEAPIGATEWAYCERTIFICATEREQUEST_H_
