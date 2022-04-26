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

#ifndef TENCENTCLOUD_EIAM_V20210420_MODEL_ORGNODECHILDINFO_H_
#define TENCENTCLOUD_EIAM_V20210420_MODEL_ORGNODECHILDINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Eiam
    {
        namespace V20210420
        {
            namespace Model
            {
                /**
                * List of sub-nodes under the current organization node
                */
                class OrgNodeChildInfo : public AbstractModel
                {
                public:
                    OrgNodeChildInfo();
                    ~OrgNodeChildInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Displayed organization node name, which can contain up to 64 characters and is the same as the organization name by default.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return DisplayName Displayed organization node name, which can contain up to 64 characters and is the same as the organization name by default.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetDisplayName() const;

                    /**
                     * 设置Displayed organization node name, which can contain up to 64 characters and is the same as the organization name by default.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param DisplayName Displayed organization node name, which can contain up to 64 characters and is the same as the organization name by default.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetDisplayName(const std::string& _displayName);

                    /**
                     * 判断参数 DisplayName 是否已赋值
                     * @return DisplayName 是否已赋值
                     */
                    bool DisplayNameHasBeenSet() const;

                    /**
                     * 获取Last modification time of the organization node in ISO 8601 format.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return LastModifiedDate Last modification time of the organization node in ISO 8601 format.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetLastModifiedDate() const;

                    /**
                     * 设置Last modification time of the organization node in ISO 8601 format.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param LastModifiedDate Last modification time of the organization node in ISO 8601 format.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetLastModifiedDate(const std::string& _lastModifiedDate);

                    /**
                     * 判断参数 LastModifiedDate 是否已赋值
                     * @return LastModifiedDate 是否已赋值
                     */
                    bool LastModifiedDateHasBeenSet() const;

                    /**
                     * 获取External ID of the organization node, which is optional and customizable.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return CustomizedOrgNodeId External ID of the organization node, which is optional and customizable.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetCustomizedOrgNodeId() const;

                    /**
                     * 设置External ID of the organization node, which is optional and customizable.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param CustomizedOrgNodeId External ID of the organization node, which is optional and customizable.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetCustomizedOrgNodeId(const std::string& _customizedOrgNodeId);

                    /**
                     * 判断参数 CustomizedOrgNodeId 是否已赋值
                     * @return CustomizedOrgNodeId 是否已赋值
                     */
                    bool CustomizedOrgNodeIdHasBeenSet() const;

                    /**
                     * 获取Parent node ID of the current organization node.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return ParentOrgNodeId Parent node ID of the current organization node.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetParentOrgNodeId() const;

                    /**
                     * 设置Parent node ID of the current organization node.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param ParentOrgNodeId Parent node ID of the current organization node.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetParentOrgNodeId(const std::string& _parentOrgNodeId);

                    /**
                     * 判断参数 ParentOrgNodeId 是否已赋值
                     * @return ParentOrgNodeId 是否已赋值
                     */
                    bool ParentOrgNodeIdHasBeenSet() const;

                    /**
                     * 获取Organization node ID, which is globally unique.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return OrgNodeId Organization node ID, which is globally unique.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetOrgNodeId() const;

                    /**
                     * 设置Organization node ID, which is globally unique.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param OrgNodeId Organization node ID, which is globally unique.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetOrgNodeId(const std::string& _orgNodeId);

                    /**
                     * 判断参数 OrgNodeId 是否已赋值
                     * @return OrgNodeId 是否已赋值
                     */
                    bool OrgNodeIdHasBeenSet() const;

                    /**
                     * 获取Data source.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return DataSource Data source.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetDataSource() const;

                    /**
                     * 设置Data source.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param DataSource Data source.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetDataSource(const std::string& _dataSource);

                    /**
                     * 判断参数 DataSource 是否已赋值
                     * @return DataSource 是否已赋值
                     */
                    bool DataSourceHasBeenSet() const;

                    /**
                     * 获取Organization node creation time in ISO 8601 format.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return CreatedDate Organization node creation time in ISO 8601 format.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetCreatedDate() const;

                    /**
                     * 设置Organization node creation time in ISO 8601 format.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param CreatedDate Organization node creation time in ISO 8601 format.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetCreatedDate(const std::string& _createdDate);

                    /**
                     * 判断参数 CreatedDate 是否已赋值
                     * @return CreatedDate 是否已赋值
                     */
                    bool CreatedDateHasBeenSet() const;

                    /**
                     * 获取Organization node description.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return Description Organization node description.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置Organization node description.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param Description Organization node description.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     */
                    bool DescriptionHasBeenSet() const;

                private:

                    /**
                     * Displayed organization node name, which can contain up to 64 characters and is the same as the organization name by default.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_displayName;
                    bool m_displayNameHasBeenSet;

                    /**
                     * Last modification time of the organization node in ISO 8601 format.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_lastModifiedDate;
                    bool m_lastModifiedDateHasBeenSet;

                    /**
                     * External ID of the organization node, which is optional and customizable.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_customizedOrgNodeId;
                    bool m_customizedOrgNodeIdHasBeenSet;

                    /**
                     * Parent node ID of the current organization node.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_parentOrgNodeId;
                    bool m_parentOrgNodeIdHasBeenSet;

                    /**
                     * Organization node ID, which is globally unique.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_orgNodeId;
                    bool m_orgNodeIdHasBeenSet;

                    /**
                     * Data source.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_dataSource;
                    bool m_dataSourceHasBeenSet;

                    /**
                     * Organization node creation time in ISO 8601 format.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_createdDate;
                    bool m_createdDateHasBeenSet;

                    /**
                     * Organization node description.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EIAM_V20210420_MODEL_ORGNODECHILDINFO_H_
