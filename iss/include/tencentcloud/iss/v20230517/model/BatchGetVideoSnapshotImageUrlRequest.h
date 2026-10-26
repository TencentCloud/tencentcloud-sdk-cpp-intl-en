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

#ifndef TENCENTCLOUD_ISS_V20230517_MODEL_BATCHGETVIDEOSNAPSHOTIMAGEURLREQUEST_H_
#define TENCENTCLOUD_ISS_V20230517_MODEL_BATCHGETVIDEOSNAPSHOTIMAGEURLREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Iss
    {
        namespace V20230517
        {
            namespace Model
            {
                /**
                * BatchGetVideoSnapshotImageUrl request structure.
                */
                class BatchGetVideoSnapshotImageUrlRequest : public AbstractModel
                {
                public:
                    BatchGetVideoSnapshotImageUrlRequest();
                    ~BatchGetVideoSnapshotImageUrlRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>Image Id</p>
                     * @return ImageIds <p>Image Id</p>
                     * 
                     */
                    std::vector<std::string> GetImageIds() const;

                    /**
                     * 设置<p>Image Id</p>
                     * @param _imageIds <p>Image Id</p>
                     * 
                     */
                    void SetImageIds(const std::vector<std::string>& _imageIds);

                    /**
                     * 判断参数 ImageIds 是否已赋值
                     * @return ImageIds 是否已赋值
                     * 
                     */
                    bool ImageIdsHasBeenSet() const;

                    /**
                     * 获取<p>Valid period of the image URL, unit: seconds</p><p>Value range: [60, 86400]</p><p>Default value: 600</p>
                     * @return ImageUrlExpires <p>Valid period of the image URL, unit: seconds</p><p>Value range: [60, 86400]</p><p>Default value: 600</p>
                     * 
                     */
                    int64_t GetImageUrlExpires() const;

                    /**
                     * 设置<p>Valid period of the image URL, unit: seconds</p><p>Value range: [60, 86400]</p><p>Default value: 600</p>
                     * @param _imageUrlExpires <p>Valid period of the image URL, unit: seconds</p><p>Value range: [60, 86400]</p><p>Default value: 600</p>
                     * 
                     */
                    void SetImageUrlExpires(const int64_t& _imageUrlExpires);

                    /**
                     * 判断参数 ImageUrlExpires 是否已赋值
                     * @return ImageUrlExpires 是否已赋值
                     * 
                     */
                    bool ImageUrlExpiresHasBeenSet() const;

                private:

                    /**
                     * <p>Image Id</p>
                     */
                    std::vector<std::string> m_imageIds;
                    bool m_imageIdsHasBeenSet;

                    /**
                     * <p>Valid period of the image URL, unit: seconds</p><p>Value range: [60, 86400]</p><p>Default value: 600</p>
                     */
                    int64_t m_imageUrlExpires;
                    bool m_imageUrlExpiresHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ISS_V20230517_MODEL_BATCHGETVIDEOSNAPSHOTIMAGEURLREQUEST_H_
