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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_DESCRIBEIMAGEPROCESSINGTEMPLATESRESPONSE_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_DESCRIBEIMAGEPROCESSINGTEMPLATESRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vod/v20180717/model/ImageProcessingTemplate.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
        {
            namespace Model
            {
                /**
                * DescribeImageProcessingTemplates response structure.
                */
                class DescribeImageProcessingTemplatesResponse : public AbstractModel
                {
                public:
                    DescribeImageProcessingTemplatesResponse();
                    ~DescribeImageProcessingTemplatesResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取The total number of records that meet the conditions.
                     * @return TotalCount The total number of records that meet the conditions.
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
                     * 获取The information of the queried image processing templates.
                     * @return ImageProcessingTemplateSet The information of the queried image processing templates.
                     * 
                     */
                    std::vector<ImageProcessingTemplate> GetImageProcessingTemplateSet() const;

                    /**
                     * 判断参数 ImageProcessingTemplateSet 是否已赋值
                     * @return ImageProcessingTemplateSet 是否已赋值
                     * 
                     */
                    bool ImageProcessingTemplateSetHasBeenSet() const;

                private:

                    /**
                     * The total number of records that meet the conditions.
                     */
                    uint64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * The information of the queried image processing templates.
                     */
                    std::vector<ImageProcessingTemplate> m_imageProcessingTemplateSet;
                    bool m_imageProcessingTemplateSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_DESCRIBEIMAGEPROCESSINGTEMPLATESRESPONSE_H_
