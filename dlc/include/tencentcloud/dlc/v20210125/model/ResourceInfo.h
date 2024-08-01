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

#ifndef TENCENTCLOUD_DLC_V20210125_MODEL_RESOURCEINFO_H_
#define TENCENTCLOUD_DLC_V20210125_MODEL_RESOURCEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dlc/v20210125/model/FavorInfo.h>


namespace TencentCloud
{
    namespace Dlc
    {
        namespace V20210125
        {
            namespace Model
            {
                /**
                * ResourceInfo
                */
                class ResourceInfo : public AbstractModel
                {
                public:
                    ResourceInfo();
                    ~ResourceInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Affiliated type
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return AttributionType Affiliated type
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetAttributionType() const;

                    /**
                     * 设置Affiliated type
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _attributionType Affiliated type
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetAttributionType(const std::string& _attributionType);

                    /**
                     * 判断参数 AttributionType 是否已赋值
                     * @return AttributionType 是否已赋值
                     * 
                     */
                    bool AttributionTypeHasBeenSet() const;

                    /**
                     * 获取Resource type
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ResourceType Resource type
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetResourceType() const;

                    /**
                     * 设置Resource type
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _resourceType Resource type
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetResourceType(const std::string& _resourceType);

                    /**
                     * 判断参数 ResourceType 是否已赋值
                     * @return ResourceType 是否已赋值
                     * 
                     */
                    bool ResourceTypeHasBeenSet() const;

                    /**
                     * 获取Engine name
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Name Engine name
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置Engine name
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _name Engine name
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取If the resource type is spark-sql, the value is Name; if the resource type is spark-batch, the value is session app_name.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Instance If the resource type is spark-sql, the value is Name; if the resource type is spark-batch, the value is session app_name.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetInstance() const;

                    /**
                     * 设置If the resource type is spark-sql, the value is Name; if the resource type is spark-batch, the value is session app_name.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _instance If the resource type is spark-sql, the value is Name; if the resource type is spark-batch, the value is session app_name.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetInstance(const std::string& _instance);

                    /**
                     * 判断参数 Instance 是否已赋值
                     * @return Instance 是否已赋值
                     * 
                     */
                    bool InstanceHasBeenSet() const;

                    /**
                     * 获取Affinity
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Favor Affinity
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<FavorInfo> GetFavor() const;

                    /**
                     * 设置Affinity
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _favor Affinity
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetFavor(const std::vector<FavorInfo>& _favor);

                    /**
                     * 判断参数 Favor 是否已赋值
                     * @return Favor 是否已赋值
                     * 
                     */
                    bool FavorHasBeenSet() const;

                    /**
                     * 获取Status
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Status Status
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置Status
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _status Status
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetStatus(const int64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                private:

                    /**
                     * Affiliated type
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_attributionType;
                    bool m_attributionTypeHasBeenSet;

                    /**
                     * Resource type
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_resourceType;
                    bool m_resourceTypeHasBeenSet;

                    /**
                     * Engine name
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * If the resource type is spark-sql, the value is Name; if the resource type is spark-batch, the value is session app_name.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_instance;
                    bool m_instanceHasBeenSet;

                    /**
                     * Affinity
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<FavorInfo> m_favor;
                    bool m_favorHasBeenSet;

                    /**
                     * Status
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DLC_V20210125_MODEL_RESOURCEINFO_H_
