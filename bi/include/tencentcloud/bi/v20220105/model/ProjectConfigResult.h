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

#ifndef TENCENTCLOUD_BI_V20220105_MODEL_PROJECTCONFIGRESULT_H_
#define TENCENTCLOUD_BI_V20220105_MODEL_PROJECTCONFIGRESULT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Bi
    {
        namespace V20220105
        {
            namespace Model
            {
                /**
                * Customized query
                */
                class ProjectConfigResult : public AbstractModel
                {
                public:
                    ProjectConfigResult();
                    ~ProjectConfigResult() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Configuration name.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ModuleId Configuration name.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetModuleId() const;

                    /**
                     * 设置Configuration name.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _moduleId Configuration name.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetModuleId(const std::string& _moduleId);

                    /**
                     * 判断参数 ModuleId 是否已赋值
                     * @return ModuleId 是否已赋值
                     * 
                     */
                    bool ModuleIdHasBeenSet() const;

                    /**
                     * 获取Configuration mode.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return IncludeType Configuration mode.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetIncludeType() const;

                    /**
                     * 设置Configuration mode.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _includeType Configuration mode.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetIncludeType(const std::string& _includeType);

                    /**
                     * 判断参数 IncludeType 是否已赋值
                     * @return IncludeType 是否已赋值
                     * 
                     */
                    bool IncludeTypeHasBeenSet() const;

                    /**
                     * 获取Additional parameters.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Params Additional parameters.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetParams() const;

                    /**
                     * 设置Additional parameters.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _params Additional parameters.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetParams(const std::string& _params);

                    /**
                     * 判断参数 Params 是否已赋值
                     * @return Params 是否已赋值
                     * 
                     */
                    bool ParamsHasBeenSet() const;

                private:

                    /**
                     * Configuration name.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_moduleId;
                    bool m_moduleIdHasBeenSet;

                    /**
                     * Configuration mode.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_includeType;
                    bool m_includeTypeHasBeenSet;

                    /**
                     * Additional parameters.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_params;
                    bool m_paramsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BI_V20220105_MODEL_PROJECTCONFIGRESULT_H_
