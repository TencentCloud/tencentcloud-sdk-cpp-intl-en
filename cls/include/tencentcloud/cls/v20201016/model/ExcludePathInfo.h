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

#ifndef TENCENTCLOUD_CLS_V20201016_MODEL_EXCLUDEPATHINFO_H_
#define TENCENTCLOUD_CLS_V20201016_MODEL_EXCLUDEPATHINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cls
    {
        namespace V20201016
        {
            namespace Model
            {
                /**
                * Blocklist path information
                */
                class ExcludePathInfo : public AbstractModel
                {
                public:
                    ExcludePathInfo();
                    ~ExcludePathInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Type. Valid values: `File`, `Path`
                     * @return Type Type. Valid values: `File`, `Path`
                     */
                    std::string GetType() const;

                    /**
                     * 设置Type. Valid values: `File`, `Path`
                     * @param Type Type. Valid values: `File`, `Path`
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取Specific content corresponding to `Type`
                     * @return Value Specific content corresponding to `Type`
                     */
                    std::string GetValue() const;

                    /**
                     * 设置Specific content corresponding to `Type`
                     * @param Value Specific content corresponding to `Type`
                     */
                    void SetValue(const std::string& _value);

                    /**
                     * 判断参数 Value 是否已赋值
                     * @return Value 是否已赋值
                     */
                    bool ValueHasBeenSet() const;

                private:

                    /**
                     * Type. Valid values: `File`, `Path`
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * Specific content corresponding to `Type`
                     */
                    std::string m_value;
                    bool m_valueHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLS_V20201016_MODEL_EXCLUDEPATHINFO_H_
