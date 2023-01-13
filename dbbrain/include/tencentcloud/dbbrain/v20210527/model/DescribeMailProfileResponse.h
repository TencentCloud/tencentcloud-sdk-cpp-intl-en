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

#ifndef TENCENTCLOUD_DBBRAIN_V20210527_MODEL_DESCRIBEMAILPROFILERESPONSE_H_
#define TENCENTCLOUD_DBBRAIN_V20210527_MODEL_DESCRIBEMAILPROFILERESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dbbrain/v20210527/model/UserProfile.h>


namespace TencentCloud
{
    namespace Dbbrain
    {
        namespace V20210527
        {
            namespace Model
            {
                /**
                * DescribeMailProfile response structure.
                */
                class DescribeMailProfileResponse : public AbstractModel
                {
                public:
                    DescribeMailProfileResponse();
                    ~DescribeMailProfileResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Email configuration details.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ProfileList Email configuration details.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<UserProfile> GetProfileList() const;

                    /**
                     * 判断参数 ProfileList 是否已赋值
                     * @return ProfileList 是否已赋值
                     */
                    bool ProfileListHasBeenSet() const;

                    /**
                     * 获取Total number of the configured emails.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return TotalCount Total number of the configured emails.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t GetTotalCount() const;

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     */
                    bool TotalCountHasBeenSet() const;

                private:

                    /**
                     * Email configuration details.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<UserProfile> m_profileList;
                    bool m_profileListHasBeenSet;

                    /**
                     * Total number of the configured emails.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DBBRAIN_V20210527_MODEL_DESCRIBEMAILPROFILERESPONSE_H_
