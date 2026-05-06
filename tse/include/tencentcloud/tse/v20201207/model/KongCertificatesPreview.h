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

#ifndef TENCENTCLOUD_TSE_V20201207_MODEL_KONGCERTIFICATESPREVIEW_H_
#define TENCENTCLOUD_TSE_V20201207_MODEL_KONGCERTIFICATESPREVIEW_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                * Cloud-native gateway certificate preview information
                */
                class KongCertificatesPreview : public AbstractModel
                {
                public:
                    KongCertificatesPreview();
                    ~KongCertificatesPreview() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取certificate name
                     * @return Name certificate name
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置certificate name
                     * @param _name certificate name
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
                     * 获取Id
                     * @return Id Id
                     * 
                     */
                    std::string GetId() const;

                    /**
                     * 设置Id
                     * @param _id Id
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
                     * 获取Certificate status: expired.
active
                     * @return Status Certificate status: expired.
active
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置Certificate status: expired.
active
                     * @param _status Certificate status: expired.
active
                     * 
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取Certificate in pem format
                     * @return Crt Certificate in pem format
                     * 
                     */
                    std::string GetCrt() const;

                    /**
                     * 设置Certificate in pem format
                     * @param _crt Certificate in pem format
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
                     * 获取Certificate Private Key
                     * @return Key Certificate Private Key
                     * 
                     */
                    std::string GetKey() const;

                    /**
                     * 设置Certificate Private Key
                     * @param _key Certificate Private Key
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
                     * 获取certificate expiration time
                     * @return ExpireTime certificate expiration time
                     * 
                     */
                    std::string GetExpireTime() const;

                    /**
                     * 设置certificate expiration time
                     * @param _expireTime certificate expiration time
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
                     * 获取Certificate upload time
                     * @return CreateTime Certificate upload time
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置Certificate upload time
                     * @param _createTime Certificate upload time
                     * 
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取Certificate issuance time
                     * @return IssueTime Certificate issuance time
                     * 
                     */
                    std::string GetIssueTime() const;

                    /**
                     * 设置Certificate issuance time
                     * @param _issueTime Certificate issuance time
                     * 
                     */
                    void SetIssueTime(const std::string& _issueTime);

                    /**
                     * 判断参数 IssueTime 是否已赋值
                     * @return IssueTime 是否已赋值
                     * 
                     */
                    bool IssueTimeHasBeenSet() const;

                    /**
                     * 获取Certificate source: native (kong custom certificate)
ssl (platform cert)
                     * @return CertSource Certificate source: native (kong custom certificate)
ssl (platform cert)
                     * 
                     */
                    std::string GetCertSource() const;

                    /**
                     * 设置Certificate source: native (kong custom certificate)
ssl (platform cert)
                     * @param _certSource Certificate source: native (kong custom certificate)
ssl (platform cert)
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
                     * 获取ssl Platform Certificate Id
                     * @return CertId ssl Platform Certificate Id
                     * 
                     */
                    std::string GetCertId() const;

                    /**
                     * 设置ssl Platform Certificate Id
                     * @param _certId ssl Platform Certificate Id
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
                     * certificate name
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Id
                     */
                    std::string m_id;
                    bool m_idHasBeenSet;

                    /**
                     * Bound domain name
                     */
                    std::vector<std::string> m_bindDomains;
                    bool m_bindDomainsHasBeenSet;

                    /**
                     * Certificate status: expired.
active
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Certificate in pem format
                     */
                    std::string m_crt;
                    bool m_crtHasBeenSet;

                    /**
                     * Certificate Private Key
                     */
                    std::string m_key;
                    bool m_keyHasBeenSet;

                    /**
                     * certificate expiration time
                     */
                    std::string m_expireTime;
                    bool m_expireTimeHasBeenSet;

                    /**
                     * Certificate upload time
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * Certificate issuance time
                     */
                    std::string m_issueTime;
                    bool m_issueTimeHasBeenSet;

                    /**
                     * Certificate source: native (kong custom certificate)
ssl (platform cert)
                     */
                    std::string m_certSource;
                    bool m_certSourceHasBeenSet;

                    /**
                     * ssl Platform Certificate Id
                     */
                    std::string m_certId;
                    bool m_certIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TSE_V20201207_MODEL_KONGCERTIFICATESPREVIEW_H_
