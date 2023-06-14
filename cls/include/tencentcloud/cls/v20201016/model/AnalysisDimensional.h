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

#ifndef TENCENTCLOUD_CLS_V20201016_MODEL_ANALYSISDIMENSIONAL_H_
#define TENCENTCLOUD_CLS_V20201016_MODEL_ANALYSISDIMENSIONAL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cls/v20201016/model/AlarmAnalysisConfig.h>


namespace TencentCloud
{
    namespace Cls
    {
        namespace V20201016
        {
            namespace Model
            {
                /**
                * Multi-Dimensional analysis dimension
                */
                class AnalysisDimensional : public AbstractModel
                {
                public:
                    AnalysisDimensional();
                    ~AnalysisDimensional() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Analysis name
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Name Analysis name
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置Analysis name
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _name Analysis name
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Type of data being analyzed. Valid values: `query`, `field`, `original`
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Type Type of data being analyzed. Valid values: `query`, `field`, `original`
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置Type of data being analyzed. Valid values: `query`, `field`, `original`
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _type Type of data being analyzed. Valid values: `query`, `field`, `original`
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
                     * 获取Analysis content
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Content Analysis content
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetContent() const;

                    /**
                     * 设置Analysis content
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _content Analysis content
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetContent(const std::string& _content);

                    /**
                     * 判断参数 Content 是否已赋值
                     * @return Content 是否已赋值
                     * 
                     */
                    bool ContentHasBeenSet() const;

                    /**
                     * 获取Configuration
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ConfigInfo Configuration
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<AlarmAnalysisConfig> GetConfigInfo() const;

                    /**
                     * 设置Configuration
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _configInfo Configuration
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetConfigInfo(const std::vector<AlarmAnalysisConfig>& _configInfo);

                    /**
                     * 判断参数 ConfigInfo 是否已赋值
                     * @return ConfigInfo 是否已赋值
                     * 
                     */
                    bool ConfigInfoHasBeenSet() const;

                private:

                    /**
                     * Analysis name
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Type of data being analyzed. Valid values: `query`, `field`, `original`
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * Analysis content
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_content;
                    bool m_contentHasBeenSet;

                    /**
                     * Configuration
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<AlarmAnalysisConfig> m_configInfo;
                    bool m_configInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLS_V20201016_MODEL_ANALYSISDIMENSIONAL_H_
