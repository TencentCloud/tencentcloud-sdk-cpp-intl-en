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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_DESCRIBELIVERECORDTEMPLATESREQUEST_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_DESCRIBELIVERECORDTEMPLATESREQUEST_H_

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
                * DescribeLiveRecordTemplates request structure.
                */
                class DescribeLiveRecordTemplatesRequest : public AbstractModel
                {
                public:
                    DescribeLiveRecordTemplatesRequest();
                    ~DescribeLiveRecordTemplatesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Specifies the recording template unique identifier filter condition, with an array length limit of 100.
                     * @return Definitions Specifies the recording template unique identifier filter condition, with an array length limit of 100.
                     * 
                     */
                    std::vector<int64_t> GetDefinitions() const;

                    /**
                     * 设置Specifies the recording template unique identifier filter condition, with an array length limit of 100.
                     * @param _definitions Specifies the recording template unique identifier filter condition, with an array length limit of 100.
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
                    int64_t GetOffset() const;

                    /**
                     * 设置Paging offset. Default value: 0.
                     * @param _offset Paging offset. Default value: 0.
                     * 
                     */
                    void SetOffset(const int64_t& _offset);

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
                    int64_t GetLimit() const;

                    /**
                     * 设置Number of returned entries. Default value: 10. Maximum value: 100.
                     * @param _limit Number of returned entries. Default value: 10. Maximum value: 100.
                     * 
                     */
                    void SetLimit(const int64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取Indicates the template type filter condition. If left empty, all templates are returned. Valid values:
* Preset: System preset template;
* Custom
                     * @return Type Indicates the template type filter condition. If left empty, all templates are returned. Valid values:
* Preset: System preset template;
* Custom
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置Indicates the template type filter condition. If left empty, all templates are returned. Valid values:
* Preset: System preset template;
* Custom
                     * @param _type Indicates the template type filter condition. If left empty, all templates are returned. Valid values:
* Preset: System preset template;
* Custom
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
                     * 获取Specifies the recording template identifier filter condition, with a length limit of 64 characters.
                     * @return Name Specifies the recording template identifier filter condition, with a length limit of 64 characters.
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置Specifies the recording template identifier filter condition, with a length limit of 64 characters.
                     * @param _name Specifies the recording template identifier filter condition, with a length limit of 64 characters.
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
                     * Specifies the recording template unique identifier filter condition, with an array length limit of 100.
                     */
                    std::vector<int64_t> m_definitions;
                    bool m_definitionsHasBeenSet;

                    /**
                     * Paging offset. Default value: 0.
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * Number of returned entries. Default value: 10. Maximum value: 100.
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * Indicates the template type filter condition. If left empty, all templates are returned. Valid values:
* Preset: System preset template;
* Custom
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * Specifies the recording template identifier filter condition, with a length limit of 64 characters.
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_DESCRIBELIVERECORDTEMPLATESREQUEST_H_
