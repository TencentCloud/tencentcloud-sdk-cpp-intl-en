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

#ifndef TENCENTCLOUD_CKAFKA_V20190819_MODEL_ACLRULERESP_H_
#define TENCENTCLOUD_CKAFKA_V20190819_MODEL_ACLRULERESP_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ckafka/v20190819/model/AclRule.h>


namespace TencentCloud
{
    namespace Ckafka
    {
        namespace V20190819
        {
            namespace Model
            {
                /**
                * Results returned by the `AclRuleList` API
                */
                class AclRuleResp : public AbstractModel
                {
                public:
                    AclRuleResp();
                    ~AclRuleResp() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Total number of data entries
                     * @return TotalCount Total number of data entries
                     * 
                     */
                    int64_t GetTotalCount() const;

                    /**
                     * 设置Total number of data entries
                     * @param _totalCount Total number of data entries
                     * 
                     */
                    void SetTotalCount(const int64_t& _totalCount);

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     * 
                     */
                    bool TotalCountHasBeenSet() const;

                    /**
                     * 获取ACL rule list
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return AclRuleList ACL rule list
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<AclRule> GetAclRuleList() const;

                    /**
                     * 设置ACL rule list
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _aclRuleList ACL rule list
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetAclRuleList(const std::vector<AclRule>& _aclRuleList);

                    /**
                     * 判断参数 AclRuleList 是否已赋值
                     * @return AclRuleList 是否已赋值
                     * 
                     */
                    bool AclRuleListHasBeenSet() const;

                private:

                    /**
                     * Total number of data entries
                     */
                    int64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * ACL rule list
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<AclRule> m_aclRuleList;
                    bool m_aclRuleListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CKAFKA_V20190819_MODEL_ACLRULERESP_H_
