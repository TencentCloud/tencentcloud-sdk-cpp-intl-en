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

#ifndef TENCENTCLOUD_LCIC_V20220817_MODEL_BATCHCREATEGROUPWITHMEMBERSRESPONSE_H_
#define TENCENTCLOUD_LCIC_V20220817_MODEL_BATCHCREATEGROUPWITHMEMBERSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Lcic
    {
        namespace V20220817
        {
            namespace Model
            {
                /**
                * BatchCreateGroupWithMembers response structure.
                */
                class BatchCreateGroupWithMembersResponse : public AbstractModel
                {
                public:
                    BatchCreateGroupWithMembersResponse();
                    ~BatchCreateGroupWithMembersResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取The IDs of the groups created, which are in the same order as the elements in the request parameter `GroupBaseInfos.N`.
                     * @return GroupIds The IDs of the groups created, which are in the same order as the elements in the request parameter `GroupBaseInfos.N`.
                     * 
                     */
                    std::vector<std::string> GetGroupIds() const;

                    /**
                     * 判断参数 GroupIds 是否已赋值
                     * @return GroupIds 是否已赋值
                     * 
                     */
                    bool GroupIdsHasBeenSet() const;

                private:

                    /**
                     * The IDs of the groups created, which are in the same order as the elements in the request parameter `GroupBaseInfos.N`.
                     */
                    std::vector<std::string> m_groupIds;
                    bool m_groupIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LCIC_V20220817_MODEL_BATCHCREATEGROUPWITHMEMBERSRESPONSE_H_
