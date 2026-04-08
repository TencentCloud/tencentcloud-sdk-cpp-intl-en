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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_DESCRIBESUBTITLEEMBEDTEMPLATESREQUEST_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_DESCRIBESUBTITLEEMBEDTEMPLATESREQUEST_H_

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
                * DescribeSubtitleEmbedTemplates request structure.
                */
                class DescribeSubtitleEmbedTemplatesRequest : public AbstractModel
                {
                public:
                    DescribeSubtitleEmbedTemplatesRequest();
                    ~DescribeSubtitleEmbedTemplatesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>Unique identifiers of intelligent caption templates for filtering. The array can contain up to 100 unique identifiers.</p>
                     * @return Definitions <p>Unique identifiers of intelligent caption templates for filtering. The array can contain up to 100 unique identifiers.</p>
                     * 
                     */
                    std::vector<int64_t> GetDefinitions() const;

                    /**
                     * 设置<p>Unique identifiers of intelligent caption templates for filtering. The array can contain up to 100 unique identifiers.</p>
                     * @param _definitions <p>Unique identifiers of intelligent caption templates for filtering. The array can contain up to 100 unique identifiers.</p>
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
                     * 获取<p>Paging offset. Default value: 0.</p>
                     * @return Offset <p>Paging offset. Default value: 0.</p>
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置<p>Paging offset. Default value: 0.</p>
                     * @param _offset <p>Paging offset. Default value: 0.</p>
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
                     * 获取<p>Number of returned entries. Default value: 10. Maximum value: 100.</p>
                     * @return Limit <p>Number of returned entries. Default value: 10. Maximum value: 100.</p>
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置<p>Number of returned entries. Default value: 10. Maximum value: 100.</p>
                     * @param _limit <p>Number of returned entries. Default value: 10. Maximum value: 100.</p>
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
                     * 获取<p>Filtering condition for the template type. Leave it blank to return all. Valid values:</p><ul><li>Preset: system preset template;</li><li>Custom: user-defined template.</li></ul>
                     * @return Type <p>Filtering condition for the template type. Leave it blank to return all. Valid values:</p><ul><li>Preset: system preset template;</li><li>Custom: user-defined template.</li></ul>
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置<p>Filtering condition for the template type. Leave it blank to return all. Valid values:</p><ul><li>Preset: system preset template;</li><li>Custom: user-defined template.</li></ul>
                     * @param _type <p>Filtering condition for the template type. Leave it blank to return all. Valid values:</p><ul><li>Preset: system preset template;</li><li>Custom: user-defined template.</li></ul>
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
                     * 获取<p>Condition for filtering subtitle suppression templates by ID. Length limit: 64 characters.</p>
                     * @return Name <p>Condition for filtering subtitle suppression templates by ID. Length limit: 64 characters.</p>
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置<p>Condition for filtering subtitle suppression templates by ID. Length limit: 64 characters.</p>
                     * @param _name <p>Condition for filtering subtitle suppression templates by ID. Length limit: 64 characters.</p>
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
                     * <p>Unique identifiers of intelligent caption templates for filtering. The array can contain up to 100 unique identifiers.</p>
                     */
                    std::vector<int64_t> m_definitions;
                    bool m_definitionsHasBeenSet;

                    /**
                     * <p>Paging offset. Default value: 0.</p>
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * <p>Number of returned entries. Default value: 10. Maximum value: 100.</p>
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * <p>Filtering condition for the template type. Leave it blank to return all. Valid values:</p><ul><li>Preset: system preset template;</li><li>Custom: user-defined template.</li></ul>
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * <p>Condition for filtering subtitle suppression templates by ID. Length limit: 64 characters.</p>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_DESCRIBESUBTITLEEMBEDTEMPLATESREQUEST_H_
