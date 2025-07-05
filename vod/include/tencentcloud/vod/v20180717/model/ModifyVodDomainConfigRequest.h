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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_MODIFYVODDOMAINCONFIGREQUEST_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_MODIFYVODDOMAINCONFIGREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vod/v20180717/model/RefererAuthPolicy.h>
#include <tencentcloud/vod/v20180717/model/UrlSignatureAuthPolicy.h>
#include <tencentcloud/vod/v20180717/model/DomainQUICConfig.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
        {
            namespace Model
            {
                /**
                * ModifyVodDomainConfig request structure.
                */
                class ModifyVodDomainConfigRequest : public AbstractModel
                {
                public:
                    ModifyVodDomainConfigRequest();
                    ~ModifyVodDomainConfigRequest() = default;
                    std::string ToJsonString() const;


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
                     * 获取<b>The VOD [application](https://intl.cloud.tencent.com/document/product/266/14574) ID. For customers who activate VOD service from December 25, 2023, if they want to access resources in a VOD application (whether it's the default application or a newly created one), they must fill in this field with the application ID.</b>
                     * @return SubAppId <b>The VOD [application](https://intl.cloud.tencent.com/document/product/266/14574) ID. For customers who activate VOD service from December 25, 2023, if they want to access resources in a VOD application (whether it's the default application or a newly created one), they must fill in this field with the application ID.</b>
                     * 
                     */
                    uint64_t GetSubAppId() const;

                    /**
                     * 设置<b>The VOD [application](https://intl.cloud.tencent.com/document/product/266/14574) ID. For customers who activate VOD service from December 25, 2023, if they want to access resources in a VOD application (whether it's the default application or a newly created one), they must fill in this field with the application ID.</b>
                     * @param _subAppId <b>The VOD [application](https://intl.cloud.tencent.com/document/product/266/14574) ID. For customers who activate VOD service from December 25, 2023, if they want to access resources in a VOD application (whether it's the default application or a newly created one), they must fill in this field with the application ID.</b>
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
                     * 获取[Referer hotlink protection](https://intl.cloud.tencent.com/document/product/266/14046?from_cn_redirect=1) policy
                     * @return RefererAuthPolicy [Referer hotlink protection](https://intl.cloud.tencent.com/document/product/266/14046?from_cn_redirect=1) policy
                     * 
                     */
                    RefererAuthPolicy GetRefererAuthPolicy() const;

                    /**
                     * 设置[Referer hotlink protection](https://intl.cloud.tencent.com/document/product/266/14046?from_cn_redirect=1) policy
                     * @param _refererAuthPolicy [Referer hotlink protection](https://intl.cloud.tencent.com/document/product/266/14046?from_cn_redirect=1) policy
                     * 
                     */
                    void SetRefererAuthPolicy(const RefererAuthPolicy& _refererAuthPolicy);

                    /**
                     * 判断参数 RefererAuthPolicy 是否已赋值
                     * @return RefererAuthPolicy 是否已赋值
                     * 
                     */
                    bool RefererAuthPolicyHasBeenSet() const;

                    /**
                     * 获取[Key hotlink protection](https://intl.cloud.tencent.com/document/product/266/14047?from_cn_redirect=1) policy
                     * @return UrlSignatureAuthPolicy [Key hotlink protection](https://intl.cloud.tencent.com/document/product/266/14047?from_cn_redirect=1) policy
                     * 
                     */
                    UrlSignatureAuthPolicy GetUrlSignatureAuthPolicy() const;

                    /**
                     * 设置[Key hotlink protection](https://intl.cloud.tencent.com/document/product/266/14047?from_cn_redirect=1) policy
                     * @param _urlSignatureAuthPolicy [Key hotlink protection](https://intl.cloud.tencent.com/document/product/266/14047?from_cn_redirect=1) policy
                     * 
                     */
                    void SetUrlSignatureAuthPolicy(const UrlSignatureAuthPolicy& _urlSignatureAuthPolicy);

                    /**
                     * 判断参数 UrlSignatureAuthPolicy 是否已赋值
                     * @return UrlSignatureAuthPolicy 是否已赋值
                     * 
                     */
                    bool UrlSignatureAuthPolicyHasBeenSet() const;

                    /**
                     * 获取The QUIC configuration.
                     * @return QUICConfig The QUIC configuration.
                     * 
                     */
                    DomainQUICConfig GetQUICConfig() const;

                    /**
                     * 设置The QUIC configuration.
                     * @param _qUICConfig The QUIC configuration.
                     * 
                     */
                    void SetQUICConfig(const DomainQUICConfig& _qUICConfig);

                    /**
                     * 判断参数 QUICConfig 是否已赋值
                     * @return QUICConfig 是否已赋值
                     * 
                     */
                    bool QUICConfigHasBeenSet() const;

                private:

                    /**
                     * Domain name
                     */
                    std::string m_domain;
                    bool m_domainHasBeenSet;

                    /**
                     * <b>The VOD [application](https://intl.cloud.tencent.com/document/product/266/14574) ID. For customers who activate VOD service from December 25, 2023, if they want to access resources in a VOD application (whether it's the default application or a newly created one), they must fill in this field with the application ID.</b>
                     */
                    uint64_t m_subAppId;
                    bool m_subAppIdHasBeenSet;

                    /**
                     * [Referer hotlink protection](https://intl.cloud.tencent.com/document/product/266/14046?from_cn_redirect=1) policy
                     */
                    RefererAuthPolicy m_refererAuthPolicy;
                    bool m_refererAuthPolicyHasBeenSet;

                    /**
                     * [Key hotlink protection](https://intl.cloud.tencent.com/document/product/266/14047?from_cn_redirect=1) policy
                     */
                    UrlSignatureAuthPolicy m_urlSignatureAuthPolicy;
                    bool m_urlSignatureAuthPolicyHasBeenSet;

                    /**
                     * The QUIC configuration.
                     */
                    DomainQUICConfig m_qUICConfig;
                    bool m_qUICConfigHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_MODIFYVODDOMAINCONFIGREQUEST_H_
