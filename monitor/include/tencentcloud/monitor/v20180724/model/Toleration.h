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

#ifndef TENCENTCLOUD_MONITOR_V20180724_MODEL_TOLERATION_H_
#define TENCENTCLOUD_MONITOR_V20180724_MODEL_TOLERATION_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Monitor
    {
        namespace V20180724
        {
            namespace Model
            {
                /**
                * Kubernetes taint
                */
                class Toleration : public AbstractModel
                {
                public:
                    Toleration();
                    ~Toleration() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Key of the taint to which the toleration is applied
                     * @return Key Key of the taint to which the toleration is applied
                     * 
                     */
                    std::string GetKey() const;

                    /**
                     * 设置Key of the taint to which the toleration is applied
                     * @param _key Key of the taint to which the toleration is applied
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
                     * 获取The key-value relationship
                     * @return Operator The key-value relationship
                     * 
                     */
                    std::string GetOperator() const;

                    /**
                     * 设置The key-value relationship
                     * @param _operator The key-value relationship
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
                     * 获取The taint effect to be matched
                     * @return Effect The taint effect to be matched
                     * 
                     */
                    std::string GetEffect() const;

                    /**
                     * 设置The taint effect to be matched
                     * @param _effect The taint effect to be matched
                     * 
                     */
                    void SetEffect(const std::string& _effect);

                    /**
                     * 判断参数 Effect 是否已赋值
                     * @return Effect 是否已赋值
                     * 
                     */
                    bool EffectHasBeenSet() const;

                private:

                    /**
                     * Key of the taint to which the toleration is applied
                     */
                    std::string m_key;
                    bool m_keyHasBeenSet;

                    /**
                     * The key-value relationship
                     */
                    std::string m_operator;
                    bool m_operatorHasBeenSet;

                    /**
                     * The taint effect to be matched
                     */
                    std::string m_effect;
                    bool m_effectHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONITOR_V20180724_MODEL_TOLERATION_H_
