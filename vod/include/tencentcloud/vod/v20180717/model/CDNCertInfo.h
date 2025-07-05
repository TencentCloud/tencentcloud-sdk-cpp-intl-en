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
                * Domain https acceleration configuration, the default is off
                */
                class CDNCertInfo : public AbstractModel
                {
                public:
                    CDNCertInfo();
                    ~CDNCertInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取The server certificate ID is automatically generated during certificate hosting by SSL Certificate Management.
                     * @return CertId The server certificate ID is automatically generated during certificate hosting by SSL Certificate Management.
                     * 
                     */
                    std::string GetCertId() const;

                    /**
                     * 设置The server certificate ID is automatically generated during certificate hosting by SSL Certificate Management.
                     * @param _certId The server certificate ID is automatically generated during certificate hosting by SSL Certificate Management.
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
                     * 获取Server certificate information.
                     * @return Certificate Server certificate information.
                     * 
                     */
                    std::string GetCertificate() const;

                    /**
                     * 设置Server certificate information.
                     * @param _certificate Server certificate information.
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
                     * 获取Server key information.
                     * @return PrivateKey Server key information.
                     * 
                     */
                    std::string GetPrivateKey() const;

                    /**
                     * 设置Server key information.
                     * @param _privateKey Server key information.
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
                     * 获取Certificate expiration time; no need to fill in when configured as an input parameter.
                     * @return ExpireTime Certificate expiration time; no need to fill in when configured as an input parameter.
                     * 
                     */
                    std::string GetExpireTime() const;

                    /**
                     * 设置Certificate expiration time; no need to fill in when configured as an input parameter.
                     * @param _expireTime Certificate expiration time; no need to fill in when configured as an input parameter.
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
                     * The server certificate ID is automatically generated during certificate hosting by SSL Certificate Management.
                     */
                    std::string m_certId;
                    bool m_certIdHasBeenSet;

                    /**
                     * Server certificate information.
                     */
                    std::string m_certificate;
                    bool m_certificateHasBeenSet;

                    /**
                     * Server key information.
                     */
                    std::string m_privateKey;
                    bool m_privateKeyHasBeenSet;

                    /**
                     * Certificate expiration time; no need to fill in when configured as an input parameter.
                     */
                    std::string m_expireTime;
                    bool m_expireTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_CDNCERTINFO_H_
