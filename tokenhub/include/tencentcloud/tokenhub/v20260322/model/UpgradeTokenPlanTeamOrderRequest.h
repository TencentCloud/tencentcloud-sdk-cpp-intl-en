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

#ifndef TENCENTCLOUD_TOKENHUB_V20260322_MODEL_UPGRADETOKENPLANTEAMORDERREQUEST_H_
#define TENCENTCLOUD_TOKENHUB_V20260322_MODEL_UPGRADETOKENPLANTEAMORDERREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tokenhub
    {
        namespace V20260322
        {
            namespace Model
            {
                /**
                * UpgradeTokenPlanTeamOrder request structure.
                */
                class UpgradeTokenPlanTeamOrderRequest : public AbstractModel
                {
                public:
                    UpgradeTokenPlanTeamOrderRequest();
                    ~UpgradeTokenPlanTeamOrderRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Package ID. You can obtain it through the DescribeTokenPlanList API.
                     * @return TeamId Package ID. You can obtain it through the DescribeTokenPlanList API.
                     * 
                     */
                    std::string GetTeamId() const;

                    /**
                     * 设置Package ID. You can obtain it through the DescribeTokenPlanList API.
                     * @param _teamId Package ID. You can obtain it through the DescribeTokenPlanList API.
                     * 
                     */
                    void SetTeamId(const std::string& _teamId);

                    /**
                     * 判断参数 TeamId 是否已赋值
                     * @return TeamId 是否已赋值
                     * 
                     */
                    bool TeamIdHasBeenSet() const;

                    /**
                     * 获取Limit of the new specification after upgrade. For the enterprise package type, it refers to the point limit. For the enterprise-auto package type, it refers to the Token count. Must be greater than the current limit.
                     * @return NewCreditOrToken Limit of the new specification after upgrade. For the enterprise package type, it refers to the point limit. For the enterprise-auto package type, it refers to the Token count. Must be greater than the current limit.
                     * 
                     */
                    int64_t GetNewCreditOrToken() const;

                    /**
                     * 设置Limit of the new specification after upgrade. For the enterprise package type, it refers to the point limit. For the enterprise-auto package type, it refers to the Token count. Must be greater than the current limit.
                     * @param _newCreditOrToken Limit of the new specification after upgrade. For the enterprise package type, it refers to the point limit. For the enterprise-auto package type, it refers to the Token count. Must be greater than the current limit.
                     * 
                     */
                    void SetNewCreditOrToken(const int64_t& _newCreditOrToken);

                    /**
                     * 判断参数 NewCreditOrToken 是否已赋值
                     * @return NewCreditOrToken 是否已赋值
                     * 
                     */
                    bool NewCreditOrTokenHasBeenSet() const;

                private:

                    /**
                     * Package ID. You can obtain it through the DescribeTokenPlanList API.
                     */
                    std::string m_teamId;
                    bool m_teamIdHasBeenSet;

                    /**
                     * Limit of the new specification after upgrade. For the enterprise package type, it refers to the point limit. For the enterprise-auto package type, it refers to the Token count. Must be greater than the current limit.
                     */
                    int64_t m_newCreditOrToken;
                    bool m_newCreditOrTokenHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TOKENHUB_V20260322_MODEL_UPGRADETOKENPLANTEAMORDERREQUEST_H_
