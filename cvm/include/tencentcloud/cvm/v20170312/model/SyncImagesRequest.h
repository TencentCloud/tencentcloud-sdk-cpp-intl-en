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

#ifndef TENCENTCLOUD_CVM_V20170312_MODEL_SYNCIMAGESREQUEST_H_
#define TENCENTCLOUD_CVM_V20170312_MODEL_SYNCIMAGESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cvm
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * SyncImages request structure.
                */
                class SyncImagesRequest : public AbstractModel
                {
                public:
                    SyncImagesRequest();
                    ~SyncImagesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取List of image IDs. You can obtain the image IDs in two ways: <br><li>Call the [DescribeImages](https://intl.cloud.tencent.com/document/api/213/15715?from_cn_redirect=1) API and find the value of `ImageId` in the response. <br><li>Find the image IDs in the [Image Console](https://console.cloud.tencent.com/cvm/image). <br>The specified images must meet the following requirement: <br><li>the images must be in the `NORMAL` state. <br>For more information on image status, see [Image Data Table](https://intl.cloud.tencent.com/document/product/213/15753?from_cn_redirect=1#Image).
                     * @return ImageIds List of image IDs. You can obtain the image IDs in two ways: <br><li>Call the [DescribeImages](https://intl.cloud.tencent.com/document/api/213/15715?from_cn_redirect=1) API and find the value of `ImageId` in the response. <br><li>Find the image IDs in the [Image Console](https://console.cloud.tencent.com/cvm/image). <br>The specified images must meet the following requirement: <br><li>the images must be in the `NORMAL` state. <br>For more information on image status, see [Image Data Table](https://intl.cloud.tencent.com/document/product/213/15753?from_cn_redirect=1#Image).
                     * 
                     */
                    std::vector<std::string> GetImageIds() const;

                    /**
                     * 设置List of image IDs. You can obtain the image IDs in two ways: <br><li>Call the [DescribeImages](https://intl.cloud.tencent.com/document/api/213/15715?from_cn_redirect=1) API and find the value of `ImageId` in the response. <br><li>Find the image IDs in the [Image Console](https://console.cloud.tencent.com/cvm/image). <br>The specified images must meet the following requirement: <br><li>the images must be in the `NORMAL` state. <br>For more information on image status, see [Image Data Table](https://intl.cloud.tencent.com/document/product/213/15753?from_cn_redirect=1#Image).
                     * @param _imageIds List of image IDs. You can obtain the image IDs in two ways: <br><li>Call the [DescribeImages](https://intl.cloud.tencent.com/document/api/213/15715?from_cn_redirect=1) API and find the value of `ImageId` in the response. <br><li>Find the image IDs in the [Image Console](https://console.cloud.tencent.com/cvm/image). <br>The specified images must meet the following requirement: <br><li>the images must be in the `NORMAL` state. <br>For more information on image status, see [Image Data Table](https://intl.cloud.tencent.com/document/product/213/15753?from_cn_redirect=1#Image).
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
                     * 获取List of destination regions for synchronization. Limits:<br><li>It must be a valid region.<br><li>For a custom image, the destination region cannot be the source region.<br><li>For a shared image, the destination region must be the source region, which indicates to create a copy of the image as a custom image in the same region.<br><li>Image synchronization is only available in limited regions.<br>See [Region](https://intl.cloud.tencent.com/document/product/213/6091?from_cn_redirect=1).
                     * @return DestinationRegions List of destination regions for synchronization. Limits:<br><li>It must be a valid region.<br><li>For a custom image, the destination region cannot be the source region.<br><li>For a shared image, the destination region must be the source region, which indicates to create a copy of the image as a custom image in the same region.<br><li>Image synchronization is only available in limited regions.<br>See [Region](https://intl.cloud.tencent.com/document/product/213/6091?from_cn_redirect=1).
                     * 
                     */
                    std::vector<std::string> GetDestinationRegions() const;

                    /**
                     * 设置List of destination regions for synchronization. Limits:<br><li>It must be a valid region.<br><li>For a custom image, the destination region cannot be the source region.<br><li>For a shared image, the destination region must be the source region, which indicates to create a copy of the image as a custom image in the same region.<br><li>Image synchronization is only available in limited regions.<br>See [Region](https://intl.cloud.tencent.com/document/product/213/6091?from_cn_redirect=1).
                     * @param _destinationRegions List of destination regions for synchronization. Limits:<br><li>It must be a valid region.<br><li>For a custom image, the destination region cannot be the source region.<br><li>For a shared image, the destination region must be the source region, which indicates to create a copy of the image as a custom image in the same region.<br><li>Image synchronization is only available in limited regions.<br>See [Region](https://intl.cloud.tencent.com/document/product/213/6091?from_cn_redirect=1).
                     * 
                     */
                    void SetDestinationRegions(const std::vector<std::string>& _destinationRegions);

                    /**
                     * 判断参数 DestinationRegions 是否已赋值
                     * @return DestinationRegions 是否已赋值
                     * 
                     */
                    bool DestinationRegionsHasBeenSet() const;

                    /**
                     * 获取Checks whether image synchronization can be initiated.
                     * @return DryRun Checks whether image synchronization can be initiated.
                     * 
                     */
                    bool GetDryRun() const;

                    /**
                     * 设置Checks whether image synchronization can be initiated.
                     * @param _dryRun Checks whether image synchronization can be initiated.
                     * 
                     */
                    void SetDryRun(const bool& _dryRun);

                    /**
                     * 判断参数 DryRun 是否已赋值
                     * @return DryRun 是否已赋值
                     * 
                     */
                    bool DryRunHasBeenSet() const;

                    /**
                     * 获取Destination image name.
                     * @return ImageName Destination image name.
                     * 
                     */
                    std::string GetImageName() const;

                    /**
                     * 设置Destination image name.
                     * @param _imageName Destination image name.
                     * 
                     */
                    void SetImageName(const std::string& _imageName);

                    /**
                     * 判断参数 ImageName 是否已赋值
                     * @return ImageName 是否已赋值
                     * 
                     */
                    bool ImageNameHasBeenSet() const;

                    /**
                     * 获取Whether to return the ID of image created in the destination region
                     * @return ImageSetRequired Whether to return the ID of image created in the destination region
                     * 
                     */
                    bool GetImageSetRequired() const;

                    /**
                     * 设置Whether to return the ID of image created in the destination region
                     * @param _imageSetRequired Whether to return the ID of image created in the destination region
                     * 
                     */
                    void SetImageSetRequired(const bool& _imageSetRequired);

                    /**
                     * 判断参数 ImageSetRequired 是否已赋值
                     * @return ImageSetRequired 是否已赋值
                     * 
                     */
                    bool ImageSetRequiredHasBeenSet() const;

                private:

                    /**
                     * List of image IDs. You can obtain the image IDs in two ways: <br><li>Call the [DescribeImages](https://intl.cloud.tencent.com/document/api/213/15715?from_cn_redirect=1) API and find the value of `ImageId` in the response. <br><li>Find the image IDs in the [Image Console](https://console.cloud.tencent.com/cvm/image). <br>The specified images must meet the following requirement: <br><li>the images must be in the `NORMAL` state. <br>For more information on image status, see [Image Data Table](https://intl.cloud.tencent.com/document/product/213/15753?from_cn_redirect=1#Image).
                     */
                    std::vector<std::string> m_imageIds;
                    bool m_imageIdsHasBeenSet;

                    /**
                     * List of destination regions for synchronization. Limits:<br><li>It must be a valid region.<br><li>For a custom image, the destination region cannot be the source region.<br><li>For a shared image, the destination region must be the source region, which indicates to create a copy of the image as a custom image in the same region.<br><li>Image synchronization is only available in limited regions.<br>See [Region](https://intl.cloud.tencent.com/document/product/213/6091?from_cn_redirect=1).
                     */
                    std::vector<std::string> m_destinationRegions;
                    bool m_destinationRegionsHasBeenSet;

                    /**
                     * Checks whether image synchronization can be initiated.
                     */
                    bool m_dryRun;
                    bool m_dryRunHasBeenSet;

                    /**
                     * Destination image name.
                     */
                    std::string m_imageName;
                    bool m_imageNameHasBeenSet;

                    /**
                     * Whether to return the ID of image created in the destination region
                     */
                    bool m_imageSetRequired;
                    bool m_imageSetRequiredHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CVM_V20170312_MODEL_SYNCIMAGESREQUEST_H_
