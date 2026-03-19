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

#ifndef TENCENTCLOUD_ORGANIZATION_V20210331_MODEL_DESCRIBEPOLICYCONFIGREQUEST_H_
#define TENCENTCLOUD_ORGANIZATION_V20210331_MODEL_DESCRIBEPOLICYCONFIGREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Organization
    {
        namespace V20210331
        {
            namespace Model
            {
                /**
                * DescribePolicyConfig request structure.
                */
                class DescribePolicyConfigRequest : public AbstractModel
                {
                public:
                    DescribePolicyConfigRequest();
                    ~DescribePolicyConfigRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Organization Id. call the api [DescribeOrganization](https://www.tencentcloud.com/document/product/850/67059?from_cn_redirect=1) to obtain it.
                     * @return OrganizationId Organization Id. call the api [DescribeOrganization](https://www.tencentcloud.com/document/product/850/67059?from_cn_redirect=1) to obtain it.
                     * 
                     */
                    uint64_t GetOrganizationId() const;

                    /**
                     * 设置Organization Id. call the api [DescribeOrganization](https://www.tencentcloud.com/document/product/850/67059?from_cn_redirect=1) to obtain it.
                     * @param _organizationId Organization Id. call the api [DescribeOrganization](https://www.tencentcloud.com/document/product/850/67059?from_cn_redirect=1) to obtain it.
                     * 
                     */
                    void SetOrganizationId(const uint64_t& _organizationId);

                    /**
                     * 判断参数 OrganizationId 是否已赋值
                     * @return OrganizationId 是否已赋值
                     * 
                     */
                    bool OrganizationIdHasBeenSet() const;

                    /**
                     * 获取Policy type. Default value: 0; valid values: 0 (service control policy) and 1 (Tag policy).
                     * @return Type Policy type. Default value: 0; valid values: 0 (service control policy) and 1 (Tag policy).
                     * 
                     */
                    uint64_t GetType() const;

                    /**
                     * 设置Policy type. Default value: 0; valid values: 0 (service control policy) and 1 (Tag policy).
                     * @param _type Policy type. Default value: 0; valid values: 0 (service control policy) and 1 (Tag policy).
                     * 
                     */
                    void SetType(const uint64_t& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                private:

                    /**
                     * Organization Id. call the api [DescribeOrganization](https://www.tencentcloud.com/document/product/850/67059?from_cn_redirect=1) to obtain it.
                     */
                    uint64_t m_organizationId;
                    bool m_organizationIdHasBeenSet;

                    /**
                     * Policy type. Default value: 0; valid values: 0 (service control policy) and 1 (Tag policy).
                     */
                    uint64_t m_type;
                    bool m_typeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ORGANIZATION_V20210331_MODEL_DESCRIBEPOLICYCONFIGREQUEST_H_
