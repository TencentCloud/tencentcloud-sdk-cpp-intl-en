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

#ifndef TENCENTCLOUD_TCR_V20190924_MODEL_CUSTOMIZEDDOMAININFO_H_
#define TENCENTCLOUD_TCR_V20190924_MODEL_CUSTOMIZEDDOMAININFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tcr
    {
        namespace V20190924
        {
            namespace Model
            {
                /**
                * Custom domain name information
                */
                class CustomizedDomainInfo : public AbstractModel
                {
                public:
                    CustomizedDomainInfo();
                    ~CustomizedDomainInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Instance ID
                     * @return RegistryId Instance ID
                     * 
                     */
                    std::string GetRegistryId() const;

                    /**
                     * 设置Instance ID
                     * @param _registryId Instance ID
                     * 
                     */
                    void SetRegistryId(const std::string& _registryId);

                    /**
                     * 判断参数 RegistryId 是否已赋值
                     * @return RegistryId 是否已赋值
                     * 
                     */
                    bool RegistryIdHasBeenSet() const;

                    /**
                     * 获取Certificate ID
                     * @return CertId Certificate ID
                     * 
                     */
                    std::string GetCertId() const;

                    /**
                     * 设置Certificate ID
                     * @param _certId Certificate ID
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
                     * 获取Domain name
                     * @return DomainName Domain name
                     * 
                     */
                    std::string GetDomainName() const;

                    /**
                     * 设置Domain name
                     * @param _domainName Domain name
                     * 
                     */
                    void SetDomainName(const std::string& _domainName);

                    /**
                     * 判断参数 DomainName 是否已赋值
                     * @return DomainName 是否已赋值
                     * 
                     */
                    bool DomainNameHasBeenSet() const;

                    /**
                     * 获取Domain name creation status. Valid values: SUCCESS, FAILURE, CREATING, DELETING.
                     * @return Status Domain name creation status. Valid values: SUCCESS, FAILURE, CREATING, DELETING.
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置Domain name creation status. Valid values: SUCCESS, FAILURE, CREATING, DELETING.
                     * @param _status Domain name creation status. Valid values: SUCCESS, FAILURE, CREATING, DELETING.
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
                     * Instance ID
                     */
                    std::string m_registryId;
                    bool m_registryIdHasBeenSet;

                    /**
                     * Certificate ID
                     */
                    std::string m_certId;
                    bool m_certIdHasBeenSet;

                    /**
                     * Domain name
                     */
                    std::string m_domainName;
                    bool m_domainNameHasBeenSet;

                    /**
                     * Domain name creation status. Valid values: SUCCESS, FAILURE, CREATING, DELETING.
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCR_V20190924_MODEL_CUSTOMIZEDDOMAININFO_H_
