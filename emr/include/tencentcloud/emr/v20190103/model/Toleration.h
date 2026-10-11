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

#ifndef TENCENTCLOUD_EMR_V20190103_MODEL_TOLERATION_H_
#define TENCENTCLOUD_EMR_V20190103_MODEL_TOLERATION_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Emr
    {
        namespace V20190103
        {
            namespace Model
            {
                /**
                * Tolerations
                */
                class Toleration : public AbstractModel
                {
                public:
                    Toleration();
                    ~Toleration() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Key.
                     * @return Key Key.
                     * 
                     */
                    std::string GetKey() const;

                    /**
                     * 设置Key.
                     * @param _key Key.
                     * 
                     */
                    void SetKey(const std::string& _key);

                    /**
                     * 判断参数 Key 是否已赋值
                     * @return Key 是否已赋值
                     * 
                     */
                    bool KeyHasBeenSet() const;

                    /**
                     * 获取Value.
                     * @return Value Value.
                     * 
                     */
                    std::string GetValue() const;

                    /**
                     * 设置Value.
                     * @param _value Value.
                     * 
                     */
                    void SetValue(const std::string& _value);

                    /**
                     * 判断参数 Value 是否已赋值
                     * @return Value 是否已赋值
                     * 
                     */
                    bool ValueHasBeenSet() const;

                    /**
                     * 获取Operator.
                     * @return Operator Operator.
                     * 
                     */
                    std::string GetOperator() const;

                    /**
                     * 设置Operator.
                     * @param _operator Operator.
                     * 
                     */
                    void SetOperator(const std::string& _operator);

                    /**
                     * 判断参数 Operator 是否已赋值
                     * @return Operator 是否已赋值
                     * 
                     */
                    bool OperatorHasBeenSet() const;

                    /**
                     * 获取Taint repel effect.
                     * @return Effect Taint repel effect.
                     * 
                     */
                    std::string GetEffect() const;

                    /**
                     * 设置Taint repel effect.
                     * @param _effect Taint repel effect.
                     * 
                     */
                    void SetEffect(const std::string& _effect);

                    /**
                     * 判断参数 Effect 是否已赋值
                     * @return Effect 是否已赋值
                     * 
                     */
                    bool EffectHasBeenSet() const;

                    /**
                     * 获取Eviction wait time.
                     * @return TolerationSeconds Eviction wait time.
                     * 
                     */
                    int64_t GetTolerationSeconds() const;

                    /**
                     * 设置Eviction wait time.
                     * @param _tolerationSeconds Eviction wait time.
                     * 
                     */
                    void SetTolerationSeconds(const int64_t& _tolerationSeconds);

                    /**
                     * 判断参数 TolerationSeconds 是否已赋值
                     * @return TolerationSeconds 是否已赋值
                     * 
                     */
                    bool TolerationSecondsHasBeenSet() const;

                private:

                    /**
                     * Key.
                     */
                    std::string m_key;
                    bool m_keyHasBeenSet;

                    /**
                     * Value.
                     */
                    std::string m_value;
                    bool m_valueHasBeenSet;

                    /**
                     * Operator.
                     */
                    std::string m_operator;
                    bool m_operatorHasBeenSet;

                    /**
                     * Taint repel effect.
                     */
                    std::string m_effect;
                    bool m_effectHasBeenSet;

                    /**
                     * Eviction wait time.
                     */
                    int64_t m_tolerationSeconds;
                    bool m_tolerationSecondsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EMR_V20190103_MODEL_TOLERATION_H_
