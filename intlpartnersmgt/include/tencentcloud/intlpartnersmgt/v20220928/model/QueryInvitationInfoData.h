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

#ifndef TENCENTCLOUD_INTLPARTNERSMGT_V20220928_MODEL_QUERYINVITATIONINFODATA_H_
#define TENCENTCLOUD_INTLPARTNERSMGT_V20220928_MODEL_QUERYINVITATIONINFODATA_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Intlpartnersmgt
    {
        namespace V20220928
        {
            namespace Model
            {
                /**
                * Invitation link information.
                */
                class QueryInvitationInfoData : public AbstractModel
                {
                public:
                    QueryInvitationInfoData();
                    ~QueryInvitationInfoData() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Invitation link token.
                     * @return InvitationToken Invitation link token.
                     * 
                     */
                    std::string GetInvitationToken() const;

                    /**
                     * 设置Invitation link token.
                     * @param _invitationToken Invitation link token.
                     * 
                     */
                    void SetInvitationToken(const std::string& _invitationToken);

                    /**
                     * 判断参数 InvitationToken 是否已赋值
                     * @return InvitationToken 是否已赋值
                     * 
                     */
                    bool InvitationTokenHasBeenSet() const;

                    /**
                     * 获取Creation time of the invitation link.
                     * @return CreateTime Creation time of the invitation link.
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置Creation time of the invitation link.
                     * @param _createTime Creation time of the invitation link.
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
                     * 获取Invite link status.
1: Unused.
2: Used.
                     * @return Status Invite link status.
1: Unused.
2: Used.
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置Invite link status.
1: Unused.
2: Used.
                     * @param _status Invite link status.
1: Unused.
2: Used.
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
                     * 获取Indicates the usage time of the invitation link.
                     * @return UseTime Indicates the usage time of the invitation link.
                     * 
                     */
                    std::string GetUseTime() const;

                    /**
                     * 设置Indicates the usage time of the invitation link.
                     * @param _useTime Indicates the usage time of the invitation link.
                     * 
                     */
                    void SetUseTime(const std::string& _useTime);

                    /**
                     * 判断参数 UseTime 是否已赋值
                     * @return UseTime 是否已赋值
                     * 
                     */
                    bool UseTimeHasBeenSet() const;

                    /**
                     * 获取Customer uin.
                     * @return ClientUin Customer uin.
                     * 
                     */
                    int64_t GetClientUin() const;

                    /**
                     * 设置Customer uin.
                     * @param _clientUin Customer uin.
                     * 
                     */
                    void SetClientUin(const int64_t& _clientUin);

                    /**
                     * 判断参数 ClientUin 是否已赋值
                     * @return ClientUin 是否已赋值
                     * 
                     */
                    bool ClientUinHasBeenSet() const;

                    /**
                     * 获取Customer mailbox.
                     * @return ClientMail Customer mailbox.
                     * 
                     */
                    std::string GetClientMail() const;

                    /**
                     * 设置Customer mailbox.
                     * @param _clientMail Customer mailbox.
                     * 
                     */
                    void SetClientMail(const std::string& _clientMail);

                    /**
                     * 判断参数 ClientMail 是否已赋值
                     * @return ClientMail 是否已赋值
                     * 
                     */
                    bool ClientMailHasBeenSet() const;

                    /**
                     * 获取Customer type.
1: Second-Level reseller.
2: Sub-Customer.
                     * @return ClientType Customer type.
1: Second-Level reseller.
2: Sub-Customer.
                     * 
                     */
                    int64_t GetClientType() const;

                    /**
                     * 设置Customer type.
1: Second-Level reseller.
2: Sub-Customer.
                     * @param _clientType Customer type.
1: Second-Level reseller.
2: Sub-Customer.
                     * 
                     */
                    void SetClientType(const int64_t& _clientType);

                    /**
                     * 判断参数 ClientType 是否已赋值
                     * @return ClientType 是否已赋值
                     * 
                     */
                    bool ClientTypeHasBeenSet() const;

                    /**
                     * 获取The binding time of the customer.
                     * @return BindTime The binding time of the customer.
                     * 
                     */
                    std::string GetBindTime() const;

                    /**
                     * 设置The binding time of the customer.
                     * @param _bindTime The binding time of the customer.
                     * 
                     */
                    void SetBindTime(const std::string& _bindTime);

                    /**
                     * 判断参数 BindTime 是否已赋值
                     * @return BindTime 是否已赋值
                     * 
                     */
                    bool BindTimeHasBeenSet() const;

                private:

                    /**
                     * Invitation link token.
                     */
                    std::string m_invitationToken;
                    bool m_invitationTokenHasBeenSet;

                    /**
                     * Creation time of the invitation link.
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * Invite link status.
1: Unused.
2: Used.
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Indicates the usage time of the invitation link.
                     */
                    std::string m_useTime;
                    bool m_useTimeHasBeenSet;

                    /**
                     * Customer uin.
                     */
                    int64_t m_clientUin;
                    bool m_clientUinHasBeenSet;

                    /**
                     * Customer mailbox.
                     */
                    std::string m_clientMail;
                    bool m_clientMailHasBeenSet;

                    /**
                     * Customer type.
1: Second-Level reseller.
2: Sub-Customer.
                     */
                    int64_t m_clientType;
                    bool m_clientTypeHasBeenSet;

                    /**
                     * The binding time of the customer.
                     */
                    std::string m_bindTime;
                    bool m_bindTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_INTLPARTNERSMGT_V20220928_MODEL_QUERYINVITATIONINFODATA_H_
