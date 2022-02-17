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

#ifndef TENCENTCLOUD_SCF_V20180416_MODEL_IMAGECONFIG_H_
#define TENCENTCLOUD_SCF_V20180416_MODEL_IMAGECONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Scf
    {
        namespace V20180416
        {
            namespace Model
            {
                /**
                * TCR image information
                */
                class ImageConfig : public AbstractModel
                {
                public:
                    ImageConfig();
                    ~ImageConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Image repository type, which can be `personal` or `enterprise`
                     * @return ImageType Image repository type, which can be `personal` or `enterprise`
                     */
                    std::string GetImageType() const;

                    /**
                     * 设置Image repository type, which can be `personal` or `enterprise`
                     * @param ImageType Image repository type, which can be `personal` or `enterprise`
                     */
                    void SetImageType(const std::string& _imageType);

                    /**
                     * 判断参数 ImageType 是否已赋值
                     * @return ImageType 是否已赋值
                     */
                    bool ImageTypeHasBeenSet() const;

                    /**
                     * 获取{domain}/{namespace}/{imageName}:{tag}@{digest}
                     * @return ImageUri {domain}/{namespace}/{imageName}:{tag}@{digest}
                     */
                    std::string GetImageUri() const;

                    /**
                     * 设置{domain}/{namespace}/{imageName}:{tag}@{digest}
                     * @param ImageUri {domain}/{namespace}/{imageName}:{tag}@{digest}
                     */
                    void SetImageUri(const std::string& _imageUri);

                    /**
                     * 判断参数 ImageUri 是否已赋值
                     * @return ImageUri 是否已赋值
                     */
                    bool ImageUriHasBeenSet() const;

                    /**
                     * 获取The temp token that a TCR Enterprise instance uses to obtain an image. It’s required when `ImageType` is `enterprise`.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @return RegistryId The temp token that a TCR Enterprise instance uses to obtain an image. It’s required when `ImageType` is `enterprise`.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string GetRegistryId() const;

                    /**
                     * 设置The temp token that a TCR Enterprise instance uses to obtain an image. It’s required when `ImageType` is `enterprise`.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @param RegistryId The temp token that a TCR Enterprise instance uses to obtain an image. It’s required when `ImageType` is `enterprise`.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    void SetRegistryId(const std::string& _registryId);

                    /**
                     * 判断参数 RegistryId 是否已赋值
                     * @return RegistryId 是否已赋值
                     */
                    bool RegistryIdHasBeenSet() const;

                    /**
                     * 获取Disused
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @return EntryPoint Disused
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string GetEntryPoint() const;

                    /**
                     * 设置Disused
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @param EntryPoint Disused
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    void SetEntryPoint(const std::string& _entryPoint);

                    /**
                     * 判断参数 EntryPoint 是否已赋值
                     * @return EntryPoint 是否已赋值
                     */
                    bool EntryPointHasBeenSet() const;

                    /**
                     * 获取The command to start up the container, such as `python`. If it’s not specified, Entrypoint in Dockerfile is used.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @return Command The command to start up the container, such as `python`. If it’s not specified, Entrypoint in Dockerfile is used.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string GetCommand() const;

                    /**
                     * 设置The command to start up the container, such as `python`. If it’s not specified, Entrypoint in Dockerfile is used.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @param Command The command to start up the container, such as `python`. If it’s not specified, Entrypoint in Dockerfile is used.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    void SetCommand(const std::string& _command);

                    /**
                     * 判断参数 Command 是否已赋值
                     * @return Command 是否已赋值
                     */
                    bool CommandHasBeenSet() const;

                    /**
                     * 获取The parameters to start up the container. Separate parameters with spaces, such as `u app.py`. If it’s not specified, `CMD in Dockerfile is used.
Note: This field may return `null`, indicating that no valid value can be found.
                     * @return Args The parameters to start up the container. Separate parameters with spaces, such as `u app.py`. If it’s not specified, `CMD in Dockerfile is used.
Note: This field may return `null`, indicating that no valid value can be found.
                     */
                    std::string GetArgs() const;

                    /**
                     * 设置The parameters to start up the container. Separate parameters with spaces, such as `u app.py`. If it’s not specified, `CMD in Dockerfile is used.
Note: This field may return `null`, indicating that no valid value can be found.
                     * @param Args The parameters to start up the container. Separate parameters with spaces, such as `u app.py`. If it’s not specified, `CMD in Dockerfile is used.
Note: This field may return `null`, indicating that no valid value can be found.
                     */
                    void SetArgs(const std::string& _args);

                    /**
                     * 判断参数 Args 是否已赋值
                     * @return Args 是否已赋值
                     */
                    bool ArgsHasBeenSet() const;

                private:

                    /**
                     * Image repository type, which can be `personal` or `enterprise`
                     */
                    std::string m_imageType;
                    bool m_imageTypeHasBeenSet;

                    /**
                     * {domain}/{namespace}/{imageName}:{tag}@{digest}
                     */
                    std::string m_imageUri;
                    bool m_imageUriHasBeenSet;

                    /**
                     * The temp token that a TCR Enterprise instance uses to obtain an image. It’s required when `ImageType` is `enterprise`.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string m_registryId;
                    bool m_registryIdHasBeenSet;

                    /**
                     * Disused
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string m_entryPoint;
                    bool m_entryPointHasBeenSet;

                    /**
                     * The command to start up the container, such as `python`. If it’s not specified, Entrypoint in Dockerfile is used.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string m_command;
                    bool m_commandHasBeenSet;

                    /**
                     * The parameters to start up the container. Separate parameters with spaces, such as `u app.py`. If it’s not specified, `CMD in Dockerfile is used.
Note: This field may return `null`, indicating that no valid value can be found.
                     */
                    std::string m_args;
                    bool m_argsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SCF_V20180416_MODEL_IMAGECONFIG_H_
