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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_DESCRIBERULETEMPLATESREQUEST_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_DESCRIBERULETEMPLATESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * DescribeRuleTemplates request structure.
                */
                class DescribeRuleTemplatesRequest : public AbstractModel
                {
                public:
                    DescribeRuleTemplatesRequest();
                    ~DescribeRuleTemplatesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Template Type 1. System Template 2. Custom Definition Template
                     * @return Type Template Type 1. System Template 2. Custom Definition Template
                     * 
                     */
                    uint64_t GetType() const;

                    /**
                     * 设置Template Type 1. System Template 2. Custom Definition Template
                     * @param _type Template Type 1. System Template 2. Custom Definition Template
                     * 
                     */
                    void SetType(const uint64_t& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取1. Constant 2. Offline Table Level 2. Offline Field Level
                     * @return SourceObjectType 1. Constant 2. Offline Table Level 2. Offline Field Level
                     * 
                     */
                    uint64_t GetSourceObjectType() const;

                    /**
                     * 设置1. Constant 2. Offline Table Level 2. Offline Field Level
                     * @param _sourceObjectType 1. Constant 2. Offline Table Level 2. Offline Field Level
                     * 
                     */
                    void SetSourceObjectType(const uint64_t& _sourceObjectType);

                    /**
                     * 判断参数 SourceObjectType 是否已赋值
                     * @return SourceObjectType 是否已赋值
                     * 
                     */
                    bool SourceObjectTypeHasBeenSet() const;

                    /**
                     * 获取Project ID
                     * @return ProjectId Project ID
                     * 
                     */
                    std::string GetProjectId() const;

                    /**
                     * 设置Project ID
                     * @param _projectId Project ID
                     * 
                     */
                    void SetProjectId(const std::string& _projectId);

                    /**
                     * 判断参数 ProjectId 是否已赋值
                     * @return ProjectId 是否已赋值
                     * 
                     */
                    bool ProjectIdHasBeenSet() const;

                    /**
                     * 获取Corresponding Engine Type of the Source
                     * @return SourceEngineTypes Corresponding Engine Type of the Source
                     * 
                     */
                    std::vector<uint64_t> GetSourceEngineTypes() const;

                    /**
                     * 设置Corresponding Engine Type of the Source
                     * @param _sourceEngineTypes Corresponding Engine Type of the Source
                     * 
                     */
                    void SetSourceEngineTypes(const std::vector<uint64_t>& _sourceEngineTypes);

                    /**
                     * 判断参数 SourceEngineTypes 是否已赋值
                     * @return SourceEngineTypes 是否已赋值
                     * 
                     */
                    bool SourceEngineTypesHasBeenSet() const;

                private:

                    /**
                     * Template Type 1. System Template 2. Custom Definition Template
                     */
                    uint64_t m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 1. Constant 2. Offline Table Level 2. Offline Field Level
                     */
                    uint64_t m_sourceObjectType;
                    bool m_sourceObjectTypeHasBeenSet;

                    /**
                     * Project ID
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * Corresponding Engine Type of the Source
                     */
                    std::vector<uint64_t> m_sourceEngineTypes;
                    bool m_sourceEngineTypesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_DESCRIBERULETEMPLATESREQUEST_H_
