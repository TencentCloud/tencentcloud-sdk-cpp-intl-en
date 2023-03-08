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

#ifndef TENCENTCLOUD_CVM_V20170312_MODEL_CREATEIMAGEREQUEST_H_
#define TENCENTCLOUD_CVM_V20170312_MODEL_CREATEIMAGEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cvm/v20170312/model/TagSpecification.h>


namespace TencentCloud
{
    namespace Cvm
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * CreateImage request structure.
                */
                class CreateImageRequest : public AbstractModel
                {
                public:
                    CreateImageRequest();
                    ~CreateImageRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Image name
                     * @return ImageName Image name
                     */
                    std::string GetImageName() const;

                    /**
                     * 设置Image name
                     * @param ImageName Image name
                     */
                    void SetImageName(const std::string& _imageName);

                    /**
                     * 判断参数 ImageName 是否已赋值
                     * @return ImageName 是否已赋值
                     */
                    bool ImageNameHasBeenSet() const;

                    /**
                     * 获取ID of the instance from which an image will be created. This parameter is required when using instance to create an image.
                     * @return InstanceId ID of the instance from which an image will be created. This parameter is required when using instance to create an image.
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置ID of the instance from which an image will be created. This parameter is required when using instance to create an image.
                     * @param InstanceId ID of the instance from which an image will be created. This parameter is required when using instance to create an image.
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取Image description
                     * @return ImageDescription Image description
                     */
                    std::string GetImageDescription() const;

                    /**
                     * 设置Image description
                     * @param ImageDescription Image description
                     */
                    void SetImageDescription(const std::string& _imageDescription);

                    /**
                     * 判断参数 ImageDescription 是否已赋值
                     * @return ImageDescription 是否已赋值
                     */
                    bool ImageDescriptionHasBeenSet() const;

                    /**
                     * 获取Whether to force shut down an instance to create an image when a soft shutdown fails
                     * @return ForcePoweroff Whether to force shut down an instance to create an image when a soft shutdown fails
                     */
                    std::string GetForcePoweroff() const;

                    /**
                     * 设置Whether to force shut down an instance to create an image when a soft shutdown fails
                     * @param ForcePoweroff Whether to force shut down an instance to create an image when a soft shutdown fails
                     */
                    void SetForcePoweroff(const std::string& _forcePoweroff);

                    /**
                     * 判断参数 ForcePoweroff 是否已赋值
                     * @return ForcePoweroff 是否已赋值
                     */
                    bool ForcePoweroffHasBeenSet() const;

                    /**
                     * 获取Whether to enable Sysprep when creating a Windows image.
Valid values: `TRUE` and `FALSE`; default value: `FALSE`.

Click [here](https://intl.cloud.tencent.com/document/product/213/43498?from_cn_redirect=1) to learn more about Sysprep.
                     * @return Sysprep Whether to enable Sysprep when creating a Windows image.
Valid values: `TRUE` and `FALSE`; default value: `FALSE`.

Click [here](https://intl.cloud.tencent.com/document/product/213/43498?from_cn_redirect=1) to learn more about Sysprep.
                     */
                    std::string GetSysprep() const;

                    /**
                     * 设置Whether to enable Sysprep when creating a Windows image.
Valid values: `TRUE` and `FALSE`; default value: `FALSE`.

Click [here](https://intl.cloud.tencent.com/document/product/213/43498?from_cn_redirect=1) to learn more about Sysprep.
                     * @param Sysprep Whether to enable Sysprep when creating a Windows image.
Valid values: `TRUE` and `FALSE`; default value: `FALSE`.

Click [here](https://intl.cloud.tencent.com/document/product/213/43498?from_cn_redirect=1) to learn more about Sysprep.
                     */
                    void SetSysprep(const std::string& _sysprep);

                    /**
                     * 判断参数 Sysprep 是否已赋值
                     * @return Sysprep 是否已赋值
                     */
                    bool SysprepHasBeenSet() const;

                    /**
                     * 获取IDs of data disks included in the image. 
                     * @return DataDiskIds IDs of data disks included in the image. 
                     */
                    std::vector<std::string> GetDataDiskIds() const;

                    /**
                     * 设置IDs of data disks included in the image. 
                     * @param DataDiskIds IDs of data disks included in the image. 
                     */
                    void SetDataDiskIds(const std::vector<std::string>& _dataDiskIds);

