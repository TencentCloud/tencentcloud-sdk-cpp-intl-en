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
                     * 获取List of image IDs. You can obtain the image IDs in two ways: <br><li>Call [DescribeImages](https://cloud.tencent.com/document/api/213/15715) and look for `ImageId` in the response. <br><li>Look for the information in the [Image Console](https://console.cloud.tencent.com/cvm/image). <br>The specified images must meet the following requirements: <br><li>The images must be in the `NORMAL` state. <br><li>The image size must be smaller than 50 GB. <br>For more information on image states, see [here](/document/api/213/9452#image_state).
                     * @return ImageIds List of image IDs. You can obtain the image IDs in two ways: <br><li>Call [DescribeImages](https://cloud.tencent.com/document/api/213/15715) and look for `ImageId` in the response. <br><li>Look for the information in the [Image Console](https://console.cloud.tencent.com/cvm/image). <br>The specified images must meet the following requirements: <br><li>The images must be in the `NORMAL` state. <br><li>The image size must be smaller than 50 GB. <br>For more information on image states, see [here](/document/api/213/9452#image_state).
                     */
                    std::vector<std::string> GetImageIds() const;

                    /**
                     * 设置List of image IDs. You can obtain the image IDs in two ways: <br><li>Call [DescribeImages](https://cloud.tencent.com/document/api/213/15715) and look for `ImageId` in the response. <br><li>Look for the information in the [Image Console](https://console.cloud.tencent.com/cvm/image). <br>The specified images must meet the following requirements: <br><li>The images must be in the `NORMAL` state. <br><li>The image size must be smaller than 50 GB. <br>For more information on image states, see [here](/document/api/213/9452#image_state).
                     * @param ImageIds List of image IDs. You can obtain the image IDs in two ways: <br><li>Call [DescribeImages](https://cloud.tencent.com/document/api/213/15715) and look for `ImageId` in the response. <br><li>Look for the information in the [Image Console](https://console.cloud.tencent.com/cvm/image). <br>The specified images must meet the following requirements: <br><li>The images must be in the `NORMAL` state. <br><li>The image size must be smaller than 50 GB. <br>For more information on image states, see [here](/document/api/213/9452#image_state).
                     */
                    void SetImageIds(const std::vector<std::string>& _imageIds);

                    /**
                     * 判断参数 ImageIds 是否已赋值
                     * @return ImageIds 是否已赋值
                     */
                    bool ImageIdsHasBeenSet() const;

                    /**
                     * 获取List of destination regions for synchronization. A destination region must meet the following requirements: <br><li>It cannot be the source region. <br><li>It must be valid. <br><li>Currently some regions do not support image synchronization. <br>For specific regions, see [Region](https://cloud.tencent.com/document/product/213/6091).
                     * @return DestinationRegions List of destination regions for synchronization. A destination region must meet the following requirements: <br><li>It cannot be the source region. <br><li>It must be valid. <br><li>Currently some regions do not support image synchronization. <br>For specific regions, see [Region](https://cloud.tencent.com/document/product/213/6091).
                     */
                    std::vector<std::string> GetDestinationRegions() const;

                    /**
                     * 设置List of destination regions for synchronization. A destination region must meet the following requirements: <br><li>It cannot be the source region. <br><li>It must be valid. <br><li>Currently some regions do not support image synchronization. <br>For specific regions, see [Region](https://cloud.tencent.com/document/product/213/6091).
                     * @param DestinationRegions List of destination regions for synchronization. A destination region must meet the following requirements: <br><li>It cannot be the source region. <br><li>It must be valid. <br><li>Currently some regions do not support image synchronization. <br>For specific regions, see [Region](https://cloud.tencent.com/document/product/213/6091).
                     */
                    void SetDestinationRegions(const std::vector<std::string>& _destinationRegions);

                    /**
                     * 判断参数 DestinationRegions 是否已赋值
                     * @return DestinationRegions 是否已赋值
                     */
                    bool DestinationRegionsHasBeenSet() const;

                private:

                    /**
                     * List of image IDs. You can obtain the image IDs in two ways: <br><li>Call [DescribeImages](https://cloud.tencent.com/document/api/213/15715) and look for `ImageId` in the response. <br><li>Look for the information in the [Image Console](https://console.cloud.tencent.com/cvm/image). <br>The specified images must meet the following requirements: <br><li>The images must be in the `NORMAL` state. <br><li>The image size must be smaller than 50 GB. <br>For more information on image states, see [here](/document/api/213/9452#image_state).
                     */
                    std::vector<std::string> m_imageIds;
                    bool m_imageIdsHasBeenSet;

                    /**
                     * List of destination regions for synchronization. A destination region must meet the following requirements: <br><li>It cannot be the source region. <br><li>It must be valid. <br><li>Currently some regions do not support image synchronization. <br>For specific regions, see [Region](https://cloud.tencent.com/document/product/213/6091).
                     */
                    std::vector<std::string> m_destinationRegions;
                    bool m_destinationRegionsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CVM_V20170312_MODEL_SYNCIMAGESREQUEST_H_
