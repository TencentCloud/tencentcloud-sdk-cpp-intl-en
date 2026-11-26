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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_HOSTCERTINFO_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_HOSTCERTINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * https server certificate configuration
                */
                class HostCertInfo : public AbstractModel
                {
                public:
                    HostCertInfo();
                    ~HostCertInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Server certificate ID.
                     * @return CertId Server certificate ID.
                     * 
                     */
                    std::string GetCertId() const;

                    /**
                     * 设置Server certificate ID.
                     * @param _certId Server certificate ID.
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
                     * 获取Certificate remark name.
                     * @return Alias Certificate remark name.
                     * 
                     */
                    std::string GetAlias() const;

                    /**
                     * 设置Certificate remark name.
                     * @param _alias Certificate remark name.
                     * 
                     */
                    void SetAlias(const std::string& _alias);

                    /**
                     * 判断参数 Alias 是否已赋值
                     * @return Alias 是否已赋值
                     * 
                     */
                    bool AliasHasBeenSet() const;

                    /**
                     * 获取Certificate type. Valid values:
<li>default: default certificate;</li>
<li>upload: user upload;</li>
<li>managed: Tencent Cloud hosted.</li>
                     * @return Type Certificate type. Valid values:
<li>default: default certificate;</li>
<li>upload: user upload;</li>
<li>managed: Tencent Cloud hosted.</li>
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置Certificate type. Valid values:
<li>default: default certificate;</li>
<li>upload: user upload;</li>
<li>managed: Tencent Cloud hosted.</li>
                     * @param _type Certificate type. Valid values:
<li>default: default certificate;</li>
<li>upload: user upload;</li>
<li>managed: Tencent Cloud hosted.</li>
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取Certificate expiration time.
                     * @return ExpireTime Certificate expiration time.
                     * 
                     */
                    std::string GetExpireTime() const;

                    /**
                     * 设置Certificate expiration time.
                     * @param _expireTime Certificate expiration time.
                     * 
                     */
                    void SetExpireTime(const std::string& _expireTime);

                    /**
                     * 判断参数 ExpireTime 是否已赋值
                     * @return ExpireTime 是否已赋值
                     * 
                     */
                    bool ExpireTimeHasBeenSet() const;

                    /**
                     * 获取Certificate deployment time.
                     * @return DeployTime Certificate deployment time.
                     * 
                     */
                    std::string GetDeployTime() const;

                    /**
                     * 设置Certificate deployment time.
                     * @param _deployTime Certificate deployment time.
                     * 
                     */
                    void SetDeployTime(const std::string& _deployTime);

                    /**
                     * 判断参数 DeployTime 是否已赋值
                     * @return DeployTime 是否已赋值
                     * 
                     */
                    bool DeployTimeHasBeenSet() const;

                    /**
                     * 获取Signature algorithm.
                     * @return SignAlgo Signature algorithm.
                     * 
                     */
                    std::string GetSignAlgo() const;

                    /**
                     * 设置Signature algorithm.
                     * @param _signAlgo Signature algorithm.
                     * 
                     */
                    void SetSignAlgo(const std::string& _signAlgo);

                    /**
                     * 判断参数 SignAlgo 是否已赋值
                     * @return SignAlgo 是否已赋值
                     * 
                     */
                    bool SignAlgoHasBeenSet() const;

                    /**
                     * 获取Certificate status. Valid values:
<li>deployed: Deployed;</li>
<li>processing: deploying;</li>
<li>applying: application in progress.</li>
<li>failed: Application failed;</li>
<li>issued: failed to bind.</li>
                     * @return Status Certificate status. Valid values:
<li>deployed: Deployed;</li>
<li>processing: deploying;</li>
<li>applying: application in progress.</li>
<li>failed: Application failed;</li>
<li>issued: failed to bind.</li>
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置Certificate status. Valid values:
<li>deployed: Deployed;</li>
<li>processing: deploying;</li>
<li>applying: application in progress.</li>
<li>failed: Application failed;</li>
<li>issued: failed to bind.</li>
                     * @param _status Certificate status. Valid values:
<li>deployed: Deployed;</li>
<li>processing: deploying;</li>
<li>applying: application in progress.</li>
<li>failed: Application failed;</li>
<li>issued: failed to bind.</li>
                     * 
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                private:

                    /**
                     * Server certificate ID.
                     */
                    std::string m_certId;
                    bool m_certIdHasBeenSet;

                    /**
                     * Certificate remark name.
                     */
                    std::string m_alias;
                    bool m_aliasHasBeenSet;

                    /**
                     * Certificate type. Valid values:
<li>default: default certificate;</li>
<li>upload: user upload;</li>
<li>managed: Tencent Cloud hosted.</li>
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * Certificate expiration time.
                     */
                    std::string m_expireTime;
                    bool m_expireTimeHasBeenSet;

                    /**
                     * Certificate deployment time.
                     */
                    std::string m_deployTime;
                    bool m_deployTimeHasBeenSet;

                    /**
                     * Signature algorithm.
                     */
                    std::string m_signAlgo;
                    bool m_signAlgoHasBeenSet;

                    /**
                     * Certificate status. Valid values:
<li>deployed: Deployed;</li>
<li>processing: deploying;</li>
<li>applying: application in progress.</li>
<li>failed: Application failed;</li>
<li>issued: failed to bind.</li>
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_HOSTCERTINFO_H_
