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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_DESCRIBESUBAPPIDSRESPONSE_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_DESCRIBESUBAPPIDSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vod/v20180717/model/SubAppIdInfo.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
        {
            namespace Model
            {
                /**
                * DescribeSubAppIds response structure.
                */
                class DescribeSubAppIdsResponse : public AbstractModel
                {
                public:
                    DescribeSubAppIdsResponse();
                    ~DescribeSubAppIdsResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Subapplication information set.
                     * @return SubAppIdInfoSet Subapplication information set.
                     * 
                     */
                    std::vector<SubAppIdInfo> GetSubAppIdInfoSet() const;

                    /**
                     * 判断参数 SubAppIdInfoSet 是否已赋值
                     * @return SubAppIdInfoSet 是否已赋值
                     * 
                     */
                    bool SubAppIdInfoSetHasBeenSet() const;

                    /**
                     * 获取Total number of subapplications.
                     * @return TotalCount Total number of subapplications.
                     * 
                     */
                    uint64_t GetTotalCount() const;

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     * 
                     */
                    bool TotalCountHasBeenSet() const;

                private:

                    /**
                     * Subapplication information set.
                     */
                    std::vector<SubAppIdInfo> m_subAppIdInfoSet;
                    bool m_subAppIdInfoSetHasBeenSet;

                    /**
                     * Total number of subapplications.
                     */
                    uint64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_DESCRIBESUBAPPIDSRESPONSE_H_
