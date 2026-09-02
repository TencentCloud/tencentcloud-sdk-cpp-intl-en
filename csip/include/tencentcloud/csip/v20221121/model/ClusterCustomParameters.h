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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_CLUSTERCUSTOMPARAMETERS_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_CLUSTERCUSTOMPARAMETERS_H_

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
                * Cluster Custom Parameters
                */
                class ClusterCustomParameters : public AbstractModel
                {
                public:
                    ClusterCustomParameters();
                    ~ClusterCustomParameters() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Placeholder name
Input parameter limit: length 1-256
Applicable branch: Tencent Cloud branch (IsCloud=true)
                     * @return Name Placeholder name
Input parameter limit: length 1-256
Applicable branch: Tencent Cloud branch (IsCloud=true)
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置Placeholder name
Input parameter limit: length 1-256
Applicable branch: Tencent Cloud branch (IsCloud=true)
                     * @param _name Placeholder name
Input parameter limit: length 1-256
Applicable branch: Tencent Cloud branch (IsCloud=true)
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取One or more values (multiple values are concatenated with commas to replace the placeholder)
Input parameter limit: each element length 1-256
Applicable branch: Tencent Cloud branch (IsCloud=true)
                     * @return Values One or more values (multiple values are concatenated with commas to replace the placeholder)
Input parameter limit: each element length 1-256
Applicable branch: Tencent Cloud branch (IsCloud=true)
                     * 
                     */
                    std::vector<std::string> GetValues() const;

                    /**
                     * 设置One or more values (multiple values are concatenated with commas to replace the placeholder)
Input parameter limit: each element length 1-256
Applicable branch: Tencent Cloud branch (IsCloud=true)
                     * @param _values One or more values (multiple values are concatenated with commas to replace the placeholder)
Input parameter limit: each element length 1-256
Applicable branch: Tencent Cloud branch (IsCloud=true)
                     * 
                     */
                    void SetValues(const std::vector<std::string>& _values);

                    /**
                     * 判断参数 Values 是否已赋值
                     * @return Values 是否已赋值
                     * 
                     */
                    bool ValuesHasBeenSet() const;

                    /**
                     * 获取Whether to match exactly.
Default value: `false`.
                     * @return ExactMatch Whether to match exactly.
Default value: `false`.
                     * 
                     */
                    bool GetExactMatch() const;

                    /**
                     * 设置Whether to match exactly.
Default value: `false`.
                     * @param _exactMatch Whether to match exactly.
Default value: `false`.
                     * 
                     */
                    void SetExactMatch(const bool& _exactMatch);

                    /**
                     * 判断参数 ExactMatch 是否已赋值
                     * @return ExactMatch 是否已赋值
                     * 
                     */
                    bool ExactMatchHasBeenSet() const;

                private:

                    /**
                     * Placeholder name
Input parameter limit: length 1-256
Applicable branch: Tencent Cloud branch (IsCloud=true)
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * One or more values (multiple values are concatenated with commas to replace the placeholder)
Input parameter limit: each element length 1-256
Applicable branch: Tencent Cloud branch (IsCloud=true)
                     */
                    std::vector<std::string> m_values;
                    bool m_valuesHasBeenSet;

                    /**
                     * Whether to match exactly.
Default value: `false`.
                     */
                    bool m_exactMatch;
                    bool m_exactMatchHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_CLUSTERCUSTOMPARAMETERS_H_
