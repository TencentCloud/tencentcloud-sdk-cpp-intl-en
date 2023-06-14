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

#ifndef TENCENTCLOUD_TCSS_V20201101_MODEL_DESCRIBEVULDEFENCEEVENTTENDENCYRESPONSE_H_
#define TENCENTCLOUD_TCSS_V20201101_MODEL_DESCRIBEVULDEFENCEEVENTTENDENCYRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tcss/v20201101/model/VulDefenceEventTendency.h>


namespace TencentCloud
{
    namespace Tcss
    {
        namespace V20201101
        {
            namespace Model
            {
                /**
                * DescribeVulDefenceEventTendency response structure.
                */
                class DescribeVulDefenceEventTendencyResponse : public AbstractModel
                {
                public:
                    DescribeVulDefenceEventTendencyResponse();
                    ~DescribeVulDefenceEventTendencyResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Trend of exploit prevention events
                     * @return DefendedList Trend of exploit prevention events
                     * 
                     */
                    std::vector<VulDefenceEventTendency> GetDefendedList() const;

                    /**
                     * 判断参数 DefendedList 是否已赋值
                     * @return DefendedList 是否已赋值
                     * 
                     */
                    bool DefendedListHasBeenSet() const;

                    /**
                     * 获取Trend of vulnerability attack events
                     * @return AttackList Trend of vulnerability attack events
                     * 
                     */
                    std::vector<VulDefenceEventTendency> GetAttackList() const;

                    /**
                     * 判断参数 AttackList 是否已赋值
                     * @return AttackList 是否已赋值
                     * 
                     */
                    bool AttackListHasBeenSet() const;

                private:

                    /**
                     * Trend of exploit prevention events
                     */
                    std::vector<VulDefenceEventTendency> m_defendedList;
                    bool m_defendedListHasBeenSet;

                    /**
                     * Trend of vulnerability attack events
                     */
                    std::vector<VulDefenceEventTendency> m_attackList;
                    bool m_attackListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSS_V20201101_MODEL_DESCRIBEVULDEFENCEEVENTTENDENCYRESPONSE_H_
