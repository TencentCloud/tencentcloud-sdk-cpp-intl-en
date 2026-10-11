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

#ifndef TENCENTCLOUD_EMR_V20190103_MODEL_IMAGEINFOV2_H_
#define TENCENTCLOUD_EMR_V20190103_MODEL_IMAGEINFOV2_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/emr/v20190103/model/ImagePullSecret.h>


namespace TencentCloud
{
    namespace Emr
    {
        namespace V20190103
        {
            namespace Model
            {
                /**
                * EMR on TKE cluster component image information.
                */
                class ImageInfoV2 : public AbstractModel
                {
                public:
                    ImageInfoV2();
                    ~ImageInfoV2() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Image type.</p><p>Enumeration values:</p><ul><li>official: official image</li><li>custom: custom image</li><li>imageUrl: image URL</li></ul>
                     * @return ImageMode <p>Image type.</p><p>Enumeration values:</p><ul><li>official: official image</li><li>custom: custom image</li><li>imageUrl: image URL</li></ul>
                     * 
                     */
                    std::string GetImageMode() const;

                    /**
                     * 设置<p>Image type.</p><p>Enumeration values:</p><ul><li>official: official image</li><li>custom: custom image</li><li>imageUrl: image URL</li></ul>
                     * @param _imageMode <p>Image type.</p><p>Enumeration values:</p><ul><li>official: official image</li><li>custom: custom image</li><li>imageUrl: image URL</li></ul>
                     * 
                     */
                    void SetImageMode(const std::string& _imageMode);

                    /**
                     * 判断参数 ImageMode 是否已赋值
                     * @return ImageMode 是否已赋值
                     * 
                     */
                    bool ImageModeHasBeenSet() const;

                    /**
                     * 获取<p>Region.</p>
                     * @return Region <p>Region.</p>
                     * 
                     */
                    std::string GetRegion() const;

                    /**
                     * 设置<p>Region.</p>
                     * @param _region <p>Region.</p>
                     * 
                     */
                    void SetRegion(const std::string& _region);

                    /**
                     * 判断参数 Region 是否已赋值
                     * @return Region 是否已赋值
                     * 
                     */
                    bool RegionHasBeenSet() const;

                    /**
                     * 获取<p>Whether it is an existing image.</p>
                     * @return LegacyCCR <p>Whether it is an existing image.</p>
                     * 
                     */
                    bool GetLegacyCCR() const;

                    /**
                     * 设置<p>Whether it is an existing image.</p>
                     * @param _legacyCCR <p>Whether it is an existing image.</p>
                     * 
                     */
                    void SetLegacyCCR(const bool& _legacyCCR);

                    /**
                     * 判断参数 LegacyCCR 是否已赋值
                     * @return LegacyCCR 是否已赋值
                     * 
                     */
                    bool LegacyCCRHasBeenSet() const;

                    /**
                     * 获取<p>Image URL.</p>
                     * @return FullImageUrl <p>Image URL.</p>
                     * 
                     */
                    std::string GetFullImageUrl() const;

                    /**
                     * 设置<p>Image URL.</p>
                     * @param _fullImageUrl <p>Image URL.</p>
                     * 
                     */
                    void SetFullImageUrl(const std::string& _fullImageUrl);

                    /**
                     * 判断参数 FullImageUrl 是否已赋值
                     * @return FullImageUrl 是否已赋值
                     * 
                     */
                    bool FullImageUrlHasBeenSet() const;

                    /**
                     * 获取<p>Version.</p>
                     * @return MainVersion <p>Version.</p>
                     * 
                     */
                    std::string GetMainVersion() const;

                    /**
                     * 设置<p>Version.</p>
                     * @param _mainVersion <p>Version.</p>
                     * 
                     */
                    void SetMainVersion(const std::string& _mainVersion);

                    /**
                     * 判断参数 MainVersion 是否已赋值
                     * @return MainVersion 是否已赋值
                     * 
                     */
                    bool MainVersionHasBeenSet() const;

                    /**
                     * 获取<p>Image URL domain name.</p>
                     * @return RegistryUrl <p>Image URL domain name.</p>
                     * 
                     */
                    std::string GetRegistryUrl() const;

                    /**
                     * 设置<p>Image URL domain name.</p>
                     * @param _registryUrl <p>Image URL domain name.</p>
                     * 
                     */
                    void SetRegistryUrl(const std::string& _registryUrl);

                    /**
                     * 判断参数 RegistryUrl 是否已赋值
                     * @return RegistryUrl 是否已赋值
                     * 
                     */
                    bool RegistryUrlHasBeenSet() const;

                    /**
                     * 获取<p>Image namespace.</p>
                     * @return NamespaceName <p>Image namespace.</p>
                     * 
                     */
                    std::string GetNamespaceName() const;

                    /**
                     * 设置<p>Image namespace.</p>
                     * @param _namespaceName <p>Image namespace.</p>
                     * 
                     */
                    void SetNamespaceName(const std::string& _namespaceName);

                    /**
                     * 判断参数 NamespaceName 是否已赋值
                     * @return NamespaceName 是否已赋值
                     * 
                     */
                    bool NamespaceNameHasBeenSet() const;

