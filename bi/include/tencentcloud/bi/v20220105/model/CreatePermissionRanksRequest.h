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

#ifndef TENCENTCLOUD_BI_V20220105_MODEL_CREATEPERMISSIONRANKSREQUEST_H_
#define TENCENTCLOUD_BI_V20220105_MODEL_CREATEPERMISSIONRANKSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/bi/v20220105/model/RowColumnConfig.h>


namespace TencentCloud
{
    namespace Bi
    {
        namespace V20220105
        {
            namespace Model
            {
                /**
                * CreatePermissionRanks request structure.
                */
                class CreatePermissionRanksRequest : public AbstractModel
                {
                public:
                    CreatePermissionRanksRequest();
                    ~CreatePermissionRanksRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>page number</p>
                     * @return TableId <p>page number</p>
                     * 
                     */
                    int64_t GetTableId() const;

                    /**
                     * 设置<p>page number</p>
                     * @param _tableId <p>page number</p>
                     * 
                     */
                    void SetTableId(const int64_t& _tableId);

                    /**
                     * 判断参数 TableId 是否已赋值
                     * @return TableId 是否已赋值
                     * 
                     */
                    bool TableIdHasBeenSet() const;

                    /**
                     * 获取<p>Mode</p><p>Enumeration value:</p><ul><li>ALL: All</li><li>Specify: Specify</li><li>TAG: Tag</li></ul><p>Default value: ALL</p>
                     * @return Mode <p>Mode</p><p>Enumeration value:</p><ul><li>ALL: All</li><li>Specify: Specify</li><li>TAG: Tag</li></ul><p>Default value: ALL</p>
                     * 
                     */
                    std::string GetMode() const;

                    /**
                     * 设置<p>Mode</p><p>Enumeration value:</p><ul><li>ALL: All</li><li>Specify: Specify</li><li>TAG: Tag</li></ul><p>Default value: ALL</p>
                     * @param _mode <p>Mode</p><p>Enumeration value:</p><ul><li>ALL: All</li><li>Specify: Specify</li><li>TAG: Tag</li></ul><p>Default value: ALL</p>
                     * 
                     */
                    void SetMode(const std::string& _mode);

                    /**
                     * 判断参数 Mode 是否已赋值
                     * @return Mode 是否已赋值
                     * 
                     */
                    bool ModeHasBeenSet() const;

                    /**
                     * 获取<p>Role type</p><p>Enumeration value:</p><ul><li>ROLES: By role</li><li>Others: Other</li></ul><p>Default value: Others</p>
                     * @return RoleType <p>Role type</p><p>Enumeration value:</p><ul><li>ROLES: By role</li><li>Others: Other</li></ul><p>Default value: Others</p>
                     * 
                     */
                    std::string GetRoleType() const;

                    /**
                     * 设置<p>Role type</p><p>Enumeration value:</p><ul><li>ROLES: By role</li><li>Others: Other</li></ul><p>Default value: Others</p>
                     * @param _roleType <p>Role type</p><p>Enumeration value:</p><ul><li>ROLES: By role</li><li>Others: Other</li></ul><p>Default value: Others</p>
                     * 
                     */
                    void SetRoleType(const std::string& _roleType);

                    /**
                     * 判断参数 RoleType 是否已赋值
                     * @return RoleType 是否已赋值
                     * 
                     */
                    bool RoleTypeHasBeenSet() const;

                    /**
                     * 获取<p>All page numbers</p>
                     * @return RoleId <p>All page numbers</p>
                     * 
                     */
                    int64_t GetRoleId() const;

                    /**
                     * 设置<p>All page numbers</p>
                     * @param _roleId <p>All page numbers</p>
                     * 
                     */
                    void SetRoleId(const int64_t& _roleId);

                    /**
                     * 判断参数 RoleId 是否已赋值
                     * @return RoleId 是否已赋值
                     * 
                     */
                    bool RoleIdHasBeenSet() const;

                    /**
                     * 获取<p>Rule information</p>
                     * @return RulerInfo <p>Rule information</p>
                     * 
                     */
                    std::string GetRulerInfo() const;

                    /**
                     * 设置<p>Rule information</p>
                     * @param _rulerInfo <p>Rule information</p>
                     * 
                     */
                    void SetRulerInfo(const std::string& _rulerInfo);

                    /**
                     * 判断参数 RulerInfo 是否已赋值
                     * @return RulerInfo 是否已赋值
                     * 
                     */
                    bool RulerInfoHasBeenSet() const;

