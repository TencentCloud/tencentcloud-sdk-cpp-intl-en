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

#ifndef TENCENTCLOUD_CVM_V20170312_MODEL_IMPORTIMAGEREQUEST_H_
#define TENCENTCLOUD_CVM_V20170312_MODEL_IMPORTIMAGEREQUEST_H_

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
                * ImportImage request structure.
                */
                class ImportImageRequest : public AbstractModel
                {
                public:
                    ImportImageRequest();
                    ~ImportImageRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取OS architecture of the image to be imported, `x86_64` or `i386`.
                     * @return Architecture OS architecture of the image to be imported, `x86_64` or `i386`.
                     */
                    std::string GetArchitecture() const;

                    /**
                     * 设置OS architecture of the image to be imported, `x86_64` or `i386`.
                     * @param Architecture OS architecture of the image to be imported, `x86_64` or `i386`.
                     */
                    void SetArchitecture(const std::string& _architecture);

                    /**
                     * 判断参数 Architecture 是否已赋值
                     * @return Architecture 是否已赋值
                     */
                    bool ArchitectureHasBeenSet() const;

                    /**
                     * 获取OS type of the image to be imported. You can call `DescribeImportImageOs` to obtain the list of supported operating systems.
                     * @return OsType OS type of the image to be imported. You can call `DescribeImportImageOs` to obtain the list of supported operating systems.
                     */
                    std::string GetOsType() const;

                    /**
                     * 设置OS type of the image to be imported. You can call `DescribeImportImageOs` to obtain the list of supported operating systems.
                     * @param OsType OS type of the image to be imported. You can call `DescribeImportImageOs` to obtain the list of supported operating systems.
                     */
                    void SetOsType(const std::string& _osType);

                    /**
                     * 判断参数 OsType 是否已赋值
                     * @return OsType 是否已赋值
                     */
                    bool OsTypeHasBeenSet() const;

                    /**
                     * 获取OS version of the image to be imported. You can call `DescribeImportImageOs` to obtain the list of supported operating systems.
                     * @return OsVersion OS version of the image to be imported. You can call `DescribeImportImageOs` to obtain the list of supported operating systems.
                     */
                    std::string GetOsVersion() const;

                    /**
                     * 设置OS version of the image to be imported. You can call `DescribeImportImageOs` to obtain the list of supported operating systems.
                     * @param OsVersion OS version of the image to be imported. You can call `DescribeImportImageOs` to obtain the list of supported operating systems.
                     */
                    void SetOsVersion(const std::string& _osVersion);

                    /**
                     * 判断参数 OsVersion 是否已赋值
                     * @return OsVersion 是否已赋值
                     */
                    bool OsVersionHasBeenSet() const;

                    /**
                     * 获取Address on COS where the image to be imported is stored.
                     * @return ImageUrl Address on COS where the image to be imported is stored.
                     */
                    std::string GetImageUrl() const;

                    /**
                     * 设置Address on COS where the image to be imported is stored.
                     * @param ImageUrl Address on COS where the image to be imported is stored.
                     */
                    void SetImageUrl(const std::string& _imageUrl);

                    /**
                     * 判断参数 ImageUrl 是否已赋值
                     * @return ImageUrl 是否已赋值
                     */
                    bool ImageUrlHasBeenSet() const;

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
                     * 获取Dry run to check the parameters without performing the operation
                     * @return DryRun Dry run to check the parameters without performing the operation
                     */
                    bool GetDryRun() const;

                    /**
                     * 设置Dry run to check the parameters without performing the operation
                     * @param DryRun Dry run to check the parameters without performing the operation
                     */
                    void SetDryRun(const bool& _dryRun);

                    /**
                     * 判断参数 DryRun 是否已赋值
                     * @return DryRun 是否已赋值
                     */
                    bool DryRunHasBeenSet() const;

                    /**
                     * 获取Whether to force import the image. For more information, see [Forcibly Import Image](https://intl.cloud.tencent.com/document/product/213/12849).
                     * @return Force Whether to force import the image. For more information, see [Forcibly Import Image](https://intl.cloud.tencent.com/document/product/213/12849).
                     */
                    bool GetForce() const;

                    /**
                     * 设置Whether to force import the image. For more information, see [Forcibly Import Image](https://intl.cloud.tencent.com/document/product/213/12849).
                     * @param Force Whether to force import the image. For more information, see [Forcibly Import Image](https://intl.cloud.tencent.com/document/product/213/12849).
                     */
                    void SetForce(const bool& _force);

                    /**
                     * 判断参数 Force 是否已赋值
                     * @return Force 是否已赋值
                     */
                    bool ForceHasBeenSet() const;

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
                     * OS architecture of the image to be imported, `x86_64` or `i386`.
                     */
                    std::string m_architecture;
                    bool m_architectureHasBeenSet;

                    /**
                     * OS type of the image to be imported. You can call `DescribeImportImageOs` to obtain the list of supported operating systems.
                     */
                    std::string m_osType;
                    bool m_osTypeHasBeenSet;

                    /**
                     * OS version of the image to be imported. You can call `DescribeImportImageOs` to obtain the list of supported operating systems.
                     */
                    std::string m_osVersion;
                    bool m_osVersionHasBeenSet;

                    /**
                     * Address on COS where the image to be imported is stored.
                     */
                    std::string m_imageUrl;
                    bool m_imageUrlHasBeenSet;

                    /**
                     * Image name
                     */
                    std::string m_imageName;
                    bool m_imageNameHasBeenSet;

                    /**
                     * Image description
                     */
                    std::string m_imageDescription;
                    bool m_imageDescriptionHasBeenSet;

                    /**
                     * Dry run to check the parameters without performing the operation
                     */
                    bool m_dryRun;
                    bool m_dryRunHasBeenSet;

                    /**
                     * Whether to force import the image. For more information, see [Forcibly Import Image](https://intl.cloud.tencent.com/document/product/213/12849).
                     */
                    bool m_force;
                    bool m_forceHasBeenSet;

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

#endif // !TENCENTCLOUD_CVM_V20170312_MODEL_IMPORTIMAGEREQUEST_H_
