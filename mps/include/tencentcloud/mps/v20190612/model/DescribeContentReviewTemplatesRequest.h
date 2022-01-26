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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_DESCRIBECONTENTREVIEWTEMPLATESREQUEST_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_DESCRIBECONTENTREVIEWTEMPLATESREQUEST_H_

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
                * DescribeContentReviewTemplates request structure.
                */
                class DescribeContentReviewTemplatesRequest : public AbstractModel
                {
                public:
                    DescribeContentReviewTemplatesRequest();
                    ~DescribeContentReviewTemplatesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Unique ID of intelligent content recognition templates as the filter. Array length limit: 50
                     * @return Definitions Unique ID of intelligent content recognition templates as the filter. Array length limit: 50
                     */
                    std::vector<int64_t> GetDefinitions() const;

                    /**
                     * 设置Unique ID of intelligent content recognition templates as the filter. Array length limit: 50
                     * @param Definitions Unique ID of intelligent content recognition templates as the filter. Array length limit: 50
                     */
                    void SetDefinitions(const std::vector<int64_t>& _definitions);

                    /**
                     * 判断参数 Definitions 是否已赋值
                     * @return Definitions 是否已赋值
                     */
                    bool DefinitionsHasBeenSet() const;

                    /**
                     * 获取Paging offset. Default value: 0.
                     * @return Offset Paging offset. Default value: 0.
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置Paging offset. Default value: 0.
                     * @param Offset Paging offset. Default value: 0.
                     */
                    void SetOffset(const uint64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取Number of returned entries. Default value: 10. Maximum value: 50.
                     * @return Limit Number of returned entries. Default value: 10. Maximum value: 50.
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置Number of returned entries. Default value: 10. Maximum value: 50.
                     * @param Limit Number of returned entries. Default value: 10. Maximum value: 50.
                     */
                    void SetLimit(const uint64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     */
                    bool LimitHasBeenSet() const;

                private:

                    /**
                     * Unique ID of intelligent content recognition templates as the filter. Array length limit: 50
                     */
                    std::vector<int64_t> m_definitions;
                    bool m_definitionsHasBeenSet;

                    /**
                     * Paging offset. Default value: 0.
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * Number of returned entries. Default value: 10. Maximum value: 50.
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_DESCRIBECONTENTREVIEWTEMPLATESREQUEST_H_
