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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_VERIFYDOMAINRECORDREQUEST_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_VERIFYDOMAINRECORDREQUEST_H_

#include <string>
#include <vector>
#include <map>
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
                * VerifyDomainRecord request structure.
                */
                class VerifyDomainRecordRequest : public AbstractModel
                {
                public:
                    VerifyDomainRecordRequest();
                    ~VerifyDomainRecordRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Need to access the VOD acceleration domain name.
                     * @return Domain Need to access the VOD acceleration domain name.
                     * 
                     */
                    std::string GetDomain() const;

                    /**
                     * 设置Need to access the VOD acceleration domain name.
                     * @param _domain Need to access the VOD acceleration domain name.
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
                     * 获取<b>VOD [application](https://www.tencentcloud.com/document/product/266/14574?from_cn_redirect=1) ID. For customers who activate VOD services after December 25, 2024, they must fill this field with the app ID when accessing resources in on-demand applications (whether it's the default application or a newly created application).</b>	
                     * @return SubAppId <b>VOD [application](https://www.tencentcloud.com/document/product/266/14574?from_cn_redirect=1) ID. For customers who activate VOD services after December 25, 2024, they must fill this field with the app ID when accessing resources in on-demand applications (whether it's the default application or a newly created application).</b>	
                     * 
                     */
                    uint64_t GetSubAppId() const;

                    /**
                     * 设置<b>VOD [application](https://www.tencentcloud.com/document/product/266/14574?from_cn_redirect=1) ID. For customers who activate VOD services after December 25, 2024, they must fill this field with the app ID when accessing resources in on-demand applications (whether it's the default application or a newly created application).</b>	
                     * @param _subAppId <b>VOD [application](https://www.tencentcloud.com/document/product/266/14574?from_cn_redirect=1) ID. For customers who activate VOD services after December 25, 2024, they must fill this field with the app ID when accessing resources in on-demand applications (whether it's the default application or a newly created application).</b>	
                     * 
                     */
                    void SetSubAppId(const uint64_t& _subAppId);

                    /**
                     * 判断参数 SubAppId 是否已赋值
                     * @return SubAppId 是否已赋值
                     * 
                     */
                    bool SubAppIdHasBeenSet() const;

                    /**
                     * 获取VerifyType:
<li>dns: DNS Parse verification; </li>
<li>fIle: Document verification.</li>

Default value: dns.
                     * @return VerifyType VerifyType:
<li>dns: DNS Parse verification; </li>
<li>fIle: Document verification.</li>

Default value: dns.
                     * 
                     */
                    std::string GetVerifyType() const;

                    /**
                     * 设置VerifyType:
<li>dns: DNS Parse verification; </li>
<li>fIle: Document verification.</li>

Default value: dns.
                     * @param _verifyType VerifyType:
<li>dns: DNS Parse verification; </li>
<li>fIle: Document verification.</li>

Default value: dns.
                     * 
                     */
                    void SetVerifyType(const std::string& _verifyType);

                    /**
                     * 判断参数 VerifyType 是否已赋值
                     * @return VerifyType 是否已赋值
                     * 
                     */
                    bool VerifyTypeHasBeenSet() const;

                private:

                    /**
                     * Need to access the VOD acceleration domain name.
                     */
                    std::string m_domain;
                    bool m_domainHasBeenSet;

                    /**
                     * <b>VOD [application](https://www.tencentcloud.com/document/product/266/14574?from_cn_redirect=1) ID. For customers who activate VOD services after December 25, 2024, they must fill this field with the app ID when accessing resources in on-demand applications (whether it's the default application or a newly created application).</b>	
                     */
                    uint64_t m_subAppId;
                    bool m_subAppIdHasBeenSet;

                    /**
                     * VerifyType:
<li>dns: DNS Parse verification; </li>
<li>fIle: Document verification.</li>

Default value: dns.
                     */
                    std::string m_verifyType;
                    bool m_verifyTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_VERIFYDOMAINRECORDREQUEST_H_
