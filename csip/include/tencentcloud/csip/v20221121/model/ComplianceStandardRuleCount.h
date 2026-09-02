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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_COMPLIANCESTANDARDRULECOUNT_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_COMPLIANCESTANDARDRULECOUNT_H_

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
                * Cloud resource configuration detection standard associated check items
                */
                class ComplianceStandardRuleCount : public AbstractModel
                {
                public:
                    ComplianceStandardRuleCount();
                    ~ComplianceStandardRuleCount() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Standard ID</p>
                     * @return ID <p>Standard ID</p>
                     * 
                     */
                    uint64_t GetID() const;

                    /**
                     * 设置<p>Standard ID</p>
                     * @param _iD <p>Standard ID</p>
                     * 
                     */
                    void SetID(const uint64_t& _iD);

                    /**
                     * 判断参数 ID 是否已赋值
                     * @return ID 是否已赋值
                     * 
                     */
                    bool IDHasBeenSet() const;

                    /**
                     * 获取<p>Specification name</p>
                     * @return Name <p>Specification name</p>
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置<p>Specification name</p>
                     * @param _name <p>Specification name</p>
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
                     * 获取<p>Number of associated check items</p>
                     * @return Count <p>Number of associated check items</p>
                     * 
                     */
                    uint64_t GetCount() const;

                    /**
                     * 设置<p>Number of associated check items</p>
                     * @param _count <p>Number of associated check items</p>
                     * 
                     */
                    void SetCount(const uint64_t& _count);

                    /**
                     * 判断参数 Count 是否已赋值
                     * @return Count 是否已赋值
                     * 
                     */
                    bool CountHasBeenSet() const;

                private:

                    /**
                     * <p>Standard ID</p>
                     */
                    uint64_t m_iD;
                    bool m_iDHasBeenSet;

                    /**
                     * <p>Specification name</p>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>Number of associated check items</p>
                     */
                    uint64_t m_count;
                    bool m_countHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_COMPLIANCESTANDARDRULECOUNT_H_
