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
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return Id Gateway certificate ID
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetId() const;

                    /**
                     * 设置Gateway certificate ID
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _id Gateway certificate ID
Note: This field may return null, indicating that no valid value can be obtained.
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
                     * 获取Gateway certificate information
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return Name Gateway certificate information
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置Gateway certificate information
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _name Gateway certificate information
Note: This field may return null, indicating that no valid value can be obtained.
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
                     * 获取Bound domain name
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return BindDomains Bound domain name
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::vector<std::string> GetBindDomains() const;

                    /**
                     * 设置Bound domain name
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _bindDomains Bound domain name
Note: This field may return null, indicating that no valid value can be obtained.
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
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return CertSource Certificate source
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetCertSource() const;

                    /**
                     * 设置Certificate source
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _certSource Certificate source
Note: This field may return null, indicating that no valid value can be obtained.
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
                     * 获取SSL certificate ID that is currently bound
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return CertId SSL certificate ID that is currently bound
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetCertId() const;

                    /**
                     * 设置SSL certificate ID that is currently bound
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _certId SSL certificate ID that is currently bound
Note: This field may return null, indicating that no valid value can be obtained.
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
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_id;
                    bool m_idHasBeenSet;

                    /**
                     * Gateway certificate information
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Bound domain name
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::vector<std::string> m_bindDomains;
                    bool m_bindDomainsHasBeenSet;

                    /**
                     * Certificate source
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_certSource;
                    bool m_certSourceHasBeenSet;

                    /**
                     * SSL certificate ID that is currently bound
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_certId;
                    bool m_certIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SSL_V20191205_MODEL_GATEWAYCERTIFICATE_H_
