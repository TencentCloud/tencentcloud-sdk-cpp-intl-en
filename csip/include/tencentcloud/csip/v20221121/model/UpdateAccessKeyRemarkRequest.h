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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_UPDATEACCESSKEYREMARKREQUEST_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_UPDATEACCESSKEYREMARKREQUEST_H_

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
                * UpdateAccessKeyRemark request structure.
                */
                class UpdateAccessKeyRemarkRequest : public AbstractModel
                {
                public:
                    UpdateAccessKeyRemarkRequest();
                    ~UpdateAccessKeyRemarkRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Remarks
                     * @return Remark Remarks
                     * 
                     */
                    std::string GetRemark() const;

                    /**
                     * 设置Remarks
                     * @param _remark Remarks
                     * 
                     */
                    void SetRemark(const std::string& _remark);

                    /**
                     * 判断参数 Remark 是否已赋值
                     * @return Remark 是否已赋值
                     * 
                     */
                    bool RemarkHasBeenSet() const;

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
                     * 获取Source IP name.
                     * @return SourceIPList Source IP name.
                     * 
                     */
                    std::vector<std::string> GetSourceIPList() const;

                    /**
                     * 设置Source IP name.
                     * @param _sourceIPList Source IP name.
                     * 
                     */
                    void SetSourceIPList(const std::vector<std::string>& _sourceIPList);

                    /**
                     * 判断参数 SourceIPList 是否已赋值
                     * @return SourceIPList 是否已赋值
                     * 
                     */
                    bool SourceIPListHasBeenSet() const;

                    /**
                     * 获取ak name.
                     * @return AccessKeyList ak name.
                     * 
                     */
                    std::vector<std::string> GetAccessKeyList() const;

                    /**
                     * 设置ak name.
                     * @param _accessKeyList ak name.
                     * 
                     */
                    void SetAccessKeyList(const std::vector<std::string>& _accessKeyList);

                    /**
                     * 判断参数 AccessKeyList 是否已赋值
                     * @return AccessKeyList 是否已赋值
                     * 
                     */
                    bool AccessKeyListHasBeenSet() const;

                    /**
                     * 获取ID of the source IP.
                     * @return SourceIPIDList ID of the source IP.
                     * 
                     */
                    std::vector<uint64_t> GetSourceIPIDList() const;

                    /**
                     * 设置ID of the source IP.
                     * @param _sourceIPIDList ID of the source IP.
                     * 
                     */
                    void SetSourceIPIDList(const std::vector<uint64_t>& _sourceIPIDList);

                    /**
                     * 判断参数 SourceIPIDList 是否已赋值
                     * @return SourceIPIDList 是否已赋值
                     * 
                     */
                    bool SourceIPIDListHasBeenSet() const;

                    /**
                     * 获取AK ID.
                     * @return AccessKeyIDList AK ID.
                     * 
                     */
                    std::vector<uint64_t> GetAccessKeyIDList() const;

                    /**
                     * 设置AK ID.
                     * @param _accessKeyIDList AK ID.
                     * 
                     */
                    void SetAccessKeyIDList(const std::vector<uint64_t>& _accessKeyIDList);

                    /**
                     * 判断参数 AccessKeyIDList 是否已赋值
                     * @return AccessKeyIDList 是否已赋值
                     * 
                     */
                    bool AccessKeyIDListHasBeenSet() const;

                private:

                    /**
                     * Remarks
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                    /**
                     * Group Account Member ID
                     */
                    std::vector<std::string> m_memberId;
                    bool m_memberIdHasBeenSet;

                    /**
                     * Source IP name.
                     */
                    std::vector<std::string> m_sourceIPList;
                    bool m_sourceIPListHasBeenSet;

                    /**
                     * ak name.
                     */
                    std::vector<std::string> m_accessKeyList;
                    bool m_accessKeyListHasBeenSet;

                    /**
                     * ID of the source IP.
                     */
                    std::vector<uint64_t> m_sourceIPIDList;
                    bool m_sourceIPIDListHasBeenSet;

                    /**
                     * AK ID.
                     */
                    std::vector<uint64_t> m_accessKeyIDList;
                    bool m_accessKeyIDListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_UPDATEACCESSKEYREMARKREQUEST_H_
