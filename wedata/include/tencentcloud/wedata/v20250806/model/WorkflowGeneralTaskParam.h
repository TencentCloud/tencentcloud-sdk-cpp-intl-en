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

#ifndef TENCENTCLOUD_WEDATA_V20250806_MODEL_WORKFLOWGENERALTASKPARAM_H_
#define TENCENTCLOUD_WEDATA_V20250806_MODEL_WORKFLOWGENERALTASKPARAM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20250806
        {
            namespace Model
            {
                /**
                * SQL parameter of the SPARK workflow.
                */
                class WorkflowGeneralTaskParam : public AbstractModel
                {
                public:
                    WorkflowGeneralTaskParam();
                    ~WorkflowGeneralTaskParam() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Common task parameter type, currently only support SPARK_SQL.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Type Common task parameter type, currently only support SPARK_SQL.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置Common task parameter type, currently only support SPARK_SQL.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _type Common task parameter type, currently only support SPARK_SQL.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取Common task parameter content. different parameters are separated by semicolons.
Split.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Value Common task parameter content. different parameters are separated by semicolons.
Split.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetValue() const;

                    /**
                     * 设置Common task parameter content. different parameters are separated by semicolons.
Split.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _value Common task parameter content. different parameters are separated by semicolons.
Split.
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * Common task parameter type, currently only support SPARK_SQL.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * Common task parameter content. different parameters are separated by semicolons.
Split.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_value;
                    bool m_valueHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20250806_MODEL_WORKFLOWGENERALTASKPARAM_H_
