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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_CREATEDOMAINVERIFYRECORDREQUEST_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_CREATEDOMAINVERIFYRECORDREQUEST_H_

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
                * CreateDomainVerifyRecord request structure.
                */
                class CreateDomainVerifyRecordRequest : public AbstractModel
                {
                public:
                    CreateDomainVerifyRecordRequest();
                    ~CreateDomainVerifyRecordRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Domain name for on-demand acceleration.
                     * @return Domain Domain name for on-demand acceleration.
                     * 
                     */
                    std::string GetDomain() const;

                    /**
                     * 设置Domain name for on-demand acceleration.
                     * @param _domain Domain name for on-demand acceleration.
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
                     * 获取<b>ID of the on-demand [application](https://www.tencentcloud.com/document/product/266/14574?from_cn_redirect=1). For customers who activate on-demand services after December 25, 2024, this field must be set to the app ID when accessing resources in on-demand applications, whether in the default application or a newly created application.</b>	
                     * @return SubAppId <b>ID of the on-demand [application](https://www.tencentcloud.com/document/product/266/14574?from_cn_redirect=1). For customers who activate on-demand services after December 25, 2024, this field must be set to the app ID when accessing resources in on-demand applications, whether in the default application or a newly created application.</b>	
                     * 
                     */
                    uint64_t GetSubAppId() const;

                    /**
                     * 设置<b>ID of the on-demand [application](https://www.tencentcloud.com/document/product/266/14574?from_cn_redirect=1). For customers who activate on-demand services after December 25, 2024, this field must be set to the app ID when accessing resources in on-demand applications, whether in the default application or a newly created application.</b>	
                     * @param _subAppId <b>ID of the on-demand [application](https://www.tencentcloud.com/document/product/266/14574?from_cn_redirect=1). For customers who activate on-demand services after December 25, 2024, this field must be set to the app ID when accessing resources in on-demand applications, whether in the default application or a newly created application.</b>	
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
                     * Domain name for on-demand acceleration.
                     */
                    std::string m_domain;
                    bool m_domainHasBeenSet;

                    /**
                     * <b>ID of the on-demand [application](https://www.tencentcloud.com/document/product/266/14574?from_cn_redirect=1). For customers who activate on-demand services after December 25, 2024, this field must be set to the app ID when accessing resources in on-demand applications, whether in the default application or a newly created application.</b>	
                     */
                    uint64_t m_subAppId;
                    bool m_subAppIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_CREATEDOMAINVERIFYRECORDREQUEST_H_
