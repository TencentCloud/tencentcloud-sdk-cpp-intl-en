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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_CREATEVODDOMAINREQUEST_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_CREATEVODDOMAINREQUEST_H_

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
                * CreateVodDomain request structure.
                */
                class CreateVodDomainRequest : public AbstractModel
                {
                public:
                    CreateVodDomainRequest();
                    ~CreateVodDomainRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Domain name for on-demand acceleration. Note: Filling in wildcard domains is not supported.
                     * @return Domain Domain name for on-demand acceleration. Note: Filling in wildcard domains is not supported.
                     * 
                     */
                    std::string GetDomain() const;

                    /**
                     * 设置Domain name for on-demand acceleration. Note: Filling in wildcard domains is not supported.
                     * @param _domain Domain name for on-demand acceleration. Note: Filling in wildcard domains is not supported.
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
                     * 获取Regions where CDN acceleration needs to be enabled:
<li>Chinese Mainland: within the Chinese mainland (excluding Hong Kong (China), Macao (China), and Taiwan (China)).</li>
<li>Outside Chinese Mainland: outside the Chinese mainland.</li>
<li>Global: around the world.</li>
If AccelerateArea is not set, VOD will automatically activate CDN acceleration within or outside the Chinese mainland based on the user's regional information in Tencent Cloud Settings. To enable CDN acceleration within the Chinese mainland, the domain must be [ICP filed](https://www.tencentcloud.com/document/product/243/18905?from_cn_redirect=1) first.
                     * @return AccelerateArea Regions where CDN acceleration needs to be enabled:
<li>Chinese Mainland: within the Chinese mainland (excluding Hong Kong (China), Macao (China), and Taiwan (China)).</li>
<li>Outside Chinese Mainland: outside the Chinese mainland.</li>
<li>Global: around the world.</li>
If AccelerateArea is not set, VOD will automatically activate CDN acceleration within or outside the Chinese mainland based on the user's regional information in Tencent Cloud Settings. To enable CDN acceleration within the Chinese mainland, the domain must be [ICP filed](https://www.tencentcloud.com/document/product/243/18905?from_cn_redirect=1) first.
                     * 
                     */
                    std::string GetAccelerateArea() const;

                    /**
                     * 设置Regions where CDN acceleration needs to be enabled:
<li>Chinese Mainland: within the Chinese mainland (excluding Hong Kong (China), Macao (China), and Taiwan (China)).</li>
<li>Outside Chinese Mainland: outside the Chinese mainland.</li>
<li>Global: around the world.</li>
If AccelerateArea is not set, VOD will automatically activate CDN acceleration within or outside the Chinese mainland based on the user's regional information in Tencent Cloud Settings. To enable CDN acceleration within the Chinese mainland, the domain must be [ICP filed](https://www.tencentcloud.com/document/product/243/18905?from_cn_redirect=1) first.
                     * @param _accelerateArea Regions where CDN acceleration needs to be enabled:
<li>Chinese Mainland: within the Chinese mainland (excluding Hong Kong (China), Macao (China), and Taiwan (China)).</li>
<li>Outside Chinese Mainland: outside the Chinese mainland.</li>
<li>Global: around the world.</li>
If AccelerateArea is not set, VOD will automatically activate CDN acceleration within or outside the Chinese mainland based on the user's regional information in Tencent Cloud Settings. To enable CDN acceleration within the Chinese mainland, the domain must be [ICP filed](https://www.tencentcloud.com/document/product/243/18905?from_cn_redirect=1) first.
                     * 
                     */
                    void SetAccelerateArea(const std::string& _accelerateArea);

                    /**
                     * 判断参数 AccelerateArea 是否已赋值
                     * @return AccelerateArea 是否已赋值
                     * 
                     */
                    bool AccelerateAreaHasBeenSet() const;

                    /**
                     * 获取Domain type. Valid values: <li>VOD: domain name used to distribute VOD products</li> <li>EdgeOne: domain name used to distribute EdgeOne products</li> If not specified, the default value is VOD.
                     * @return Type Domain type. Valid values: <li>VOD: domain name used to distribute VOD products</li> <li>EdgeOne: domain name used to distribute EdgeOne products</li> If not specified, the default value is VOD.
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置Domain type. Valid values: <li>VOD: domain name used to distribute VOD products</li> <li>EdgeOne: domain name used to distribute EdgeOne products</li> If not specified, the default value is VOD.
                     * @param _type Domain type. Valid values: <li>VOD: domain name used to distribute VOD products</li> <li>EdgeOne: domain name used to distribute EdgeOne products</li> If not specified, the default value is VOD.
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                private:

                    /**
                     * Domain name for on-demand acceleration. Note: Filling in wildcard domains is not supported.
                     */
                    std::string m_domain;
                    bool m_domainHasBeenSet;

                    /**
                     * <b>ID of the on-demand [application](https://www.tencentcloud.com/document/product/266/14574?from_cn_redirect=1). For customers who activate on-demand services after December 25, 2023, this field must be set to the app ID when accessing resources in on-demand applications (whether the default application or a newly created application).</b>
                     */
                    uint64_t m_subAppId;
                    bool m_subAppIdHasBeenSet;

                    /**
                     * Regions where CDN acceleration needs to be enabled:
<li>Chinese Mainland: within the Chinese mainland (excluding Hong Kong (China), Macao (China), and Taiwan (China)).</li>
<li>Outside Chinese Mainland: outside the Chinese mainland.</li>
<li>Global: around the world.</li>
If AccelerateArea is not set, VOD will automatically activate CDN acceleration within or outside the Chinese mainland based on the user's regional information in Tencent Cloud Settings. To enable CDN acceleration within the Chinese mainland, the domain must be [ICP filed](https://www.tencentcloud.com/document/product/243/18905?from_cn_redirect=1) first.
                     */
                    std::string m_accelerateArea;
                    bool m_accelerateAreaHasBeenSet;

                    /**
                     * Domain type. Valid values: <li>VOD: domain name used to distribute VOD products</li> <li>EdgeOne: domain name used to distribute EdgeOne products</li> If not specified, the default value is VOD.
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_CREATEVODDOMAINREQUEST_H_
