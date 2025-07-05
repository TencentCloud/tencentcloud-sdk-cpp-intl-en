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

#ifndef TENCENTCLOUD_TCR_V20190924_MODEL_DUPLICATEIMAGEREQUEST_H_
#define TENCENTCLOUD_TCR_V20190924_MODEL_DUPLICATEIMAGEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tcr
    {
        namespace V20190924
        {
            namespace Model
            {
                /**
                * DuplicateImage request structure.
                */
                class DuplicateImageRequest : public AbstractModel
                {
                public:
                    DuplicateImageRequest();
                    ~DuplicateImageRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Instance ID.
                     * @return RegistryId Instance ID.
                     * 
                     */
                    std::string GetRegistryId() const;

                    /**
                     * 设置Instance ID.
                     * @param _registryId Instance ID.
                     * 
                     */
                    void SetRegistryId(const std::string& _registryId);

                    /**
                     * 判断参数 RegistryId 是否已赋值
                     * @return RegistryId 是否已赋值
                     * 
                     */
                    bool RegistryIdHasBeenSet() const;

                    /**
                     * 获取Source namespace name.
                     * @return SourceNamespace Source namespace name.
                     * 
                     */
                    std::string GetSourceNamespace() const;

                    /**
                     * 设置Source namespace name.
                     * @param _sourceNamespace Source namespace name.
                     * 
                     */
                    void SetSourceNamespace(const std::string& _sourceNamespace);

                    /**
                     * 判断参数 SourceNamespace 是否已赋值
                     * @return SourceNamespace 是否已赋值
                     * 
                     */
                    bool SourceNamespaceHasBeenSet() const;

                    /**
                     * 获取Source image repository name.
                     * @return SourceRepo Source image repository name.
                     * 
                     */
                    std::string GetSourceRepo() const;

                    /**
                     * 设置Source image repository name.
                     * @param _sourceRepo Source image repository name.
                     * 
                     */
                    void SetSourceRepo(const std::string& _sourceRepo);

                    /**
                     * 判断参数 SourceRepo 是否已赋值
                     * @return SourceRepo 是否已赋值
                     * 
                     */
                    bool SourceRepoHasBeenSet() const;

                    /**
                     * 获取Source image tag or digest value. Currently, only tag is supported.
                     * @return SourceReference Source image tag or digest value. Currently, only tag is supported.
                     * 
                     */
                    std::string GetSourceReference() const;

                    /**
                     * 设置Source image tag or digest value. Currently, only tag is supported.
                     * @param _sourceReference Source image tag or digest value. Currently, only tag is supported.
                     * 
                     */
                    void SetSourceReference(const std::string& _sourceReference);

                    /**
                     * 判断参数 SourceReference 是否已赋值
                     * @return SourceReference 是否已赋值
                     * 
                     */
                    bool SourceReferenceHasBeenSet() const;

                    /**
                     * 获取Destination image version.
                     * @return DestinationTag Destination image version.
                     * 
                     */
                    std::string GetDestinationTag() const;

                    /**
                     * 设置Destination image version.
                     * @param _destinationTag Destination image version.
                     * 
                     */
                    void SetDestinationTag(const std::string& _destinationTag);

                    /**
                     * 判断参数 DestinationTag 是否已赋值
                     * @return DestinationTag 是否已赋值
                     * 
                     */
                    bool DestinationTagHasBeenSet() const;

                    /**
                     * 获取Destination namespace. Defaults to the same as the source if not filled.
                     * @return DestinationNamespace Destination namespace. Defaults to the same as the source if not filled.
                     * 
                     */
                    std::string GetDestinationNamespace() const;

                    /**
                     * 设置Destination namespace. Defaults to the same as the source if not filled.
                     * @param _destinationNamespace Destination namespace. Defaults to the same as the source if not filled.
                     * 
                     */
                    void SetDestinationNamespace(const std::string& _destinationNamespace);

                    /**
                     * 判断参数 DestinationNamespace 是否已赋值
                     * @return DestinationNamespace 是否已赋值
                     * 
                     */
                    bool DestinationNamespaceHasBeenSet() const;

                    /**
                     * 获取Destination image repository. Defaults to the same as the source if not filled.
                     * @return DestinationRepo Destination image repository. Defaults to the same as the source if not filled.
                     * 
                     */
                    std::string GetDestinationRepo() const;

                    /**
                     * 设置Destination image repository. Defaults to the same as the source if not filled.
                     * @param _destinationRepo Destination image repository. Defaults to the same as the source if not filled.
                     * 
                     */
                    void SetDestinationRepo(const std::string& _destinationRepo);

                    /**
                     * 判断参数 DestinationRepo 是否已赋值
                     * @return DestinationRepo 是否已赋值
                     * 
                     */
                    bool DestinationRepoHasBeenSet() const;

                    /**
                     * 获取Whether to overwrite.
                     * @return Override Whether to overwrite.
                     * 
                     */
                    bool GetOverride() const;

                    /**
                     * 设置Whether to overwrite.
                     * @param _override Whether to overwrite.
                     * 
                     */
                    void SetOverride(const bool& _override);

                    /**
                     * 判断参数 Override 是否已赋值
                     * @return Override 是否已赋值
                     * 
                     */
                    bool OverrideHasBeenSet() const;

                private:

                    /**
                     * Instance ID.
                     */
                    std::string m_registryId;
                    bool m_registryIdHasBeenSet;

                    /**
                     * Source namespace name.
                     */
                    std::string m_sourceNamespace;
                    bool m_sourceNamespaceHasBeenSet;

                    /**
                     * Source image repository name.
                     */
                    std::string m_sourceRepo;
                    bool m_sourceRepoHasBeenSet;

                    /**
                     * Source image tag or digest value. Currently, only tag is supported.
                     */
                    std::string m_sourceReference;
                    bool m_sourceReferenceHasBeenSet;

                    /**
                     * Destination image version.
                     */
                    std::string m_destinationTag;
                    bool m_destinationTagHasBeenSet;

                    /**
                     * Destination namespace. Defaults to the same as the source if not filled.
                     */
                    std::string m_destinationNamespace;
                    bool m_destinationNamespaceHasBeenSet;

                    /**
                     * Destination image repository. Defaults to the same as the source if not filled.
                     */
                    std::string m_destinationRepo;
                    bool m_destinationRepoHasBeenSet;

                    /**
                     * Whether to overwrite.
                     */
                    bool m_override;
                    bool m_overrideHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCR_V20190924_MODEL_DUPLICATEIMAGEREQUEST_H_
