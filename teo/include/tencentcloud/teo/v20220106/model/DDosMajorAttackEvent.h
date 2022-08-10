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

#ifndef TENCENTCLOUD_TEO_V20220106_MODEL_DDOSMAJORATTACKEVENT_H_
#define TENCENTCLOUD_TEO_V20220106_MODEL_DDOSMAJORATTACKEVENT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220106
        {
            namespace Model
            {
                /**
                * Major DDoS attack event
                */
                class DDosMajorAttackEvent : public AbstractModel
                {
                public:
                    DDosMajorAttackEvent();
                    ~DDosMajorAttackEvent() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取DDoS policy group ID
                     * @return PolicyId DDoS policy group ID
                     */
                    int64_t GetPolicyId() const;

                    /**
                     * 设置DDoS policy group ID
                     * @param PolicyId DDoS policy group ID
                     */
                    void SetPolicyId(const int64_t& _policyId);

                    /**
                     * 判断参数 PolicyId 是否已赋值
                     * @return PolicyId 是否已赋值
                     */
                    bool PolicyIdHasBeenSet() const;

                    /**
                     * 获取Maximum attack bandwidth
                     * @return AttackMaxBandWidth Maximum attack bandwidth
                     */
                    int64_t GetAttackMaxBandWidth() const;

                    /**
                     * 设置Maximum attack bandwidth
                     * @param AttackMaxBandWidth Maximum attack bandwidth
                     */
                    void SetAttackMaxBandWidth(const int64_t& _attackMaxBandWidth);

                    /**
                     * 判断参数 AttackMaxBandWidth 是否已赋值
                     * @return AttackMaxBandWidth 是否已赋值
                     */
                    bool AttackMaxBandWidthHasBeenSet() const;

                    /**
                     * 获取Attack time in seconds
                     * @return AttackTime Attack time in seconds
                     */
                    int64_t GetAttackTime() const;

                    /**
                     * 设置Attack time in seconds
                     * @param AttackTime Attack time in seconds
                     */
                    void SetAttackTime(const int64_t& _attackTime);

                    /**
                     * 判断参数 AttackTime 是否已赋值
                     * @return AttackTime 是否已赋值
                     */
                    bool AttackTimeHasBeenSet() const;

                private:

                    /**
                     * DDoS policy group ID
                     */
                    int64_t m_policyId;
                    bool m_policyIdHasBeenSet;

                    /**
                     * Maximum attack bandwidth
                     */
                    int64_t m_attackMaxBandWidth;
                    bool m_attackMaxBandWidthHasBeenSet;

                    /**
                     * Attack time in seconds
                     */
                    int64_t m_attackTime;
                    bool m_attackTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220106_MODEL_DDOSMAJORATTACKEVENT_H_
