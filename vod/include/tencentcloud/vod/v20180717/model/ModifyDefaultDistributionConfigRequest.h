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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_MODIFYDEFAULTDISTRIBUTIONCONFIGREQUEST_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_MODIFYDEFAULTDISTRIBUTIONCONFIGREQUEST_H_

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
                * ModifyDefaultDistributionConfig request structure.
                */
                class ModifyDefaultDistributionConfigRequest : public AbstractModel
                {
                public:
                    ModifyDefaultDistributionConfigRequest();
                    ~ModifyDefaultDistributionConfigRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<b>ID of the on-demand [application](https://www.tencentcloud.com/document/product/266/14574?from_cn_redirect=1). For customers who activate on-demand services after December 25, 2023, this field must be set to the app ID when accessing resources in on-demand applications (whether the default application or a newly created application).</b>
                     * @return SubAppId <b>ID of the on-demand [application](https://www.tencentcloud.com/document/product/266/14574?from_cn_redirect=1). For customers who activate on-demand services after December 25, 2023, this field must be set to the app ID when accessing resources in on-demand applications (whether the default application or a newly created application).</b>
                     * 
                     */
                    uint64_t GetSubAppId() const;

                    /**
                     * 设置<b>ID of the on-demand [application](https://www.tencentcloud.com/document/product/266/14574?from_cn_redirect=1). For customers who activate on-demand services after December 25, 2023, this field must be set to the app ID when accessing resources in on-demand applications (whether the default application or a newly created application).</b>
                     * @param _subAppId <b>ID of the on-demand [application](https://www.tencentcloud.com/document/product/266/14574?from_cn_redirect=1). For customers who activate on-demand services after December 25, 2023, this field must be set to the app ID when accessing resources in on-demand applications (whether the default application or a newly created application).</b>
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
                     * 获取Distribution domain name. The value is a domain name in the VOD domain name list. Leave it empty or fill in a blank to indicate no domain name modification.
                     * @return Domain Distribution domain name. The value is a domain name in the VOD domain name list. Leave it empty or fill in a blank to indicate no domain name modification.
                     * 
                     */
                    std::string GetDomain() const;

                    /**
                     * 设置Distribution domain name. The value is a domain name in the VOD domain name list. Leave it empty or fill in a blank to indicate no domain name modification.
                     * @param _domain Distribution domain name. The value is a domain name in the VOD domain name list. Leave it empty or fill in a blank to indicate no domain name modification.
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
                     * 获取Distribution protocol. Value: HTTP or HTTPS.
                     * @return Scheme Distribution protocol. Value: HTTP or HTTPS.
                     * 
                     */
                    std::string GetScheme() const;

                    /**
                     * 设置Distribution protocol. Value: HTTP or HTTPS.
                     * @param _scheme Distribution protocol. Value: HTTP or HTTPS.
                     * 
                     */
                    void SetScheme(const std::string& _scheme);

                    /**
                     * 判断参数 Scheme 是否已赋值
                     * @return Scheme 是否已赋值
                     * 
                     */
                    bool SchemeHasBeenSet() const;

                    /**
                     * 获取Playback key, consisting of upper- and lower-case letters (a - Z) or numbers (0 - 9), with a length between 8 and 20 characters.
                     * @return PlayKey Playback key, consisting of upper- and lower-case letters (a - Z) or numbers (0 - 9), with a length between 8 and 20 characters.
                     * 
                     */
                    std::string GetPlayKey() const;

                    /**
                     * 设置Playback key, consisting of upper- and lower-case letters (a - Z) or numbers (0 - 9), with a length between 8 and 20 characters.
                     * @param _playKey Playback key, consisting of upper- and lower-case letters (a - Z) or numbers (0 - 9), with a length between 8 and 20 characters.
                     * 
                     */
                    void SetPlayKey(const std::string& _playKey);

                    /**
                     * 判断参数 PlayKey 是否已赋值
                     * @return PlayKey 是否已赋值
                     * 
                     */
                    bool PlayKeyHasBeenSet() const;

                private:

                    /**
                     * <b>ID of the on-demand [application](https://www.tencentcloud.com/document/product/266/14574?from_cn_redirect=1). For customers who activate on-demand services after December 25, 2023, this field must be set to the app ID when accessing resources in on-demand applications (whether the default application or a newly created application).</b>
                     */
                    uint64_t m_subAppId;
                    bool m_subAppIdHasBeenSet;

                    /**
                     * Distribution domain name. The value is a domain name in the VOD domain name list. Leave it empty or fill in a blank to indicate no domain name modification.
                     */
                    std::string m_domain;
                    bool m_domainHasBeenSet;

                    /**
                     * Distribution protocol. Value: HTTP or HTTPS.
                     */
                    std::string m_scheme;
                    bool m_schemeHasBeenSet;

                    /**
                     * Playback key, consisting of upper- and lower-case letters (a - Z) or numbers (0 - 9), with a length between 8 and 20 characters.
                     */
                    std::string m_playKey;
                    bool m_playKeyHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_MODIFYDEFAULTDISTRIBUTIONCONFIGREQUEST_H_
