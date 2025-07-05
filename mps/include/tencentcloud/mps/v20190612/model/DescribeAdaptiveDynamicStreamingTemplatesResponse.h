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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_DESCRIBEADAPTIVEDYNAMICSTREAMINGTEMPLATESRESPONSE_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_DESCRIBEADAPTIVEDYNAMICSTREAMINGTEMPLATESRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mps/v20190612/model/AdaptiveDynamicStreamingTemplate.h>


namespace TencentCloud
{
    namespace Mps
    {
        namespace V20190612
        {
            namespace Model
            {
                /**
                * DescribeAdaptiveDynamicStreamingTemplates response structure.
                */
                class DescribeAdaptiveDynamicStreamingTemplatesResponse : public AbstractModel
                {
                public:
                    DescribeAdaptiveDynamicStreamingTemplatesResponse();
                    ~DescribeAdaptiveDynamicStreamingTemplatesResponse() = default;
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
                     * 获取List of adaptive bitrate streaming template details.
                     * @return AdaptiveDynamicStreamingTemplateSet List of adaptive bitrate streaming template details.
                     * 
                     */
                    std::vector<AdaptiveDynamicStreamingTemplate> GetAdaptiveDynamicStreamingTemplateSet() const;

                    /**
                     * 判断参数 AdaptiveDynamicStreamingTemplateSet 是否已赋值
                     * @return AdaptiveDynamicStreamingTemplateSet 是否已赋值
                     * 
                     */
                    bool AdaptiveDynamicStreamingTemplateSetHasBeenSet() const;

                private:

                    /**
                     * Number of eligible entries.
                     */
                    uint64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * List of adaptive bitrate streaming template details.
                     */
                    std::vector<AdaptiveDynamicStreamingTemplate> m_adaptiveDynamicStreamingTemplateSet;
                    bool m_adaptiveDynamicStreamingTemplateSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_DESCRIBEADAPTIVEDYNAMICSTREAMINGTEMPLATESRESPONSE_H_
