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

#ifndef TENCENTCLOUD_LIGHTHOUSE_V20200324_MODEL_DESCRIBEIMAGESTOSHAREREQUEST_H_
#define TENCENTCLOUD_LIGHTHOUSE_V20200324_MODEL_DESCRIBEIMAGESTOSHAREREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/lighthouse/v20200324/model/Filter.h>


namespace TencentCloud
{
    namespace Lighthouse
    {
        namespace V20200324
        {
            namespace Model
            {
                /**
                * DescribeImagesToShare request structure.
                */
                class DescribeImagesToShareRequest : public AbstractModel
                {
                public:
                    DescribeImagesToShareRequest();
                    ~DescribeImagesToShareRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取List of CVM image IDs, which can be obtained through the ImageId in the returned value of the [DescribeImages](https://www.tencentcloud.com/document/api/213/15715?from_cn_redirect=1) API.
                     * @return ImageIds List of CVM image IDs, which can be obtained through the ImageId in the returned value of the [DescribeImages](https://www.tencentcloud.com/document/api/213/15715?from_cn_redirect=1) API.
                     * 
                     */
                    std::vector<std::string> GetImageIds() const;

                    /**
                     * 设置List of CVM image IDs, which can be obtained through the ImageId in the returned value of the [DescribeImages](https://www.tencentcloud.com/document/api/213/15715?from_cn_redirect=1) API.
                     * @param _imageIds List of CVM image IDs, which can be obtained through the ImageId in the returned value of the [DescribeImages](https://www.tencentcloud.com/document/api/213/15715?from_cn_redirect=1) API.
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
                     * 获取Offset. The default value is 0. For more information on `Offset`, see the relevant section in API [Introduction](https://www.tencentcloud.com/document/product/1207/47578?from_cn_redirect=1).
                     * @return Offset Offset. The default value is 0. For more information on `Offset`, see the relevant section in API [Introduction](https://www.tencentcloud.com/document/product/1207/47578?from_cn_redirect=1).
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置Offset. The default value is 0. For more information on `Offset`, see the relevant section in API [Introduction](https://www.tencentcloud.com/document/product/1207/47578?from_cn_redirect=1).
                     * @param _offset Offset. The default value is 0. For more information on `Offset`, see the relevant section in API [Introduction](https://www.tencentcloud.com/document/product/1207/47578?from_cn_redirect=1).
                     * 
                     */
                    void SetOffset(const int64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取Number of returned results. The default value is 20, and the maximum value is 100. For more information on `Limit`, see the relevant section in API [Introduction](https://www.tencentcloud.com/document/product/1207/47578?from_cn_redirect=1).
                     * @return Limit Number of returned results. The default value is 20, and the maximum value is 100. For more information on `Limit`, see the relevant section in API [Introduction](https://www.tencentcloud.com/document/product/1207/47578?from_cn_redirect=1).
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置Number of returned results. The default value is 20, and the maximum value is 100. For more information on `Limit`, see the relevant section in API [Introduction](https://www.tencentcloud.com/document/product/1207/47578?from_cn_redirect=1).
                     * @param _limit Number of returned results. The default value is 20, and the maximum value is 100. For more information on `Limit`, see the relevant section in API [Introduction](https://www.tencentcloud.com/document/product/1207/47578?from_cn_redirect=1).
                     * 
                     */
                    void SetLimit(const int64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取Filter list.
<li>image-id</li>: filter by [CVM image ID].
Type: string.
Required: no.
<li>image-name</li>: filter by [CVM image name].
Type: string.
Required: no.

<li>image-type</li>: filter by [CVM image type].
Type: string.
Required: no.
Valid values:
PRIVATE_IMAGE: private image (image created by the account).
PUBLIC_IMAGE: public image (Tencent Cloud official image).
SHARED_IMAGE: shared image (image shared by other accounts to this account).

The maximum number of Filters per request is 10, and the maximum number of Filter.Values per request is 5.
ImageIds and Filters cannot be specified simultaneously for parameters.
                     * @return Filters Filter list.
<li>image-id</li>: filter by [CVM image ID].
Type: string.
Required: no.
<li>image-name</li>: filter by [CVM image name].
Type: string.
Required: no.

<li>image-type</li>: filter by [CVM image type].
Type: string.
Required: no.
Valid values:
PRIVATE_IMAGE: private image (image created by the account).
PUBLIC_IMAGE: public image (Tencent Cloud official image).
SHARED_IMAGE: shared image (image shared by other accounts to this account).

The maximum number of Filters per request is 10, and the maximum number of Filter.Values per request is 5.
ImageIds and Filters cannot be specified simultaneously for parameters.
                     * 
                     */
                    std::vector<Filter> GetFilters() const;

                    /**
                     * 设置Filter list.
<li>image-id</li>: filter by [CVM image ID].
Type: string.
Required: no.
<li>image-name</li>: filter by [CVM image name].
Type: string.
Required: no.

<li>image-type</li>: filter by [CVM image type].
Type: string.
Required: no.
Valid values:
PRIVATE_IMAGE: private image (image created by the account).
PUBLIC_IMAGE: public image (Tencent Cloud official image).
SHARED_IMAGE: shared image (image shared by other accounts to this account).

The maximum number of Filters per request is 10, and the maximum number of Filter.Values per request is 5.
ImageIds and Filters cannot be specified simultaneously for parameters.
                     * @param _filters Filter list.
<li>image-id</li>: filter by [CVM image ID].
Type: string.
Required: no.
<li>image-name</li>: filter by [CVM image name].
Type: string.
Required: no.

<li>image-type</li>: filter by [CVM image type].
Type: string.
Required: no.
Valid values:
PRIVATE_IMAGE: private image (image created by the account).
PUBLIC_IMAGE: public image (Tencent Cloud official image).
SHARED_IMAGE: shared image (image shared by other accounts to this account).

The maximum number of Filters per request is 10, and the maximum number of Filter.Values per request is 5.
ImageIds and Filters cannot be specified simultaneously for parameters.
                     * 
                     */
                    void SetFilters(const std::vector<Filter>& _filters);

                    /**
                     * 判断参数 Filters 是否已赋值
                     * @return Filters 是否已赋值
                     * 
                     */
                    bool FiltersHasBeenSet() const;

                private:

                    /**
                     * List of CVM image IDs, which can be obtained through the ImageId in the returned value of the [DescribeImages](https://www.tencentcloud.com/document/api/213/15715?from_cn_redirect=1) API.
                     */
                    std::vector<std::string> m_imageIds;
                    bool m_imageIdsHasBeenSet;

                    /**
                     * Offset. The default value is 0. For more information on `Offset`, see the relevant section in API [Introduction](https://www.tencentcloud.com/document/product/1207/47578?from_cn_redirect=1).
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * Number of returned results. The default value is 20, and the maximum value is 100. For more information on `Limit`, see the relevant section in API [Introduction](https://www.tencentcloud.com/document/product/1207/47578?from_cn_redirect=1).
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * Filter list.
<li>image-id</li>: filter by [CVM image ID].
Type: string.
Required: no.
<li>image-name</li>: filter by [CVM image name].
Type: string.
Required: no.

<li>image-type</li>: filter by [CVM image type].
Type: string.
Required: no.
Valid values:
PRIVATE_IMAGE: private image (image created by the account).
PUBLIC_IMAGE: public image (Tencent Cloud official image).
SHARED_IMAGE: shared image (image shared by other accounts to this account).

The maximum number of Filters per request is 10, and the maximum number of Filter.Values per request is 5.
ImageIds and Filters cannot be specified simultaneously for parameters.
                     */
                    std::vector<Filter> m_filters;
                    bool m_filtersHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LIGHTHOUSE_V20200324_MODEL_DESCRIBEIMAGESTOSHAREREQUEST_H_
