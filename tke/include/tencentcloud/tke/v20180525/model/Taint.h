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

#ifndef TENCENTCLOUD_TKE_V20180525_MODEL_TAINT_H_
#define TENCENTCLOUD_TKE_V20180525_MODEL_TAINT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tke
    {
        namespace V20180525
        {
            namespace Model
            {
                /**
                * Kubernetes Taint
                */
                class Taint : public AbstractModel
                {
                public:
                    Taint();
                    ~Taint() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Key of the taint
                     * @return Key Key of the taint
                     * 
                     */
                    std::string GetKey() const;

                    /**
                     * 设置Key of the taint
                     * @param _key Key of the taint
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
                     * 获取Value of the taint
                     * @return Value Value of the taint
                     * 
                     */
                    std::string GetValue() const;

                    /**
                     * 设置Value of the taint
                     * @param _value Value of the taint
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
                     * 获取Effect of the taint
                     * @return Effect Effect of the taint
                     * 
                     */
                    std::string GetEffect() const;

                    /**
                     * 设置Effect of the taint
                     * @param _effect Effect of the taint
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
                     * Key of the taint
                     */
                    std::string m_key;
                    bool m_keyHasBeenSet;

                    /**
                     * Value of the taint
                     */
                    std::string m_value;
                    bool m_valueHasBeenSet;

                    /**
                     * Effect of the taint
                     */
                    std::string m_effect;
                    bool m_effectHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TKE_V20180525_MODEL_TAINT_H_
