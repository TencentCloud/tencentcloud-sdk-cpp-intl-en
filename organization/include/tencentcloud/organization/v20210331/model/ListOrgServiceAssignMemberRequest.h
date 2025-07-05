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

#ifndef TENCENTCLOUD_ORGANIZATION_V20210331_MODEL_LISTORGSERVICEASSIGNMEMBERREQUEST_H_
#define TENCENTCLOUD_ORGANIZATION_V20210331_MODEL_LISTORGSERVICEASSIGNMEMBERREQUEST_H_

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
                * ListOrgServiceAssignMember request structure.
                */
                class ListOrgServiceAssignMemberRequest : public AbstractModel
                {
                public:
                    ListOrgServiceAssignMemberRequest();
                    ~ListOrgServiceAssignMemberRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Offset. Its value must be an integer multiple of the limit. Default value: 0.
                     * @return Offset Offset. Its value must be an integer multiple of the limit. Default value: 0.
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置Offset. Its value must be an integer multiple of the limit. Default value: 0.
                     * @param _offset Offset. Its value must be an integer multiple of the limit. Default value: 0.
                     * 
                     */
                    void SetOffset(const uint64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取Limit. Value range: 1-50. Default value: 10.
                     * @return Limit Limit. Value range: 1-50. Default value: 10.
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置Limit. Value range: 1-50. Default value: 10.
                     * @param _limit Limit. Value range: 1-50. Default value: 10.
                     * 
                     */
                    void SetLimit(const uint64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取Organization service ID, which can be obtained through [ListOrganizationService](https://intl.cloud.tencent.com/document/product/850/109561?from_cn_redirect=1).
                     * @return ServiceId Organization service ID, which can be obtained through [ListOrganizationService](https://intl.cloud.tencent.com/document/product/850/109561?from_cn_redirect=1).
                     * 
                     */
                    uint64_t GetServiceId() const;

                    /**
                     * 设置Organization service ID, which can be obtained through [ListOrganizationService](https://intl.cloud.tencent.com/document/product/850/109561?from_cn_redirect=1).
                     * @param _serviceId Organization service ID, which can be obtained through [ListOrganizationService](https://intl.cloud.tencent.com/document/product/850/109561?from_cn_redirect=1).
                     * 
                     */
                    void SetServiceId(const uint64_t& _serviceId);

                    /**
                     * 判断参数 ServiceId 是否已赋值
                     * @return ServiceId 是否已赋值
                     * 
                     */
                    bool ServiceIdHasBeenSet() const;

                private:

                    /**
                     * Offset. Its value must be an integer multiple of the limit. Default value: 0.
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * Limit. Value range: 1-50. Default value: 10.
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * Organization service ID, which can be obtained through [ListOrganizationService](https://intl.cloud.tencent.com/document/product/850/109561?from_cn_redirect=1).
                     */
                    uint64_t m_serviceId;
                    bool m_serviceIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ORGANIZATION_V20210331_MODEL_LISTORGSERVICEASSIGNMEMBERREQUEST_H_
