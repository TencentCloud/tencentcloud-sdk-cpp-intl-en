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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_COMPLIANCETERMITEM_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_COMPLIANCETERMITEM_H_

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
                * Cloud resource configuration detection clause fund
                */
                class ComplianceTermItem : public AbstractModel
                {
                public:
                    ComplianceTermItem();
                    ~ComplianceTermItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Clause ID</p>
                     * @return TermID <p>Clause ID</p>
                     * 
                     */
                    uint64_t GetTermID() const;

                    /**
                     * 设置<p>Clause ID</p>
                     * @param _termID <p>Clause ID</p>
                     * 
                     */
                    void SetTermID(const uint64_t& _termID);

                    /**
                     * 判断参数 TermID 是否已赋值
                     * @return TermID 是否已赋值
                     * 
                     */
                    bool TermIDHasBeenSet() const;

                    /**
                     * 获取<p>Clause description.</p>
                     * @return Description <p>Clause description.</p>
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置<p>Clause description.</p>
                     * @param _description <p>Clause description.</p>
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
                     * 获取<p>Term name</p>
                     * @return Name <p>Term name</p>
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置<p>Term name</p>
                     * @param _name <p>Term name</p>
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
                     * 获取<p>Number of association rules</p>
                     * @return RuleCount <p>Number of association rules</p>
                     * 
                     */
                    uint64_t GetRuleCount() const;

                    /**
                     * 设置<p>Number of association rules</p>
                     * @param _ruleCount <p>Number of association rules</p>
                     * 
                     */
                    void SetRuleCount(const uint64_t& _ruleCount);

                    /**
                     * 判断参数 RuleCount 是否已赋值
                     * @return RuleCount 是否已赋值
                     * 
                     */
                    bool RuleCountHasBeenSet() const;

                    /**
                     * 获取<p>Clause principle</p>
                     * @return Rationale <p>Clause principle</p>
                     * 
                     */
                    std::string GetRationale() const;

                    /**
                     * 设置<p>Clause principle</p>
                     * @param _rationale <p>Clause principle</p>
                     * 
                     */
                    void SetRationale(const std::string& _rationale);

                    /**
                     * 判断参数 Rationale 是否已赋值
                     * @return Rationale 是否已赋值
                     * 
                     */
                    bool RationaleHasBeenSet() const;

                    /**
                     * 获取<p>No.</p>
                     * @return Sn <p>No.</p>
                     * 
                     */
                    std::string GetSn() const;

                    /**
                     * 设置<p>No.</p>
                     * @param _sn <p>No.</p>
                     * 
                     */
                    void SetSn(const std::string& _sn);

                    /**
                     * 判断参数 Sn 是否已赋值
                     * @return Sn 是否已赋值
                     * 
                     */
                    bool SnHasBeenSet() const;

                private:

                    /**
                     * <p>Clause ID</p>
                     */
                    uint64_t m_termID;
                    bool m_termIDHasBeenSet;

                    /**
                     * <p>Clause description.</p>
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * <p>Term name</p>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>Number of association rules</p>
                     */
                    uint64_t m_ruleCount;
                    bool m_ruleCountHasBeenSet;

                    /**
                     * <p>Clause principle</p>
                     */
                    std::string m_rationale;
                    bool m_rationaleHasBeenSet;

                    /**
                     * <p>No.</p>
                     */
                    std::string m_sn;
                    bool m_snHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_COMPLIANCETERMITEM_H_
