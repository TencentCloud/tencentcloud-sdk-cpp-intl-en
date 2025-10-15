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
                     * 获取Parameter name.

                     * @return ParamKey Parameter name.

                     * 
                     */
                    std::string GetParamKey() const;

                    /**
                     * 设置Parameter name.

                     * @param _paramKey Parameter name.

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
                     * 获取Parameter Description: The format is ProjectIdentifier.TaskName.ParameterName
Example: project_wedata_1.sh_250820_104107.pp_out
                     * @return ParamDesc Parameter Description: The format is ProjectIdentifier.TaskName.ParameterName
Example: project_wedata_1.sh_250820_104107.pp_out
                     * 
                     */
                    std::string GetParamDesc() const;

                    /**
                     * 设置Parameter Description: The format is ProjectIdentifier.TaskName.ParameterName
Example: project_wedata_1.sh_250820_104107.pp_out
                     * @param _paramDesc Parameter Description: The format is ProjectIdentifier.TaskName.ParameterName
Example: project_wedata_1.sh_250820_104107.pp_out
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
                     * 获取Parent Task ID

                     * @return FromTaskId Parent Task ID

                     * 
                     */
                    std::string GetFromTaskId() const;

                    /**
                     * 设置Parent Task ID

                     * @param _fromTaskId Parent Task ID

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
                     * 获取Parent task parameter key.

                     * @return FromParamKey Parent task parameter key.

                     * 
                     */
                    std::string GetFromParamKey() const;

                    /**
                     * 设置Parent task parameter key.

                     * @param _fromParamKey Parent task parameter key.

                     * 
                     */
                    void SetFromParamKey(const std::string& _fromParamKey);

                    /**
                     * 判断参数 FromParamKey 是否已赋值
                     * @return FromParamKey 是否已赋值
                     * 
                     */
                    bool FromParamKeyHasBeenSet() const;

                private:

                    /**
                     * Parameter name.

                     */
                    std::string m_paramKey;
                    bool m_paramKeyHasBeenSet;

                    /**
                     * Parameter Description: The format is ProjectIdentifier.TaskName.ParameterName
Example: project_wedata_1.sh_250820_104107.pp_out
                     */
                    std::string m_paramDesc;
                    bool m_paramDescHasBeenSet;

                    /**
                     * Parent Task ID

                     */
                    std::string m_fromTaskId;
                    bool m_fromTaskIdHasBeenSet;

                    /**
                     * Parent task parameter key.

                     */
                    std::string m_fromParamKey;
                    bool m_fromParamKeyHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20250806_MODEL_INTASKPARAMETER_H_
