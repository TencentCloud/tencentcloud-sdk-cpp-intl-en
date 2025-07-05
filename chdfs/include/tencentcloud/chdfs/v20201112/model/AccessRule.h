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

#ifndef TENCENTCLOUD_CHDFS_V20201112_MODEL_ACCESSRULE_H_
#define TENCENTCLOUD_CHDFS_V20201112_MODEL_ACCESSRULE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Chdfs
    {
        namespace V20201112
        {
            namespace Model
            {
                /**
                * Permission rule
                */
                class AccessRule : public AbstractModel
                {
                public:
                    AccessRule();
                    ~AccessRule() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Permission rule ID
                     * @return AccessRuleId Permission rule ID
                     * 
                     */
                    uint64_t GetAccessRuleId() const;

                    /**
                     * 设置Permission rule ID
                     * @param _accessRuleId Permission rule ID
                     * 
                     */
                    void SetAccessRuleId(const uint64_t& _accessRuleId);

                    /**
                     * 判断参数 AccessRuleId 是否已赋值
                     * @return AccessRuleId 是否已赋值
                     * 
                     */
                    bool AccessRuleIdHasBeenSet() const;

                    /**
                     * 获取Permission rule address (IP range or IP)
                     * @return Address Permission rule address (IP range or IP)
                     * 
                     */
                    std::string GetAddress() const;

                    /**
                     * 设置Permission rule address (IP range or IP)
                     * @param _address Permission rule address (IP range or IP)
                     * 
                     */
                    void SetAddress(const std::string& _address);

                    /**
                     * 判断参数 Address 是否已赋值
                     * @return Address 是否已赋值
                     * 
                     */
                    bool AddressHasBeenSet() const;

                    /**
                     * 获取Permission rule access mode (1: read-only; 2: read-write)
                     * @return AccessMode Permission rule access mode (1: read-only; 2: read-write)
                     * 
                     */
                    uint64_t GetAccessMode() const;

                    /**
                     * 设置Permission rule access mode (1: read-only; 2: read-write)
                     * @param _accessMode Permission rule access mode (1: read-only; 2: read-write)
                     * 
                     */
                    void SetAccessMode(const uint64_t& _accessMode);

                    /**
                     * 判断参数 AccessMode 是否已赋值
                     * @return AccessMode 是否已赋值
                     * 
                     */
                    bool AccessModeHasBeenSet() const;

                    /**
                     * 获取Priority (value range: 1–100. The smaller the value, the higher the priority)
                     * @return Priority Priority (value range: 1–100. The smaller the value, the higher the priority)
                     * 
                     */
                    uint64_t GetPriority() const;

                    /**
                     * 设置Priority (value range: 1–100. The smaller the value, the higher the priority)
                     * @param _priority Priority (value range: 1–100. The smaller the value, the higher the priority)
                     * 
                     */
                    void SetPriority(const uint64_t& _priority);

                    /**
                     * 判断参数 Priority 是否已赋值
                     * @return Priority 是否已赋值
                     * 
                     */
                    bool PriorityHasBeenSet() const;

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

                private:

                    /**
                     * Permission rule ID
                     */
                    uint64_t m_accessRuleId;
                    bool m_accessRuleIdHasBeenSet;

                    /**
                     * Permission rule address (IP range or IP)
                     */
                    std::string m_address;
                    bool m_addressHasBeenSet;

                    /**
                     * Permission rule access mode (1: read-only; 2: read-write)
                     */
                    uint64_t m_accessMode;
                    bool m_accessModeHasBeenSet;

                    /**
                     * Priority (value range: 1–100. The smaller the value, the higher the priority)
                     */
                    uint64_t m_priority;
                    bool m_priorityHasBeenSet;

                    /**
                     * Creation time
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CHDFS_V20201112_MODEL_ACCESSRULE_H_
