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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBEDSPMAUDITFILTERSTRATEGY_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBEDSPMAUDITFILTERSTRATEGY_H_

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
                * Filter rule
                */
                class DescribeDspmAuditFilterStrategy : public AbstractModel
                {
                public:
                    DescribeDspmAuditFilterStrategy();
                    ~DescribeDspmAuditFilterStrategy() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Policy ID.</p>
                     * @return AuditFilterStrategyId <p>Policy ID.</p>
                     * 
                     */
                    uint64_t GetAuditFilterStrategyId() const;

                    /**
                     * 设置<p>Policy ID.</p>
                     * @param _auditFilterStrategyId <p>Policy ID.</p>
                     * 
                     */
                    void SetAuditFilterStrategyId(const uint64_t& _auditFilterStrategyId);

                    /**
                     * 判断参数 AuditFilterStrategyId 是否已赋值
                     * @return AuditFilterStrategyId 是否已赋值
                     * 
                     */
                    bool AuditFilterStrategyIdHasBeenSet() const;

                    /**
                     * 获取<p>Policy name.</p>
                     * @return Name <p>Policy name.</p>
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置<p>Policy name.</p>
                     * @param _name <p>Policy name.</p>
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
                     * 获取<p>Policy description.</p>
                     * @return Description <p>Policy description.</p>
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置<p>Policy description.</p>
                     * @param _description <p>Policy description.</p>
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
                     * 获取<p>Rule content</p>
                     * @return Rule <p>Rule content</p>
                     * 
                     */
                    std::string GetRule() const;

                    /**
                     * 设置<p>Rule content</p>
                     * @param _rule <p>Rule content</p>
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
                     * 获取<p>Whether to enable</p><p>Enumeration values:</p><ul><li>0: Disable</li><li>1: Enable</li></ul>
                     * @return IsEnabled <p>Whether to enable</p><p>Enumeration values:</p><ul><li>0: Disable</li><li>1: Enable</li></ul>
                     * 
                     */
                    int64_t GetIsEnabled() const;

                    /**
                     * 设置<p>Whether to enable</p><p>Enumeration values:</p><ul><li>0: Disable</li><li>1: Enable</li></ul>
                     * @param _isEnabled <p>Whether to enable</p><p>Enumeration values:</p><ul><li>0: Disable</li><li>1: Enable</li></ul>
                     * 
                     */
                    void SetIsEnabled(const int64_t& _isEnabled);

                    /**
                     * 判断参数 IsEnabled 是否已赋值
                     * @return IsEnabled 是否已赋值
                     * 
                     */
                    bool IsEnabledHasBeenSet() const;

                    /**
                     * 获取<p>Remarks.</p>
                     * @return Remark <p>Remarks.</p>
                     * 
                     */
                    std::string GetRemark() const;

                    /**
                     * 设置<p>Remarks.</p>
                     * @param _remark <p>Remarks.</p>
                     * 
                     */
                    void SetRemark(const std::string& _remark);

                    /**
                     * 判断参数 Remark 是否已赋值
                     * @return Remark 是否已赋值
                     * 
                     */
                    bool RemarkHasBeenSet() const;

                    /**
                     * 获取<p>Creation time</p><p>Parameter format: 2026-07-16T11:44:45+08</p>
                     * @return CreateTime <p>Creation time</p><p>Parameter format: 2026-07-16T11:44:45+08</p>
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置<p>Creation time</p><p>Parameter format: 2026-07-16T11:44:45+08</p>
                     * @param _createTime <p>Creation time</p><p>Parameter format: 2026-07-16T11:44:45+08</p>
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
                     * 获取<p>Last update time</p><p>Parameter format: 2026-07-16T11:44:45+08</p>
                     * @return ModifyTime <p>Last update time</p><p>Parameter format: 2026-07-16T11:44:45+08</p>
                     * 
                     */
                    std::string GetModifyTime() const;

                    /**
                     * 设置<p>Last update time</p><p>Parameter format: 2026-07-16T11:44:45+08</p>
                     * @param _modifyTime <p>Last update time</p><p>Parameter format: 2026-07-16T11:44:45+08</p>
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
                     * 获取<p>Cloud Account ID</p>
                     * @return AppId <p>Cloud Account ID</p>
                     * 
                     */
                    uint64_t GetAppId() const;

                    /**
                     * 设置<p>Cloud Account ID</p>
                     * @param _appId <p>Cloud Account ID</p>
                     * 
                     */
                    void SetAppId(const uint64_t& _appId);

                    /**
                     * 判断参数 AppId 是否已赋值
                     * @return AppId 是否已赋值
                     * 
                     */
                    bool AppIdHasBeenSet() const;

                    /**
                     * 获取<p>User identity</p>
                     * @return Uin <p>User identity</p>
                     * 
                     */
                    std::string GetUin() const;

                    /**
                     * 设置<p>User identity</p>
                     * @param _uin <p>User identity</p>
                     * 
                     */
                    void SetUin(const std::string& _uin);

                    /**
                     * 判断参数 Uin 是否已赋值
                     * @return Uin 是否已赋值
                     * 
                     */
                    bool UinHasBeenSet() const;

                    /**
                     * 获取<p>Account nickname</p>
                     * @return NickName <p>Account nickname</p>
                     * 
                     */
                    std::string GetNickName() const;

                    /**
                     * 设置<p>Account nickname</p>
                     * @param _nickName <p>Account nickname</p>
                     * 
                     */
                    void SetNickName(const std::string& _nickName);

                    /**
                     * 判断参数 NickName 是否已赋值
                     * @return NickName 是否已赋值
                     * 
                     */
                    bool NickNameHasBeenSet() const;

                private:

                    /**
                     * <p>Policy ID.</p>
                     */
                    uint64_t m_auditFilterStrategyId;
                    bool m_auditFilterStrategyIdHasBeenSet;

                    /**
                     * <p>Policy name.</p>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>Policy description.</p>
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * <p>Rule content</p>
                     */
                    std::string m_rule;
                    bool m_ruleHasBeenSet;

                    /**
                     * <p>Whether to enable</p><p>Enumeration values:</p><ul><li>0: Disable</li><li>1: Enable</li></ul>
                     */
                    int64_t m_isEnabled;
                    bool m_isEnabledHasBeenSet;

                    /**
                     * <p>Remarks.</p>
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                    /**
                     * <p>Creation time</p><p>Parameter format: 2026-07-16T11:44:45+08</p>
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * <p>Last update time</p><p>Parameter format: 2026-07-16T11:44:45+08</p>
                     */
                    std::string m_modifyTime;
                    bool m_modifyTimeHasBeenSet;

                    /**
                     * <p>Cloud Account ID</p>
                     */
                    uint64_t m_appId;
                    bool m_appIdHasBeenSet;

                    /**
                     * <p>User identity</p>
                     */
                    std::string m_uin;
                    bool m_uinHasBeenSet;

                    /**
                     * <p>Account nickname</p>
                     */
                    std::string m_nickName;
                    bool m_nickNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBEDSPMAUDITFILTERSTRATEGY_H_
