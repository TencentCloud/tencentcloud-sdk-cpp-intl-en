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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_IMAGECOMPONENT_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_IMAGECOMPONENT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * Image component information
                */
                class ImageComponent : public AbstractModel
                {
                public:
                    ImageComponent();
                    ~ImageComponent() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Component name.</p>
                     * @return Name <p>Component name.</p>
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置<p>Component name.</p>
                     * @param _name <p>Component name.</p>
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
                     * 获取<p>Component version</p>
                     * @return Version <p>Component version</p>
                     * 
                     */
                    std::string GetVersion() const;

                    /**
                     * 设置<p>Component version</p>
                     * @param _version <p>Component version</p>
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
                     * 获取<p>Component path</p>
                     * @return Path <p>Component path</p>
                     * 
                     */
                    std::string GetPath() const;

                    /**
                     * 设置<p>Component path</p>
                     * @param _path <p>Component path</p>
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
                     * 获取<p>Component type</p><p>Enumeration value:</p><ul><li>SYSTEM_COMPONENT: System component</li><li>APP_COMPONENT: Application component</li></ul>
                     * @return Type <p>Component type</p><p>Enumeration value:</p><ul><li>SYSTEM_COMPONENT: System component</li><li>APP_COMPONENT: Application component</li></ul>
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置<p>Component type</p><p>Enumeration value:</p><ul><li>SYSTEM_COMPONENT: System component</li><li>APP_COMPONENT: Application component</li></ul>
                     * @param _type <p>Component type</p><p>Enumeration value:</p><ul><li>SYSTEM_COMPONENT: System component</li><li>APP_COMPONENT: Application component</li></ul>
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
                     * 获取<p>Image ID.</p>
                     * @return ImageID <p>Image ID.</p>
                     * 
                     */
                    std::string GetImageID() const;

                    /**
                     * 设置<p>Image ID.</p>
                     * @param _imageID <p>Image ID.</p>
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
                     * 获取<p>Number of vulnerabilities</p>
                     * @return VulCount <p>Number of vulnerabilities</p>
                     * 
                     */
                    uint64_t GetVulCount() const;

                    /**
                     * 设置<p>Number of vulnerabilities</p>
                     * @param _vulCount <p>Number of vulnerabilities</p>
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
                     * 获取<p>Image component Id</p>
                     * @return Id <p>Image component Id</p>
                     * 
                     */
                    std::string GetId() const;

                    /**
                     * 设置<p>Image component Id</p>
                     * @param _id <p>Image component Id</p>
                     * 
                     */
                    void SetId(const std::string& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取<p>Component Id</p>
                     * @return ComponentId <p>Component Id</p>
                     * 
                     */
                    uint64_t GetComponentId() const;

                    /**
                     * 设置<p>Component Id</p>
                     * @param _componentId <p>Component Id</p>
                     * 
                     */
                    void SetComponentId(const uint64_t& _componentId);

                    /**
                     * 判断参数 ComponentId 是否已赋值
                     * @return ComponentId 是否已赋值
                     * 
                     */
                    bool ComponentIdHasBeenSet() const;

                private:

                    /**
                     * <p>Component name.</p>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>Component version</p>
                     */
                    std::string m_version;
                    bool m_versionHasBeenSet;

                    /**
                     * <p>Component path</p>
                     */
                    std::string m_path;
                    bool m_pathHasBeenSet;

                    /**
                     * <p>Component type</p><p>Enumeration value:</p><ul><li>SYSTEM_COMPONENT: System component</li><li>APP_COMPONENT: Application component</li></ul>
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * <p>Image ID.</p>
                     */
                    std::string m_imageID;
                    bool m_imageIDHasBeenSet;

                    /**
                     * <p>Number of vulnerabilities</p>
                     */
                    uint64_t m_vulCount;
                    bool m_vulCountHasBeenSet;

                    /**
                     * <p>Image component Id</p>
                     */
                    std::string m_id;
                    bool m_idHasBeenSet;

                    /**
                     * <p>Component Id</p>
                     */
                    uint64_t m_componentId;
                    bool m_componentIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_IMAGECOMPONENT_H_
