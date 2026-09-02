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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBESKILLSCANALERTDETAILREQUEST_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBESKILLSCANALERTDETAILREQUEST_H_

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
                * DescribeSkillScanAlertDetail request structure.
                */
                class DescribeSkillScanAlertDetailRequest : public AbstractModel
                {
                public:
                    DescribeSkillScanAlertDetailRequest();
                    ~DescribeSkillScanAlertDetailRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>Alarm record ID<br>For reference on obtaining the value: obtain through the DescribeSkillScanAlertList API</p>
                     * @return ID <p>Alarm record ID<br>For reference on obtaining the value: obtain through the DescribeSkillScanAlertList API</p>
                     * 
                     */
                    int64_t GetID() const;

                    /**
                     * 设置<p>Alarm record ID<br>For reference on obtaining the value: obtain through the DescribeSkillScanAlertList API</p>
                     * @param _iD <p>Alarm record ID<br>For reference on obtaining the value: obtain through the DescribeSkillScanAlertList API</p>
                     * 
                     */
                    void SetID(const int64_t& _iD);

                    /**
                     * 判断参数 ID 是否已赋值
                     * @return ID 是否已赋值
                     * 
                     */
                    bool IDHasBeenSet() const;

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
                     * <p>Alarm record ID<br>For reference on obtaining the value: obtain through the DescribeSkillScanAlertList API</p>
                     */
                    int64_t m_iD;
                    bool m_iDHasBeenSet;

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

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBESKILLSCANALERTDETAILREQUEST_H_
