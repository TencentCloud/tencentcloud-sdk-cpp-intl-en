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

#ifndef TENCENTCLOUD_EIAM_V20210420_MODEL_DESCRIBEORGNODERESPONSE_H_
#define TENCENTCLOUD_EIAM_V20210420_MODEL_DESCRIBEORGNODERESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/eiam/v20210420/model/OrgNodeChildInfo.h>


namespace TencentCloud
{
    namespace Eiam
    {
        namespace V20210420
        {
            namespace Model
            {
                /**
                * DescribeOrgNode response structure.
                */
                class DescribeOrgNodeResponse : public AbstractModel
                {
                public:
                    DescribeOrgNodeResponse();
                    ~DescribeOrgNodeResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Displayed organization node name, which can contain up to 64 characters and is the same as the organization name by default.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return DisplayName Displayed organization node name, which can contain up to 64 characters and is the same as the organization name by default.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetDisplayName() const;

                    /**
                     * 判断参数 DisplayName 是否已赋值
                     * @return DisplayName 是否已赋值
                     * 
                     */
                    bool DisplayNameHasBeenSet() const;

                    /**
                     * 获取Last modification time of the organization node in ISO 8601 format.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return LastModifiedDate Last modification time of the organization node in ISO 8601 format.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetLastModifiedDate() const;

                    /**
                     * 判断参数 LastModifiedDate 是否已赋值
                     * @return LastModifiedDate 是否已赋值
                     * 
                     */
                    bool LastModifiedDateHasBeenSet() const;

                    /**
                     * 获取External ID of the organization node.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return CustomizedOrgNodeId External ID of the organization node.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetCustomizedOrgNodeId() const;

                    /**
                     * 判断参数 CustomizedOrgNodeId 是否已赋值
                     * @return CustomizedOrgNodeId 是否已赋值
                     * 
                     */
                    bool CustomizedOrgNodeIdHasBeenSet() const;

                    /**
                     * 获取Parent node ID of the current organization node.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return ParentOrgNodeId Parent node ID of the current organization node.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetParentOrgNodeId() const;

                    /**
                     * 判断参数 ParentOrgNodeId 是否已赋值
                     * @return ParentOrgNodeId 是否已赋值
                     * 
                     */
                    bool ParentOrgNodeIdHasBeenSet() const;

                    /**
                     * 获取Organization node ID, which is globally unique.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return OrgNodeId Organization node ID, which is globally unique.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetOrgNodeId() const;

                    /**
                     * 判断参数 OrgNodeId 是否已赋值
                     * @return OrgNodeId 是否已赋值
                     * 
                     */
                    bool OrgNodeIdHasBeenSet() const;

                    /**
                     * 获取Data source.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return DataSource Data source.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetDataSource() const;

                    /**
                     * 判断参数 DataSource 是否已赋值
                     * @return DataSource 是否已赋值
                     * 
                     */
                    bool DataSourceHasBeenSet() const;

                    /**
                     * 获取Organization node creation time in ISO 8601 format.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return CreatedDate Organization node creation time in ISO 8601 format.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetCreatedDate() const;

                    /**
                     * 判断参数 CreatedDate 是否已赋值
                     * @return CreatedDate 是否已赋值
                     * 
                     */
                    bool CreatedDateHasBeenSet() const;

                    /**
                     * 获取List of sub-nodes under the current organization node.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return OrgNodeChildInfo List of sub-nodes under the current organization node.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<OrgNodeChildInfo> GetOrgNodeChildInfo() const;

                    /**
                     * 判断参数 OrgNodeChildInfo 是否已赋值
                     * @return OrgNodeChildInfo 是否已赋值
                     * 
                     */
                    bool OrgNodeChildInfoHasBeenSet() const;

                    /**
                     * 获取Organization node description.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return Description Organization node description.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
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
                     * External ID of the organization node.
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
                     * List of sub-nodes under the current organization node.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<OrgNodeChildInfo> m_orgNodeChildInfo;
                    bool m_orgNodeChildInfoHasBeenSet;

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

#endif // !TENCENTCLOUD_EIAM_V20210420_MODEL_DESCRIBEORGNODERESPONSE_H_
