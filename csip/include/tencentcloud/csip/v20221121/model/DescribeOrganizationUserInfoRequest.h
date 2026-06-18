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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBEORGANIZATIONUSERINFOREQUEST_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBEORGANIZATIONUSERINFOREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/csip/v20221121/model/Filter.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * DescribeOrganizationUserInfo request structure.
                */
                class DescribeOrganizationUserInfoRequest : public AbstractModel
                {
                public:
                    DescribeOrganizationUserInfoRequest();
                    ~DescribeOrganizationUserInfoRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Group Account Member ID
                     * @return MemberId Group Account Member ID
                     * 
                     */
                    std::vector<std::string> GetMemberId() const;

                    /**
                     * 设置Group Account Member ID
                     * @param _memberId Group Account Member ID
                     * 
                     */
                    void SetMemberId(const std::vector<std::string>& _memberId);

                    /**
                     * 判断参数 MemberId 是否已赋值
                     * @return MemberId 是否已赋值
                     * 
                     */
                    bool MemberIdHasBeenSet() const;

                    /**
                     * 获取Filtered Content
                     * @return Filter Filtered Content
                     * 
                     */
                    Filter GetFilter() const;

                    /**
                     * 设置Filtered Content
                     * @param _filter Filtered Content
                     * 
                     */
                    void SetFilter(const Filter& _filter);

                    /**
                     * 判断参数 Filter 是否已赋值
                     * @return Filter 是否已赋值
                     * 
                     */
                    bool FilterHasBeenSet() const;

                    /**
                     * 获取Does not support multi-cloud.
                     * @return NotSupportCloud Does not support multi-cloud.
                     * 
                     */
                    bool GetNotSupportCloud() const;

                    /**
                     * 设置Does not support multi-cloud.
                     * @param _notSupportCloud Does not support multi-cloud.
                     * 
                     */
                    void SetNotSupportCloud(const bool& _notSupportCloud);

                    /**
                     * 判断参数 NotSupportCloud 是否已赋值
                     * @return NotSupportCloud 是否已赋值
                     * 
                     */
                    bool NotSupportCloudHasBeenSet() const;

                private:

                    /**
                     * Group Account Member ID
                     */
                    std::vector<std::string> m_memberId;
                    bool m_memberIdHasBeenSet;

                    /**
                     * Filtered Content
                     */
                    Filter m_filter;
                    bool m_filterHasBeenSet;

                    /**
                     * Does not support multi-cloud.
                     */
                    bool m_notSupportCloud;
                    bool m_notSupportCloudHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBEORGANIZATIONUSERINFOREQUEST_H_
