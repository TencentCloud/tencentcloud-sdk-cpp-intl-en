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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_DESCRIBEQUALITYINSPECTTEMPLATESRESPONSE_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_DESCRIBEQUALITYINSPECTTEMPLATESRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vod/v20180717/model/QualityInspectTemplateItem.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
        {
            namespace Model
            {
                /**
                * DescribeQualityInspectTemplates response structure.
                */
                class DescribeQualityInspectTemplatesResponse : public AbstractModel
                {
                public:
                    DescribeQualityInspectTemplatesResponse();
                    ~DescribeQualityInspectTemplatesResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Comply with the filter conditions, the total number of records.
                     * @return TotalCount Comply with the filter conditions, the total number of records.
                     * 
                     */
                    int64_t GetTotalCount() const;

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     * 
                     */
                    bool TotalCountHasBeenSet() const;

                    /**
                     * 获取Media quality inspect template details list.
                     * @return QualityInspectTemplateSet Media quality inspect template details list.
                     * 
                     */
                    std::vector<QualityInspectTemplateItem> GetQualityInspectTemplateSet() const;

                    /**
                     * 判断参数 QualityInspectTemplateSet 是否已赋值
                     * @return QualityInspectTemplateSet 是否已赋值
                     * 
                     */
                    bool QualityInspectTemplateSetHasBeenSet() const;

                private:

                    /**
                     * Comply with the filter conditions, the total number of records.
                     */
                    int64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * Media quality inspect template details list.
                     */
                    std::vector<QualityInspectTemplateItem> m_qualityInspectTemplateSet;
                    bool m_qualityInspectTemplateSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_DESCRIBEQUALITYINSPECTTEMPLATESRESPONSE_H_
