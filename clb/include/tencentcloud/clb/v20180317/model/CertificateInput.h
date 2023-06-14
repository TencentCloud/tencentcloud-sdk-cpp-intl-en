/*
 * Copyright (c) 2017-2019 THL A29 Limited, a Tencent company. All Rights Reserved.
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

#ifndef TENCENTCLOUD_CLB_V20180317_MODEL_CERTIFICATEINPUT_H_
#define TENCENTCLOUD_CLB_V20180317_MODEL_CERTIFICATEINPUT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Clb
    {
        namespace V20180317
        {
            namespace Model
            {
                /**
                * Certificate information
                */
                class CertificateInput : public AbstractModel
                {
                public:
                    CertificateInput();
                    ~CertificateInput() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Authentication type. Value range: UNIDIRECTIONAL (unidirectional authentication), MUTUAL (mutual authentication)
                     * @return SSLMode Authentication type. Value range: UNIDIRECTIONAL (unidirectional authentication), MUTUAL (mutual authentication)
                     * 
                     */
                    std::string GetSSLMode() const;

                    /**
                     * 设置Authentication type. Value range: UNIDIRECTIONAL (unidirectional authentication), MUTUAL (mutual authentication)
                     * @param _sSLMode Authentication type. Value range: UNIDIRECTIONAL (unidirectional authentication), MUTUAL (mutual authentication)
                     * 
                     */
                    void SetSSLMode(const std::string& _sSLMode);

                    /**
                     * 判断参数 SSLMode 是否已赋值
                     * @return SSLMode 是否已赋值
                     * 
                     */
                    bool SSLModeHasBeenSet() const;

                    /**
                     * 获取ID of a server certificate. If you leave this parameter empty, you must upload the certificate, including CertContent, CertKey, and CertName.
                     * @return CertId ID of a server certificate. If you leave this parameter empty, you must upload the certificate, including CertContent, CertKey, and CertName.
                     * 
                     */
                    std::string GetCertId() const;

                    /**
                     * 设置ID of a server certificate. If you leave this parameter empty, you must upload the certificate, including CertContent, CertKey, and CertName.
                     * @param _certId ID of a server certificate. If you leave this parameter empty, you must upload the certificate, including CertContent, CertKey, and CertName.
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
                     * 获取ID of a client certificate. When the listener adopts mutual authentication (i.e., SSLMode = mutual), if you leave this parameter empty, you must upload the client certificate, including CertCaContent and CertCaName.
                     * @return CertCaId ID of a client certificate. When the listener adopts mutual authentication (i.e., SSLMode = mutual), if you leave this parameter empty, you must upload the client certificate, including CertCaContent and CertCaName.
                     * 
                     */
                    std::string GetCertCaId() const;

                    /**
                     * 设置ID of a client certificate. When the listener adopts mutual authentication (i.e., SSLMode = mutual), if you leave this parameter empty, you must upload the client certificate, including CertCaContent and CertCaName.
                     * @param _certCaId ID of a client certificate. When the listener adopts mutual authentication (i.e., SSLMode = mutual), if you leave this parameter empty, you must upload the client certificate, including CertCaContent and CertCaName.
                     * 
                     */
                    void SetCertCaId(const std::string& _certCaId);

                    /**
                     * 判断参数 CertCaId 是否已赋值
                     * @return CertCaId 是否已赋值
                     * 
                     */
                    bool CertCaIdHasBeenSet() const;

                    /**
                     * 获取Name of the uploaded server certificate. If there is no CertId, this parameter is required.
                     * @return CertName Name of the uploaded server certificate. If there is no CertId, this parameter is required.
                     * 
                     */
                    std::string GetCertName() const;

                    /**
                     * 设置Name of the uploaded server certificate. If there is no CertId, this parameter is required.
                     * @param _certName Name of the uploaded server certificate. If there is no CertId, this parameter is required.
                     * 
                     */
                    void SetCertName(const std::string& _certName);

                    /**
                     * 判断参数 CertName 是否已赋值
                     * @return CertName 是否已赋值
                     * 
                     */
                    bool CertNameHasBeenSet() const;

                    /**
                     * 获取Key of the uploaded server certificate. If there is no CertId, this parameter is required.
                     * @return CertKey Key of the uploaded server certificate. If there is no CertId, this parameter is required.
                     * 
                     */
                    std::string GetCertKey() const;

                    /**
                     * 设置Key of the uploaded server certificate. If there is no CertId, this parameter is required.
                     * @param _certKey Key of the uploaded server certificate. If there is no CertId, this parameter is required.
                     * 
                     */
                    void SetCertKey(const std::string& _certKey);

                    /**
                     * 判断参数 CertKey 是否已赋值
                     * @return CertKey 是否已赋值
                     * 
                     */
                    bool CertKeyHasBeenSet() const;

                    /**
                     * 获取Content of the uploaded server certificate. If there is no CertId, this parameter is required.
                     * @return CertContent Content of the uploaded server certificate. If there is no CertId, this parameter is required.
                     * 
                     */
                    std::string GetCertContent() const;

                    /**
                     * 设置Content of the uploaded server certificate. If there is no CertId, this parameter is required.
                     * @param _certContent Content of the uploaded server certificate. If there is no CertId, this parameter is required.
                     * 
                     */
                    void SetCertContent(const std::string& _certContent);

                    /**
                     * 判断参数 CertContent 是否已赋值
                     * @return CertContent 是否已赋值
                     * 
                     */
                    bool CertContentHasBeenSet() const;

                    /**
                     * 获取Name of the uploaded client CA certificate. When SSLMode = mutual, if there is no CertCaId, this parameter is required.
                     * @return CertCaName Name of the uploaded client CA certificate. When SSLMode = mutual, if there is no CertCaId, this parameter is required.
                     * 
                     */
                    std::string GetCertCaName() const;

                    /**
                     * 设置Name of the uploaded client CA certificate. When SSLMode = mutual, if there is no CertCaId, this parameter is required.
                     * @param _certCaName Name of the uploaded client CA certificate. When SSLMode = mutual, if there is no CertCaId, this parameter is required.
                     * 
                     */
                    void SetCertCaName(const std::string& _certCaName);

                    /**
                     * 判断参数 CertCaName 是否已赋值
                     * @return CertCaName 是否已赋值
                     * 
                     */
                    bool CertCaNameHasBeenSet() const;

                    /**
                     * 获取Content of the uploaded client certificate. When SSLMode = mutual, if there is no CertCaId, this parameter is required.
                     * @return CertCaContent Content of the uploaded client certificate. When SSLMode = mutual, if there is no CertCaId, this parameter is required.
                     * 
                     */
                    std::string GetCertCaContent() const;

                    /**
                     * 设置Content of the uploaded client certificate. When SSLMode = mutual, if there is no CertCaId, this parameter is required.
                     * @param _certCaContent Content of the uploaded client certificate. When SSLMode = mutual, if there is no CertCaId, this parameter is required.
                     * 
                     */
                    void SetCertCaContent(const std::string& _certCaContent);

                    /**
                     * 判断参数 CertCaContent 是否已赋值
                     * @return CertCaContent 是否已赋值
                     * 
                     */
                    bool CertCaContentHasBeenSet() const;

                private:

                    /**
                     * Authentication type. Value range: UNIDIRECTIONAL (unidirectional authentication), MUTUAL (mutual authentication)
                     */
                    std::string m_sSLMode;
                    bool m_sSLModeHasBeenSet;

                    /**
                     * ID of a server certificate. If you leave this parameter empty, you must upload the certificate, including CertContent, CertKey, and CertName.
                     */
                    std::string m_certId;
                    bool m_certIdHasBeenSet;

                    /**
                     * ID of a client certificate. When the listener adopts mutual authentication (i.e., SSLMode = mutual), if you leave this parameter empty, you must upload the client certificate, including CertCaContent and CertCaName.
                     */
                    std::string m_certCaId;
                    bool m_certCaIdHasBeenSet;

                    /**
                     * Name of the uploaded server certificate. If there is no CertId, this parameter is required.
                     */
                    std::string m_certName;
                    bool m_certNameHasBeenSet;

                    /**
                     * Key of the uploaded server certificate. If there is no CertId, this parameter is required.
                     */
                    std::string m_certKey;
                    bool m_certKeyHasBeenSet;

                    /**
                     * Content of the uploaded server certificate. If there is no CertId, this parameter is required.
                     */
                    std::string m_certContent;
                    bool m_certContentHasBeenSet;

                    /**
                     * Name of the uploaded client CA certificate. When SSLMode = mutual, if there is no CertCaId, this parameter is required.
                     */
                    std::string m_certCaName;
                    bool m_certCaNameHasBeenSet;

                    /**
                     * Content of the uploaded client certificate. When SSLMode = mutual, if there is no CertCaId, this parameter is required.
                     */
                    std::string m_certCaContent;
                    bool m_certCaContentHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLB_V20180317_MODEL_CERTIFICATEINPUT_H_
