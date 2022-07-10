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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_MODIFYVODDOMAINACCELERATECONFIGREQUEST_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_MODIFYVODDOMAINACCELERATECONFIGREQUEST_H_

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
                * ModifyVodDomainAccelerateConfig request structure.
                */
                class ModifyVodDomainAccelerateConfigRequest : public AbstractModel
                {
                public:
                    ModifyVodDomainAccelerateConfigRequest();
                    ~ModifyVodDomainAccelerateConfigRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Domain name for acceleration setting
                     * @return Domain Domain name for acceleration setting
                     */
                    std::string GetDomain() const;

                    /**
                     * 设置Domain name for acceleration setting
                     * @param Domain Domain name for acceleration setting
                     */
                    void SetDomain(const std::string& _domain);

                    /**
                     * 判断参数 Domain 是否已赋值
                     * @return Domain 是否已赋值
                     */
                    bool DomainHasBeenSet() const;

                    /**
                     * 获取Region. Valid values:
<li>`Chinese Mainland`</li>
<li>`Outside Chinese Mainland`</li>
<li>`Global`</li>
                     * @return Area Region. Valid values:
<li>`Chinese Mainland`</li>
<li>`Outside Chinese Mainland`</li>
<li>`Global`</li>
                     */
                    std::string GetArea() const;

                    /**
                     * 设置Region. Valid values:
<li>`Chinese Mainland`</li>
<li>`Outside Chinese Mainland`</li>
<li>`Global`</li>
                     * @param Area Region. Valid values:
<li>`Chinese Mainland`</li>
<li>`Outside Chinese Mainland`</li>
<li>`Global`</li>
                     */
                    void SetArea(const std::string& _area);

                    /**
                     * 判断参数 Area 是否已赋值
                     * @return Area 是否已赋值
                     */
                    bool AreaHasBeenSet() const;

                    /**
                     * 获取Whether to enable or disable domain name acceleration for the selected region. Valid values:
<li>`Enabled`: enable</li>
<li>`Disabled`: disable</li>
                     * @return Status Whether to enable or disable domain name acceleration for the selected region. Valid values:
<li>`Enabled`: enable</li>
<li>`Disabled`: disable</li>
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置Whether to enable or disable domain name acceleration for the selected region. Valid values:
<li>`Enabled`: enable</li>
<li>`Disabled`: disable</li>
                     * @param Status Whether to enable or disable domain name acceleration for the selected region. Valid values:
<li>`Enabled`: enable</li>
<li>`Disabled`: disable</li>
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取<b>The VOD [subapplication](https://intl.cloud.tencent.com/document/product/266/14574?from_cn_redirect=1) ID. If you need to access a resource in a subapplication, set this parameter to the subapplication ID; otherwise, leave it empty.</b>
                     * @return SubAppId <b>The VOD [subapplication](https://intl.cloud.tencent.com/document/product/266/14574?from_cn_redirect=1) ID. If you need to access a resource in a subapplication, set this parameter to the subapplication ID; otherwise, leave it empty.</b>
                     */
                    uint64_t GetSubAppId() const;

                    /**
                     * 设置<b>The VOD [subapplication](https://intl.cloud.tencent.com/document/product/266/14574?from_cn_redirect=1) ID. If you need to access a resource in a subapplication, set this parameter to the subapplication ID; otherwise, leave it empty.</b>
                     * @param SubAppId <b>The VOD [subapplication](https://intl.cloud.tencent.com/document/product/266/14574?from_cn_redirect=1) ID. If you need to access a resource in a subapplication, set this parameter to the subapplication ID; otherwise, leave it empty.</b>
                     */
                    void SetSubAppId(const uint64_t& _subAppId);

                    /**
                     * 判断参数 SubAppId 是否已赋值
                     * @return SubAppId 是否已赋值
                     */
                    bool SubAppIdHasBeenSet() const;

                private:

                    /**
                     * Domain name for acceleration setting
                     */
                    std::string m_domain;
                    bool m_domainHasBeenSet;

                    /**
                     * Region. Valid values:
<li>`Chinese Mainland`</li>
<li>`Outside Chinese Mainland`</li>
<li>`Global`</li>
                     */
                    std::string m_area;
                    bool m_areaHasBeenSet;

                    /**
                     * Whether to enable or disable domain name acceleration for the selected region. Valid values:
<li>`Enabled`: enable</li>
<li>`Disabled`: disable</li>
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <b>The VOD [subapplication](https://intl.cloud.tencent.com/document/product/266/14574?from_cn_redirect=1) ID. If you need to access a resource in a subapplication, set this parameter to the subapplication ID; otherwise, leave it empty.</b>
                     */
                    uint64_t m_subAppId;
                    bool m_subAppIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_MODIFYVODDOMAINACCELERATECONFIGREQUEST_H_
