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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_SETAIGCWHITELISTREQUEST_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_SETAIGCWHITELISTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vod/v20180717/model/AigcWhitelistModel.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
        {
            namespace Model
            {
                /**
                * SetAigcWhitelist request structure.
                */
                class SetAigcWhitelistRequest : public AbstractModel
                {
                public:
                    SetAigcWhitelistRequest();
                    ~SetAigcWhitelistRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p><b>VOD <a href="https://www.tencentcloud.com/document/product/266/14574?from_cn_redirect=1">application</a> ID. For customers who activate VOD after December 25, 2023, this field must be set to the application ID when accessing resources in a VOD application (whether the default application or a newly created application).</b></p>
                     * @return SubAppId <p><b>VOD <a href="https://www.tencentcloud.com/document/product/266/14574?from_cn_redirect=1">application</a> ID. For customers who activate VOD after December 25, 2023, this field must be set to the application ID when accessing resources in a VOD application (whether the default application or a newly created application).</b></p>
                     * 
                     */
                    uint64_t GetSubAppId() const;

                    /**
                     * 设置<p><b>VOD <a href="https://www.tencentcloud.com/document/product/266/14574?from_cn_redirect=1">application</a> ID. For customers who activate VOD after December 25, 2023, this field must be set to the application ID when accessing resources in a VOD application (whether the default application or a newly created application).</b></p>
                     * @param _subAppId <p><b>VOD <a href="https://www.tencentcloud.com/document/product/266/14574?from_cn_redirect=1">application</a> ID. For customers who activate VOD after December 25, 2023, this field must be set to the application ID when accessing resources in a VOD application (whether the default application or a newly created application).</b></p>
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
                     * 获取<p>AIGC task type</p><p>Valid values:</p><ul><li>Image: AIGC image generation task</li><li>Video: AIGC video generation task</li></ul>
                     * @return AigcType <p>AIGC task type</p><p>Valid values:</p><ul><li>Image: AIGC image generation task</li><li>Video: AIGC video generation task</li></ul>
                     * 
                     */
                    std::string GetAigcType() const;

                    /**
                     * 设置<p>AIGC task type</p><p>Valid values:</p><ul><li>Image: AIGC image generation task</li><li>Video: AIGC video generation task</li></ul>
                     * @param _aigcType <p>AIGC task type</p><p>Valid values:</p><ul><li>Image: AIGC image generation task</li><li>Video: AIGC video generation task</li></ul>
                     * 
                     */
                    void SetAigcType(const std::string& _aigcType);

                    /**
                     * 判断参数 AigcType 是否已赋值
                     * @return AigcType 是否已赋值
                     * 
                     */
                    bool AigcTypeHasBeenSet() const;

                    /**
                     * 获取<p>Model allowlist switch</p><p>Valid values:</p><ul><li>ON: Enabled. Only models listed in ModelWhitelist can be called.</li><li>OFF: Disabled. All models can be called.</li></ul>
                     * @return ModelWhitelistSwitch <p>Model allowlist switch</p><p>Valid values:</p><ul><li>ON: Enabled. Only models listed in ModelWhitelist can be called.</li><li>OFF: Disabled. All models can be called.</li></ul>
                     * 
                     */
                    std::string GetModelWhitelistSwitch() const;

                    /**
                     * 设置<p>Model allowlist switch</p><p>Valid values:</p><ul><li>ON: Enabled. Only models listed in ModelWhitelist can be called.</li><li>OFF: Disabled. All models can be called.</li></ul>
                     * @param _modelWhitelistSwitch <p>Model allowlist switch</p><p>Valid values:</p><ul><li>ON: Enabled. Only models listed in ModelWhitelist can be called.</li><li>OFF: Disabled. All models can be called.</li></ul>
                     * 
                     */
                    void SetModelWhitelistSwitch(const std::string& _modelWhitelistSwitch);

                    /**
                     * 判断参数 ModelWhitelistSwitch 是否已赋值
                     * @return ModelWhitelistSwitch 是否已赋值
                     * 
                     */
                    bool ModelWhitelistSwitchHasBeenSet() const;

                    /**
                     * 获取<p>IP allowlist switch</p><p>Valid values:</p><ul><li>ON: Enabled. Only IP ranges listed in IpWhitelist are allowed to call.</li><li>OFF: Disabled. All IPs are allowed to call.</li></ul>
                     * @return IpWhitelistSwitch <p>IP allowlist switch</p><p>Valid values:</p><ul><li>ON: Enabled. Only IP ranges listed in IpWhitelist are allowed to call.</li><li>OFF: Disabled. All IPs are allowed to call.</li></ul>
                     * 
                     */
                    std::string GetIpWhitelistSwitch() const;

                    /**
                     * 设置<p>IP allowlist switch</p><p>Valid values:</p><ul><li>ON: Enabled. Only IP ranges listed in IpWhitelist are allowed to call.</li><li>OFF: Disabled. All IPs are allowed to call.</li></ul>
                     * @param _ipWhitelistSwitch <p>IP allowlist switch</p><p>Valid values:</p><ul><li>ON: Enabled. Only IP ranges listed in IpWhitelist are allowed to call.</li><li>OFF: Disabled. All IPs are allowed to call.</li></ul>
                     * 
                     */
                    void SetIpWhitelistSwitch(const std::string& _ipWhitelistSwitch);

                    /**
                     * 判断参数 IpWhitelistSwitch 是否已赋值
                     * @return IpWhitelistSwitch 是否已赋值
                     * 
                     */
                    bool IpWhitelistSwitchHasBeenSet() const;

                    /**
                     * 获取<p>Model allowlist</p>
                     * @return ModelWhitelist <p>Model allowlist</p>
                     * 
                     */
                    std::vector<AigcWhitelistModel> GetModelWhitelist() const;

                    /**
                     * 设置<p>Model allowlist</p>
                     * @param _modelWhitelist <p>Model allowlist</p>
                     * 
                     */
                    void SetModelWhitelist(const std::vector<AigcWhitelistModel>& _modelWhitelist);

                    /**
                     * 判断参数 ModelWhitelist 是否已赋值
                     * @return ModelWhitelist 是否已赋值
                     * 
                     */
                    bool ModelWhitelistHasBeenSet() const;

                    /**
                     * 获取<p>CIDR list of the IP allowlist</p>
                     * @return IpWhitelist <p>CIDR list of the IP allowlist</p>
                     * 
                     */
                    std::vector<std::string> GetIpWhitelist() const;

                    /**
                     * 设置<p>CIDR list of the IP allowlist</p>
                     * @param _ipWhitelist <p>CIDR list of the IP allowlist</p>
                     * 
                     */
                    void SetIpWhitelist(const std::vector<std::string>& _ipWhitelist);

                    /**
                     * 判断参数 IpWhitelist 是否已赋值
                     * @return IpWhitelist 是否已赋值
                     * 
                     */
                    bool IpWhitelistHasBeenSet() const;

                private:

                    /**
                     * <p><b>VOD <a href="https://www.tencentcloud.com/document/product/266/14574?from_cn_redirect=1">application</a> ID. For customers who activate VOD after December 25, 2023, this field must be set to the application ID when accessing resources in a VOD application (whether the default application or a newly created application).</b></p>
                     */
                    uint64_t m_subAppId;
                    bool m_subAppIdHasBeenSet;

                    /**
                     * <p>AIGC task type</p><p>Valid values:</p><ul><li>Image: AIGC image generation task</li><li>Video: AIGC video generation task</li></ul>
                     */
                    std::string m_aigcType;
                    bool m_aigcTypeHasBeenSet;

                    /**
                     * <p>Model allowlist switch</p><p>Valid values:</p><ul><li>ON: Enabled. Only models listed in ModelWhitelist can be called.</li><li>OFF: Disabled. All models can be called.</li></ul>
                     */
                    std::string m_modelWhitelistSwitch;
                    bool m_modelWhitelistSwitchHasBeenSet;

                    /**
                     * <p>IP allowlist switch</p><p>Valid values:</p><ul><li>ON: Enabled. Only IP ranges listed in IpWhitelist are allowed to call.</li><li>OFF: Disabled. All IPs are allowed to call.</li></ul>
                     */
                    std::string m_ipWhitelistSwitch;
                    bool m_ipWhitelistSwitchHasBeenSet;

                    /**
                     * <p>Model allowlist</p>
                     */
                    std::vector<AigcWhitelistModel> m_modelWhitelist;
                    bool m_modelWhitelistHasBeenSet;

                    /**
                     * <p>CIDR list of the IP allowlist</p>
                     */
                    std::vector<std::string> m_ipWhitelist;
                    bool m_ipWhitelistHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_SETAIGCWHITELISTREQUEST_H_
