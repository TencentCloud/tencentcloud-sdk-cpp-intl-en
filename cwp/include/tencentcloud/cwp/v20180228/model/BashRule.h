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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_BASHRULE_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_BASHRULE_H_

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
                * High-risk command rules
                */
                class BashRule : public AbstractModel
                {
                public:
                    BashRule();
                    ~BashRule() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


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
                     * 获取Client ID
                     * @return Uuid Client ID
                     * 
                     */
                    std::string GetUuid() const;

                    /**
                     * 设置Client ID
                     * @param _uuid Client ID
                     * 
                     */
                    void SetUuid(const std::string& _uuid);

                    /**
                     * 判断参数 Uuid 是否已赋值
                     * @return Uuid 是否已赋值
                     * 
                     */
                    bool UuidHasBeenSet() const;

                    /**
                     * 获取Rule name
                     * @return Name Rule name
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置Rule name
                     * @param _name Rule name
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
                     * 获取Risk level (0: none, 1: high-risk, 2: medium-risk, 3: low-risk)
                     * @return Level Risk level (0: none, 1: high-risk, 2: medium-risk, 3: low-risk)
                     * 
                     */
                    uint64_t GetLevel() const;

                    /**
                     * 设置Risk level (0: none, 1: high-risk, 2: medium-risk, 3: low-risk)
                     * @param _level Risk level (0: none, 1: high-risk, 2: medium-risk, 3: low-risk)
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
                     * 获取Regular expression
                     * @return Rule Regular expression
                     * 
                     */
                    std::string GetRule() const;

                    /**
                     * 设置Regular expression
                     * @param _rule Regular expression
                     * 
                     */
                    void SetRule(const std::string& _rule);

                    /**
                     * 判断参数 Rule 是否已赋值
                     * @return Rule 是否已赋值
                     * 
                     */
                    bool RuleHasBeenSet() const;

                    /**
                     * 获取Rule description
                     * @return Decription Rule description
                     * @deprecated
                     */
                    std::string GetDecription() const;

                    /**
                     * 设置Rule description
                     * @param _decription Rule description
                     * @deprecated
                     */
                    void SetDecription(const std::string& _decription);

                    /**
                     * 判断参数 Decription 是否已赋值
                     * @return Decription 是否已赋值
                     * @deprecated
                     */
                    bool DecriptionHasBeenSet() const;

                    /**
                     * 获取Operator
                     * @return Operator Operator
                     * 
                     */
                    std::string GetOperator() const;

                    /**
                     * 设置Operator
                     * @param _operator Operator
                     * 
                     */
                    void SetOperator(const std::string& _operator);

                    /**
                     * 判断参数 Operator 是否已赋值
                     * @return Operator 是否已赋值
                     * 
                     */
                    bool OperatorHasBeenSet() const;

                    /**
                     * 获取Whether a global rule
                     * @return IsGlobal Whether a global rule
                     * 
                     */
                    uint64_t GetIsGlobal() const;

                    /**
                     * 设置Whether a global rule
                     * @param _isGlobal Whether a global rule
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
                     * 获取Status (0: valid; 1: invalid)
                     * @return Status Status (0: valid; 1: invalid)
                     * 
                     */
                    uint64_t GetStatus() const;

                    /**
                     * 设置Status (0: valid; 1: invalid)
                     * @param _status Status (0: valid; 1: invalid)
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
                     * 获取Modification time
                     * @return ModifyTime Modification time
                     * 
                     */
                    std::string GetModifyTime() const;

                    /**
                     * 设置Modification time
                     * @param _modifyTime Modification time
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
                     * 获取Host IP
                     * @return Hostip Host IP
                     * 
                     */
                    std::string GetHostip() const;

                    /**
                     * 设置Host IP
                     * @param _hostip Host IP
                     * 
                     */
                    void SetHostip(const std::string& _hostip);

                    /**
                     * 判断参数 Hostip 是否已赋值
                     * @return Hostip 是否已赋值
                     * 
                     */
                    bool HostipHasBeenSet() const;

                    /**
                     * 获取Arrays of UUIDs for servers to be effective
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Uuids Arrays of UUIDs for servers to be effective
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<std::string> GetUuids() const;

                    /**
                     * 设置Arrays of UUIDs for servers to be effective
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _uuids Arrays of UUIDs for servers to be effective
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
                     * 获取0= blocklist; 1= allowlist
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return White 0= blocklist; 1= allowlist
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetWhite() const;

                    /**
                     * 设置0= blocklist; 1= allowlist
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _white 0= blocklist; 1= allowlist
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetWhite(const uint64_t& _white);

                    /**
                     * 判断参数 White 是否已赋值
                     * @return White 是否已赋值
                     * 
                     */
                    bool WhiteHasBeenSet() const;

                    /**
                     * 获取Whether to process previous events: 0: do not process; 1: process
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return DealOldEvents Whether to process previous events: 0: do not process; 1: process
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetDealOldEvents() const;

                    /**
                     * 设置Whether to process previous events: 0: do not process; 1: process
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _dealOldEvents Whether to process previous events: 0: do not process; 1: process
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetDealOldEvents(const uint64_t& _dealOldEvents);

                    /**
                     * 判断参数 DealOldEvents 是否已赋值
                     * @return DealOldEvents 是否已赋值
                     * 
                     */
                    bool DealOldEventsHasBeenSet() const;

                    /**
                     * 获取Rule description
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Description Rule description
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置Rule description
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _description Rule description
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

                private:

                    /**
                     * Rule ID
                     */
                    uint64_t m_id;
                    bool m_idHasBeenSet;

                    /**
                     * Client ID
                     */
                    std::string m_uuid;
                    bool m_uuidHasBeenSet;

                    /**
                     * Rule name
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Risk level (0: none, 1: high-risk, 2: medium-risk, 3: low-risk)
                     */
                    uint64_t m_level;
                    bool m_levelHasBeenSet;

                    /**
                     * Regular expression
                     */
                    std::string m_rule;
                    bool m_ruleHasBeenSet;

                    /**
                     * Rule description
                     */
                    std::string m_decription;
                    bool m_decriptionHasBeenSet;

                    /**
                     * Operator
                     */
                    std::string m_operator;
                    bool m_operatorHasBeenSet;

                    /**
                     * Whether a global rule
                     */
                    uint64_t m_isGlobal;
                    bool m_isGlobalHasBeenSet;

                    /**
                     * Status (0: valid; 1: invalid)
                     */
                    uint64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Creation time
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * Modification time
                     */
                    std::string m_modifyTime;
                    bool m_modifyTimeHasBeenSet;

                    /**
                     * Host IP
                     */
                    std::string m_hostip;
                    bool m_hostipHasBeenSet;

                    /**
                     * Arrays of UUIDs for servers to be effective
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<std::string> m_uuids;
                    bool m_uuidsHasBeenSet;

                    /**
                     * 0= blocklist; 1= allowlist
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_white;
                    bool m_whiteHasBeenSet;

                    /**
                     * Whether to process previous events: 0: do not process; 1: process
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_dealOldEvents;
                    bool m_dealOldEventsHasBeenSet;

                    /**
                     * Rule description
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_BASHRULE_H_
