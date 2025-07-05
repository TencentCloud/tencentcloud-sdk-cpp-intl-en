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
                     * 获取Domain name to add to VOD. Note: a wildcard domain name is not supported.
                     * @return Domain Domain name to add to VOD. Note: a wildcard domain name is not supported.
                     * 
                     */
                    std::string GetDomain() const;

                    /**
                     * 设置Domain name to add to VOD. Note: a wildcard domain name is not supported.
                     * @param _domain Domain name to add to VOD. Note: a wildcard domain name is not supported.
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
                     * 获取Region to enable acceleration. Valid values:
<li>`Chinese Mainland`</li>
<li>`Outside Chinese Mainland`</li>
<li>`Global`</li>
If `AccelerateArea` is not specified, VOD will enable acceleration in or outside Chinese mainland based on the regional information a user has configured with Tencent Cloud.
                     * @return AccelerateArea Region to enable acceleration. Valid values:
<li>`Chinese Mainland`</li>
<li>`Outside Chinese Mainland`</li>
<li>`Global`</li>
If `AccelerateArea` is not specified, VOD will enable acceleration in or outside Chinese mainland based on the regional information a user has configured with Tencent Cloud.
                     * 
                     */
                    std::string GetAccelerateArea() const;

                    /**
                     * 设置Region to enable acceleration. Valid values:
<li>`Chinese Mainland`</li>
<li>`Outside Chinese Mainland`</li>
<li>`Global`</li>
If `AccelerateArea` is not specified, VOD will enable acceleration in or outside Chinese mainland based on the regional information a user has configured with Tencent Cloud.
                     * @param _accelerateArea Region to enable acceleration. Valid values:
<li>`Chinese Mainland`</li>
<li>`Outside Chinese Mainland`</li>
<li>`Global`</li>
If `AccelerateArea` is not specified, VOD will enable acceleration in or outside Chinese mainland based on the regional information a user has configured with Tencent Cloud.
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
                     * 获取Domain type. Valid values:
<li>`VOD`: Domain name distributed using the VOD product;</li> <li>`EdgeOne`: Domain name distributed using the EdgeOne product.</li>default value: VOD. 
                     * @return Type Domain type. Valid values:
<li>`VOD`: Domain name distributed using the VOD product;</li> <li>`EdgeOne`: Domain name distributed using the EdgeOne product.</li>default value: VOD. 
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置Domain type. Valid values:
<li>`VOD`: Domain name distributed using the VOD product;</li> <li>`EdgeOne`: Domain name distributed using the EdgeOne product.</li>default value: VOD. 
                     * @param _type Domain type. Valid values:
<li>`VOD`: Domain name distributed using the VOD product;</li> <li>`EdgeOne`: Domain name distributed using the EdgeOne product.</li>default value: VOD. 
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
                     * Domain name to add to VOD. Note: a wildcard domain name is not supported.
                     */
                    std::string m_domain;
                    bool m_domainHasBeenSet;

                    /**
                     * <b>The VOD [application](https://intl.cloud.tencent.com/document/product/266/14574) ID. For customers who activate VOD service from December 25, 2023, if they want to access resources in a VOD application (whether it's the default application or a newly created one), they must fill in this field with the application ID.</b>
                     */
                    uint64_t m_subAppId;
                    bool m_subAppIdHasBeenSet;

                    /**
                     * Region to enable acceleration. Valid values:
<li>`Chinese Mainland`</li>
<li>`Outside Chinese Mainland`</li>
<li>`Global`</li>
If `AccelerateArea` is not specified, VOD will enable acceleration in or outside Chinese mainland based on the regional information a user has configured with Tencent Cloud.
                     */
                    std::string m_accelerateArea;
                    bool m_accelerateAreaHasBeenSet;

                    /**
                     * Domain type. Valid values:
<li>`VOD`: Domain name distributed using the VOD product;</li> <li>`EdgeOne`: Domain name distributed using the EdgeOne product.</li>default value: VOD. 
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_CREATEVODDOMAINREQUEST_H_