                    /**
                     * 获取<p>Type</p><p>Enumeration value:</p><ul><li>ROW: row permission</li><li>COLUMN: column permission</li></ul><p>Default value: ROW</p>
                     * @return Type <p>Type</p><p>Enumeration value:</p><ul><li>ROW: row permission</li><li>COLUMN: column permission</li></ul><p>Default value: ROW</p>
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置<p>Type</p><p>Enumeration value:</p><ul><li>ROW: row permission</li><li>COLUMN: column permission</li></ul><p>Default value: ROW</p>
                     * @param _type <p>Type</p><p>Enumeration value:</p><ul><li>ROW: row permission</li><li>COLUMN: column permission</li></ul><p>Default value: ROW</p>
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
                     * 获取<p>Enabled status</p><p>Enumeration value:</p><ul><li>Open: Turn on</li><li>Close: Turn off</li></ul><p>Default value: Close</p>
                     * @return OpenStatus <p>Enabled status</p><p>Enumeration value:</p><ul><li>Open: Turn on</li><li>Close: Turn off</li></ul><p>Default value: Close</p>
                     * 
                     */
                    std::string GetOpenStatus() const;

                    /**
                     * 设置<p>Enabled status</p><p>Enumeration value:</p><ul><li>Open: Turn on</li><li>Close: Turn off</li></ul><p>Default value: Close</p>
                     * @param _openStatus <p>Enabled status</p><p>Enumeration value:</p><ul><li>Open: Turn on</li><li>Close: Turn off</li></ul><p>Default value: Close</p>
                     * 
                     */
                    void SetOpenStatus(const std::string& _openStatus);

                    /**
                     * 判断参数 OpenStatus 是否已赋值
                     * @return OpenStatus 是否已赋值
                     * 
                     */
                    bool OpenStatusHasBeenSet() const;

                    /**
                     * 获取<p>Project ID.</p>
                     * @return ProjectId <p>Project ID.</p>
                     * 
                     */
                    int64_t GetProjectId() const;

                    /**
                     * 设置<p>Project ID.</p>
                     * @param _projectId <p>Project ID.</p>
                     * 
                     */
                    void SetProjectId(const int64_t& _projectId);

                    /**
                     * 判断参数 ProjectId 是否已赋值
                     * @return ProjectId 是否已赋值
                     * 
                     */
                    bool ProjectIdHasBeenSet() const;

                    /**
                     * 获取<p>Row/column permission configuration</p>
                     * @return RowColumnConfigList <p>Row/column permission configuration</p>
                     * 
                     */
                    std::vector<RowColumnConfig> GetRowColumnConfigList() const;

                    /**
                     * 设置<p>Row/column permission configuration</p>
                     * @param _rowColumnConfigList <p>Row/column permission configuration</p>
                     * 
                     */
                    void SetRowColumnConfigList(const std::vector<RowColumnConfig>& _rowColumnConfigList);

                    /**
                     * 判断参数 RowColumnConfigList 是否已赋值
                     * @return RowColumnConfigList 是否已赋值
                     * 
                     */
                    bool RowColumnConfigListHasBeenSet() const;

                private:

                    /**
                     * <p>page number</p>
                     */
                    int64_t m_tableId;
                    bool m_tableIdHasBeenSet;

                    /**
                     * <p>Mode</p><p>Enumeration value:</p><ul><li>ALL: All</li><li>Specify: Specify</li><li>TAG: Tag</li></ul><p>Default value: ALL</p>
                     */
                    std::string m_mode;
                    bool m_modeHasBeenSet;

                    /**
                     * <p>Role type</p><p>Enumeration value:</p><ul><li>ROLES: By role</li><li>Others: Other</li></ul><p>Default value: Others</p>
                     */
                    std::string m_roleType;
                    bool m_roleTypeHasBeenSet;

                    /**
                     * <p>All page numbers</p>
                     */
                    int64_t m_roleId;
                    bool m_roleIdHasBeenSet;

                    /**
                     * <p>Rule information</p>
                     */
                    std::string m_rulerInfo;
                    bool m_rulerInfoHasBeenSet;

                    /**
                     * <p>Type</p><p>Enumeration value:</p><ul><li>ROW: row permission</li><li>COLUMN: column permission</li></ul><p>Default value: ROW</p>
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * <p>Enabled status</p><p>Enumeration value:</p><ul><li>Open: Turn on</li><li>Close: Turn off</li></ul><p>Default value: Close</p>
                     */
                    std::string m_openStatus;
                    bool m_openStatusHasBeenSet;

                    /**
                     * <p>Project ID.</p>
                     */
                    int64_t m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * <p>Row/column permission configuration</p>
                     */
                    std::vector<RowColumnConfig> m_rowColumnConfigList;
                    bool m_rowColumnConfigListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BI_V20220105_MODEL_CREATEPERMISSIONRANKSREQUEST_H_
