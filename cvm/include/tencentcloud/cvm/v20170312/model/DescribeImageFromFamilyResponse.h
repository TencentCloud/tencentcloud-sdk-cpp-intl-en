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

#ifndef TENCENTCLOUD_CVM_V20170312_MODEL_DESCRIBEIMAGEFROMFAMILYRESPONSE_H_
#define TENCENTCLOUD_CVM_V20170312_MODEL_DESCRIBEIMAGEFROMFAMILYRESPONSE_H_

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
                * DescribeImageFromFamily response structure.
                */
                class DescribeImageFromFamilyResponse : public AbstractModel
                {
                public:
                    DescribeImageFromFamilyResponse();
                    ~DescribeImageFromFamilyResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Image information. Null is returned when there is no available image.
Note: This field may return null, indicating that no valid value is found.
                     * @return Image Image information. Null is returned when there is no available image.
Note: This field may return null, indicating that no valid value is found.
                     * 
                     */
                    Image GetImage() const;

                    /**
                     * 判断参数 Image 是否已赋值
                     * @return Image 是否已赋值
                     * 
                     */
                    bool ImageHasBeenSet() const;

                private:

                    /**
                     * Image information. Null is returned when there is no available image.
Note: This field may return null, indicating that no valid value is found.
                     */
                    Image m_image;
                    bool m_imageHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CVM_V20170312_MODEL_DESCRIBEIMAGEFROMFAMILYRESPONSE_H_
