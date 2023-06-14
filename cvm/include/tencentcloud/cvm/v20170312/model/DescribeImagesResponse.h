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

#ifndef TENCENTCLOUD_CVM_V20170312_MODEL_DESCRIBEIMAGESRESPONSE_H_
#define TENCENTCLOUD_CVM_V20170312_MODEL_DESCRIBEIMAGESRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cvm/v20170312/model/Image.h>


namespace TencentCloud
{
    namespace Cvm
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * DescribeImages response structure.
                */
                class DescribeImagesResponse : public AbstractModel
                {
                public:
                    DescribeImagesResponse();
                    ~DescribeImagesResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Information on an image, including its state and attributes.
                     * @return ImageSet Information on an image, including its state and attributes.
                     * 
                     */
                    std::vector<Image> GetImageSet() const;

                    /**
                     * 判断参数 ImageSet 是否已赋值
                     * @return ImageSet 是否已赋值
                     * 
                     */
                    bool ImageSetHasBeenSet() const;

                    /**
                     * 获取Number of images meeting the filtering conditions.
                     * @return TotalCount Number of images meeting the filtering conditions.
                     * 
                     */
                    int64_t GetTotalCount() const;

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     * 
                     */
                    bool TotalCountHasBeenSet() const;

                private:

                    /**
                     * Information on an image, including its state and attributes.
                     */
                    std::vector<Image> m_imageSet;
                    bool m_imageSetHasBeenSet;

                    /**
                     * Number of images meeting the filtering conditions.
                     */
                    int64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CVM_V20170312_MODEL_DESCRIBEIMAGESRESPONSE_H_
