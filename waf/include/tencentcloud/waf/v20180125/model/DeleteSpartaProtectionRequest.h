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

#ifndef TENCENTCLOUD_WAF_V20180125_MODEL_DELETESPARTAPROTECTIONREQUEST_H_
#define TENCENTCLOUD_WAF_V20180125_MODEL_DELETESPARTAPROTECTIONREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Waf
    {
        namespace V20180125
        {
            namespace Model
            {
                /**
                * DeleteSpartaProtection request structure.
                */
                class DeleteSpartaProtectionRequest : public AbstractModel
                {
                public:
                    DeleteSpartaProtectionRequest();
                    ~DeleteSpartaProtectionRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Domain name list
                     * @return Domains Domain name list
                     * 
                     */
                    std::vector<std::string> GetDomains() const;

                    /**
                     * 设置Domain name list
                     * @param _domains Domain name list
                     * 
                     */
                    void SetDomains(const std::vector<std::string>& _domains);

                    /**
                     * 判断参数 Domains 是否已赋值
                     * @return Domains 是否已赋值
                     * 
                     */
                    bool DomainsHasBeenSet() const;

                    /**
                     * 获取Instance type
                     * @return Edition Instance type
                     * 
                     */
                    std::string GetEdition() const;

                    /**
                     * 设置Instance type
                     * @param _edition Instance type
                     * 
                     */
                    void SetEdition(const std::string& _edition);

                    /**
                     * 判断参数 Edition 是否已赋值
                     * @return Edition 是否已赋值
                     * 
                     */
                    bool EditionHasBeenSet() const;

                    /**
                     * 获取(Required) Instance ID of the domain name
                     * @return InstanceID (Required) Instance ID of the domain name
                     * 
                     */
                    std::string GetInstanceID() const;

                    /**
                     * 设置(Required) Instance ID of the domain name
                     * @param _instanceID (Required) Instance ID of the domain name
                     * 
                     */
                    void SetInstanceID(const std::string& _instanceID);

                    /**
                     * 判断参数 InstanceID 是否已赋值
                     * @return InstanceID 是否已赋值
                     * 
                     */
                    bool InstanceIDHasBeenSet() const;

                private:

                    /**
                     * Domain name list
                     */
                    std::vector<std::string> m_domains;
                    bool m_domainsHasBeenSet;

                    /**
                     * Instance type
                     */
                    std::string m_edition;
                    bool m_editionHasBeenSet;

                    /**
                     * (Required) Instance ID of the domain name
                     */
                    std::string m_instanceID;
                    bool m_instanceIDHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WAF_V20180125_MODEL_DELETESPARTAPROTECTIONREQUEST_H_
