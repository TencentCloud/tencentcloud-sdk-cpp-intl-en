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

#ifndef TENCENTCLOUD_TDMQ_V20200217_MODEL_PUBLICACCESSRULE_H_
#define TENCENTCLOUD_TDMQ_V20200217_MODEL_PUBLICACCESSRULE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tdmq
    {
        namespace V20200217
        {
            namespace Model
            {
                /**
                * Public Network Access Security Rules
                */
                class PublicAccessRule : public AbstractModel
                {
                public:
                    PublicAccessRule();
                    ~PublicAccessRule() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取IP Subnet Information
                     * @return IpRule IP Subnet Information
                     * 
                     */
                    std::string GetIpRule() const;

                    /**
                     * 设置IP Subnet Information
                     * @param _ipRule IP Subnet Information
                     * 
                     */
                    void SetIpRule(const std::string& _ipRule);

                    /**
                     * 判断参数 IpRule 是否已赋值
                     * @return IpRule 是否已赋值
                     * 
                     */
                    bool IpRuleHasBeenSet() const;

                    /**
                     * 获取Allow or Deny
                     * @return Allow Allow or Deny
                     * 
                     */
                    bool GetAllow() const;

                    /**
                     * 设置Allow or Deny
                     * @param _allow Allow or Deny
                     * 
                     */
                    void SetAllow(const bool& _allow);

                    /**
                     * 判断参数 Allow 是否已赋值
                     * @return Allow 是否已赋值
                     * 
                     */
                    bool AllowHasBeenSet() const;

                    /**
                     * 获取Remarks
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Remark Remarks
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetRemark() const;

                    /**
                     * 设置Remarks
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _remark Remarks
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetRemark(const std::string& _remark);

                    /**
                     * 判断参数 Remark 是否已赋值
                     * @return Remark 是否已赋值
                     * 
                     */
                    bool RemarkHasBeenSet() const;

                private:

                    /**
                     * IP Subnet Information
                     */
                    std::string m_ipRule;
                    bool m_ipRuleHasBeenSet;

                    /**
                     * Allow or Deny
                     */
                    bool m_allow;
                    bool m_allowHasBeenSet;

                    /**
                     * Remarks
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TDMQ_V20200217_MODEL_PUBLICACCESSRULE_H_
