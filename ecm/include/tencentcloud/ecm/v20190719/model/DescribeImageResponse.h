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

#ifndef TENCENTCLOUD_ECM_V20190719_MODEL_DESCRIBEIMAGERESPONSE_H_
#define TENCENTCLOUD_ECM_V20190719_MODEL_DESCRIBEIMAGERESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ecm/v20190719/model/Image.h>


namespace TencentCloud
{
    namespace Ecm
    {
        namespace V20190719
        {
            namespace Model
            {
                /**
                * DescribeImage response structure.
                */
                class DescribeImageResponse : public AbstractModel
                {
                public:
                    DescribeImageResponse();
                    ~DescribeImageResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Total number of images
                     * @return TotalCount Total number of images
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
                     * 获取Image array
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return ImageSet Image array
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<Image> GetImageSet() const;

                    /**
                     * 判断参数 ImageSet 是否已赋值
                     * @return ImageSet 是否已赋值
                     * 
                     */
                    bool ImageSetHasBeenSet() const;

                private:

                    /**
                     * Total number of images
                     */
                    int64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * Image array
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<Image> m_imageSet;
                    bool m_imageSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ECM_V20190719_MODEL_DESCRIBEIMAGERESPONSE_H_