                    /**
                     * 获取<p>Image repository name.</p>
                     * @return RepoName <p>Image repository name.</p>
                     * 
                     */
                    std::string GetRepoName() const;

                    /**
                     * 设置<p>Image repository name.</p>
                     * @param _repoName <p>Image repository name.</p>
                     * 
                     */
                    void SetRepoName(const std::string& _repoName);

                    /**
                     * 判断参数 RepoName 是否已赋值
                     * @return RepoName 是否已赋值
                     * 
                     */
                    bool RepoNameHasBeenSet() const;

                    /**
                     * 获取<p>Image version tag.</p>
                     * @return Tag <p>Image version tag.</p>
                     * 
                     */
                    std::string GetTag() const;

                    /**
                     * 设置<p>Image version tag.</p>
                     * @param _tag <p>Image version tag.</p>
                     * 
                     */
                    void SetTag(const std::string& _tag);

                    /**
                     * 判断参数 Tag 是否已赋值
                     * @return Tag 是否已赋值
                     * 
                     */
                    bool TagHasBeenSet() const;

                    /**
                     * 获取<p>Username.</p>
                     * @return Username <p>Username.</p>
                     * 
                     */
                    std::string GetUsername() const;

                    /**
                     * 设置<p>Username.</p>
                     * @param _username <p>Username.</p>
                     * 
                     */
                    void SetUsername(const std::string& _username);

                    /**
                     * 判断参数 Username 是否已赋值
                     * @return Username 是否已赋值
                     * 
                     */
                    bool UsernameHasBeenSet() const;

                    /**
                     * 获取<p>Password.</p>
                     * @return Password <p>Password.</p>
                     * 
                     */
                    std::string GetPassword() const;

                    /**
                     * 设置<p>Password.</p>
                     * @param _password <p>Password.</p>
                     * 
                     */
                    void SetPassword(const std::string& _password);

                    /**
                     * 判断参数 Password 是否已赋值
                     * @return Password 是否已赋值
                     * 
                     */
                    bool PasswordHasBeenSet() const;

                    /**
                     * 获取<p>Image pull secret.</p>
                     * @return ImagePullSecret <p>Image pull secret.</p>
                     * 
                     */
                    ImagePullSecret GetImagePullSecret() const;

                    /**
                     * 设置<p>Image pull secret.</p>
                     * @param _imagePullSecret <p>Image pull secret.</p>
                     * 
                     */
                    void SetImagePullSecret(const ImagePullSecret& _imagePullSecret);

                    /**
                     * 判断参数 ImagePullSecret 是否已赋值
                     * @return ImagePullSecret 是否已赋值
                     * 
                     */
                    bool ImagePullSecretHasBeenSet() const;

                    /**
                     * 获取<p>Image pull policy.</p>
                     * @return ImagePullPolicy <p>Image pull policy.</p>
                     * 
                     */
                    std::string GetImagePullPolicy() const;

                    /**
                     * 设置<p>Image pull policy.</p>
                     * @param _imagePullPolicy <p>Image pull policy.</p>
                     * 
                     */
                    void SetImagePullPolicy(const std::string& _imagePullPolicy);

                    /**
                     * 判断参数 ImagePullPolicy 是否已赋值
                     * @return ImagePullPolicy 是否已赋值
                     * 
                     */
                    bool ImagePullPolicyHasBeenSet() const;

                private:

                    /**
                     * <p>Image type.</p><p>Enumeration values:</p><ul><li>official: official image</li><li>custom: custom image</li><li>imageUrl: image URL</li></ul>
                     */
                    std::string m_imageMode;
                    bool m_imageModeHasBeenSet;

                    /**
                     * <p>Region.</p>
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * <p>Whether it is an existing image.</p>
                     */
                    bool m_legacyCCR;
                    bool m_legacyCCRHasBeenSet;

                    /**
                     * <p>Image URL.</p>
                     */
                    std::string m_fullImageUrl;
                    bool m_fullImageUrlHasBeenSet;

                    /**
                     * <p>Version.</p>
                     */
                    std::string m_mainVersion;
                    bool m_mainVersionHasBeenSet;

                    /**
                     * <p>Image URL domain name.</p>
                     */
                    std::string m_registryUrl;
                    bool m_registryUrlHasBeenSet;

                    /**
                     * <p>Image namespace.</p>
                     */
                    std::string m_namespaceName;
                    bool m_namespaceNameHasBeenSet;

                    /**
                     * <p>Image repository name.</p>
                     */
                    std::string m_repoName;
                    bool m_repoNameHasBeenSet;

                    /**
                     * <p>Image version tag.</p>
                     */
                    std::string m_tag;
                    bool m_tagHasBeenSet;

                    /**
                     * <p>Username.</p>
                     */
                    std::string m_username;
                    bool m_usernameHasBeenSet;

                    /**
                     * <p>Password.</p>
                     */
                    std::string m_password;
                    bool m_passwordHasBeenSet;

                    /**
                     * <p>Image pull secret.</p>
                     */
                    ImagePullSecret m_imagePullSecret;
                    bool m_imagePullSecretHasBeenSet;

                    /**
                     * <p>Image pull policy.</p>
                     */
                    std::string m_imagePullPolicy;
                    bool m_imagePullPolicyHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EMR_V20190103_MODEL_IMAGEINFOV2_H_
