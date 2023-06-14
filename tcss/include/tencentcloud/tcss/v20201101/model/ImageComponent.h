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

#ifndef TENCENTCLOUD_TCSS_V20201101_MODEL_IMAGECOMPONENT_H_
#define TENCENTCLOUD_TCSS_V20201101_MODEL_IMAGECOMPONENT_H_

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
                * Information of a component in the image
                */
                class ImageComponent : public AbstractModel
                {
                public:
                    ImageComponent();
                    ~ImageComponent() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Component name
                     * @return Name Component name
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置Component name
                     * @param _name Component name
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取Component version
                     * @return Version Component version
                     * 
                     */
                    std::string GetVersion() const;

                    /**
                     * 设置Component version
                     * @param _version Component version
                     * 
                     */
                    void SetVersion(const std::string& _version);

                    /**
                     * 判断参数 Version 是否已赋值
                     * @return Version 是否已赋值
                     * 
                     */
                    bool VersionHasBeenSet() const;

                    /**
                     * 获取Component path
                     * @return Path Component path
                     * 
                     */
                    std::string GetPath() const;

                    /**
                     * 设置Component path
                     * @param _path Component path
                     * 
                     */
                    void SetPath(const std::string& _path);

                    /**
                     * 判断参数 Path 是否已赋值
                     * @return Path 是否已赋值
                     * 
                     */
                    bool PathHasBeenSet() const;

                    /**
                     * 获取Component type
                     * @return Type Component type
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置Component type
                     * @param _type Component type
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取Number of component vulnerabilities
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return VulCount Number of component vulnerabilities
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetVulCount() const;

                    /**
                     * 设置Number of component vulnerabilities
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _vulCount Number of component vulnerabilities
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetVulCount(const uint64_t& _vulCount);

                    /**
                     * 判断参数 VulCount 是否已赋值
                     * @return VulCount 是否已赋值
                     * 
                     */
                    bool VulCountHasBeenSet() const;

                    /**
                     * 获取Image ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ImageID Image ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetImageID() const;

                    /**
                     * 设置Image ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _imageID Image ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetImageID(const std::string& _imageID);

                    /**
                     * 判断参数 ImageID 是否已赋值
                     * @return ImageID 是否已赋值
                     * 
                     */
                    bool ImageIDHasBeenSet() const;

                private:

                    /**
                     * Component name
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Component version
                     */
                    std::string m_version;
                    bool m_versionHasBeenSet;

                    /**
                     * Component path
                     */
                    std::string m_path;
                    bool m_pathHasBeenSet;

                    /**
                     * Component type
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * Number of component vulnerabilities
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_vulCount;
                    bool m_vulCountHasBeenSet;

                    /**
                     * Image ID
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_imageID;
                    bool m_imageIDHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSS_V20201101_MODEL_IMAGECOMPONENT_H_
