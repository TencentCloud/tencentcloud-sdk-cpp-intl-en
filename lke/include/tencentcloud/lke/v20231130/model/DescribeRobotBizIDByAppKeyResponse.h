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

#ifndef TENCENTCLOUD_LKE_V20231130_MODEL_DESCRIBEROBOTBIZIDBYAPPKEYRESPONSE_H_
#define TENCENTCLOUD_LKE_V20231130_MODEL_DESCRIBEROBOTBIZIDBYAPPKEYRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Lke
    {
        namespace V20231130
        {
            namespace Model
            {
                /**
                * DescribeRobotBizIDByAppKey response structure.
                */
                class DescribeRobotBizIDByAppKeyResponse : public AbstractModel
                {
                public:
                    DescribeRobotBizIDByAppKeyResponse();
                    ~DescribeRobotBizIDByAppKeyResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Application business ID.
                     * @return BotBizId Application business ID.
                     * 
                     */
                    std::string GetBotBizId() const;

                    /**
                     * 判断参数 BotBizId 是否已赋值
                     * @return BotBizId 是否已赋值
                     * 
                     */
                    bool BotBizIdHasBeenSet() const;

                private:

                    /**
                     * Application business ID.
                     */
                    std::string m_botBizId;
                    bool m_botBizIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LKE_V20231130_MODEL_DESCRIBEROBOTBIZIDBYAPPKEYRESPONSE_H_
