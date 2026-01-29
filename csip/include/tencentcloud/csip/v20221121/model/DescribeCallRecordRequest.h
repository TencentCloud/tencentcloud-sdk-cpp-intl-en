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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBECALLRECORDREQUEST_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBECALLRECORDREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/csip/v20221121/model/Filter.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * DescribeCallRecord request structure.
                */
                class DescribeCallRecordRequest : public AbstractModel
                {
                public:
                    DescribeCallRecordRequest();
                    ~DescribeCallRecordRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Group Account Member ID
                     * @return MemberId Group Account Member ID
                     * 
                     */
                    std::vector<std::string> GetMemberId() const;

                    /**
                     * 设置Group Account Member ID
                     * @param _memberId Group Account Member ID
                     * 
                     */
                    void SetMemberId(const std::vector<std::string>& _memberId);

                    /**
                     * 判断参数 MemberId 是否已赋值
                     * @return MemberId 是否已赋值
                     * 
                     */
                    bool MemberIdHasBeenSet() const;

                    /**
                     * 获取Access key ID.
                     * @return AccessKeyID Access key ID.
                     * 
                     */
                    uint64_t GetAccessKeyID() const;

                    /**
                     * 设置Access key ID.
                     * @param _accessKeyID Access key ID.
                     * 
                     */
                    void SetAccessKeyID(const uint64_t& _accessKeyID);

                    /**
                     * 判断参数 AccessKeyID 是否已赋值
                     * @return AccessKeyID 是否已赋值
                     * 
                     */
                    bool AccessKeyIDHasBeenSet() const;

                    /**
                     * 获取ID of the source IP for the call.
                     * @return SourceIPID ID of the source IP for the call.
                     * 
                     */
                    uint64_t GetSourceIPID() const;

                    /**
                     * 设置ID of the source IP for the call.
                     * @param _sourceIPID ID of the source IP for the call.
                     * 
                     */
                    void SetSourceIPID(const uint64_t& _sourceIPID);

                    /**
                     * 判断参数 SourceIPID 是否已赋值
                     * @return SourceIPID 是否已赋值
                     * 
                     */
                    bool SourceIPIDHasBeenSet() const;

                    /**
                     * 获取Access account uin.
                     * @return AccUin Access account uin.
                     * 
                     */
                    std::string GetAccUin() const;

                    /**
                     * 设置Access account uin.
                     * @param _accUin Access account uin.
                     * 
                     */
                    void SetAccUin(const std::string& _accUin);

                    /**
                     * 判断参数 AccUin 是否已赋值
                     * @return AccUin 是否已赋值
                     * 
                     */
                    bool AccUinHasBeenSet() const;

                    /**
                     * 获取Filter.
                     * @return Filter Filter.
                     * 
                     */
                    Filter GetFilter() const;

                    /**
                     * 设置Filter.
                     * @param _filter Filter.
                     * 
                     */
                    void SetFilter(const Filter& _filter);

                    /**
                     * 判断参数 Filter 是否已赋值
                     * @return Filter 是否已赋值
                     * 
                     */
                    bool FilterHasBeenSet() const;

                private:

                    /**
                     * Group Account Member ID
                     */
                    std::vector<std::string> m_memberId;
                    bool m_memberIdHasBeenSet;

                    /**
                     * Access key ID.
                     */
                    uint64_t m_accessKeyID;
                    bool m_accessKeyIDHasBeenSet;

                    /**
                     * ID of the source IP for the call.
                     */
                    uint64_t m_sourceIPID;
                    bool m_sourceIPIDHasBeenSet;

                    /**
                     * Access account uin.
                     */
                    std::string m_accUin;
                    bool m_accUinHasBeenSet;

                    /**
                     * Filter.
                     */
                    Filter m_filter;
                    bool m_filterHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBECALLRECORDREQUEST_H_
