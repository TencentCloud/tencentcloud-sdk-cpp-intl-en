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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_DESCRIBEBLINDWATERMARKTEMPLATESREQUEST_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_DESCRIBEBLINDWATERMARKTEMPLATESREQUEST_H_

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
                * DescribeBlindWatermarkTemplates request structure.
                */
                class DescribeBlindWatermarkTemplatesRequest : public AbstractModel
                {
                public:
                    DescribeBlindWatermarkTemplatesRequest();
                    ~DescribeBlindWatermarkTemplatesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Filtering condition for the unique identifier of the digital watermark template. The array length cannot exceed 100.
                     * @return Definitions Filtering condition for the unique identifier of the digital watermark template. The array length cannot exceed 100.
                     * 
                     */
                    std::vector<int64_t> GetDefinitions() const;

                    /**
                     * 设置Filtering condition for the unique identifier of the digital watermark template. The array length cannot exceed 100.
                     * @param _definitions Filtering condition for the unique identifier of the digital watermark template. The array length cannot exceed 100.
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
                     * 获取Filtering condition for the unique identifier of the digital watermark template. The length cannot exceed 64 characters.
                     * @return Name Filtering condition for the unique identifier of the digital watermark template. The length cannot exceed 64 characters.
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置Filtering condition for the unique identifier of the digital watermark template. The length cannot exceed 64 characters.
                     * @param _name Filtering condition for the unique identifier of the digital watermark template. The length cannot exceed 64 characters.
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
                     * 获取Digital watermark type. Valid values: <li>blind-basic: basic copyright digital watermark;</li> <li>blind-nagra: NAGRA forensics watermark.</li>
                     * @return Type Digital watermark type. Valid values: <li>blind-basic: basic copyright digital watermark;</li> <li>blind-nagra: NAGRA forensics watermark.</li>
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置Digital watermark type. Valid values: <li>blind-basic: basic copyright digital watermark;</li> <li>blind-nagra: NAGRA forensics watermark.</li>
                     * @param _type Digital watermark type. Valid values: <li>blind-basic: basic copyright digital watermark;</li> <li>blind-nagra: NAGRA forensics watermark.</li>
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
                     * 获取Pagination offset. The default value is 0.
                     * @return Offset Pagination offset. The default value is 0.
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置Pagination offset. The default value is 0.
                     * @param _offset Pagination offset. The default value is 0.
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
                     * 获取Number of returned records.
<li>Default value: 10.</li>
<li>Maximum value: 100.</li>
                     * @return Limit Number of returned records.
<li>Default value: 10.</li>
<li>Maximum value: 100.</li>
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置Number of returned records.
<li>Default value: 10.</li>
<li>Maximum value: 100.</li>
                     * @param _limit Number of returned records.
<li>Default value: 10.</li>
<li>Maximum value: 100.</li>
                     * 
                     */
                    void SetLimit(const uint64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                private:

                    /**
                     * Filtering condition for the unique identifier of the digital watermark template. The array length cannot exceed 100.
                     */
                    std::vector<int64_t> m_definitions;
                    bool m_definitionsHasBeenSet;

                    /**
                     * Filtering condition for the unique identifier of the digital watermark template. The length cannot exceed 64 characters.
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Digital watermark type. Valid values: <li>blind-basic: basic copyright digital watermark;</li> <li>blind-nagra: NAGRA forensics watermark.</li>
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * Pagination offset. The default value is 0.
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * Number of returned records.
<li>Default value: 10.</li>
<li>Maximum value: 100.</li>
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_DESCRIBEBLINDWATERMARKTEMPLATESREQUEST_H_
