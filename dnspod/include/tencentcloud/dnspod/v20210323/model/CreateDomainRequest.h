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

#ifndef TENCENTCLOUD_DNSPOD_V20210323_MODEL_CREATEDOMAINREQUEST_H_
#define TENCENTCLOUD_DNSPOD_V20210323_MODEL_CREATEDOMAINREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dnspod
    {
        namespace V20210323
        {
            namespace Model
            {
                /**
                * CreateDomain request structure.
                */
                class CreateDomainRequest : public AbstractModel
                {
                public:
                    CreateDomainRequest();
                    ~CreateDomainRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Domain
                     * @return Domain Domain
                     */
                    std::string GetDomain() const;

                    /**
                     * 设置Domain
                     * @param Domain Domain
                     */
                    void SetDomain(const std::string& _domain);

                    /**
                     * 判断参数 Domain 是否已赋值
                     * @return Domain 是否已赋值
                     */
                    bool DomainHasBeenSet() const;

                    /**
                     * 获取The group ID of the domain. You can view the group information of this domain via the `DescribeDomainGroupList` API.
                     * @return GroupId The group ID of the domain. You can view the group information of this domain via the `DescribeDomainGroupList` API.
                     */
                    uint64_t GetGroupId() const;

                    /**
                     * 设置The group ID of the domain. You can view the group information of this domain via the `DescribeDomainGroupList` API.
                     * @param GroupId The group ID of the domain. You can view the group information of this domain via the `DescribeDomainGroupList` API.
                     */
                    void SetGroupId(const uint64_t& _groupId);

                    /**
                     * 判断参数 GroupId 是否已赋值
                     * @return GroupId 是否已赋值
                     */
                    bool GroupIdHasBeenSet() const;

                    /**
                     * 获取Whether the domain is starred. Valid values: yes, no.
                     * @return IsMark Whether the domain is starred. Valid values: yes, no.
                     */
                    std::string GetIsMark() const;

                    /**
                     * 设置Whether the domain is starred. Valid values: yes, no.
                     * @param IsMark Whether the domain is starred. Valid values: yes, no.
                     */
                    void SetIsMark(const std::string& _isMark);

                    /**
                     * 判断参数 IsMark 是否已赋值
                     * @return IsMark 是否已赋值
                     */
                    bool IsMarkHasBeenSet() const;

                private:

                    /**
                     * Domain
                     */
                    std::string m_domain;
                    bool m_domainHasBeenSet;

                    /**
                     * The group ID of the domain. You can view the group information of this domain via the `DescribeDomainGroupList` API.
                     */
                    uint64_t m_groupId;
                    bool m_groupIdHasBeenSet;

                    /**
                     * Whether the domain is starred. Valid values: yes, no.
                     */
                    std::string m_isMark;
                    bool m_isMarkHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DNSPOD_V20210323_MODEL_CREATEDOMAINREQUEST_H_
