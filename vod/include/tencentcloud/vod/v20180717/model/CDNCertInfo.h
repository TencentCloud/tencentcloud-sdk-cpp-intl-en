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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_CDNCERTINFO_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_CDNCERTINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
        {
            namespace Model
            {
                /**
                * 
                */
                class CDNCertInfo : public AbstractModel
                {
                public:
                    CDNCertInfo();
                    ~CDNCertInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Server certificate ID is automatically generated when hosting a certificate in SSL certificate management.
                     * @return CertId Server certificate ID is automatically generated when hosting a certificate in SSL certificate management.
                     * 
                     */
                    std::string GetCertId() const;

                    /**
                     * 设置Server certificate ID is automatically generated when hosting a certificate in SSL certificate management.
                     * @param _certId Server certificate ID is automatically generated when hosting a certificate in SSL certificate management.
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
                     * 获取
                     * @return Certificate 
                     * 
                     */
                    std::string GetCertificate() const;

                    /**
                     * 设置
                     * @param _certificate 
                     * 
                     */
                    void SetCertificate(const std::string& _certificate);

                    /**
                     * 判断参数 Certificate 是否已赋值
                     * @return Certificate 是否已赋值
                     * 
                     */
                    bool CertificateHasBeenSet() const;

                    /**
                     * 获取
                     * @return PrivateKey 
                     * 
                     */
                    std::string GetPrivateKey() const;

                    /**
                     * 设置
                     * @param _privateKey 
                     * 
                     */
                    void SetPrivateKey(const std::string& _privateKey);

                    /**
                     * 判断参数 PrivateKey 是否已赋值
                     * @return PrivateKey 是否已赋值
                     * 
                     */
                    bool PrivateKeyHasBeenSet() const;

                    /**
                     * 获取Certificate expiration time;
No need to fill when used as an input parameter configuration.
                     * @return ExpireTime Certificate expiration time;
No need to fill when used as an input parameter configuration.
                     * 
                     */
                    std::string GetExpireTime() const;

                    /**
                     * 设置Certificate expiration time;
No need to fill when used as an input parameter configuration.
                     * @param _expireTime Certificate expiration time;
No need to fill when used as an input parameter configuration.
                     * 
                     */
                    void SetExpireTime(const std::string& _expireTime);

                    /**
                     * 判断参数 ExpireTime 是否已赋值
                     * @return ExpireTime 是否已赋值
                     * 
                     */
                    bool ExpireTimeHasBeenSet() const;

                private:

                    /**
                     * Server certificate ID is automatically generated when hosting a certificate in SSL certificate management.
                     */
                    std::string m_certId;
                    bool m_certIdHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_certificate;
                    bool m_certificateHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_privateKey;
                    bool m_privateKeyHasBeenSet;

                    /**
                     * Certificate expiration time;
No need to fill when used as an input parameter configuration.
                     */
                    std::string m_expireTime;
                    bool m_expireTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_CDNCERTINFO_H_
