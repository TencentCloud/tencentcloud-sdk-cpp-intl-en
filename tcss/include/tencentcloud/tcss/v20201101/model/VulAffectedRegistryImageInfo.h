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
                     * 获取Image Name
                     * @return ImageName Image Name
                     * 
                     */
                    std::string GetImageName() const;

                    /**
                     * 设置Image Name
                     * @param _imageName Image Name
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
                     * 获取Mirror version
                     * @return ImageTag Mirror version
                     * 
                     */
                    std::string GetImageTag() const;

                    /**
                     * 设置Mirror version
                     * @param _imageTag Mirror version
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
                     * 获取Image Namespace
                     * @return Namespace Image Namespace
                     * 
                     */
                    std::string GetNamespace() const;

                    /**
                     * 设置Image Namespace
                     * @param _namespace Image Namespace
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
                     * 获取Image address.
                     * @return ImageRepoAddress Image address.
                     * 
                     */
                    std::string GetImageRepoAddress() const;

                    /**
                     * 设置Image address.
                     * @param _imageRepoAddress Image address.
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
                     * 获取Component List
                     * @return ComponentList Component List
                     * 
                     */
                    std::vector<VulAffectedImageComponentInfo> GetComponentList() const;

                    /**
                     * 设置Component List
                     * @param _componentList Component List
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
                     * 获取Whether the Latest Version of the Image
                     * @return IsLatestImage Whether the Latest Version of the Image
                     * 
                     */
                    bool GetIsLatestImage() const;

                    /**
                     * 设置Whether the Latest Version of the Image
                     * @param _isLatestImage Whether the Latest Version of the Image
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
                     * 获取Internal Image Asset ID
                     * @return ImageAssetId Internal Image Asset ID
                     * 
                     */
                    int64_t GetImageAssetId() const;

                    /**
                     * 设置Internal Image Asset ID
                     * @param _imageAssetId Internal Image Asset ID
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
                     * Image Name
                     */
                    std::string m_imageName;
                    bool m_imageNameHasBeenSet;

                    /**
                     * Mirror version
                     */
                    std::string m_imageTag;
                    bool m_imageTagHasBeenSet;

                    /**
                     * Image Namespace
                     */
                    std::string m_namespace;
                    bool m_namespaceHasBeenSet;

                    /**
                     * Image address.
                     */
                    std::string m_imageRepoAddress;
                    bool m_imageRepoAddressHasBeenSet;

                    /**
                     * Component List
                     */
                    std::vector<VulAffectedImageComponentInfo> m_componentList;
                    bool m_componentListHasBeenSet;

                    /**
                     * Whether the Latest Version of the Image
                     */
                    bool m_isLatestImage;
                    bool m_isLatestImageHasBeenSet;

                    /**
                     * Internal Image Asset ID
                     */
                    int64_t m_imageAssetId;
                    bool m_imageAssetIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSS_V20201101_MODEL_VULAFFECTEDREGISTRYIMAGEINFO_H_
