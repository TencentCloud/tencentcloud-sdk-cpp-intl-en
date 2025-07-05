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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_BASELINEDETECTPARAM_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_BASELINEDETECTPARAM_H_

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
                * Baseline check parameters
                */
                class BaselineDetectParam : public AbstractModel
                {
                public:
                    BaselineDetectParam();
                    ~BaselineDetectParam() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Collection of check policies
                     * @return PolicyIds Collection of check policies
                     * 
                     */
                    std::vector<int64_t> GetPolicyIds() const;

                    /**
                     * 设置Collection of check policies
                     * @param _policyIds Collection of check policies
                     * 
                     */
                    void SetPolicyIds(const std::vector<int64_t>& _policyIds);

                    /**
                     * 判断参数 PolicyIds 是否已赋值
                     * @return PolicyIds 是否已赋值
                     * 
                     */
                    bool PolicyIdsHasBeenSet() const;

                    /**
                     * 获取Collection of check rules
                     * @return RuleIds Collection of check rules
                     * 
                     */
                    std::vector<int64_t> GetRuleIds() const;

                    /**
                     * 设置Collection of check rules
                     * @param _ruleIds Collection of check rules
                     * 
                     */
                    void SetRuleIds(const std::vector<int64_t>& _ruleIds);

                    /**
                     * 判断参数 RuleIds 是否已赋值
                     * @return RuleIds 是否已赋值
                     * 
                     */
                    bool RuleIdsHasBeenSet() const;

                    /**
                     * 获取Collection of check items
                     * @return ItemIds Collection of check items
                     * 
                     */
                    std::vector<int64_t> GetItemIds() const;

                    /**
                     * 设置Collection of check items
                     * @param _itemIds Collection of check items
                     * 
                     */
                    void SetItemIds(const std::vector<int64_t>& _itemIds);

                    /**
                     * 判断参数 ItemIds 是否已赋值
                     * @return ItemIds 是否已赋值
                     * 
                     */
                    bool ItemIdsHasBeenSet() const;

                    /**
                     * 获取Collection of checked server IDs
                     * @return HostIds Collection of checked server IDs
                     * 
                     */
                    std::vector<std::string> GetHostIds() const;

                    /**
                     * 设置Collection of checked server IDs
                     * @param _hostIds Collection of checked server IDs
                     * 
                     */
                    void SetHostIds(const std::vector<std::string>& _hostIds);

                    /**
                     * 判断参数 HostIds 是否已赋值
                     * @return HostIds 是否已赋值
                     * 
                     */
                    bool HostIdsHasBeenSet() const;

                private:

                    /**
                     * Collection of check policies
                     */
                    std::vector<int64_t> m_policyIds;
                    bool m_policyIdsHasBeenSet;

                    /**
                     * Collection of check rules
                     */
                    std::vector<int64_t> m_ruleIds;
                    bool m_ruleIdsHasBeenSet;

                    /**
                     * Collection of check items
                     */
                    std::vector<int64_t> m_itemIds;
                    bool m_itemIdsHasBeenSet;

                    /**
                     * Collection of checked server IDs
                     */
                    std::vector<std::string> m_hostIds;
                    bool m_hostIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_BASELINEDETECTPARAM_H_
