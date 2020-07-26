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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_DESCRIBEADAPTIVEDYNAMICSTREAMINGTEMPLATESRESPONSE_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_DESCRIBEADAPTIVEDYNAMICSTREAMINGTEMPLATESRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vod/v20180717/model/AdaptiveDynamicStreamingTemplate.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
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


                    /**
                     * 获取Number of eligible entries.
                     * @return TotalCount Number of eligible entries.
                     */
                    uint64_t GetTotalCount() const;

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     */
                    bool TotalCountHasBeenSet() const;

                    /**
                     * 获取List of transcoding to adaptive bitrate streaming template details.
                     * @return AdaptiveDynamicStreamingTemplateSet List of transcoding to adaptive bitrate streaming template details.
                     */
                    std::vector<AdaptiveDynamicStreamingTemplate> GetAdaptiveDynamicStreamingTemplateSet() const;

                    /**
                     * 判断参数 AdaptiveDynamicStreamingTemplateSet 是否已赋值
                     * @return AdaptiveDynamicStreamingTemplateSet 是否已赋值
                     */
                    bool AdaptiveDynamicStreamingTemplateSetHasBeenSet() const;

                private:

                    /**
                     * Number of eligible entries.
                     */
                    uint64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * List of transcoding to adaptive bitrate streaming template details.
                     */
                    std::vector<AdaptiveDynamicStreamingTemplate> m_adaptiveDynamicStreamingTemplateSet;
                    bool m_adaptiveDynamicStreamingTemplateSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_DESCRIBEADAPTIVEDYNAMICSTREAMINGTEMPLATESRESPONSE_H_
