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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_DESCRIBEHEADTAILTEMPLATESRESPONSE_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_DESCRIBEHEADTAILTEMPLATESRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vod/v20180717/model/HeadTailTemplate.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
        {
            namespace Model
            {
                /**
                * DescribeHeadTailTemplates response structure.
                */
                class DescribeHeadTailTemplatesResponse : public AbstractModel
                {
                public:
                    DescribeHeadTailTemplatesResponse();
                    ~DescribeHeadTailTemplatesResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取The total number of records matching the filter criteria.
                     * @return TotalCount The total number of records matching the filter criteria.
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
                     * 获取Head Tail Template Details.
                     * @return HeadTailTemplateSet Head Tail Template Details.
                     * 
                     */
                    std::vector<HeadTailTemplate> GetHeadTailTemplateSet() const;

                    /**
                     * 判断参数 HeadTailTemplateSet 是否已赋值
                     * @return HeadTailTemplateSet 是否已赋值
                     * 
                     */
                    bool HeadTailTemplateSetHasBeenSet() const;

                private:

                    /**
                     * The total number of records matching the filter criteria.
                     */
                    uint64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * Head Tail Template Details.
                     */
                    std::vector<HeadTailTemplate> m_headTailTemplateSet;
                    bool m_headTailTemplateSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_DESCRIBEHEADTAILTEMPLATESRESPONSE_H_
