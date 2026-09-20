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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_DESCRIBEJUSTINTIMETRANSCODETEMPLATESRESPONSE_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_DESCRIBEJUSTINTIMETRANSCODETEMPLATESRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vod/v20180717/model/JustInTimeTranscodeTemplate.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
        {
            namespace Model
            {
                /**
                * DescribeJustInTimeTranscodeTemplates response structure.
                */
                class DescribeJustInTimeTranscodeTemplatesResponse : public AbstractModel
                {
                public:
                    DescribeJustInTimeTranscodeTemplatesResponse();
                    ~DescribeJustInTimeTranscodeTemplatesResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Total number of records that meet the filtering conditions.
                     * @return TotalCount Total number of records that meet the filtering conditions.
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
                     * 获取Template detail list.
                     * @return JustInTimeTranscodeTemplateSet Template detail list.
                     * 
                     */
                    std::vector<JustInTimeTranscodeTemplate> GetJustInTimeTranscodeTemplateSet() const;

                    /**
                     * 判断参数 JustInTimeTranscodeTemplateSet 是否已赋值
                     * @return JustInTimeTranscodeTemplateSet 是否已赋值
                     * 
                     */
                    bool JustInTimeTranscodeTemplateSetHasBeenSet() const;

                private:

                    /**
                     * Total number of records that meet the filtering conditions.
                     */
                    uint64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * Template detail list.
                     */
                    std::vector<JustInTimeTranscodeTemplate> m_justInTimeTranscodeTemplateSet;
                    bool m_justInTimeTranscodeTemplateSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_DESCRIBEJUSTINTIMETRANSCODETEMPLATESRESPONSE_H_
