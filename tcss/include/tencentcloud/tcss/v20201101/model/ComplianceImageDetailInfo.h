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

#ifndef TENCENTCLOUD_TCSS_V20201101_MODEL_COMPLIANCEIMAGEDETAILINFO_H_
#define TENCENTCLOUD_TCSS_V20201101_MODEL_COMPLIANCEIMAGEDETAILINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tcss
    {
        namespace V20201101
        {
            namespace Model
            {
                /**
                * Image asset details
                */
                class ComplianceImageDetailInfo : public AbstractModel
                {
                public:
                    ComplianceImageDetailInfo();
                    ~ComplianceImageDetailInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Image ID on the server
                     * @return ImageId Image ID on the server
                     * 
                     */
                    std::string GetImageId() const;

                    /**
                     * 设置Image ID on the server
                     * @param _imageId Image ID on the server
                     * 
                     */
                    void SetImageId(const std::string& _imageId);

                    /**
                     * 判断参数 ImageId 是否已赋值
                     * @return ImageId 是否已赋值
                     * 
                     */
                    bool ImageIdHasBeenSet() const;

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
                     * 获取Path of the remote repository of the image
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Repository Path of the remote repository of the image
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetRepository() const;

                    /**
                     * 设置Path of the remote repository of the image
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _repository Path of the remote repository of the image
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetRepository(const std::string& _repository);

                    /**
                     * 判断参数 Repository 是否已赋值
                     * @return Repository 是否已赋值
                     * 
                     */
                    bool RepositoryHasBeenSet() const;

                private:

                    /**
                     * Image ID on the server
                     */
                    std::string m_imageId;
                    bool m_imageIdHasBeenSet;

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
                     * Path of the remote repository of the image
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_repository;
                    bool m_repositoryHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSS_V20201101_MODEL_COMPLIANCEIMAGEDETAILINFO_H_
