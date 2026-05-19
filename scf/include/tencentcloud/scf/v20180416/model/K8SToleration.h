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

#ifndef TENCENTCLOUD_SCF_V20180416_MODEL_K8STOLERATION_H_
#define TENCENTCLOUD_SCF_V20180416_MODEL_K8STOLERATION_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Scf
    {
        namespace V20180416
        {
            namespace Model
            {
                /**
                * 
                */
                class K8SToleration : public AbstractModel
                {
                public:
                    K8SToleration();
                    ~K8SToleration() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取
                     * @return Key 
                     * 
                     */
                    std::string GetKey() const;

                    /**
                     * 设置
                     * @param _key 
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
                     * 获取
                     * @return Operator 
                     * 
                     */
                    std::string GetOperator() const;

                    /**
                     * 设置
                     * @param _operator 
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
                     * 获取
                     * @return Effect 
                     * 
                     */
                    std::string GetEffect() const;

                    /**
                     * 设置
                     * @param _effect 
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
                     * 获取
                     * @return Value 
                     * 
                     */
                    std::string GetValue() const;

                    /**
                     * 设置
                     * @param _value 
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
                     * 获取
                     * @return TolerationSeconds 
                     * 
                     */
                    uint64_t GetTolerationSeconds() const;

                    /**
                     * 设置
                     * @param _tolerationSeconds 
                     * 
                     */
                    void SetTolerationSeconds(const uint64_t& _tolerationSeconds);

                    /**
                     * 判断参数 TolerationSeconds 是否已赋值
                     * @return TolerationSeconds 是否已赋值
                     * 
                     */
                    bool TolerationSecondsHasBeenSet() const;

                private:

                    /**
                     * 
                     */
                    std::string m_key;
                    bool m_keyHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_operator;
                    bool m_operatorHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_effect;
                    bool m_effectHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_value;
                    bool m_valueHasBeenSet;

                    /**
                     * 
                     */
                    uint64_t m_tolerationSeconds;
                    bool m_tolerationSecondsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SCF_V20180416_MODEL_K8STOLERATION_H_
