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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBEVULVIEWVULRISKLISTREQUEST_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBEVULVIEWVULRISKLISTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/csip/v20221121/model/Filter.h>
#include <tencentcloud/csip/v20221121/model/AssetTag.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * DescribeVulViewVulRiskList request structure.
                */
                class DescribeVulViewVulRiskListRequest : public AbstractModel
                {
                public:
                    DescribeVulViewVulRiskListRequest();
                    ~DescribeVulViewVulRiskListRequest() = default;
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
                     * 获取Asset tag
                     * @return Tags Asset tag
                     * 
                     */
                    std::vector<AssetTag> GetTags() const;

                    /**
                     * 设置Asset tag
                     * @param _tags Asset tag
                     * 
                     */
                    void SetTags(const std::vector<AssetTag>& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     * 
                     */
                    bool TagsHasBeenSet() const;

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
                     * Asset tag
                     */
                    std::vector<AssetTag> m_tags;
                    bool m_tagsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBEVULVIEWVULRISKLISTREQUEST_H_
