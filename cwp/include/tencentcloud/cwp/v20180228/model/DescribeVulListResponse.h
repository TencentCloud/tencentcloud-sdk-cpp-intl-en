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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBEVULLISTRESPONSE_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBEVULLISTRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cwp/v20180228/model/VulInfoList.h>


namespace TencentCloud
{
    namespace Cwp
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * DescribeVulList response structure.
                */
                class DescribeVulListResponse : public AbstractModel
                {
                public:
                    DescribeVulListResponse();
                    ~DescribeVulListResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Vulnerability list
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return VulInfoList Vulnerability list
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<VulInfoList> GetVulInfoList() const;

                    /**
                     * 判断参数 VulInfoList 是否已赋值
                     * @return VulInfoList 是否已赋值
                     * 
                     */
                    bool VulInfoListHasBeenSet() const;

                    /**
                     * 获取Total number of vulnerabilities
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return TotalCount Total number of vulnerabilities
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetTotalCount() const;

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     * 
                     */
                    bool TotalCountHasBeenSet() const;

                    /**
                     * 获取Total number of focused vulnerabilities
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return FollowVulCount Total number of focused vulnerabilities
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetFollowVulCount() const;

                    /**
                     * 判断参数 FollowVulCount 是否已赋值
                     * @return FollowVulCount 是否已赋值
                     * 
                     */
                    bool FollowVulCountHasBeenSet() const;

                private:

                    /**
                     * Vulnerability list
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<VulInfoList> m_vulInfoList;
                    bool m_vulInfoListHasBeenSet;

                    /**
                     * Total number of vulnerabilities
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * Total number of focused vulnerabilities
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_followVulCount;
                    bool m_followVulCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBEVULLISTRESPONSE_H_
