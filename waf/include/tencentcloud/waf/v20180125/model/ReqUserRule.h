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

#ifndef TENCENTCLOUD_WAF_V20180125_MODEL_REQUSERRULE_H_
#define TENCENTCLOUD_WAF_V20180125_MODEL_REQUSERRULE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Waf
    {
        namespace V20180125
        {
            namespace Model
            {
                /**
                * User Rule Update Output Rule Subitem
                */
                class ReqUserRule : public AbstractModel
                {
                public:
                    ReqUserRule();
                    ~ReqUserRule() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Feature serial number
                     * @return Id Feature serial number
                     * 
                     */
                    std::string GetId() const;

                    /**
                     * 设置Feature serial number
                     * @param _id Feature serial number
                     * 
                     */
                    void SetId(const std::string& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取Rule switch
0: disabled
1: enabled
2: alarm only
                     * @return Status Rule switch
0: disabled
1: enabled
2: alarm only
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置Rule switch
0: disabled
1: enabled
2: alarm only
                     * @param _status Rule switch
0: disabled
1: enabled
2: alarm only
                     * 
                     */
                    void SetStatus(const int64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取Reason for modification

0: none (Compatibility records are empty.)
1: avoidance of false positives due to business characteristics
2: reporting of rule-based false positives
3: grayscale release of core business rules
4: others
                     * @return Reason Reason for modification

0: none (Compatibility records are empty.)
1: avoidance of false positives due to business characteristics
2: reporting of rule-based false positives
3: grayscale release of core business rules
4: others
                     * 
                     */
                    int64_t GetReason() const;

                    /**
                     * 设置Reason for modification

0: none (Compatibility records are empty.)
1: avoidance of false positives due to business characteristics
2: reporting of rule-based false positives
3: grayscale release of core business rules
4: others
                     * @param _reason Reason for modification

0: none (Compatibility records are empty.)
1: avoidance of false positives due to business characteristics
2: reporting of rule-based false positives
3: grayscale release of core business rules
4: others
                     * 
                     */
                    void SetReason(const int64_t& _reason);

                    /**
                     * 判断参数 Reason 是否已赋值
                     * @return Reason 是否已赋值
                     * 
                     */
                    bool ReasonHasBeenSet() const;

                private:

                    /**
                     * Feature serial number
                     */
                    std::string m_id;
                    bool m_idHasBeenSet;

                    /**
                     * Rule switch
0: disabled
1: enabled
2: alarm only
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Reason for modification

0: none (Compatibility records are empty.)
1: avoidance of false positives due to business characteristics
2: reporting of rule-based false positives
3: grayscale release of core business rules
4: others
                     */
                    int64_t m_reason;
                    bool m_reasonHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WAF_V20180125_MODEL_REQUSERRULE_H_
