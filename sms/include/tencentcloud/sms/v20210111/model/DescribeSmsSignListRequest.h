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

#ifndef TENCENTCLOUD_SMS_V20210111_MODEL_DESCRIBESMSSIGNLISTREQUEST_H_
#define TENCENTCLOUD_SMS_V20210111_MODEL_DESCRIBESMSSIGNLISTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Sms
    {
        namespace V20210111
        {
            namespace Model
            {
                /**
                * DescribeSmsSignList request structure.
                */
                class DescribeSmsSignListRequest : public AbstractModel
                {
                public:
                    DescribeSmsSignListRequest();
                    ~DescribeSmsSignListRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Signature ID array.
Note: the maximum length of the array is 100 by default.
                     * @return SignIdSet Signature ID array.
Note: the maximum length of the array is 100 by default.
                     * 
                     */
                    std::vector<uint64_t> GetSignIdSet() const;

                    /**
                     * 设置Signature ID array.
Note: the maximum length of the array is 100 by default.
                     * @param _signIdSet Signature ID array.
Note: the maximum length of the array is 100 by default.
                     * 
                     */
                    void SetSignIdSet(const std::vector<uint64_t>& _signIdSet);

                    /**
                     * 判断参数 SignIdSet 是否已赋值
                     * @return SignIdSet 是否已赋值
                     * 
                     */
                    bool SignIdSetHasBeenSet() const;

                    /**
                     * 获取Whether it is Global SMS:
0: Mainland China SMS.
1: Global SMS.
                     * @return International Whether it is Global SMS:
0: Mainland China SMS.
1: Global SMS.
                     * 
                     */
                    uint64_t GetInternational() const;

                    /**
                     * 设置Whether it is Global SMS:
0: Mainland China SMS.
1: Global SMS.
                     * @param _international Whether it is Global SMS:
0: Mainland China SMS.
1: Global SMS.
                     * 
                     */
                    void SetInternational(const uint64_t& _international);

                    /**
                     * 判断参数 International 是否已赋值
                     * @return International 是否已赋值
                     * 
                     */
                    bool InternationalHasBeenSet() const;

                private:

                    /**
                     * Signature ID array.
Note: the maximum length of the array is 100 by default.
                     */
                    std::vector<uint64_t> m_signIdSet;
                    bool m_signIdSetHasBeenSet;

                    /**
                     * Whether it is Global SMS:
0: Mainland China SMS.
1: Global SMS.
                     */
                    uint64_t m_international;
                    bool m_internationalHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SMS_V20210111_MODEL_DESCRIBESMSSIGNLISTREQUEST_H_
