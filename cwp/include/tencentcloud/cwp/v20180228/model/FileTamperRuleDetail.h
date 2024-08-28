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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_FILETAMPERRULEDETAIL_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_FILETAMPERRULEDETAIL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cwp/v20180228/model/FileTamperRule.h>


namespace TencentCloud
{
    namespace Cwp
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * Core File Monitoring Rule Details
                */
                class FileTamperRuleDetail : public AbstractModel
                {
                public:
                    FileTamperRuleDetail();
                    ~FileTamperRuleDetail() = default;
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
                     * 获取Rule
                     * @return Rule Rule
                     * 
                     */
                    std::vector<FileTamperRule> GetRule() const;

                    /**
                     * 设置Rule
                     * @param _rule Rule
                     * 
                     */
                    void SetRule(const std::vector<FileTamperRule>& _rule);

                    /**
                     * 判断参数 Rule 是否已赋值
                     * @return Rule 是否已赋值
                     * 
                     */
                    bool RuleHasBeenSet() const;

                    /**
                     * 获取Effective Host UUID. Empty means all hosts, and returned number of entries can be controlled through parameters.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Uuids Effective Host UUID. Empty means all hosts, and returned number of entries can be controlled through parameters.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<std::string> GetUuids() const;

                    /**
                     * 设置Effective Host UUID. Empty means all hosts, and returned number of entries can be controlled through parameters.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _uuids Effective Host UUID. Empty means all hosts, and returned number of entries can be controlled through parameters.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetUuids(const std::vector<std::string>& _uuids);

                    /**
                     * 判断参数 Uuids 是否已赋值
                     * @return Uuids 是否已赋值
                     * 
                     */
                    bool UuidsHasBeenSet() const;

                    /**
                     * 获取Rule ID
                     * @return Id Rule ID
                     * 
                     */
                    uint64_t GetId() const;

                    /**
                     * 设置Rule ID
                     * @param _id Rule ID
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
                     * 获取Global Rule or Not (No by Default). 0: No; 1: Yes
                     * @return IsGlobal Global Rule or Not (No by Default). 0: No; 1: Yes
                     * 
                     */
                    uint64_t GetIsGlobal() const;

                    /**
                     * 设置Global Rule or Not (No by Default). 0: No; 1: Yes
                     * @param _isGlobal Global Rule or Not (No by Default). 0: No; 1: Yes
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
                     * 获取Total Number of Effective Hosts
                     * @return UuidTotalCount Total Number of Effective Hosts
                     * 
                     */
                    uint64_t GetUuidTotalCount() const;

                    /**
                     * 设置Total Number of Effective Hosts
                     * @param _uuidTotalCount Total Number of Effective Hosts
                     * 
                     */
                    void SetUuidTotalCount(const uint64_t& _uuidTotalCount);

                    /**
                     * 判断参数 UuidTotalCount 是否已赋值
                     * @return UuidTotalCount 是否已赋值
                     * 
                     */
                    bool UuidTotalCountHasBeenSet() const;

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
                     * Rule
                     */
                    std::vector<FileTamperRule> m_rule;
                    bool m_ruleHasBeenSet;

                    /**
                     * Effective Host UUID. Empty means all hosts, and returned number of entries can be controlled through parameters.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<std::string> m_uuids;
                    bool m_uuidsHasBeenSet;

                    /**
                     * Rule ID
                     */
                    uint64_t m_id;
                    bool m_idHasBeenSet;

                    /**
                     * Global Rule or Not (No by Default). 0: No; 1: Yes
                     */
                    uint64_t m_isGlobal;
                    bool m_isGlobalHasBeenSet;

                    /**
                     * Risk Level. 0: None; 1: High-Risk; 2: Medium-Risk; 3: Low-Risk
                     */
                    uint64_t m_level;
                    bool m_levelHasBeenSet;

                    /**
                     * Total Number of Effective Hosts
                     */
                    uint64_t m_uuidTotalCount;
                    bool m_uuidTotalCountHasBeenSet;

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

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_FILETAMPERRULEDETAIL_H_
