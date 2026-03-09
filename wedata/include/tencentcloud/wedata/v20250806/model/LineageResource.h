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

#ifndef TENCENTCLOUD_WEDATA_V20250806_MODEL_LINEAGERESOURCE_H_
#define TENCENTCLOUD_WEDATA_V20250806_MODEL_LINEAGERESOURCE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/wedata/v20250806/model/LineageProperty.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20250806
        {
            namespace Model
            {
                /**
                * Lineage resource entity.
                */
                class LineageResource : public AbstractModel
                {
                public:
                    LineageResource();
                    ~LineageResource() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Original unique ID of the entity.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ResourceUniqueId Original unique ID of the entity.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetResourceUniqueId() const;

                    /**
                     * 设置Original unique ID of the entity.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _resourceUniqueId Original unique ID of the entity.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetResourceUniqueId(const std::string& _resourceUniqueId);

                    /**
                     * 判断参数 ResourceUniqueId 是否已赋值
                     * @return ResourceUniqueId 是否已赋值
                     * 
                     */
                    bool ResourceUniqueIdHasBeenSet() const;

                    /**
                     * 获取Service name: database name.table name | metric name | model name | field name.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ResourceName Service name: database name.table name | metric name | model name | field name.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetResourceName() const;

                    /**
                     * 设置Service name: database name.table name | metric name | model name | field name.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _resourceName Service name: database name.table name | metric name | model name | field name.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetResourceName(const std::string& _resourceName);

                    /**
                     * 判断参数 ResourceName 是否已赋值
                     * @return ResourceName 是否已赋值
                     * 
                     */
                    bool ResourceNameHasBeenSet() const;

                    /**
                     * 获取Entity type.
TABLE|METRIC|MODEL|SERVICE|COLUMN
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ResourceType Entity type.
TABLE|METRIC|MODEL|SERVICE|COLUMN
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetResourceType() const;

                    /**
                     * 设置Entity type.
TABLE|METRIC|MODEL|SERVICE|COLUMN
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _resourceType Entity type.
TABLE|METRIC|MODEL|SERVICE|COLUMN
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
                     * 获取Unique identifier of the node lineage symbol.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return LineageNodeId Unique identifier of the node lineage symbol.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetLineageNodeId() const;

                    /**
                     * 设置Unique identifier of the node lineage symbol.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _lineageNodeId Unique identifier of the node lineage symbol.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetLineageNodeId(const std::string& _lineageNodeId);

                    /**
                     * 判断参数 LineageNodeId 是否已赋值
                     * @return LineageNodeId 是否已赋值
                     * 
                     */
                    bool LineageNodeIdHasBeenSet() const;

                    /**
                     * 获取Description: table type | metric description | model description | field description.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Description Description: table type | metric description | model description | field description.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置Description: table type | metric description | model description | field description.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _description Description: table type | metric description | model description | field description.
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Source: WEDATA|THIRD.
Default wedata.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Platform Source: WEDATA|THIRD.
Default wedata.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetPlatform() const;

                    /**
                     * 设置Source: WEDATA|THIRD.
Default wedata.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _platform Source: WEDATA|THIRD.
Default wedata.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetPlatform(const std::string& _platform);

                    /**
                     * 判断参数 Platform 是否已赋值
                     * @return Platform 是否已赋值
                     * 
                     */
                    bool PlatformHasBeenSet() const;

                    /**
                     * 获取Creation time.


Note: This field may return null, indicating that no valid values can be obtained.
                     * @return CreateTime Creation time.


Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置Creation time.


Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _createTime Creation time.


Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取Update time
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return UpdateTime Update time
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置Update time
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _updateTime Update time
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetUpdateTime(const std::string& _updateTime);

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     * 
                     */
                    bool UpdateTimeHasBeenSet() const;

                    /**
                     * 获取resource additional parameters.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ResourceProperties resource additional parameters.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<LineageProperty> GetResourceProperties() const;

                    /**
                     * 设置resource additional parameters.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _resourceProperties resource additional parameters.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetResourceProperties(const std::vector<LineageProperty>& _resourceProperties);

                    /**
                     * 判断参数 ResourceProperties 是否已赋值
                     * @return ResourceProperties 是否已赋值
                     * 
                     */
                    bool ResourcePropertiesHasBeenSet() const;

                private:

                    /**
                     * Original unique ID of the entity.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_resourceUniqueId;
                    bool m_resourceUniqueIdHasBeenSet;

                    /**
                     * Service name: database name.table name | metric name | model name | field name.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_resourceName;
                    bool m_resourceNameHasBeenSet;

                    /**
                     * Entity type.
TABLE|METRIC|MODEL|SERVICE|COLUMN
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_resourceType;
                    bool m_resourceTypeHasBeenSet;

                    /**
                     * Unique identifier of the node lineage symbol.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_lineageNodeId;
                    bool m_lineageNodeIdHasBeenSet;

                    /**
                     * Description: table type | metric description | model description | field description.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * Source: WEDATA|THIRD.
Default wedata.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_platform;
                    bool m_platformHasBeenSet;

                    /**
                     * Creation time.


Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * Update time
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * resource additional parameters.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<LineageProperty> m_resourceProperties;
                    bool m_resourcePropertiesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20250806_MODEL_LINEAGERESOURCE_H_
