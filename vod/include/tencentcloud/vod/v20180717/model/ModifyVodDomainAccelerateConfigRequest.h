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
                     * 获取<p>Domains requiring acceleration configuration.</p>
                     * @return Domain <p>Domains requiring acceleration configuration.</p>
                     * 
                     */
                    std::string GetDomain() const;

                    /**
                     * 设置<p>Domains requiring acceleration configuration.</p>
                     * @param _domain <p>Domains requiring acceleration configuration.</p>
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
                     * 获取<p>Region. Available values:</p><li>Chinese Mainland: within the Chinese mainland (excluding Hong Kong (China), Macao (China), and Taiwan (China)).</li><li>Outside Chinese Mainland: outside the Chinese mainland.</li><li>Global: global.</li>
                     * @return Area <p>Region. Available values:</p><li>Chinese Mainland: within the Chinese mainland (excluding Hong Kong (China), Macao (China), and Taiwan (China)).</li><li>Outside Chinese Mainland: outside the Chinese mainland.</li><li>Global: global.</li>
                     * 
                     */
                    std::string GetArea() const;

                    /**
                     * 设置<p>Region. Available values:</p><li>Chinese Mainland: within the Chinese mainland (excluding Hong Kong (China), Macao (China), and Taiwan (China)).</li><li>Outside Chinese Mainland: outside the Chinese mainland.</li><li>Global: global.</li>
                     * @param _area <p>Region. Available values:</p><li>Chinese Mainland: within the Chinese mainland (excluding Hong Kong (China), Macao (China), and Taiwan (China)).</li><li>Outside Chinese Mainland: outside the Chinese mainland.</li><li>Global: global.</li>
                     * 
                     */
                    void SetArea(const std::string& _area);

                    /**
                     * 判断参数 Area 是否已赋值
                     * @return Area 是否已赋值
                     * 
                     */
                    bool AreaHasBeenSet() const;

                    /**
                     * 获取<p>Enable or disable domain name acceleration for the selected region. Available values:</p><li>Enabled: Enable.</li><li>Disabled: Disable.</li>To enable acceleration for domains within the Chinese mainland, you must first [register the domain name](https://www.tencentcloud.com/document/product/243/18905?from_cn_redirect=1).
                     * @return Status <p>Enable or disable domain name acceleration for the selected region. Available values:</p><li>Enabled: Enable.</li><li>Disabled: Disable.</li>To enable acceleration for domains within the Chinese mainland, you must first [register the domain name](https://www.tencentcloud.com/document/product/243/18905?from_cn_redirect=1).
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置<p>Enable or disable domain name acceleration for the selected region. Available values:</p><li>Enabled: Enable.</li><li>Disabled: Disable.</li>To enable acceleration for domains within the Chinese mainland, you must first [register the domain name](https://www.tencentcloud.com/document/product/243/18905?from_cn_redirect=1).
                     * @param _status <p>Enable or disable domain name acceleration for the selected region. Available values:</p><li>Enabled: Enable.</li><li>Disabled: Disable.</li>To enable acceleration for domains within the Chinese mainland, you must first [register the domain name](https://www.tencentcloud.com/document/product/243/18905?from_cn_redirect=1).
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
                     * 获取<p><b>Video-on-demand (VOD) <a href="https://www.tencentcloud.com/document/product/266/14574?from_cn_redirect=1">application</a> ID. For customers who activate VOD services from December 25, 2023, if they access resources in VOD applications (whether the default application or a newly created application), they must fill in this field with the application ID.</b></p>
                     * @return SubAppId <p><b>Video-on-demand (VOD) <a href="https://www.tencentcloud.com/document/product/266/14574?from_cn_redirect=1">application</a> ID. For customers who activate VOD services from December 25, 2023, if they access resources in VOD applications (whether the default application or a newly created application), they must fill in this field with the application ID.</b></p>
                     * 
                     */
                    uint64_t GetSubAppId() const;

                    /**
                     * 设置<p><b>Video-on-demand (VOD) <a href="https://www.tencentcloud.com/document/product/266/14574?from_cn_redirect=1">application</a> ID. For customers who activate VOD services from December 25, 2023, if they access resources in VOD applications (whether the default application or a newly created application), they must fill in this field with the application ID.</b></p>
                     * @param _subAppId <p><b>Video-on-demand (VOD) <a href="https://www.tencentcloud.com/document/product/266/14574?from_cn_redirect=1">application</a> ID. For customers who activate VOD services from December 25, 2023, if they access resources in VOD applications (whether the default application or a newly created application), they must fill in this field with the application ID.</b></p>
                     * 
                     */
                    void SetSubAppId(const uint64_t& _subAppId);

                    /**
                     * 判断参数 SubAppId 是否已赋值
                     * @return SubAppId 是否已赋值
                     * 
                     */
                    bool SubAppIdHasBeenSet() const;

                private:

                    /**
                     * <p>Domains requiring acceleration configuration.</p>
                     */
                    std::string m_domain;
                    bool m_domainHasBeenSet;

                    /**
                     * <p>Region. Available values:</p><li>Chinese Mainland: within the Chinese mainland (excluding Hong Kong (China), Macao (China), and Taiwan (China)).</li><li>Outside Chinese Mainland: outside the Chinese mainland.</li><li>Global: global.</li>
                     */
                    std::string m_area;
                    bool m_areaHasBeenSet;

                    /**
                     * <p>Enable or disable domain name acceleration for the selected region. Available values:</p><li>Enabled: Enable.</li><li>Disabled: Disable.</li>To enable acceleration for domains within the Chinese mainland, you must first [register the domain name](https://www.tencentcloud.com/document/product/243/18905?from_cn_redirect=1).
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p><b>Video-on-demand (VOD) <a href="https://www.tencentcloud.com/document/product/266/14574?from_cn_redirect=1">application</a> ID. For customers who activate VOD services from December 25, 2023, if they access resources in VOD applications (whether the default application or a newly created application), they must fill in this field with the application ID.</b></p>
                     */
                    uint64_t m_subAppId;
                    bool m_subAppIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_MODIFYVODDOMAINACCELERATECONFIGREQUEST_H_
