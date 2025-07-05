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

#ifndef TENCENTCLOUD_TCSS_V20201101_MODEL_VULAFFECTEDREGISTRYIMAGEINFO_H_
#define TENCENTCLOUD_TCSS_V20201101_MODEL_VULAFFECTEDREGISTRYIMAGEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tcss/v20201101/model/VulAffectedImageComponentInfo.h>


namespace TencentCloud
{
    namespace Tcss
    {
        namespace V20201101
        {
            namespace Model
            {
                /**
                * This API is used to query the list of repository images affected by a specific vulnerability.
                */
                class VulAffectedRegistryImageInfo : public AbstractModel
                {
                public:
                    VulAffectedRegistryImageInfo();
                    ~VulAffectedRegistryImageInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Image ID
                     * @return ImageID Image ID
                     * 
                     */
                    std::string GetImageID() const;

                    /**
                     * 设置Image ID
                     * @param _imageID Image ID
                     * 
                     */
                    void SetImageID(const std::string& _imageID);

                    /**
                     * 判断参数 ImageID 是否已赋值
                     * @return ImageID 是否已赋值
                     * 
                     */
                    bool ImageIDHasBeenSet() const;

                    /**
                     * 获取Image name
                     * @return ImageName Image name
                     * 
                     */
                    std::string GetImageName() const;

                    /**
                     * 设置Image name
                     * @param _imageName Image name
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
                     * 获取Image tag
                     * @return ImageTag Image tag
                     * 
                     */
                    std::string GetImageTag() const;

                    /**
                     * 设置Image tag
                     * @param _imageTag Image tag
                     * 
                     */
                    void SetImageTag(const std::string& _imageTag);

                    /**
                     * 判断参数 ImageTag 是否已赋值
                     * @return ImageTag 是否已赋值
                     * 
                     */
                    bool ImageTagHasBeenSet() const;

                    /**
                     * 获取Image namespace
                     * @return Namespace Image namespace
                     * 
                     */
                    std::string GetNamespace() const;

                    /**
                     * 设置Image namespace
                     * @param _namespace Image namespace
                     * 
                     */
                    void SetNamespace(const std::string& _namespace);

                    /**
                     * 判断参数 Namespace 是否已赋值
                     * @return Namespace 是否已赋值
                     * 
                     */
                    bool NamespaceHasBeenSet() const;

                    /**
                     * 获取Image address
                     * @return ImageRepoAddress Image address
                     * 
                     */
                    std::string GetImageRepoAddress() const;

                    /**
                     * 设置Image address
                     * @param _imageRepoAddress Image address
                     * 
                     */
                    void SetImageRepoAddress(const std::string& _imageRepoAddress);

                    /**
                     * 判断参数 ImageRepoAddress 是否已赋值
                     * @return ImageRepoAddress 是否已赋值
                     * 
                     */
                    bool ImageRepoAddressHasBeenSet() const;

                    /**
                     * 获取List of components
                     * @return ComponentList List of components
                     * 
                     */
                    std::vector<VulAffectedImageComponentInfo> GetComponentList() const;

                    /**
                     * 设置List of components
                     * @param _componentList List of components
                     * 
                     */
                    void SetComponentList(const std::vector<VulAffectedImageComponentInfo>& _componentList);

                    /**
                     * 判断参数 ComponentList 是否已赋值
                     * @return ComponentList 是否已赋值
                     * 
                     */
                    bool ComponentListHasBeenSet() const;

                    /**
                     * 获取Whether it is the latest image tag
                     * @return IsLatestImage Whether it is the latest image tag
                     * 
                     */
                    bool GetIsLatestImage() const;

                    /**
                     * 设置Whether it is the latest image tag
                     * @param _isLatestImage Whether it is the latest image tag
                     * 
                     */
                    void SetIsLatestImage(const bool& _isLatestImage);

                    /**
                     * 判断参数 IsLatestImage 是否已赋值
                     * @return IsLatestImage 是否已赋值
                     * 
                     */
                    bool IsLatestImageHasBeenSet() const;

                    /**
                     * 获取Internal image asset ID
                     * @return ImageAssetId Internal image asset ID
                     * 
                     */
                    int64_t GetImageAssetId() const;

                    /**
                     * 设置Internal image asset ID
                     * @param _imageAssetId Internal image asset ID
                     * 
                     */
                    void SetImageAssetId(const int64_t& _imageAssetId);

                    /**
                     * 判断参数 ImageAssetId 是否已赋值
                     * @return ImageAssetId 是否已赋值
                     * 
                     */
                    bool ImageAssetIdHasBeenSet() const;

                private:

                    /**
                     * Image ID
                     */
                    std::string m_imageID;
                    bool m_imageIDHasBeenSet;

                    /**
                     * Image name
                     */
                    std::string m_imageName;
                    bool m_imageNameHasBeenSet;

                    /**
                     * Image tag
                     */
                    std::string m_imageTag;
                    bool m_imageTagHasBeenSet;

                    /**
                     * Image namespace
                     */
                    std::string m_namespace;
                    bool m_namespaceHasBeenSet;

                    /**
                     * Image address
                     */
                    std::string m_imageRepoAddress;
                    bool m_imageRepoAddressHasBeenSet;

                    /**
                     * List of components
                     */
                    std::vector<VulAffectedImageComponentInfo> m_componentList;
                    bool m_componentListHasBeenSet;

                    /**
                     * Whether it is the latest image tag
                     */
                    bool m_isLatestImage;
                    bool m_isLatestImageHasBeenSet;

                    /**
                     * Internal image asset ID
                     */
                    int64_t m_imageAssetId;
                    bool m_imageAssetIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSS_V20201101_MODEL_VULAFFECTEDREGISTRYIMAGEINFO_H_
