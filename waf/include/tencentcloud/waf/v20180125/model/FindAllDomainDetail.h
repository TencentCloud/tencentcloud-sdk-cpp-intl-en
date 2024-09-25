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

#ifndef TENCENTCLOUD_WAF_V20180125_MODEL_FINDALLDOMAINDETAIL_H_
#define TENCENTCLOUD_WAF_V20180125_MODEL_FINDALLDOMAINDETAIL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                * Domain name list
                */
                class FindAllDomainDetail : public AbstractModel
                {
                public:
                    FindAllDomainDetail();
                    ~FindAllDomainDetail() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取User ID
                     * @return Appid User ID
                     * 
                     */
                    uint64_t GetAppid() const;

                    /**
                     * 设置User ID
                     * @param _appid User ID
                     * 
                     */
                    void SetAppid(const uint64_t& _appid);

                    /**
                     * 判断参数 Appid 是否已赋值
                     * @return Appid 是否已赋值
                     * 
                     */
                    bool AppidHasBeenSet() const;

                    /**
                     * 获取Domain name
                     * @return Domain Domain name
                     * 
                     */
                    std::string GetDomain() const;

                    /**
                     * 设置Domain name
                     * @param _domain Domain name
                     * 
                     */
                    void SetDomain(const std::string& _domain);

                    /**
                     * 判断参数 Domain 是否已赋值
                     * @return Domain 是否已赋值
                     * 
                     */
                    bool DomainHasBeenSet() const;

                    /**
                     * 获取Domain IP
                     * @return Ips Domain IP
                     * 
                     */
                    std::vector<std::string> GetIps() const;

                    /**
                     * 设置Domain IP
                     * @param _ips Domain IP
                     * 
                     */
                    void SetIps(const std::vector<std::string>& _ips);

                    /**
                     * 判断参数 Ips 是否已赋值
                     * @return Ips 是否已赋值
                     * 
                     */
                    bool IpsHasBeenSet() const;

                    /**
                     * 获取Detection time
                     * @return FindTime Detection time
                     * 
                     */
                    std::string GetFindTime() const;

                    /**
                     * 设置Detection time
                     * @param _findTime Detection time
                     * 
                     */
                    void SetFindTime(const std::string& _findTime);

                    /**
                     * 判断参数 FindTime 是否已赋值
                     * @return FindTime 是否已赋值
                     * 
                     */
                    bool FindTimeHasBeenSet() const;

                    /**
                     * 获取Instance ID
                     * @return InstanceId Instance ID
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置Instance ID
                     * @param _instanceId Instance ID
                     * 
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取Domain ID
                     * @return DomainId Domain ID
                     * 
                     */
                    std::string GetDomainId() const;

                    /**
                     * 设置Domain ID
                     * @param _domainId Domain ID
                     * 
                     */
                    void SetDomainId(const std::string& _domainId);

                    /**
                     * 判断参数 DomainId 是否已赋值
                     * @return DomainId 是否已赋值
                     * 
                     */
                    bool DomainIdHasBeenSet() const;

                    /**
                     * 获取WAF type
                     * @return Edition WAF type
                     * 
                     */
                    std::string GetEdition() const;

                    /**
                     * 设置WAF type
                     * @param _edition WAF type
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
                     * 获取Whether to access WAF
                     * @return IsWafDomain Whether to access WAF
                     * 
                     */
                    uint64_t GetIsWafDomain() const;

                    /**
                     * 设置Whether to access WAF
                     * @param _isWafDomain Whether to access WAF
                     * 
                     */
                    void SetIsWafDomain(const uint64_t& _isWafDomain);

                    /**
                     * 判断参数 IsWafDomain 是否已赋值
                     * @return IsWafDomain 是否已赋值
                     * 
                     */
                    bool IsWafDomainHasBeenSet() const;

                private:

                    /**
                     * User ID
                     */
                    uint64_t m_appid;
                    bool m_appidHasBeenSet;

                    /**
                     * Domain name
                     */
                    std::string m_domain;
                    bool m_domainHasBeenSet;

                    /**
                     * Domain IP
                     */
                    std::vector<std::string> m_ips;
                    bool m_ipsHasBeenSet;

                    /**
                     * Detection time
                     */
                    std::string m_findTime;
                    bool m_findTimeHasBeenSet;

                    /**
                     * Instance ID
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * Domain ID
                     */
                    std::string m_domainId;
                    bool m_domainIdHasBeenSet;

                    /**
                     * WAF type
                     */
                    std::string m_edition;
                    bool m_editionHasBeenSet;

                    /**
                     * Whether to access WAF
                     */
                    uint64_t m_isWafDomain;
                    bool m_isWafDomainHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WAF_V20180125_MODEL_FINDALLDOMAINDETAIL_H_