                    /**
                     * 判断参数 DataDiskIds 是否已赋值
                     * @return DataDiskIds 是否已赋值
                     */
                    bool DataDiskIdsHasBeenSet() const;

                    /**
                     * 获取Specified snapshot ID used to create an image. A system disk snapshot must be included. It cannot be passed together with `InstanceId`.
                     * @return SnapshotIds Specified snapshot ID used to create an image. A system disk snapshot must be included. It cannot be passed together with `InstanceId`.
                     */
                    std::vector<std::string> GetSnapshotIds() const;

                    /**
                     * 设置Specified snapshot ID used to create an image. A system disk snapshot must be included. It cannot be passed together with `InstanceId`.
                     * @param SnapshotIds Specified snapshot ID used to create an image. A system disk snapshot must be included. It cannot be passed together with `InstanceId`.
                     */
                    void SetSnapshotIds(const std::vector<std::string>& _snapshotIds);

                    /**
                     * 判断参数 SnapshotIds 是否已赋值
                     * @return SnapshotIds 是否已赋值
                     */
                    bool SnapshotIdsHasBeenSet() const;

                    /**
                     * 获取Success status of this request, without affecting the resources involved
                     * @return DryRun Success status of this request, without affecting the resources involved
                     */
                    bool GetDryRun() const;

                    /**
                     * 设置Success status of this request, without affecting the resources involved
                     * @param DryRun Success status of this request, without affecting the resources involved
                     */
                    void SetDryRun(const bool& _dryRun);

                    /**
                     * 判断参数 DryRun 是否已赋值
                     * @return DryRun 是否已赋值
                     */
                    bool DryRunHasBeenSet() const;

                    /**
                     * 获取Tag description list. This parameter is used to bind a tag to a custom image.
                     * @return TagSpecification Tag description list. This parameter is used to bind a tag to a custom image.
                     */
                    std::vector<TagSpecification> GetTagSpecification() const;

                    /**
                     * 设置Tag description list. This parameter is used to bind a tag to a custom image.
                     * @param TagSpecification Tag description list. This parameter is used to bind a tag to a custom image.
                     */
                    void SetTagSpecification(const std::vector<TagSpecification>& _tagSpecification);

                    /**
                     * 判断参数 TagSpecification 是否已赋值
                     * @return TagSpecification 是否已赋值
                     */
                    bool TagSpecificationHasBeenSet() const;

                private:

                    /**
                     * Image name
                     */
                    std::string m_imageName;
                    bool m_imageNameHasBeenSet;

                    /**
                     * ID of the instance from which an image will be created. This parameter is required when using instance to create an image.
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * Image description
                     */
                    std::string m_imageDescription;
                    bool m_imageDescriptionHasBeenSet;

                    /**
                     * Whether to force shut down an instance to create an image when a soft shutdown fails
                     */
                    std::string m_forcePoweroff;
                    bool m_forcePoweroffHasBeenSet;

                    /**
                     * Whether to enable Sysprep when creating a Windows image.
Valid values: `TRUE` and `FALSE`; default value: `FALSE`.

Click [here](https://intl.cloud.tencent.com/document/product/213/43498?from_cn_redirect=1) to learn more about Sysprep.
                     */
                    std::string m_sysprep;
                    bool m_sysprepHasBeenSet;

                    /**
                     * IDs of data disks included in the image. 
                     */
                    std::vector<std::string> m_dataDiskIds;
                    bool m_dataDiskIdsHasBeenSet;

                    /**
                     * Specified snapshot ID used to create an image. A system disk snapshot must be included. It cannot be passed together with `InstanceId`.
                     */
                    std::vector<std::string> m_snapshotIds;
                    bool m_snapshotIdsHasBeenSet;

                    /**
                     * Success status of this request, without affecting the resources involved
                     */
                    bool m_dryRun;
                    bool m_dryRunHasBeenSet;

                    /**
                     * Tag description list. This parameter is used to bind a tag to a custom image.
                     */
                    std::vector<TagSpecification> m_tagSpecification;
                    bool m_tagSpecificationHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CVM_V20170312_MODEL_CREATEIMAGEREQUEST_H_
