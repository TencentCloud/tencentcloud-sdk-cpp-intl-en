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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_BASELINEPOLICYBRIEF_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_BASELINEPOLICYBRIEF_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                * Brief information of the baseline policy
                */
                class BaselinePolicyBrief : public AbstractModel
                {
                public:
                    BaselinePolicyBrief();
                    ~BaselinePolicyBrief() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Baseline policy ID.</p>
                     * @return ID <p>Baseline policy ID.</p>
                     * 
                     */
                    uint64_t GetID() const;

                    /**
                     * 设置<p>Baseline policy ID.</p>
                     * @param _iD <p>Baseline policy ID.</p>
                     * 
                     */
                    void SetID(const uint64_t& _iD);

                    /**
                     * 判断参数 ID 是否已赋值
                     * @return ID 是否已赋值
                     * 
                     */
                    bool IDHasBeenSet() const;

                    /**
                     * 获取<p>Baseline policy name.</p>
                     * @return PolicyName <p>Baseline policy name.</p>
                     * 
                     */
                    std::string GetPolicyName() const;

                    /**
                     * 设置<p>Baseline policy name.</p>
                     * @param _policyName <p>Baseline policy name.</p>
                     * 
                     */
                    void SetPolicyName(const std::string& _policyName);

                    /**
                     * 判断参数 PolicyName 是否已赋值
                     * @return PolicyName 是否已赋值
                     * 
                     */
                    bool PolicyNameHasBeenSet() const;

                    /**
                     * 获取<p>Whether it is a system built-in policy. true indicates yes, false indicates no (user-defined policy).</p>
                     * @return IsSystem <p>Whether it is a system built-in policy. true indicates yes, false indicates no (user-defined policy).</p>
                     * 
                     */
                    bool GetIsSystem() const;

                    /**
                     * 设置<p>Whether it is a system built-in policy. true indicates yes, false indicates no (user-defined policy).</p>
                     * @param _isSystem <p>Whether it is a system built-in policy. true indicates yes, false indicates no (user-defined policy).</p>
                     * 
                     */
                    void SetIsSystem(const bool& _isSystem);

                    /**
                     * 判断参数 IsSystem 是否已赋值
                     * @return IsSystem 是否已赋值
                     * 
                     */
                    bool IsSystemHasBeenSet() const;

                private:

                    /**
                     * <p>Baseline policy ID.</p>
                     */
                    uint64_t m_iD;
                    bool m_iDHasBeenSet;

                    /**
                     * <p>Baseline policy name.</p>
                     */
                    std::string m_policyName;
                    bool m_policyNameHasBeenSet;

                    /**
                     * <p>Whether it is a system built-in policy. true indicates yes, false indicates no (user-defined policy).</p>
                     */
                    bool m_isSystem;
                    bool m_isSystemHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_BASELINEPOLICYBRIEF_H_
