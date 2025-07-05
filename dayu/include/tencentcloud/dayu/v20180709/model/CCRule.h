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

#ifndef TENCENTCLOUD_DAYU_V20180709_MODEL_CCRULE_H_
#define TENCENTCLOUD_DAYU_V20180709_MODEL_CCRULE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dayu
    {
        namespace V20180709
        {
            namespace Model
            {
                /**
                * The custom CC protection policy in key-value format
                */
                class CCRule : public AbstractModel
                {
                public:
                    CCRule();
                    ~CCRule() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Key of the policy. Valid values: `host`, `cgi`, `ua`, `referer`
                     * @return Skey Key of the policy. Valid values: `host`, `cgi`, `ua`, `referer`
                     * 
                     */
                    std::string GetSkey() const;

                    /**
                     * 设置Key of the policy. Valid values: `host`, `cgi`, `ua`, `referer`
                     * @param _skey Key of the policy. Valid values: `host`, `cgi`, `ua`, `referer`
                     * 
                     */
                    void SetSkey(const std::string& _skey);

                    /**
                     * 判断参数 Skey 是否已赋值
                     * @return Skey 是否已赋值
                     * 
                     */
                    bool SkeyHasBeenSet() const;

                    /**
                     * 获取Rule condition. Valid values: `include`, `not_include`, `equal`
                     * @return Operator Rule condition. Valid values: `include`, `not_include`, `equal`
                     * 
                     */
                    std::string GetOperator() const;

                    /**
                     * 设置Rule condition. Valid values: `include`, `not_include`, `equal`
                     * @param _operator Rule condition. Valid values: `include`, `not_include`, `equal`
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
                     * 获取Value of the policy. Length limit: 31 bytes
                     * @return Value Value of the policy. Length limit: 31 bytes
                     * 
                     */
                    std::string GetValue() const;

                    /**
                     * 设置Value of the policy. Length limit: 31 bytes
                     * @param _value Value of the policy. Length limit: 31 bytes
                     * 
                     */
                    void SetValue(const std::string& _value);

                    /**
                     * 判断参数 Value 是否已赋值
                     * @return Value 是否已赋值
                     * 
                     */
                    bool ValueHasBeenSet() const;

                private:

                    /**
                     * Key of the policy. Valid values: `host`, `cgi`, `ua`, `referer`
                     */
                    std::string m_skey;
                    bool m_skeyHasBeenSet;

                    /**
                     * Rule condition. Valid values: `include`, `not_include`, `equal`
                     */
                    std::string m_operator;
                    bool m_operatorHasBeenSet;

                    /**
                     * Value of the policy. Length limit: 31 bytes
                     */
                    std::string m_value;
                    bool m_valueHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DAYU_V20180709_MODEL_CCRULE_H_
