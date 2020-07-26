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

#ifndef TENCENTCLOUD_CVM_V20170312_MODEL_DESCRIBEIMAGESREQUEST_H_
#define TENCENTCLOUD_CVM_V20170312_MODEL_DESCRIBEIMAGESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cvm/v20170312/model/Filter.h>


namespace TencentCloud
{
    namespace Cvm
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * DescribeImages request structure.
                */
                class DescribeImagesRequest : public AbstractModel
                {
                public:
                    DescribeImagesRequest();
                    ~DescribeImagesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取List of image IDs, such as `img-gvbnzy6f`. For the format of array-type parameters, see [API Introduction](https://cloud.tencent.com/document/api/213/15688). You can obtain the image IDs in two ways: <br><li>Call [DescribeImages](https://cloud.tencent.com/document/api/213/15715) and look for `ImageId` in the response. <br><li>View the image IDs in the [Image Console](https://console.cloud.tencent.com/cvm/image).
                     * @return ImageIds List of image IDs, such as `img-gvbnzy6f`. For the format of array-type parameters, see [API Introduction](https://cloud.tencent.com/document/api/213/15688). You can obtain the image IDs in two ways: <br><li>Call [DescribeImages](https://cloud.tencent.com/document/api/213/15715) and look for `ImageId` in the response. <br><li>View the image IDs in the [Image Console](https://console.cloud.tencent.com/cvm/image).
                     */
                    std::vector<std::string> GetImageIds() const;

                    /**
                     * 设置List of image IDs, such as `img-gvbnzy6f`. For the format of array-type parameters, see [API Introduction](https://cloud.tencent.com/document/api/213/15688). You can obtain the image IDs in two ways: <br><li>Call [DescribeImages](https://cloud.tencent.com/document/api/213/15715) and look for `ImageId` in the response. <br><li>View the image IDs in the [Image Console](https://console.cloud.tencent.com/cvm/image).
                     * @param ImageIds List of image IDs, such as `img-gvbnzy6f`. For the format of array-type parameters, see [API Introduction](https://cloud.tencent.com/document/api/213/15688). You can obtain the image IDs in two ways: <br><li>Call [DescribeImages](https://cloud.tencent.com/document/api/213/15715) and look for `ImageId` in the response. <br><li>View the image IDs in the [Image Console](https://console.cloud.tencent.com/cvm/image).
                     */
                    void SetImageIds(const std::vector<std::string>& _imageIds);

                    /**
                     * 判断参数 ImageIds 是否已赋值
                     * @return ImageIds 是否已赋值
                     */
                    bool ImageIdsHasBeenSet() const;

                    /**
                     * 获取Filters. Each request can have up to 10 `Filters` and 5 `Filters.Values`. You cannot specify `ImageIds` and `Filters` at the same time. Specific filters:
<li>`image-id` - String - Optional - Filter results by image ID</li>
<li>`image-type` - String - Optional - Filter results by image type. Valid values:
    PRIVATE_IMAGE: private image created by the current account 
    PUBLIC_IMAGE: public image created by Tencent Cloud
   SHARED_IMAGE: image shared with the current account by another account.</li>
                     * @return Filters Filters. Each request can have up to 10 `Filters` and 5 `Filters.Values`. You cannot specify `ImageIds` and `Filters` at the same time. Specific filters:
<li>`image-id` - String - Optional - Filter results by image ID</li>
<li>`image-type` - String - Optional - Filter results by image type. Valid values:
    PRIVATE_IMAGE: private image created by the current account 
    PUBLIC_IMAGE: public image created by Tencent Cloud
   SHARED_IMAGE: image shared with the current account by another account.</li>
                     */
                    std::vector<Filter> GetFilters() const;

                    /**
                     * 设置Filters. Each request can have up to 10 `Filters` and 5 `Filters.Values`. You cannot specify `ImageIds` and `Filters` at the same time. Specific filters:
<li>`image-id` - String - Optional - Filter results by image ID</li>
<li>`image-type` - String - Optional - Filter results by image type. Valid values:
    PRIVATE_IMAGE: private image created by the current account 
    PUBLIC_IMAGE: public image created by Tencent Cloud
   SHARED_IMAGE: image shared with the current account by another account.</li>
                     * @param Filters Filters. Each request can have up to 10 `Filters` and 5 `Filters.Values`. You cannot specify `ImageIds` and `Filters` at the same time. Specific filters:
<li>`image-id` - String - Optional - Filter results by image ID</li>
<li>`image-type` - String - Optional - Filter results by image type. Valid values:
    PRIVATE_IMAGE: private image created by the current account 
    PUBLIC_IMAGE: public image created by Tencent Cloud
   SHARED_IMAGE: image shared with the current account by another account.</li>
                     */
                    void SetFilters(const std::vector<Filter>& _filters);

                    /**
                     * 判断参数 Filters 是否已赋值
                     * @return Filters 是否已赋值
                     */
                    bool FiltersHasBeenSet() const;

                    /**
                     * 获取Offset; default value: 0. For more information on `Offset`, see [API Introduction](/document/api/213/568#.E8.BE.93.E5.85.A5.E5.8F.82.E6.95.B0.E4.B8.8E.E8.BF.94.E5.9B.9E.E5.8F.82.E6.95.B0.E9.87.8A.E4.B9.89).
                     * @return Offset Offset; default value: 0. For more information on `Offset`, see [API Introduction](/document/api/213/568#.E8.BE.93.E5.85.A5.E5.8F.82.E6.95.B0.E4.B8.8E.E8.BF.94.E5.9B.9E.E5.8F.82.E6.95.B0.E9.87.8A.E4.B9.89).
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置Offset; default value: 0. For more information on `Offset`, see [API Introduction](/document/api/213/568#.E8.BE.93.E5.85.A5.E5.8F.82.E6.95.B0.E4.B8.8E.E8.BF.94.E5.9B.9E.E5.8F.82.E6.95.B0.E9.87.8A.E4.B9.89).
                     * @param Offset Offset; default value: 0. For more information on `Offset`, see [API Introduction](/document/api/213/568#.E8.BE.93.E5.85.A5.E5.8F.82.E6.95.B0.E4.B8.8E.E8.BF.94.E5.9B.9E.E5.8F.82.E6.95.B0.E9.87.8A.E4.B9.89).
                     */
                    void SetOffset(const uint64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取Number of results returned; default value: 20; maximum: 100. For more information on `Limit`, see [API Introduction](/document/api/213/568#.E8.BE.93.E5.85.A5.E5.8F.82.E6.95.B0.E4.B8.8E.E8.BF.94.E5.9B.9E.E5.8F.82.E6.95.B0.E9.87.8A.E4.B9.89).
                     * @return Limit Number of results returned; default value: 20; maximum: 100. For more information on `Limit`, see [API Introduction](/document/api/213/568#.E8.BE.93.E5.85.A5.E5.8F.82.E6.95.B0.E4.B8.8E.E8.BF.94.E5.9B.9E.E5.8F.82.E6.95.B0.E9.87.8A.E4.B9.89).
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置Number of results returned; default value: 20; maximum: 100. For more information on `Limit`, see [API Introduction](/document/api/213/568#.E8.BE.93.E5.85.A5.E5.8F.82.E6.95.B0.E4.B8.8E.E8.BF.94.E5.9B.9E.E5.8F.82.E6.95.B0.E9.87.8A.E4.B9.89).
                     * @param Limit Number of results returned; default value: 20; maximum: 100. For more information on `Limit`, see [API Introduction](/document/api/213/568#.E8.BE.93.E5.85.A5.E5.8F.82.E6.95.B0.E4.B8.8E.E8.BF.94.E5.9B.9E.E5.8F.82.E6.95.B0.E9.87.8A.E4.B9.89).
                     */
                    void SetLimit(const uint64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取Instance type, e.g. `S1.SMALL1`
                     * @return InstanceType Instance type, e.g. `S1.SMALL1`
                     */
                    std::string GetInstanceType() const;

                    /**
                     * 设置Instance type, e.g. `S1.SMALL1`
                     * @param InstanceType Instance type, e.g. `S1.SMALL1`
                     */
                    void SetInstanceType(const std::string& _instanceType);

                    /**
                     * 判断参数 InstanceType 是否已赋值
                     * @return InstanceType 是否已赋值
                     */
                    bool InstanceTypeHasBeenSet() const;

                private:

                    /**
                     * List of image IDs, such as `img-gvbnzy6f`. For the format of array-type parameters, see [API Introduction](https://cloud.tencent.com/document/api/213/15688). You can obtain the image IDs in two ways: <br><li>Call [DescribeImages](https://cloud.tencent.com/document/api/213/15715) and look for `ImageId` in the response. <br><li>View the image IDs in the [Image Console](https://console.cloud.tencent.com/cvm/image).
                     */
                    std::vector<std::string> m_imageIds;
                    bool m_imageIdsHasBeenSet;

                    /**
                     * Filters. Each request can have up to 10 `Filters` and 5 `Filters.Values`. You cannot specify `ImageIds` and `Filters` at the same time. Specific filters:
<li>`image-id` - String - Optional - Filter results by image ID</li>
<li>`image-type` - String - Optional - Filter results by image type. Valid values:
    PRIVATE_IMAGE: private image created by the current account 
    PUBLIC_IMAGE: public image created by Tencent Cloud
   SHARED_IMAGE: image shared with the current account by another account.</li>
                     */
                    std::vector<Filter> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * Offset; default value: 0. For more information on `Offset`, see [API Introduction](/document/api/213/568#.E8.BE.93.E5.85.A5.E5.8F.82.E6.95.B0.E4.B8.8E.E8.BF.94.E5.9B.9E.E5.8F.82.E6.95.B0.E9.87.8A.E4.B9.89).
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * Number of results returned; default value: 20; maximum: 100. For more information on `Limit`, see [API Introduction](/document/api/213/568#.E8.BE.93.E5.85.A5.E5.8F.82.E6.95.B0.E4.B8.8E.E8.BF.94.E5.9B.9E.E5.8F.82.E6.95.B0.E9.87.8A.E4.B9.89).
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * Instance type, e.g. `S1.SMALL1`
                     */
                    std::string m_instanceType;
                    bool m_instanceTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CVM_V20170312_MODEL_DESCRIBEIMAGESREQUEST_H_
