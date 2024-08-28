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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_NETATTACKWHITERULE_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_NETATTACKWHITERULE_H_

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
                * Network attack allowlist rules
                */
                class NetAttackWhiteRule : public AbstractModel
                {
                public:
                    NetAttackWhiteRule();
                    ~NetAttackWhiteRule() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Rule ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Id Rule ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetId() const;

                    /**
                     * 设置Rule ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _id Rule ID
Note: This field may return null, indicating that no valid values can be obtained.
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

                    /**
                     * 获取0: A group of Quuid 1: All hosts
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Scope 0: A group of Quuid 1: All hosts
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetScope() const;

                    /**
                     * 设置0: A group of Quuid 1: All hosts
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _scope 0: A group of Quuid 1: All hosts
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetScope(const uint64_t& _scope);

                    /**
                     * 判断参数 Scope 是否已赋值
                     * @return Scope 是否已赋值
                     * 
                     */
                    bool ScopeHasBeenSet() const;

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
                     * 获取Host QUUIDs, separated by semicolons (;).
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Quuids Host QUUIDs, separated by semicolons (;).
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetQuuids() const;

                    /**
                     * 设置Host QUUIDs, separated by semicolons (;).
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _quuids Host QUUIDs, separated by semicolons (;).
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetQuuids(const std::string& _quuids);

                    /**
                     * 判断参数 Quuids 是否已赋值
                     * @return Quuids 是否已赋值
                     * 
                     */
                    bool QuuidsHasBeenSet() const;

                    /**
                     * 获取Source IP. Single IP: 1.1.1.1, IP Range: 1.1.1.1-1.1.2.1, IP Range: 1.1.1.0/24, separated by semicolons (;)
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return SrcIP Source IP. Single IP: 1.1.1.1, IP Range: 1.1.1.1-1.1.2.1, IP Range: 1.1.1.0/24, separated by semicolons (;)
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetSrcIP() const;

                    /**
                     * 设置Source IP. Single IP: 1.1.1.1, IP Range: 1.1.1.1-1.1.2.1, IP Range: 1.1.1.0/24, separated by semicolons (;)
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _srcIP Source IP. Single IP: 1.1.1.1, IP Range: 1.1.1.1-1.1.2.1, IP Range: 1.1.1.0/24, separated by semicolons (;)
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetSrcIP(const std::string& _srcIP);

                    /**
                     * 判断参数 SrcIP 是否已赋值
                     * @return SrcIP 是否已赋值
                     * 
                     */
                    bool SrcIPHasBeenSet() const;

                    /**
                     * 获取Creation time
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return CreateTime Creation time
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置Creation time
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _createTime Creation time
Note: This field may return null, indicating that no valid values can be obtained.
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
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ModifyTime Modification time
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetModifyTime() const;

                    /**
                     * 设置Modification time
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _modifyTime Modification time
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetModifyTime(const std::string& _modifyTime);

                    /**
                     * 判断参数 ModifyTime 是否已赋值
                     * @return ModifyTime 是否已赋值
                     * 
                     */
                    bool ModifyTimeHasBeenSet() const;

                private:

                    /**
                     * Rule ID
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_id;
                    bool m_idHasBeenSet;

                    /**
                     * Rule description
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * 0: A group of Quuid 1: All hosts
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_scope;
                    bool m_scopeHasBeenSet;

                    /**
                     * Whether to process previous events: 0: do not process; 1: process
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_dealOldEvents;
                    bool m_dealOldEventsHasBeenSet;

                    /**
                     * Host QUUIDs, separated by semicolons (;).
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_quuids;
                    bool m_quuidsHasBeenSet;

                    /**
                     * Source IP. Single IP: 1.1.1.1, IP Range: 1.1.1.1-1.1.2.1, IP Range: 1.1.1.0/24, separated by semicolons (;)
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_srcIP;
                    bool m_srcIPHasBeenSet;

                    /**
                     * Creation time
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * Modification time
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_modifyTime;
                    bool m_modifyTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_NETATTACKWHITERULE_H_
