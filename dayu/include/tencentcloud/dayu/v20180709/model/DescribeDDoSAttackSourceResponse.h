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

#ifndef TENCENTCLOUD_DAYU_V20180709_MODEL_DESCRIBEDDOSATTACKSOURCERESPONSE_H_
#define TENCENTCLOUD_DAYU_V20180709_MODEL_DESCRIBEDDOSATTACKSOURCERESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dayu/v20180709/model/DDoSAttackSourceRecord.h>


namespace TencentCloud
{
    namespace Dayu
    {
        namespace V20180709
        {
            namespace Model
            {
                /**
                * DescribeDDoSAttackSource response structure.
                */
                class DescribeDDoSAttackSourceResponse : public AbstractModel
                {
                public:
                    DescribeDDoSAttackSourceResponse();
                    ~DescribeDDoSAttackSourceResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Total number of attack sources
                     * @return Total Total number of attack sources
                     * 
                     */
                    uint64_t GetTotal() const;

                    /**
                     * 判断参数 Total 是否已赋值
                     * @return Total 是否已赋值
                     * 
                     */
                    bool TotalHasBeenSet() const;

                    /**
                     * 获取Attack source list
                     * @return AttackSourceList Attack source list
                     * 
                     */
                    std::vector<DDoSAttackSourceRecord> GetAttackSourceList() const;

                    /**
                     * 判断参数 AttackSourceList 是否已赋值
                     * @return AttackSourceList 是否已赋值
                     * 
                     */
                    bool AttackSourceListHasBeenSet() const;

                private:

                    /**
                     * Total number of attack sources
                     */
                    uint64_t m_total;
                    bool m_totalHasBeenSet;

                    /**
                     * Attack source list
                     */
                    std::vector<DDoSAttackSourceRecord> m_attackSourceList;
                    bool m_attackSourceListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DAYU_V20180709_MODEL_DESCRIBEDDOSATTACKSOURCERESPONSE_H_
