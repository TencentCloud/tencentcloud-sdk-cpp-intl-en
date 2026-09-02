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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_DELETEDSPMWHITELISTSTRATEGYREQUEST_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_DELETEDSPMWHITELISTSTRATEGYREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * DeleteDspmWhitelistStrategy request structure.
                */
                class DeleteDspmWhitelistStrategyRequest : public AbstractModel
                {
                public:
                    DeleteDspmWhitelistStrategyRequest();
                    ~DeleteDspmWhitelistStrategyRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>Group account member id</p>
                     * @return MemberId <p>Group account member id</p>
                     * 
                     */
                    std::vector<std::string> GetMemberId() const;

                    /**
                     * 设置<p>Group account member id</p>
                     * @param _memberId <p>Group account member id</p>
                     * 
                     */
                    void SetMemberId(const std::vector<std::string>& _memberId);

                    /**
                     * 判断参数 MemberId 是否已赋值
                     * @return MemberId 是否已赋值
                     * 
                     */
                    bool MemberIdHasBeenSet() const;

                    /**
                     * 获取Allowlist id
                     * @return WhitelistStrategyId Allowlist id
                     * 
                     */
                    std::vector<std::string> GetWhitelistStrategyId() const;

                    /**
                     * 设置Allowlist id
                     * @param _whitelistStrategyId Allowlist id
                     * 
                     */
                    void SetWhitelistStrategyId(const std::vector<std::string>& _whitelistStrategyId);

                    /**
                     * 判断参数 WhitelistStrategyId 是否已赋值
                     * @return WhitelistStrategyId 是否已赋值
                     * 
                     */
                    bool WhitelistStrategyIdHasBeenSet() const;

                private:

                    /**
                     * <p>Group account member id</p>
                     */
                    std::vector<std::string> m_memberId;
                    bool m_memberIdHasBeenSet;

                    /**
                     * Allowlist id
                     */
                    std::vector<std::string> m_whitelistStrategyId;
                    bool m_whitelistStrategyIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_DELETEDSPMWHITELISTSTRATEGYREQUEST_H_
