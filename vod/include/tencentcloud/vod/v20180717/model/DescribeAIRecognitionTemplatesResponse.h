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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_DESCRIBEAIRECOGNITIONTEMPLATESRESPONSE_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_DESCRIBEAIRECOGNITIONTEMPLATESRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vod/v20180717/model/AIRecognitionTemplateItem.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
        {
            namespace Model
            {
                /**
                * DescribeAIRecognitionTemplates response structure.
                */
                class DescribeAIRecognitionTemplatesResponse : public AbstractModel
                {
                public:
                    DescribeAIRecognitionTemplatesResponse();
                    ~DescribeAIRecognitionTemplatesResponse() = default;
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
                     * 获取List of video content recognition template details.
                     * @return AIRecognitionTemplateSet List of video content recognition template details.
                     */
                    std::vector<AIRecognitionTemplateItem> GetAIRecognitionTemplateSet() const;

                    /**
                     * 判断参数 AIRecognitionTemplateSet 是否已赋值
                     * @return AIRecognitionTemplateSet 是否已赋值
                     */
                    bool AIRecognitionTemplateSetHasBeenSet() const;

                private:

                    /**
                     * Number of eligible entries.
                     */
                    uint64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * List of video content recognition template details.
                     */
                    std::vector<AIRecognitionTemplateItem> m_aIRecognitionTemplateSet;
                    bool m_aIRecognitionTemplateSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_DESCRIBEAIRECOGNITIONTEMPLATESRESPONSE_H_