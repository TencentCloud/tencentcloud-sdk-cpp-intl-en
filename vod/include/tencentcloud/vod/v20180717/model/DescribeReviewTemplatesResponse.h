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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_DESCRIBEREVIEWTEMPLATESRESPONSE_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_DESCRIBEREVIEWTEMPLATESRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vod/v20180717/model/ReviewTemplate.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
        {
            namespace Model
            {
                /**
                * DescribeReviewTemplates response structure.
                */
                class DescribeReviewTemplatesResponse : public AbstractModel
                {
                public:
                    DescribeReviewTemplatesResponse();
                    ~DescribeReviewTemplatesResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取The total number of records that meet the conditions.
                     * @return TotalCount The total number of records that meet the conditions.
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
                     * 获取The details of the moderation templates.
                     * @return ReviewTemplateSet The details of the moderation templates.
                     * 
                     */
                    std::vector<ReviewTemplate> GetReviewTemplateSet() const;

                    /**
                     * 判断参数 ReviewTemplateSet 是否已赋值
                     * @return ReviewTemplateSet 是否已赋值
                     * 
                     */
                    bool ReviewTemplateSetHasBeenSet() const;

                private:

                    /**
                     * The total number of records that meet the conditions.
                     */
                    int64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * The details of the moderation templates.
                     */
                    std::vector<ReviewTemplate> m_reviewTemplateSet;
                    bool m_reviewTemplateSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_DESCRIBEREVIEWTEMPLATESRESPONSE_H_
