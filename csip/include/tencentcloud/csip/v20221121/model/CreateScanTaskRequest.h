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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_CREATESCANTASKREQUEST_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_CREATESCANTASKREQUEST_H_

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
                * CreateScanTask request structure.
                */
                class CreateScanTaskRequest : public AbstractModel
                {
                public:
                    CreateScanTaskRequest();
                    ~CreateScanTaskRequest() = default;
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
                     * 获取<p>Detection mode</p>
                     * @return TaskMode <p>Detection mode</p>
                     * 
                     */
                    uint64_t GetTaskMode() const;

                    /**
                     * 设置<p>Detection mode</p>
                     * @param _taskMode <p>Detection mode</p>
                     * 
                     */
                    void SetTaskMode(const uint64_t& _taskMode);

                    /**
                     * 判断参数 TaskMode 是否已赋值
                     * @return TaskMode 是否已赋值
                     * 
                     */
                    bool TaskModeHasBeenSet() const;

                    /**
                     * 获取<p>Rule collection</p>
                     * @return RuleIDs <p>Rule collection</p>
                     * 
                     */
                    std::vector<std::string> GetRuleIDs() const;

                    /**
                     * 设置<p>Rule collection</p>
                     * @param _ruleIDs <p>Rule collection</p>
                     * 
                     */
                    void SetRuleIDs(const std::vector<std::string>& _ruleIDs);

                    /**
                     * 判断参数 RuleIDs 是否已赋值
                     * @return RuleIDs 是否已赋值
                     * 
                     */
                    bool RuleIDsHasBeenSet() const;

                    /**
                     * 获取<p>Specification ID</p>
                     * @return StandardIDs <p>Specification ID</p>
                     * 
                     */
                    std::vector<uint64_t> GetStandardIDs() const;

                    /**
                     * 设置<p>Specification ID</p>
                     * @param _standardIDs <p>Specification ID</p>
                     * 
                     */
                    void SetStandardIDs(const std::vector<uint64_t>& _standardIDs);

                    /**
                     * 判断参数 StandardIDs 是否已赋值
                     * @return StandardIDs 是否已赋值
                     * 
                     */
                    bool StandardIDsHasBeenSet() const;

                private:

                    /**
                     * <p>Group account member id</p>
                     */
                    std::vector<std::string> m_memberId;
                    bool m_memberIdHasBeenSet;

                    /**
                     * <p>Detection mode</p>
                     */
                    uint64_t m_taskMode;
                    bool m_taskModeHasBeenSet;

                    /**
                     * <p>Rule collection</p>
                     */
                    std::vector<std::string> m_ruleIDs;
                    bool m_ruleIDsHasBeenSet;

                    /**
                     * <p>Specification ID</p>
                     */
                    std::vector<uint64_t> m_standardIDs;
                    bool m_standardIDsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_CREATESCANTASKREQUEST_H_
