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

#ifndef TENCENTCLOUD_SSL_V20191205_MODEL_GATEWAYCERTIFICATE_H_
#define TENCENTCLOUD_SSL_V20191205_MODEL_GATEWAYCERTIFICATE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ssl
    {
        namespace V20191205
        {
            namespace Model
            {
                /**
                * Cloud-native gateway certificate information
                */
                class GatewayCertificate : public AbstractModel
                {
                public:
                    GatewayCertificate();
                    ~GatewayCertificate() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Gateway certificate ID
                     * @return Id Gateway certificate ID
                     * 
                     */
                    std::string GetId() const;

                    /**
                     * 设置Gateway certificate ID
                     * @param _id Gateway certificate ID
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
                     * 获取gateway certificate name
                     * @return Name gateway certificate name
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置gateway certificate name
                     * @param _name gateway certificate name
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
                     * 获取Bind Domain Name
                     * @return BindDomains Bind Domain Name
                     * 
                     */
                    std::vector<std::string> GetBindDomains() const;

                    /**
                     * 设置Bind Domain Name
                     * @param _bindDomains Bind Domain Name
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
                     * 获取Certificate source
                     * @return CertSource Certificate source
                     * 
                     */
                    std::string GetCertSource() const;

                    /**
                     * 设置Certificate source
                     * @param _certSource Certificate source
                     * 
                     */
                    void SetCertSource(const std::string& _certSource);

                    /**
                     * 判断参数 CertSource 是否已赋值
                     * @return CertSource 是否已赋值
                     * 
                     */
                    bool CertSourceHasBeenSet() const;

                    /**
                     * 获取Currently bound SSL certificate ID
                     * @return CertId Currently bound SSL certificate ID
                     * 
                     */
                    std::string GetCertId() const;

                    /**
                     * 设置Currently bound SSL certificate ID
                     * @param _certId Currently bound SSL certificate ID
                     * 
                     */
                    void SetCertId(const std::string& _certId);

                    /**
                     * 判断参数 CertId 是否已赋值
                     * @return CertId 是否已赋值
                     * 
                     */
                    bool CertIdHasBeenSet() const;

                private:

                    /**
                     * Gateway certificate ID
                     */
                    std::string m_id;
                    bool m_idHasBeenSet;

                    /**
                     * gateway certificate name
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Bind Domain Name
                     */
                    std::vector<std::string> m_bindDomains;
                    bool m_bindDomainsHasBeenSet;

                    /**
                     * Certificate source
                     */
                    std::string m_certSource;
                    bool m_certSourceHasBeenSet;

                    /**
                     * Currently bound SSL certificate ID
                     */
                    std::string m_certId;
                    bool m_certIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SSL_V20191205_MODEL_GATEWAYCERTIFICATE_H_
