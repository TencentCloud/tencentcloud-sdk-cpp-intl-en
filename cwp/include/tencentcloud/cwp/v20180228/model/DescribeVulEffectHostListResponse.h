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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBEVULEFFECTHOSTLISTRESPONSE_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBEVULEFFECTHOSTLISTRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cwp/v20180228/model/VulEffectHostList.h>


namespace TencentCloud
{
    namespace Cwp
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * DescribeVulEffectHostList response structure.
                */
                class DescribeVulEffectHostListResponse : public AbstractModel
                {
                public:
                    DescribeVulEffectHostListResponse();
                    ~DescribeVulEffectHostListResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Total number of lists
                     * @return TotalCount Total number of lists
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
                     * 获取List of affected hosts
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return VulEffectHostList List of affected hosts
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<VulEffectHostList> GetVulEffectHostList() const;

                    /**
                     * 判断参数 VulEffectHostList 是否已赋值
                     * @return VulEffectHostList 是否已赋值
                     * 
                     */
                    bool VulEffectHostListHasBeenSet() const;

                private:

                    /**
                     * Total number of lists
                     */
                    uint64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * List of affected hosts
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<VulEffectHostList> m_vulEffectHostList;
                    bool m_vulEffectHostListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBEVULEFFECTHOSTLISTRESPONSE_H_
