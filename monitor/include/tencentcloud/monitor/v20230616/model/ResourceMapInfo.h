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

#ifndef TENCENTCLOUD_MONITOR_V20230616_MODEL_RESOURCEMAPINFO_H_
#define TENCENTCLOUD_MONITOR_V20230616_MODEL_RESOURCEMAPINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Monitor
    {
        namespace V20230616
        {
            namespace Model
            {
                /**
                * Resource map entity
                */
                class ResourceMapInfo : public AbstractModel
                {
                public:
                    ResourceMapInfo();
                    ~ResourceMapInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Resource map ID</p>
                     * @return ResourceMapId <p>Resource map ID</p>
                     * 
                     */
                    std::string GetResourceMapId() const;

                    /**
                     * 设置<p>Resource map ID</p>
                     * @param _resourceMapId <p>Resource map ID</p>
                     * 
                     */
                    void SetResourceMapId(const std::string& _resourceMapId);

                    /**
                     * 判断参数 ResourceMapId 是否已赋值
                     * @return ResourceMapId 是否已赋值
                     * 
                     */
                    bool ResourceMapIdHasBeenSet() const;

                    /**
                     * 获取<p>Resource map name</p>
                     * @return Name <p>Resource map name</p>
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置<p>Resource map name</p>
                     * @param _name <p>Resource map name</p>
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
                     * 获取<p>Resource map description</p>
                     * @return Description <p>Resource map description</p>
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置<p>Resource map description</p>
                     * @param _description <p>Resource map description</p>
                     * 
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                    /**
                     * 获取<p>Total number of instances</p>
                     * @return InstanceCount <p>Total number of instances</p>
                     * 
                     */
                    int64_t GetInstanceCount() const;

                    /**
                     * 设置<p>Total number of instances</p>
                     * @param _instanceCount <p>Total number of instances</p>
                     * 
                     */
                    void SetInstanceCount(const int64_t& _instanceCount);

                    /**
                     * 判断参数 InstanceCount 是否已赋值
                     * @return InstanceCount 是否已赋值
                     * 
                     */
                    bool InstanceCountHasBeenSet() const;

                private:

                    /**
                     * <p>Resource map ID</p>
                     */
                    std::string m_resourceMapId;
                    bool m_resourceMapIdHasBeenSet;

                    /**
                     * <p>Resource map name</p>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>Resource map description</p>
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * <p>Total number of instances</p>
                     */
                    int64_t m_instanceCount;
                    bool m_instanceCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONITOR_V20230616_MODEL_RESOURCEMAPINFO_H_
