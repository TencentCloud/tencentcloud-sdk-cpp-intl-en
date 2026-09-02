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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_MODIFYSKILLSCANALERTSTATUSREQUEST_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_MODIFYSKILLSCANALERTSTATUSREQUEST_H_

#include <string>
#include <vector>
#include <map>
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
                * ModifySkillScanAlertStatus request structure.
                */
                class ModifySkillScanAlertStatusRequest : public AbstractModel
                {
                public:
                    ModifySkillScanAlertStatusRequest();
                    ~ModifySkillScanAlertStatusRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取List of alarm record IDs
Input parameter limit: 100 at a time
Value reference: obtained through the DescribeSkillScanAlertList API.
                     * @return IDs List of alarm record IDs
Input parameter limit: 100 at a time
Value reference: obtained through the DescribeSkillScanAlertList API.
                     * 
                     */
                    std::vector<int64_t> GetIDs() const;

                    /**
                     * 设置List of alarm record IDs
Input parameter limit: 100 at a time
Value reference: obtained through the DescribeSkillScanAlertList API.
                     * @param _iDs List of alarm record IDs
Input parameter limit: 100 at a time
Value reference: obtained through the DescribeSkillScanAlertList API.
                     * 
                     */
                    void SetIDs(const std::vector<int64_t>& _iDs);

                    /**
                     * 判断参数 IDs 是否已赋值
                     * @return IDs 是否已赋值
                     * 
                     */
                    bool IDsHasBeenSet() const;

                    /**
                     * 获取Target processing status
Enumeration value:
1: Processed
2: Ignored
3: Trusted
- 4: Deleted (soft deletion).
                     * @return Status Target processing status
Enumeration value:
1: Processed
2: Ignored
3: Trusted
- 4: Deleted (soft deletion).
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置Target processing status
Enumeration value:
1: Processed
2: Ignored
3: Trusted
- 4: Deleted (soft deletion).
                     * @param _status Target processing status
Enumeration value:
1: Processed
2: Ignored
3: Trusted
- 4: Deleted (soft deletion).
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
                     * 获取Group account member id
                     * @return MemberId Group account member id
                     * 
                     */
                    std::vector<std::string> GetMemberId() const;

                    /**
                     * 设置Group account member id
                     * @param _memberId Group account member id
                     * 
                     */
                    void SetMemberId(const std::vector<std::string>& _memberId);

                    /**
                     * 判断参数 MemberId 是否已赋值
                     * @return MemberId 是否已赋值
                     * 
                     */
                    bool MemberIdHasBeenSet() const;

                private:

                    /**
                     * List of alarm record IDs
Input parameter limit: 100 at a time
Value reference: obtained through the DescribeSkillScanAlertList API.
                     */
                    std::vector<int64_t> m_iDs;
                    bool m_iDsHasBeenSet;

                    /**
                     * Target processing status
Enumeration value:
1: Processed
2: Ignored
3: Trusted
- 4: Deleted (soft deletion).
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Group account member id
                     */
                    std::vector<std::string> m_memberId;
                    bool m_memberIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_MODIFYSKILLSCANALERTSTATUSREQUEST_H_
