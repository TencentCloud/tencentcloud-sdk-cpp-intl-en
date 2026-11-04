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

#ifndef TENCENTCLOUD_ADP_V20260520_MODEL_EXPIRATIONPOLICY_H_
#define TENCENTCLOUD_ADP_V20260520_MODEL_EXPIRATIONPOLICY_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/adp/v20260520/model/EffectivePeriod.h>


namespace TencentCloud
{
    namespace Adp
    {
        namespace V20260520
        {
            namespace Model
            {
                /**
                * Expiration policy (validity time and behavior after the validity period expires)
                */
                class ExpirationPolicy : public AbstractModel
                {
                public:
                    ExpirationPolicy();
                    ~ExpirationPolicy() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Validity time</p>
                     * @return EffectivePeriod <p>Validity time</p>
                     * 
                     */
                    EffectivePeriod GetEffectivePeriod() const;

                    /**
                     * 设置<p>Validity time</p>
                     * @param _effectivePeriod <p>Validity time</p>
                     * 
                     */
                    void SetEffectivePeriod(const EffectivePeriod& _effectivePeriod);

                    /**
                     * 判断参数 EffectivePeriod 是否已赋值
                     * @return EffectivePeriod 是否已赋值
                     * 
                     */
                    bool EffectivePeriodHasBeenSet() const;

                    /**
                     * 获取<p>Behavior after the validity period expires: 1=NOT_RETRIEVABLE cannot be retrieved, 2=RETRIEVABLE can still be retrieved; meaningless for permanent validity<table><tbody><tr><td>Enumeration item</td><td>Enumeration value</td><td>Description</td></tr><tr><td>EXPIRE_BEHAVIOR_UNKNOWN</td><td>0</td><td>Unspecified (server uses the default process)</td></tr><tr><td>EXPIRE_BEHAVIOR_NOT_RETRIEVABLE</td><td>1</td><td>Cannot be retrieved (removed upon expiration)</td></tr><tr><td>EXPIRE_BEHAVIOR_RETRIEVABLE</td><td>2</td><td>Can still be retrieved (not removed upon expiration, only the validity period is tagged)</td></tr></tbody></table></p>
                     * @return ExpireBehavior <p>Behavior after the validity period expires: 1=NOT_RETRIEVABLE cannot be retrieved, 2=RETRIEVABLE can still be retrieved; meaningless for permanent validity<table><tbody><tr><td>Enumeration item</td><td>Enumeration value</td><td>Description</td></tr><tr><td>EXPIRE_BEHAVIOR_UNKNOWN</td><td>0</td><td>Unspecified (server uses the default process)</td></tr><tr><td>EXPIRE_BEHAVIOR_NOT_RETRIEVABLE</td><td>1</td><td>Cannot be retrieved (removed upon expiration)</td></tr><tr><td>EXPIRE_BEHAVIOR_RETRIEVABLE</td><td>2</td><td>Can still be retrieved (not removed upon expiration, only the validity period is tagged)</td></tr></tbody></table></p>
                     * 
                     */
                    int64_t GetExpireBehavior() const;

                    /**
                     * 设置<p>Behavior after the validity period expires: 1=NOT_RETRIEVABLE cannot be retrieved, 2=RETRIEVABLE can still be retrieved; meaningless for permanent validity<table><tbody><tr><td>Enumeration item</td><td>Enumeration value</td><td>Description</td></tr><tr><td>EXPIRE_BEHAVIOR_UNKNOWN</td><td>0</td><td>Unspecified (server uses the default process)</td></tr><tr><td>EXPIRE_BEHAVIOR_NOT_RETRIEVABLE</td><td>1</td><td>Cannot be retrieved (removed upon expiration)</td></tr><tr><td>EXPIRE_BEHAVIOR_RETRIEVABLE</td><td>2</td><td>Can still be retrieved (not removed upon expiration, only the validity period is tagged)</td></tr></tbody></table></p>
                     * @param _expireBehavior <p>Behavior after the validity period expires: 1=NOT_RETRIEVABLE cannot be retrieved, 2=RETRIEVABLE can still be retrieved; meaningless for permanent validity<table><tbody><tr><td>Enumeration item</td><td>Enumeration value</td><td>Description</td></tr><tr><td>EXPIRE_BEHAVIOR_UNKNOWN</td><td>0</td><td>Unspecified (server uses the default process)</td></tr><tr><td>EXPIRE_BEHAVIOR_NOT_RETRIEVABLE</td><td>1</td><td>Cannot be retrieved (removed upon expiration)</td></tr><tr><td>EXPIRE_BEHAVIOR_RETRIEVABLE</td><td>2</td><td>Can still be retrieved (not removed upon expiration, only the validity period is tagged)</td></tr></tbody></table></p>
                     * 
                     */
                    void SetExpireBehavior(const int64_t& _expireBehavior);

                    /**
                     * 判断参数 ExpireBehavior 是否已赋值
                     * @return ExpireBehavior 是否已赋值
                     * 
                     */
                    bool ExpireBehaviorHasBeenSet() const;

                private:

                    /**
                     * <p>Validity time</p>
                     */
                    EffectivePeriod m_effectivePeriod;
                    bool m_effectivePeriodHasBeenSet;

                    /**
                     * <p>Behavior after the validity period expires: 1=NOT_RETRIEVABLE cannot be retrieved, 2=RETRIEVABLE can still be retrieved; meaningless for permanent validity<table><tbody><tr><td>Enumeration item</td><td>Enumeration value</td><td>Description</td></tr><tr><td>EXPIRE_BEHAVIOR_UNKNOWN</td><td>0</td><td>Unspecified (server uses the default process)</td></tr><tr><td>EXPIRE_BEHAVIOR_NOT_RETRIEVABLE</td><td>1</td><td>Cannot be retrieved (removed upon expiration)</td></tr><tr><td>EXPIRE_BEHAVIOR_RETRIEVABLE</td><td>2</td><td>Can still be retrieved (not removed upon expiration, only the validity period is tagged)</td></tr></tbody></table></p>
                     */
                    int64_t m_expireBehavior;
                    bool m_expireBehaviorHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ADP_V20260520_MODEL_EXPIRATIONPOLICY_H_
