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

#ifndef TENCENTCLOUD_ORGANIZATION_V20210331_MODEL_EFFECTIVEPOLICY_H_
#define TENCENTCLOUD_ORGANIZATION_V20210331_MODEL_EFFECTIVEPOLICY_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Organization
    {
        namespace V20210331
        {
            namespace Model
            {
                /**
                * Valid policy.
                */
                class EffectivePolicy : public AbstractModel
                {
                public:
                    EffectivePolicy();
                    ~EffectivePolicy() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Target ID.
                     * @return TargetId Target ID.
                     * 
                     */
                    uint64_t GetTargetId() const;

                    /**
                     * 设置Target ID.
                     * @param _targetId Target ID.
                     * 
                     */
                    void SetTargetId(const uint64_t& _targetId);

                    /**
                     * 判断参数 TargetId 是否已赋值
                     * @return TargetId 是否已赋值
                     * 
                     */
                    bool TargetIdHasBeenSet() const;

                    /**
                     * 获取Effective policy content.
                     * @return PolicyContent Effective policy content.
                     * 
                     */
                    std::string GetPolicyContent() const;

                    /**
                     * 设置Effective policy content.
                     * @param _policyContent Effective policy content.
                     * 
                     */
                    void SetPolicyContent(const std::string& _policyContent);

                    /**
                     * 判断参数 PolicyContent 是否已赋值
                     * @return PolicyContent 是否已赋值
                     * 
                     */
                    bool PolicyContentHasBeenSet() const;

                    /**
                     * 获取Effective policy update time.
                     * @return LastUpdatedTimestamp Effective policy update time.
                     * 
                     */
                    uint64_t GetLastUpdatedTimestamp() const;

                    /**
                     * 设置Effective policy update time.
                     * @param _lastUpdatedTimestamp Effective policy update time.
                     * 
                     */
                    void SetLastUpdatedTimestamp(const uint64_t& _lastUpdatedTimestamp);

                    /**
                     * 判断参数 LastUpdatedTimestamp 是否已赋值
                     * @return LastUpdatedTimestamp 是否已赋值
                     * 
                     */
                    bool LastUpdatedTimestampHasBeenSet() const;

                private:

                    /**
                     * Target ID.
                     */
                    uint64_t m_targetId;
                    bool m_targetIdHasBeenSet;

                    /**
                     * Effective policy content.
                     */
                    std::string m_policyContent;
                    bool m_policyContentHasBeenSet;

                    /**
                     * Effective policy update time.
                     */
                    uint64_t m_lastUpdatedTimestamp;
                    bool m_lastUpdatedTimestampHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ORGANIZATION_V20210331_MODEL_EFFECTIVEPOLICY_H_
