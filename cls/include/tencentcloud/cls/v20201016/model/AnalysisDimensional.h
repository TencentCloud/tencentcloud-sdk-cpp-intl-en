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
                     * @return Name Analysis name
                     */
                    std::string GetName() const;

                    /**
                     * 设置Analysis name
                     * @param Name Analysis name
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取Analysis type. Valid values: `query`, `field`
                     * @return Type Analysis type. Valid values: `query`, `field`
                     */
                    std::string GetType() const;

                    /**
                     * 设置Analysis type. Valid values: `query`, `field`
                     * @param Type Analysis type. Valid values: `query`, `field`
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取Analysis content
                     * @return Content Analysis content
                     */
                    std::string GetContent() const;

                    /**
                     * 设置Analysis content
                     * @param Content Analysis content
                     */
                    void SetContent(const std::string& _content);

                    /**
                     * 判断参数 Content 是否已赋值
                     * @return Content 是否已赋值
                     */
                    bool ContentHasBeenSet() const;

                private:

                    /**
                     * Analysis name
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Analysis type. Valid values: `query`, `field`
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * Analysis content
                     */
                    std::string m_content;
                    bool m_contentHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLS_V20201016_MODEL_ANALYSISDIMENSIONAL_H_
