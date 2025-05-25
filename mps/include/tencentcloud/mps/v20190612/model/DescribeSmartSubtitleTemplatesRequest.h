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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_DESCRIBESMARTSUBTITLETEMPLATESREQUEST_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_DESCRIBESMARTSUBTITLETEMPLATESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Mps
    {
        namespace V20190612
        {
            namespace Model
            {
                /**
                * DescribeSmartSubtitleTemplates request structure.
                */
                class DescribeSmartSubtitleTemplatesRequest : public AbstractModel
                {
                public:
                    DescribeSmartSubtitleTemplatesRequest();
                    ~DescribeSmartSubtitleTemplatesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Unique identifiers of smart subtitle templates for filtering. The array can contain up to 100 unique identifiers.
                     * @return Definitions Unique identifiers of smart subtitle templates for filtering. The array can contain up to 100 unique identifiers.
                     * 
                     */
                    std::vector<int64_t> GetDefinitions() const;

                    /**
                     * 设置Unique identifiers of smart subtitle templates for filtering. The array can contain up to 100 unique identifiers.
                     * @param _definitions Unique identifiers of smart subtitle templates for filtering. The array can contain up to 100 unique identifiers.
                     * 
                     */
                    void SetDefinitions(const std::vector<int64_t>& _definitions);

                    /**
                     * 判断参数 Definitions 是否已赋值
                     * @return Definitions 是否已赋值
                     * 
                     */
                    bool DefinitionsHasBeenSet() const;

                    /**
                     * 获取Paging offset. Default value: 0.
                     * @return Offset Paging offset. Default value: 0.
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置Paging offset. Default value: 0.
                     * @param _offset Paging offset. Default value: 0.
                     * 
                     */
                    void SetOffset(const uint64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取Number of returned entries. Default value: 10. Maximum value: 100.
                     * @return Limit Number of returned entries. Default value: 10. Maximum value: 100.
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置Number of returned entries. Default value: 10. Maximum value: 100.
                     * @param _limit Number of returned entries. Default value: 10. Maximum value: 100.
                     * 
                     */
                    void SetLimit(const uint64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取Condition for filtering templates by type. If this field is not specified, all templates are returned. Valid values:
* Preset: system preset template
* Custom: user-defined template
                     * @return Type Condition for filtering templates by type. If this field is not specified, all templates are returned. Valid values:
* Preset: system preset template
* Custom: user-defined template
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置Condition for filtering templates by type. If this field is not specified, all templates are returned. Valid values:
* Preset: system preset template
* Custom: user-defined template
                     * @param _type Condition for filtering templates by type. If this field is not specified, all templates are returned. Valid values:
* Preset: system preset template
* Custom: user-defined template
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
                     * 获取Condition for filtering smart subtitle templates by ID. Length limit: 64 characters.
                     * @return Name Condition for filtering smart subtitle templates by ID. Length limit: 64 characters.
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置Condition for filtering smart subtitle templates by ID. Length limit: 64 characters.
                     * @param _name Condition for filtering smart subtitle templates by ID. Length limit: 64 characters.
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                private:

                    /**
                     * Unique identifiers of smart subtitle templates for filtering. The array can contain up to 100 unique identifiers.
                     */
                    std::vector<int64_t> m_definitions;
                    bool m_definitionsHasBeenSet;

                    /**
                     * Paging offset. Default value: 0.
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * Number of returned entries. Default value: 10. Maximum value: 100.
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * Condition for filtering templates by type. If this field is not specified, all templates are returned. Valid values:
* Preset: system preset template
* Custom: user-defined template
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * Condition for filtering smart subtitle templates by ID. Length limit: 64 characters.
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_DESCRIBESMARTSUBTITLETEMPLATESREQUEST_H_
