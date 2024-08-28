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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_FILETAMPERRULEINFO_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_FILETAMPERRULEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cwp
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * List of core file monitoring rules
                */
                class FileTamperRuleInfo : public AbstractModel
                {
                public:
                    FileTamperRuleInfo();
                    ~FileTamperRuleInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Rule name
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Name Rule name
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置Rule name
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _name Rule name
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
                     * 获取Rule Type. 0: System Rule; 1: User Rule
                     * @return RuleCategory Rule Type. 0: System Rule; 1: User Rule
                     * 
                     */
                    uint64_t GetRuleCategory() const;

                    /**
                     * 设置Rule Type. 0: System Rule; 1: User Rule
                     * @param _ruleCategory Rule Type. 0: System Rule; 1: User Rule
                     * 
                     */
                    void SetRuleCategory(const uint64_t& _ruleCategory);

                    /**
                     * 判断参数 RuleCategory 是否已赋值
                     * @return RuleCategory 是否已赋值
                     * 
                     */
                    bool RuleCategoryHasBeenSet() const;

                    /**
                     * 获取Number of affected hosts
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return HostCount Number of affected hosts
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetHostCount() const;

                    /**
                     * 设置Number of affected hosts
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _hostCount Number of affected hosts
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetHostCount(const uint64_t& _hostCount);

                    /**
                     * 判断参数 HostCount 是否已赋值
                     * @return HostCount 是否已赋值
                     * 
                     */
                    bool HostCountHasBeenSet() const;

                    /**
                     * 获取Update time
                     * @return ModifyTime Update time
                     * 
                     */
                    std::string GetModifyTime() const;

                    /**
                     * 设置Update time
                     * @param _modifyTime Update time
                     * 
                     */
                    void SetModifyTime(const std::string& _modifyTime);

                    /**
                     * 判断参数 ModifyTime 是否已赋值
                     * @return ModifyTime 是否已赋值
                     * 
                     */
                    bool ModifyTimeHasBeenSet() const;

                    /**
                     * 获取Creation time
                     * @return CreateTime Creation time
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置Creation time
                     * @param _createTime Creation time
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
                     * 获取Status. 0: Enabled; 1: Disabled
                     * @return Status Status. 0: Enabled; 1: Disabled
                     * 
                     */
                    uint64_t GetStatus() const;

                    /**
                     * 设置Status. 0: Enabled; 1: Disabled
                     * @param _status Status. 0: Enabled; 1: Disabled
                     * 
                     */
                    void SetStatus(const uint64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取Rule ID, which is set to 0 for system rules
                     * @return Id Rule ID, which is set to 0 for system rules
                     * 
                     */
                    uint64_t GetId() const;

                    /**
                     * 设置Rule ID, which is set to 0 for system rules
                     * @param _id Rule ID, which is set to 0 for system rules
                     * 
                     */
                    void SetId(const uint64_t& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取Whether global 0: no; 1: yes
                     * @return IsGlobal Whether global 0: no; 1: yes
                     * 
                     */
                    uint64_t GetIsGlobal() const;

                    /**
                     * 设置Whether global 0: no; 1: yes
                     * @param _isGlobal Whether global 0: no; 1: yes
                     * 
                     */
                    void SetIsGlobal(const uint64_t& _isGlobal);

                    /**
                     * 判断参数 IsGlobal 是否已赋值
                     * @return IsGlobal 是否已赋值
                     * 
                     */
                    bool IsGlobalHasBeenSet() const;

                    /**
                     * 获取Risk Level. 0: None; 1: High-Risk; 2: Medium-Risk; 3: Low-Risk
                     * @return Level Risk Level. 0: None; 1: High-Risk; 2: Medium-Risk; 3: Low-Risk
                     * 
                     */
                    uint64_t GetLevel() const;

                    /**
                     * 设置Risk Level. 0: None; 1: High-Risk; 2: Medium-Risk; 3: Low-Risk
                     * @param _level Risk Level. 0: None; 1: High-Risk; 2: Medium-Risk; 3: Low-Risk
                     * 
                     */
                    void SetLevel(const uint64_t& _level);

                    /**
                     * 判断参数 Level 是否已赋值
                     * @return Level 是否已赋值
                     * 
                     */
                    bool LevelHasBeenSet() const;

                    /**
                     * 获取Number of write entries for the sub-rule
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return WriteRuleCount Number of write entries for the sub-rule
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetWriteRuleCount() const;

                    /**
                     * 设置Number of write entries for the sub-rule
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _writeRuleCount Number of write entries for the sub-rule
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetWriteRuleCount(const uint64_t& _writeRuleCount);

                    /**
                     * 判断参数 WriteRuleCount 是否已赋值
                     * @return WriteRuleCount 是否已赋值
                     * 
                     */
                    bool WriteRuleCountHasBeenSet() const;

                    /**
                     * 获取Number of read entries for the sub-rule
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ReadRuleCount Number of read entries for the sub-rule
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetReadRuleCount() const;

                    /**
                     * 设置Number of read entries for the sub-rule
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _readRuleCount Number of read entries for the sub-rule
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetReadRuleCount(const uint64_t& _readRuleCount);

                    /**
                     * 判断参数 ReadRuleCount 是否已赋值
                     * @return ReadRuleCount 是否已赋值
                     * 
                     */
                    bool ReadRuleCountHasBeenSet() const;

                    /**
                     * 获取Number of read and write entries for the sub-rule
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ReadWriteRuleCount Number of read and write entries for the sub-rule
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetReadWriteRuleCount() const;

                    /**
                     * 设置Number of read and write entries for the sub-rule
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _readWriteRuleCount Number of read and write entries for the sub-rule
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetReadWriteRuleCount(const uint64_t& _readWriteRuleCount);

                    /**
                     * 判断参数 ReadWriteRuleCount 是否已赋值
                     * @return ReadWriteRuleCount 是否已赋值
                     * 
                     */
                    bool ReadWriteRuleCountHasBeenSet() const;

                    /**
                     * 获取Monitoring behavior
<li>read: read file</li>
<li>write: modify file</li>
<li>read-write: read and modify file</li>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return FileAction Monitoring behavior
<li>read: read file</li>
<li>write: modify file</li>
<li>read-write: read and modify file</li>
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetFileAction() const;

                    /**
                     * 设置Monitoring behavior
<li>read: read file</li>
<li>write: modify file</li>
<li>read-write: read and modify file</li>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _fileAction Monitoring behavior
<li>read: read file</li>
<li>write: modify file</li>
<li>read-write: read and modify file</li>
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetFileAction(const std::string& _fileAction);

                    /**
                     * 判断参数 FileAction 是否已赋值
                     * @return FileAction 是否已赋值
                     * 
                     */
                    bool FileActionHasBeenSet() const;

                    /**
                     * 获取Allowlisted processing type
<li>cur: add the current items to the allowlist</li>
<li>all: add all items that meet the conditions to the allowlist</li>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return AddWhiteType Allowlisted processing type
<li>cur: add the current items to the allowlist</li>
<li>all: add all items that meet the conditions to the allowlist</li>
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetAddWhiteType() const;

                    /**
                     * 设置Allowlisted processing type
<li>cur: add the current items to the allowlist</li>
<li>all: add all items that meet the conditions to the allowlist</li>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _addWhiteType Allowlisted processing type
<li>cur: add the current items to the allowlist</li>
<li>all: add all items that meet the conditions to the allowlist</li>
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetAddWhiteType(const std::string& _addWhiteType);

                    /**
                     * 判断参数 AddWhiteType 是否已赋值
                     * @return AddWhiteType 是否已赋值
                     * 
                     */
                    bool AddWhiteTypeHasBeenSet() const;

                private:

                    /**
                     * Rule name
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Rule Type. 0: System Rule; 1: User Rule
                     */
                    uint64_t m_ruleCategory;
                    bool m_ruleCategoryHasBeenSet;

                    /**
                     * Number of affected hosts
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_hostCount;
                    bool m_hostCountHasBeenSet;

                    /**
                     * Update time
                     */
                    std::string m_modifyTime;
                    bool m_modifyTimeHasBeenSet;

                    /**
                     * Creation time
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * Status. 0: Enabled; 1: Disabled
                     */
                    uint64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Rule ID, which is set to 0 for system rules
                     */
                    uint64_t m_id;
                    bool m_idHasBeenSet;

                    /**
                     * Whether global 0: no; 1: yes
                     */
                    uint64_t m_isGlobal;
                    bool m_isGlobalHasBeenSet;

                    /**
                     * Risk Level. 0: None; 1: High-Risk; 2: Medium-Risk; 3: Low-Risk
                     */
                    uint64_t m_level;
                    bool m_levelHasBeenSet;

                    /**
                     * Number of write entries for the sub-rule
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_writeRuleCount;
                    bool m_writeRuleCountHasBeenSet;

                    /**
                     * Number of read entries for the sub-rule
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_readRuleCount;
                    bool m_readRuleCountHasBeenSet;

                    /**
                     * Number of read and write entries for the sub-rule
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_readWriteRuleCount;
                    bool m_readWriteRuleCountHasBeenSet;

                    /**
                     * Monitoring behavior
<li>read: read file</li>
<li>write: modify file</li>
<li>read-write: read and modify file</li>
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_fileAction;
                    bool m_fileActionHasBeenSet;

                    /**
                     * Allowlisted processing type
<li>cur: add the current items to the allowlist</li>
<li>all: add all items that meet the conditions to the allowlist</li>
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_addWhiteType;
                    bool m_addWhiteTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_FILETAMPERRULEINFO_H_
