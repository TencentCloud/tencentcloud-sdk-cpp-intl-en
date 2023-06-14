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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_DESCRIBEWATERMARKTEMPLATESREQUEST_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_DESCRIBEWATERMARKTEMPLATESREQUEST_H_

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
                * DescribeWatermarkTemplates request structure.
                */
                class DescribeWatermarkTemplatesRequest : public AbstractModel
                {
                public:
                    DescribeWatermarkTemplatesRequest();
                    ~DescribeWatermarkTemplatesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Unique ID filter of watermarking templates. Array length limit: 100.
                     * @return Definitions Unique ID filter of watermarking templates. Array length limit: 100.
                     * 
                     */
                    std::vector<int64_t> GetDefinitions() const;

                    /**
                     * 设置Unique ID filter of watermarking templates. Array length limit: 100.
                     * @param _definitions Unique ID filter of watermarking templates. Array length limit: 100.
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
                     * 获取Watermark type filter. Valid values:
<li>image: Image watermark;</li>
<li>text: Text watermark.</li>
                     * @return Type Watermark type filter. Valid values:
<li>image: Image watermark;</li>
<li>text: Text watermark.</li>
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置Watermark type filter. Valid values:
<li>image: Image watermark;</li>
<li>text: Text watermark.</li>
                     * @param _type Watermark type filter. Valid values:
<li>image: Image watermark;</li>
<li>text: Text watermark.</li>
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
                     * 获取Number of returned entries
<li>Default value: 10;</li>
<li>Maximum value: 100.</li>
                     * @return Limit Number of returned entries
<li>Default value: 10;</li>
<li>Maximum value: 100.</li>
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置Number of returned entries
<li>Default value: 10;</li>
<li>Maximum value: 100.</li>
                     * @param _limit Number of returned entries
<li>Default value: 10;</li>
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
                     * Unique ID filter of watermarking templates. Array length limit: 100.
                     */
                    std::vector<int64_t> m_definitions;
                    bool m_definitionsHasBeenSet;

                    /**
                     * Watermark type filter. Valid values:
<li>image: Image watermark;</li>
<li>text: Text watermark.</li>
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * Paging offset. Default value: 0.
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * Number of returned entries
<li>Default value: 10;</li>
<li>Maximum value: 100.</li>
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_DESCRIBEWATERMARKTEMPLATESREQUEST_H_
