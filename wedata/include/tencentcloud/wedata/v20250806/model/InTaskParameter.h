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

#ifndef TENCENTCLOUD_WEDATA_V20250806_MODEL_INTASKPARAMETER_H_
#define TENCENTCLOUD_WEDATA_V20250806_MODEL_INTASKPARAMETER_H_

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
                * Parameter passing - reference parameter.
                */
                class InTaskParameter : public AbstractModel
                {
                public:
                    InTaskParameter();
                    ~InTaskParameter() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Parameter name</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ParamKey <p>Parameter name</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetParamKey() const;

                    /**
                     * 设置<p>Parameter name</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _paramKey <p>Parameter name</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetParamKey(const std::string& _paramKey);

                    /**
                     * 判断参数 ParamKey 是否已赋值
                     * @return ParamKey 是否已赋值
                     * 
                     */
                    bool ParamKeyHasBeenSet() const;

                    /**
                     * 获取<p>Parameter description: Format is project ID.task name.parameter name; for example: project_wedata_1.sh_250820_104107.pp_out</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ParamDesc <p>Parameter description: Format is project ID.task name.parameter name; for example: project_wedata_1.sh_250820_104107.pp_out</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetParamDesc() const;

                    /**
                     * 设置<p>Parameter description: Format is project ID.task name.parameter name; for example: project_wedata_1.sh_250820_104107.pp_out</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _paramDesc <p>Parameter description: Format is project ID.task name.parameter name; for example: project_wedata_1.sh_250820_104107.pp_out</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetParamDesc(const std::string& _paramDesc);

                    /**
                     * 判断参数 ParamDesc 是否已赋值
                     * @return ParamDesc 是否已赋值
                     * 
                     */
                    bool ParamDescHasBeenSet() const;

                    /**
                     * 获取<p>Parent task ID.</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return FromTaskId <p>Parent task ID.</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetFromTaskId() const;

                    /**
                     * 设置<p>Parent task ID.</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _fromTaskId <p>Parent task ID.</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetFromTaskId(const std::string& _fromTaskId);

                    /**
                     * 判断参数 FromTaskId 是否已赋值
                     * @return FromTaskId 是否已赋值
                     * 
                     */
                    bool FromTaskIdHasBeenSet() const;

                    /**
                     * 获取<p>Parent task parameter key</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return FromParamKey <p>Parent task parameter key</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetFromParamKey() const;

                    /**
                     * 设置<p>Parent task parameter key</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _fromParamKey <p>Parent task parameter key</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetFromParamKey(const std::string& _fromParamKey);

                    /**
                     * 判断参数 FromParamKey 是否已赋值
                     * @return FromParamKey 是否已赋值
                     * 
                     */
                    bool FromParamKeyHasBeenSet() const;

                    /**
                     * 获取<p>Task input type, by default uses TASK.</p><p>Enumeration value:</p><ul><li>TASK: Source is the parent task.</li><li>CONSTANT: Constant value, currently only supported by for-each node.</li></ul>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Type <p>Task input type, by default uses TASK.</p><p>Enumeration value:</p><ul><li>TASK: Source is the parent task.</li><li>CONSTANT: Constant value, currently only supported by for-each node.</li></ul>
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置<p>Task input type, by default uses TASK.</p><p>Enumeration value:</p><ul><li>TASK: Source is the parent task.</li><li>CONSTANT: Constant value, currently only supported by for-each node.</li></ul>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _type <p>Task input type, by default uses TASK.</p><p>Enumeration value:</p><ul><li>TASK: Source is the parent task.</li><li>CONSTANT: Constant value, currently only supported by for-each node.</li></ul>
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

                private:

                    /**
                     * <p>Parameter name</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_paramKey;
                    bool m_paramKeyHasBeenSet;

                    /**
                     * <p>Parameter description: Format is project ID.task name.parameter name; for example: project_wedata_1.sh_250820_104107.pp_out</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_paramDesc;
                    bool m_paramDescHasBeenSet;

                    /**
                     * <p>Parent task ID.</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_fromTaskId;
                    bool m_fromTaskIdHasBeenSet;

                    /**
                     * <p>Parent task parameter key</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_fromParamKey;
                    bool m_fromParamKeyHasBeenSet;

                    /**
                     * <p>Task input type, by default uses TASK.</p><p>Enumeration value:</p><ul><li>TASK: Source is the parent task.</li><li>CONSTANT: Constant value, currently only supported by for-each node.</li></ul>
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20250806_MODEL_INTASKPARAMETER_H_
