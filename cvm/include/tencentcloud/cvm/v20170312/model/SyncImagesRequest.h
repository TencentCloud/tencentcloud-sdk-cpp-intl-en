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
                     * 获取Image ID list. You can obtain the image IDs in the following ways:<br><li>Call the [DescribeImages](https://intl.cloud.tencent.com/document/api/213/15715?from_cn_redirect=1) API and find the value of `ImageId` in the response.</li><li>Obtain the image IDs in the [Image console](https://console.cloud.tencent.com/cvm/image).<br>The image IDs should meet the following requirement:</li><li>The image ID should correspond to an image in the `NORMAL` state.</li>For more information on image status, see [Image Data Table](https://intl.cloud.tencent.com/document/product/213/15753?from_cn_redirect=1#Image).
                     * @return ImageIds Image ID list. You can obtain the image IDs in the following ways:<br><li>Call the [DescribeImages](https://intl.cloud.tencent.com/document/api/213/15715?from_cn_redirect=1) API and find the value of `ImageId` in the response.</li><li>Obtain the image IDs in the [Image console](https://console.cloud.tencent.com/cvm/image).<br>The image IDs should meet the following requirement:</li><li>The image ID should correspond to an image in the `NORMAL` state.</li>For more information on image status, see [Image Data Table](https://intl.cloud.tencent.com/document/product/213/15753?from_cn_redirect=1#Image).
                     * 
                     */
                    std::vector<std::string> GetImageIds() const;

                    /**
                     * 设置Image ID list. You can obtain the image IDs in the following ways:<br><li>Call the [DescribeImages](https://intl.cloud.tencent.com/document/api/213/15715?from_cn_redirect=1) API and find the value of `ImageId` in the response.</li><li>Obtain the image IDs in the [Image console](https://console.cloud.tencent.com/cvm/image).<br>The image IDs should meet the following requirement:</li><li>The image ID should correspond to an image in the `NORMAL` state.</li>For more information on image status, see [Image Data Table](https://intl.cloud.tencent.com/document/product/213/15753?from_cn_redirect=1#Image).
                     * @param _imageIds Image ID list. You can obtain the image IDs in the following ways:<br><li>Call the [DescribeImages](https://intl.cloud.tencent.com/document/api/213/15715?from_cn_redirect=1) API and find the value of `ImageId` in the response.</li><li>Obtain the image IDs in the [Image console](https://console.cloud.tencent.com/cvm/image).<br>The image IDs should meet the following requirement:</li><li>The image ID should correspond to an image in the `NORMAL` state.</li>For more information on image status, see [Image Data Table](https://intl.cloud.tencent.com/document/product/213/15753?from_cn_redirect=1#Image).
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
                     * 获取List of target synchronization regions, which should meet the following requirements:<br><li>It should be a valid region.</li><li>If it is a custom image, the target synchronization region cannot be the source region.</li><li>If it is a shared image, the target synchronization region only supports the source region, meaning the shared image will be copied as a custom image in the source region.</li><li>Partial region synchronization is not supported currently. For details, see [Copying Images](https://intl.cloud.tencent.com/document/product/213/4943?from_cn_redirect=1#.E5.A4.8D.E5.88.B6.E8.AF.B4.E6.98.8E).</li>For specific regional parameters, refer to [Region](https://intl.cloud.tencent.com/document/product/213/6091?from_cn_redirect=1).
                     * @return DestinationRegions List of target synchronization regions, which should meet the following requirements:<br><li>It should be a valid region.</li><li>If it is a custom image, the target synchronization region cannot be the source region.</li><li>If it is a shared image, the target synchronization region only supports the source region, meaning the shared image will be copied as a custom image in the source region.</li><li>Partial region synchronization is not supported currently. For details, see [Copying Images](https://intl.cloud.tencent.com/document/product/213/4943?from_cn_redirect=1#.E5.A4.8D.E5.88.B6.E8.AF.B4.E6.98.8E).</li>For specific regional parameters, refer to [Region](https://intl.cloud.tencent.com/document/product/213/6091?from_cn_redirect=1).
                     * 
                     */
                    std::vector<std::string> GetDestinationRegions() const;

                    /**
                     * 设置List of target synchronization regions, which should meet the following requirements:<br><li>It should be a valid region.</li><li>If it is a custom image, the target synchronization region cannot be the source region.</li><li>If it is a shared image, the target synchronization region only supports the source region, meaning the shared image will be copied as a custom image in the source region.</li><li>Partial region synchronization is not supported currently. For details, see [Copying Images](https://intl.cloud.tencent.com/document/product/213/4943?from_cn_redirect=1#.E5.A4.8D.E5.88.B6.E8.AF.B4.E6.98.8E).</li>For specific regional parameters, refer to [Region](https://intl.cloud.tencent.com/document/product/213/6091?from_cn_redirect=1).
                     * @param _destinationRegions List of target synchronization regions, which should meet the following requirements:<br><li>It should be a valid region.</li><li>If it is a custom image, the target synchronization region cannot be the source region.</li><li>If it is a shared image, the target synchronization region only supports the source region, meaning the shared image will be copied as a custom image in the source region.</li><li>Partial region synchronization is not supported currently. For details, see [Copying Images](https://intl.cloud.tencent.com/document/product/213/4943?from_cn_redirect=1#.E5.A4.8D.E5.88.B6.E8.AF.B4.E6.98.8E).</li>For specific regional parameters, refer to [Region](https://intl.cloud.tencent.com/document/product/213/6091?from_cn_redirect=1).
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

Default value: false.
                     * @return DryRun Checks whether image synchronization can be initiated.

Default value: false.
                     * 
                     */
                    bool GetDryRun() const;

                    /**
                     * 设置Checks whether image synchronization can be initiated.

Default value: false.
                     * @param _dryRun Checks whether image synchronization can be initiated.

Default value: false.
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
                     * 获取Target image name. By default, the source image name is used.
                     * @return ImageName Target image name. By default, the source image name is used.
                     * 
                     */
                    std::string GetImageName() const;

                    /**
                     * 设置Target image name. By default, the source image name is used.
                     * @param _imageName Target image name. By default, the source image name is used.
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
                     * 获取Whether to return the ID of the image created in the target region.

Default value: false.
                     * @return ImageSetRequired Whether to return the ID of the image created in the target region.

Default value: false.
                     * 
                     */
                    bool GetImageSetRequired() const;

                    /**
                     * 设置Whether to return the ID of the image created in the target region.

Default value: false.
                     * @param _imageSetRequired Whether to return the ID of the image created in the target region.

Default value: false.
                     * 
                     */
                    void SetImageSetRequired(const bool& _imageSetRequired);

                    /**
                     * 判断参数 ImageSetRequired 是否已赋值
                     * @return ImageSetRequired 是否已赋值
                     * 
                     */
                    bool ImageSetRequiredHasBeenSet() const;

                    /**
                     * 获取Whether to synchronize as an encrypted custom image.
Default value is `false`.
Synchronization to an encrypted custom image is only supported within the same region.
                     * @return Encrypt Whether to synchronize as an encrypted custom image.
Default value is `false`.
Synchronization to an encrypted custom image is only supported within the same region.
                     * 
                     */
                    bool GetEncrypt() const;

                    /**
                     * 设置Whether to synchronize as an encrypted custom image.
Default value is `false`.
Synchronization to an encrypted custom image is only supported within the same region.
                     * @param _encrypt Whether to synchronize as an encrypted custom image.
Default value is `false`.
Synchronization to an encrypted custom image is only supported within the same region.
                     * 
                     */
                    void SetEncrypt(const bool& _encrypt);

                    /**
                     * 判断参数 Encrypt 是否已赋值
                     * @return Encrypt 是否已赋值
                     * 
                     */
                    bool EncryptHasBeenSet() const;

                    /**
                     * 获取KMS key ID used when synchronizing to an encrypted custom image. 
This parameter is valid only synchronizing to an encrypted image.
If KmsKeyId is not specified, the default CBS cloud product KMS key is used.
                     * @return KmsKeyId KMS key ID used when synchronizing to an encrypted custom image. 
This parameter is valid only synchronizing to an encrypted image.
If KmsKeyId is not specified, the default CBS cloud product KMS key is used.
                     * 
                     */
                    std::string GetKmsKeyId() const;

                    /**
                     * 设置KMS key ID used when synchronizing to an encrypted custom image. 
This parameter is valid only synchronizing to an encrypted image.
If KmsKeyId is not specified, the default CBS cloud product KMS key is used.
                     * @param _kmsKeyId KMS key ID used when synchronizing to an encrypted custom image. 
This parameter is valid only synchronizing to an encrypted image.
If KmsKeyId is not specified, the default CBS cloud product KMS key is used.
                     * 
                     */
                    void SetKmsKeyId(const std::string& _kmsKeyId);

                    /**
                     * 判断参数 KmsKeyId 是否已赋值
                     * @return KmsKeyId 是否已赋值
                     * 
                     */
                    bool KmsKeyIdHasBeenSet() const;

                private:

                    /**
                     * Image ID list. You can obtain the image IDs in the following ways:<br><li>Call the [DescribeImages](https://intl.cloud.tencent.com/document/api/213/15715?from_cn_redirect=1) API and find the value of `ImageId` in the response.</li><li>Obtain the image IDs in the [Image console](https://console.cloud.tencent.com/cvm/image).<br>The image IDs should meet the following requirement:</li><li>The image ID should correspond to an image in the `NORMAL` state.</li>For more information on image status, see [Image Data Table](https://intl.cloud.tencent.com/document/product/213/15753?from_cn_redirect=1#Image).
                     */
                    std::vector<std::string> m_imageIds;
                    bool m_imageIdsHasBeenSet;

                    /**
                     * List of target synchronization regions, which should meet the following requirements:<br><li>It should be a valid region.</li><li>If it is a custom image, the target synchronization region cannot be the source region.</li><li>If it is a shared image, the target synchronization region only supports the source region, meaning the shared image will be copied as a custom image in the source region.</li><li>Partial region synchronization is not supported currently. For details, see [Copying Images](https://intl.cloud.tencent.com/document/product/213/4943?from_cn_redirect=1#.E5.A4.8D.E5.88.B6.E8.AF.B4.E6.98.8E).</li>For specific regional parameters, refer to [Region](https://intl.cloud.tencent.com/document/product/213/6091?from_cn_redirect=1).
                     */
                    std::vector<std::string> m_destinationRegions;
                    bool m_destinationRegionsHasBeenSet;

                    /**
                     * Checks whether image synchronization can be initiated.

Default value: false.
                     */
                    bool m_dryRun;
                    bool m_dryRunHasBeenSet;

                    /**
                     * Target image name. By default, the source image name is used.
                     */
                    std::string m_imageName;
                    bool m_imageNameHasBeenSet;

                    /**
                     * Whether to return the ID of the image created in the target region.

Default value: false.
                     */
                    bool m_imageSetRequired;
                    bool m_imageSetRequiredHasBeenSet;

                    /**
                     * Whether to synchronize as an encrypted custom image.
Default value is `false`.
Synchronization to an encrypted custom image is only supported within the same region.
                     */
                    bool m_encrypt;
                    bool m_encryptHasBeenSet;

                    /**
                     * KMS key ID used when synchronizing to an encrypted custom image. 
This parameter is valid only synchronizing to an encrypted image.
If KmsKeyId is not specified, the default CBS cloud product KMS key is used.
                     */
                    std::string m_kmsKeyId;
                    bool m_kmsKeyIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CVM_V20170312_MODEL_SYNCIMAGESREQUEST_H_
