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

#ifndef TENCENTCLOUD_TKE_V20180525_MODEL_IMAGEINSTANCE_H_
#define TENCENTCLOUD_TKE_V20180525_MODEL_IMAGEINSTANCE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tke
    {
        namespace V20180525
        {
            namespace Model
            {
                /**
                * Image details
                */
                class ImageInstance : public AbstractModel
                {
                public:
                    ImageInstance();
                    ~ImageInstance() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Image alias
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return Alias Image alias
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetAlias() const;

                    /**
                     * 设置Image alias
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _alias Image alias
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetAlias(const std::string& _alias);

                    /**
                     * 判断参数 Alias 是否已赋值
                     * @return Alias 是否已赋值
                     * 
                     */
                    bool AliasHasBeenSet() const;

                    /**
                     * 获取Operating system name
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return OsName Operating system name
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetOsName() const;

                    /**
                     * 设置Operating system name
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _osName Operating system name
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetOsName(const std::string& _osName);

                    /**
                     * 判断参数 OsName 是否已赋值
                     * @return OsName 是否已赋值
                     * 
                     */
                    bool OsNameHasBeenSet() const;

                    /**
                     * 获取Image ID
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return ImageId Image ID
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetImageId() const;

                    /**
                     * 设置Image ID
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _imageId Image ID
Note: this field may return null, indicating that no valid values can be obtained.
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
                     * 获取Container image tag, **DOCKER_CUSTOMIZE** (container customized tag), **GENERAL** (general tag, default value)
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return OsCustomizeType Container image tag, **DOCKER_CUSTOMIZE** (container customized tag), **GENERAL** (general tag, default value)
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetOsCustomizeType() const;

                    /**
                     * 设置Container image tag, **DOCKER_CUSTOMIZE** (container customized tag), **GENERAL** (general tag, default value)
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _osCustomizeType Container image tag, **DOCKER_CUSTOMIZE** (container customized tag), **GENERAL** (general tag, default value)
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetOsCustomizeType(const std::string& _osCustomizeType);

                    /**
                     * 判断参数 OsCustomizeType 是否已赋值
                     * @return OsCustomizeType 是否已赋值
                     * 
                     */
                    bool OsCustomizeTypeHasBeenSet() const;

                private:

                    /**
                     * Image alias
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_alias;
                    bool m_aliasHasBeenSet;

                    /**
                     * Operating system name
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_osName;
                    bool m_osNameHasBeenSet;

                    /**
                     * Image ID
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_imageId;
                    bool m_imageIdHasBeenSet;

                    /**
                     * Container image tag, **DOCKER_CUSTOMIZE** (container customized tag), **GENERAL** (general tag, default value)
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_osCustomizeType;
                    bool m_osCustomizeTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TKE_V20180525_MODEL_IMAGEINSTANCE_H_
