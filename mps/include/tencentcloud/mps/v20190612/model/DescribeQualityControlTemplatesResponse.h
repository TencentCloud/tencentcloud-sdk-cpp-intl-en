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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_DESCRIBEQUALITYCONTROLTEMPLATESRESPONSE_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_DESCRIBEQUALITYCONTROLTEMPLATESRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mps/v20190612/model/QualityControlTemplate.h>


namespace TencentCloud
{
    namespace Mps
    {
        namespace V20190612
        {
            namespace Model
            {
                /**
                * DescribeQualityControlTemplates response structure.
                */
                class DescribeQualityControlTemplatesResponse : public AbstractModel
                {
                public:
                    DescribeQualityControlTemplatesResponse();
                    ~DescribeQualityControlTemplatesResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Total number of records that meet filter conditions.
                     * @return TotalCount Total number of records that meet filter conditions.
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
                     * 获取Media quality inspection template details list.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return QualityControlTemplateSet Media quality inspection template details list.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<QualityControlTemplate> GetQualityControlTemplateSet() const;

                    /**
                     * 判断参数 QualityControlTemplateSet 是否已赋值
                     * @return QualityControlTemplateSet 是否已赋值
                     * 
                     */
                    bool QualityControlTemplateSetHasBeenSet() const;

                private:

                    /**
                     * Total number of records that meet filter conditions.
                     */
                    uint64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * Media quality inspection template details list.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<QualityControlTemplate> m_qualityControlTemplateSet;
                    bool m_qualityControlTemplateSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_DESCRIBEQUALITYCONTROLTEMPLATESRESPONSE_H_
