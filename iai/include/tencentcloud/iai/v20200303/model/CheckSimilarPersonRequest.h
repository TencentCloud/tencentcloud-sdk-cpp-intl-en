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

#ifndef TENCENTCLOUD_IAI_V20200303_MODEL_CHECKSIMILARPERSONREQUEST_H_
#define TENCENTCLOUD_IAI_V20200303_MODEL_CHECKSIMILARPERSONREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Iai
    {
        namespace V20200303
        {
            namespace Model
            {
                /**
                * CheckSimilarPerson request structure.
                */
                class CheckSimilarPersonRequest : public AbstractModel
                {
                public:
                    CheckSimilarPersonRequest();
                    ~CheckSimilarPersonRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取List of groups to be checked. 
There can be up to 2 million persons in one group and up to 10 groups.
                     * @return GroupIds List of groups to be checked. 
There can be up to 2 million persons in one group and up to 10 groups.
                     */
                    std::vector<std::string> GetGroupIds() const;

                    /**
                     * 设置List of groups to be checked. 
There can be up to 2 million persons in one group and up to 10 groups.
                     * @param GroupIds List of groups to be checked. 
There can be up to 2 million persons in one group and up to 10 groups.
                     */
                    void SetGroupIds(const std::vector<std::string>& _groupIds);

                    /**
                     * 判断参数 GroupIds 是否已赋值
                     * @return GroupIds 是否已赋值
                     */
                    bool GroupIdsHasBeenSet() const;

                    /**
                     * 获取Control over the strictness of duplicate person check.
1: archive sorting with high strictness, which can eliminate more duplicate identities but leads to higher false elimination rate for non-duplicate identities.
2: archive sorting with low strictness, which leads to lower false elimination rate for non-duplicate identities and lower elimination rate for duplicate identities.
                     * @return UniquePersonControl Control over the strictness of duplicate person check.
1: archive sorting with high strictness, which can eliminate more duplicate identities but leads to higher false elimination rate for non-duplicate identities.
2: archive sorting with low strictness, which leads to lower false elimination rate for non-duplicate identities and lower elimination rate for duplicate identities.
                     */
                    int64_t GetUniquePersonControl() const;

                    /**
                     * 设置Control over the strictness of duplicate person check.
1: archive sorting with high strictness, which can eliminate more duplicate identities but leads to higher false elimination rate for non-duplicate identities.
2: archive sorting with low strictness, which leads to lower false elimination rate for non-duplicate identities and lower elimination rate for duplicate identities.
                     * @param UniquePersonControl Control over the strictness of duplicate person check.
1: archive sorting with high strictness, which can eliminate more duplicate identities but leads to higher false elimination rate for non-duplicate identities.
2: archive sorting with low strictness, which leads to lower false elimination rate for non-duplicate identities and lower elimination rate for duplicate identities.
                     */
                    void SetUniquePersonControl(const int64_t& _uniquePersonControl);

                    /**
                     * 判断参数 UniquePersonControl 是否已赋值
                     * @return UniquePersonControl 是否已赋值
                     */
                    bool UniquePersonControlHasBeenSet() const;

                private:

                    /**
                     * List of groups to be checked. 
There can be up to 2 million persons in one group and up to 10 groups.
                     */
                    std::vector<std::string> m_groupIds;
                    bool m_groupIdsHasBeenSet;

                    /**
                     * Control over the strictness of duplicate person check.
1: archive sorting with high strictness, which can eliminate more duplicate identities but leads to higher false elimination rate for non-duplicate identities.
2: archive sorting with low strictness, which leads to lower false elimination rate for non-duplicate identities and lower elimination rate for duplicate identities.
                     */
                    int64_t m_uniquePersonControl;
                    bool m_uniquePersonControlHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IAI_V20200303_MODEL_CHECKSIMILARPERSONREQUEST_H_
