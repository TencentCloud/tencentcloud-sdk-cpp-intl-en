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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_DESCRIBEWATERMARKTEMPLATESRESPONSE_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_DESCRIBEWATERMARKTEMPLATESRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mps/v20190612/model/WatermarkTemplate.h>


namespace TencentCloud
{
    namespace Mps
    {
        namespace V20190612
        {
            namespace Model
            {
                /**
                * DescribeWatermarkTemplates response structure.
                */
                class DescribeWatermarkTemplatesResponse : public AbstractModel
                {
                public:
                    DescribeWatermarkTemplatesResponse();
                    ~DescribeWatermarkTemplatesResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Number of eligible entries.
                     * @return TotalCount Number of eligible entries.
                     * 
                     */
                    uint64_t GetTotalCount() const;

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     * 
                     */
                    bool TotalCountHasBeenSet() const;

                    /**
                     * 获取List of watermarking template details.
                     * @return WatermarkTemplateSet List of watermarking template details.
                     * 
                     */
                    std::vector<WatermarkTemplate> GetWatermarkTemplateSet() const;

                    /**
                     * 判断参数 WatermarkTemplateSet 是否已赋值
                     * @return WatermarkTemplateSet 是否已赋值
                     * 
                     */
                    bool WatermarkTemplateSetHasBeenSet() const;

                private:

                    /**
                     * Number of eligible entries.
                     */
                    uint64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * List of watermarking template details.
                     */
                    std::vector<WatermarkTemplate> m_watermarkTemplateSet;
                    bool m_watermarkTemplateSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_DESCRIBEWATERMARKTEMPLATESRESPONSE_H_
