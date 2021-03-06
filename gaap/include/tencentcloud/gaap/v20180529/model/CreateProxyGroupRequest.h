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

#ifndef TENCENTCLOUD_GAAP_V20180529_MODEL_CREATEPROXYGROUPREQUEST_H_
#define TENCENTCLOUD_GAAP_V20180529_MODEL_CREATEPROXYGROUPREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/gaap/v20180529/model/TagPair.h>
#include <tencentcloud/gaap/v20180529/model/AccessConfiguration.h>


namespace TencentCloud
{
    namespace Gaap
    {
        namespace V20180529
        {
            namespace Model
            {
                /**
                * CreateProxyGroup request structure.
                */
                class CreateProxyGroupRequest : public AbstractModel
                {
                public:
                    CreateProxyGroupRequest();
                    ~CreateProxyGroupRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Project ID of connection group
                     * @return ProjectId Project ID of connection group
                     */
                    uint64_t GetProjectId() const;

                    /**
                     * 设置Project ID of connection group
                     * @param ProjectId Project ID of connection group
                     */
                    void SetProjectId(const uint64_t& _projectId);

                    /**
                     * 判断参数 ProjectId 是否已赋值
                     * @return ProjectId 是否已赋值
                     */
                    bool ProjectIdHasBeenSet() const;

                    /**
                     * 获取Alias of connection group
                     * @return GroupName Alias of connection group
                     */
                    std::string GetGroupName() const;

                    /**
                     * 设置Alias of connection group
                     * @param GroupName Alias of connection group
                     */
                    void SetGroupName(const std::string& _groupName);

                    /**
                     * 判断参数 GroupName 是否已赋值
                     * @return GroupName 是否已赋值
                     */
                    bool GroupNameHasBeenSet() const;

                    /**
                     * 获取Origin server region; Reference API: DescribeDestRegions; It returnes the `RegionId` of the parameter `RegionDetail`.
                     * @return RealServerRegion Origin server region; Reference API: DescribeDestRegions; It returnes the `RegionId` of the parameter `RegionDetail`.
                     */
                    std::string GetRealServerRegion() const;

                    /**
                     * 设置Origin server region; Reference API: DescribeDestRegions; It returnes the `RegionId` of the parameter `RegionDetail`.
                     * @param RealServerRegion Origin server region; Reference API: DescribeDestRegions; It returnes the `RegionId` of the parameter `RegionDetail`.
                     */
                    void SetRealServerRegion(const std::string& _realServerRegion);

                    /**
                     * 判断参数 RealServerRegion 是否已赋值
                     * @return RealServerRegion 是否已赋值
                     */
                    bool RealServerRegionHasBeenSet() const;

                    /**
                     * 获取Tag list
                     * @return TagSet Tag list
                     */
                    std::vector<TagPair> GetTagSet() const;

                    /**
                     * 设置Tag list
                     * @param TagSet Tag list
                     */
                    void SetTagSet(const std::vector<TagPair>& _tagSet);

                    /**
                     * 判断参数 TagSet 是否已赋值
                     * @return TagSet 是否已赋值
                     */
                    bool TagSetHasBeenSet() const;

                    /**
                     * 获取List of acceleration regions, including their names, bandwidth, and concurrence configuration.
                     * @return AccessRegionSet List of acceleration regions, including their names, bandwidth, and concurrence configuration.
                     */
                    std::vector<AccessConfiguration> GetAccessRegionSet() const;

                    /**
                     * 设置List of acceleration regions, including their names, bandwidth, and concurrence configuration.
                     * @param AccessRegionSet List of acceleration regions, including their names, bandwidth, and concurrence configuration.
                     */
                    void SetAccessRegionSet(const std::vector<AccessConfiguration>& _accessRegionSet);

                    /**
                     * 判断参数 AccessRegionSet 是否已赋值
                     * @return AccessRegionSet 是否已赋值
                     */
                    bool AccessRegionSetHasBeenSet() const;

                private:

                    /**
                     * Project ID of connection group
                     */
                    uint64_t m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * Alias of connection group
                     */
                    std::string m_groupName;
                    bool m_groupNameHasBeenSet;

                    /**
                     * Origin server region; Reference API: DescribeDestRegions; It returnes the `RegionId` of the parameter `RegionDetail`.
                     */
                    std::string m_realServerRegion;
                    bool m_realServerRegionHasBeenSet;

                    /**
                     * Tag list
                     */
                    std::vector<TagPair> m_tagSet;
                    bool m_tagSetHasBeenSet;

                    /**
                     * List of acceleration regions, including their names, bandwidth, and concurrence configuration.
                     */
                    std::vector<AccessConfiguration> m_accessRegionSet;
                    bool m_accessRegionSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GAAP_V20180529_MODEL_CREATEPROXYGROUPREQUEST_H_
