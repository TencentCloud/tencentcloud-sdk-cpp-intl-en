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
#include <tencentcloud/vod/v20180717/model/IPFilterPolicy.h>


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
                     * 获取
                     * @return Domain 
                     * 
                     */
                    std::string GetDomain() const;

                    /**
                     * 设置
                     * @param _domain 
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
                     * 获取
                     * @return SubAppId 
                     * 
                     */
                    uint64_t GetSubAppId() const;

                    /**
                     * 设置
                     * @param _subAppId 
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
                     * 获取
                     * @return RefererAuthPolicy 
                     * 
                     */
                    RefererAuthPolicy GetRefererAuthPolicy() const;

                    /**
                     * 设置
                     * @param _refererAuthPolicy 
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
                     * 获取
                     * @return UrlSignatureAuthPolicy 
                     * 
                     */
                    UrlSignatureAuthPolicy GetUrlSignatureAuthPolicy() const;

                    /**
                     * 设置
                     * @param _urlSignatureAuthPolicy 
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
                     * 获取
                     * @return QUICConfig 
                     * 
                     */
                    DomainQUICConfig GetQUICConfig() const;

                    /**
                     * 设置
                     * @param _qUICConfig 
                     * 
                     */
                    void SetQUICConfig(const DomainQUICConfig& _qUICConfig);

                    /**
                     * 判断参数 QUICConfig 是否已赋值
                     * @return QUICConfig 是否已赋值
                     * 
                     */
                    bool QUICConfigHasBeenSet() const;

                    /**
                     * 获取
                     * @return IPFilterPolicy 
                     * 
                     */
                    IPFilterPolicy GetIPFilterPolicy() const;

                    /**
                     * 设置
                     * @param _iPFilterPolicy 
                     * 
                     */
                    void SetIPFilterPolicy(const IPFilterPolicy& _iPFilterPolicy);

                    /**
                     * 判断参数 IPFilterPolicy 是否已赋值
                     * @return IPFilterPolicy 是否已赋值
                     * 
                     */
                    bool IPFilterPolicyHasBeenSet() const;

                private:

                    /**
                     * 
                     */
                    std::string m_domain;
                    bool m_domainHasBeenSet;

                    /**
                     * 
                     */
                    uint64_t m_subAppId;
                    bool m_subAppIdHasBeenSet;

                    /**
                     * 
                     */
                    RefererAuthPolicy m_refererAuthPolicy;
                    bool m_refererAuthPolicyHasBeenSet;

                    /**
                     * 
                     */
                    UrlSignatureAuthPolicy m_urlSignatureAuthPolicy;
                    bool m_urlSignatureAuthPolicyHasBeenSet;

                    /**
                     * 
                     */
                    DomainQUICConfig m_qUICConfig;
                    bool m_qUICConfigHasBeenSet;

                    /**
                     * 
                     */
                    IPFilterPolicy m_iPFilterPolicy;
                    bool m_iPFilterPolicyHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_MODIFYVODDOMAINCONFIGREQUEST_H_
