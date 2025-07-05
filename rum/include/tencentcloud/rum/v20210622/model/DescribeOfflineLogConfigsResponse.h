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

#ifndef TENCENTCLOUD_RUM_V20210622_MODEL_DESCRIBEOFFLINELOGCONFIGSRESPONSE_H_
#define TENCENTCLOUD_RUM_V20210622_MODEL_DESCRIBEOFFLINELOGCONFIGSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Rum
    {
        namespace V20210622
        {
            namespace Model
            {
                /**
                * DescribeOfflineLogConfigs response structure.
                */
                class DescribeOfflineLogConfigsResponse : public AbstractModel
                {
                public:
                    DescribeOfflineLogConfigsResponse();
                    ~DescribeOfflineLogConfigsResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取API call information
                     * @return Msg API call information
                     * 
                     */
                    std::string GetMsg() const;

                    /**
                     * 判断参数 Msg 是否已赋值
                     * @return Msg 是否已赋值
                     * 
                     */
                    bool MsgHasBeenSet() const;

                    /**
                     * 获取Array of unique user identifiers
                     * @return UniqueIDSet Array of unique user identifiers
                     * 
                     */
                    std::vector<std::string> GetUniqueIDSet() const;

                    /**
                     * 判断参数 UniqueIDSet 是否已赋值
                     * @return UniqueIDSet 是否已赋值
                     * 
                     */
                    bool UniqueIDSetHasBeenSet() const;

                private:

                    /**
                     * API call information
                     */
                    std::string m_msg;
                    bool m_msgHasBeenSet;

                    /**
                     * Array of unique user identifiers
                     */
                    std::vector<std::string> m_uniqueIDSet;
                    bool m_uniqueIDSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_RUM_V20210622_MODEL_DESCRIBEOFFLINELOGCONFIGSRESPONSE_H_
