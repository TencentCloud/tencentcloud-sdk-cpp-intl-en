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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_CALLRECORD_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_CALLRECORD_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/csip/v20221121/model/SourceIPVpcInfo.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * Record details.
                */
                class CallRecord : public AbstractModel
                {
                public:
                    CallRecord();
                    ~CallRecord() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Invocation record ID.
                     * @return CallID Invocation record ID.
                     * 
                     */
                    std::string GetCallID() const;

                    /**
                     * 设置Invocation record ID.
                     * @param _callID Invocation record ID.
                     * 
                     */
                    void SetCallID(const std::string& _callID);

                    /**
                     * 判断参数 CallID 是否已赋值
                     * @return CallID 是否已赋值
                     * 
                     */
                    bool CallIDHasBeenSet() const;

                    /**
                     * 获取Access key.
                     * @return AccessKey Access key.
                     * 
                     */
                    std::string GetAccessKey() const;

                    /**
                     * 设置Access key.
                     * @param _accessKey Access key.
                     * 
                     */
                    void SetAccessKey(const std::string& _accessKey);

                    /**
                     * 判断参数 AccessKey 是否已赋值
                     * @return AccessKey 是否已赋值
                     * 
                     */
                    bool AccessKeyHasBeenSet() const;

                    /**
                     * 获取Access key remark.
                     * @return AccessKeyRemark Access key remark.
                     * 
                     */
                    std::string GetAccessKeyRemark() const;

                    /**
                     * 设置Access key remark.
                     * @param _accessKeyRemark Access key remark.
                     * 
                     */
                    void SetAccessKeyRemark(const std::string& _accessKeyRemark);

                    /**
                     * 判断参数 AccessKeyRemark 是否已赋值
                     * @return AccessKeyRemark 是否已赋值
                     * 
                     */
                    bool AccessKeyRemarkHasBeenSet() const;

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
                     * 获取Source IP of the call.
                     * @return SourceIP Source IP of the call.
                     * 
                     */
                    std::string GetSourceIP() const;

                    /**
                     * 设置Source IP of the call.
                     * @param _sourceIP Source IP of the call.
                     * 
                     */
                    void SetSourceIP(const std::string& _sourceIP);

                    /**
                     * 判断参数 SourceIP 是否已赋值
                     * @return SourceIP 是否已赋值
                     * 
                     */
                    bool SourceIPHasBeenSet() const;

                    /**
                     * 获取Source IP of the call remark.
                     * @return SourceIPRemark Source IP of the call remark.
                     * 
                     */
                    std::string GetSourceIPRemark() const;

                    /**
                     * 设置Source IP of the call remark.
                     * @param _sourceIPRemark Source IP of the call remark.
                     * 
                     */
                    void SetSourceIPRemark(const std::string& _sourceIPRemark);

                    /**
                     * 判断参数 SourceIPRemark 是否已赋值
                     * @return SourceIPRemark 是否已赋值
                     * 
                     */
                    bool SourceIPRemarkHasBeenSet() const;

                    /**
                     * 获取Source IP region of the call.
                     * @return Region Source IP region of the call.
                     * 
                     */
                    std::string GetRegion() const;

                    /**
                     * 设置Source IP region of the call.
                     * @param _region Source IP region of the call.
                     * 
                     */
                    void SetRegion(const std::string& _region);

                    /**
                     * 判断参数 Region 是否已赋值
                     * @return Region 是否已赋值
                     * 
                     */
                    bool RegionHasBeenSet() const;

                    /**
                     * 获取IP type 0: within the account (unremarked) 1: outside the account (unremarked) 2: within the account (remarked) 3: outside the account (remarked).
                     * @return IPType IP type 0: within the account (unremarked) 1: outside the account (unremarked) 2: within the account (remarked) 3: outside the account (remarked).
                     * 
                     */
                    int64_t GetIPType() const;

                    /**
                     * 设置IP type 0: within the account (unremarked) 1: outside the account (unremarked) 2: within the account (remarked) 3: outside the account (remarked).
                     * @param _iPType IP type 0: within the account (unremarked) 1: outside the account (unremarked) 2: within the account (remarked) 3: outside the account (remarked).
                     * 
                     */
                    void SetIPType(const int64_t& _iPType);

                    /**
                     * 判断参数 IPType 是否已赋值
                     * @return IPType 是否已赋值
                     * 
                     */
                    bool IPTypeHasBeenSet() const;

                    /**
                     * 获取Call interface name.
                     * @return EventName Call interface name.
                     * 
                     */
                    std::string GetEventName() const;

                    /**
                     * 设置Call interface name.
                     * @param _eventName Call interface name.
                     * 
                     */
                    void SetEventName(const std::string& _eventName);

                    /**
                     * 判断参数 EventName 是否已赋值
                     * @return EventName 是否已赋值
                     * 
                     */
                    bool EventNameHasBeenSet() const;

                    /**
                     * 获取Call the product name.
                     * @return ProductName Call the product name.
                     * 
                     */
                    std::string GetProductName() const;

                    /**
                     * 设置Call the product name.
                     * @param _productName Call the product name.
                     * 
                     */
                    void SetProductName(const std::string& _productName);

                    /**
                     * 判断参数 ProductName 是否已赋值
                     * @return ProductName 是否已赋值
                     * 
                     */
                    bool ProductNameHasBeenSet() const;

                    /**
                     * 获取Invocation type.
0: console invocation.
1:API
                     * @return EventType Invocation type.
0: console invocation.
1:API
                     * 
                     */
                    int64_t GetEventType() const;

                    /**
                     * 设置Invocation type.
0: console invocation.
1:API
                     * @param _eventType Invocation type.
0: console invocation.
1:API
                     * 
                     */
                    void SetEventType(const int64_t& _eventType);

                    /**
                     * 判断参数 EventType 是否已赋值
                     * @return EventType 是否已赋值
                     * 
                     */
                    bool EventTypeHasBeenSet() const;

                    /**
                     * 获取Type of user: CAMUser/root/AssumedRole.

                     * @return UserType Type of user: CAMUser/root/AssumedRole.

                     * 
                     */
                    std::string GetUserType() const;

                    /**
                     * 设置Type of user: CAMUser/root/AssumedRole.

                     * @param _userType Type of user: CAMUser/root/AssumedRole.

                     * 
                     */
                    void SetUserType(const std::string& _userType);

                    /**
                     * 判断参数 UserType 是否已赋值
                     * @return UserType 是否已赋值
                     * 
                     */
                    bool UserTypeHasBeenSet() const;

                    /**
                     * 获取User/Role name.
                     * @return UserName User/Role name.
                     * 
                     */
                    std::string GetUserName() const;

                    /**
                     * 设置User/Role name.
                     * @param _userName User/Role name.
                     * 
                     */
                    void SetUserName(const std::string& _userName);

                    /**
                     * 判断参数 UserName 是否已赋值
                     * @return UserName 是否已赋值
                     * 
                     */
                    bool UserNameHasBeenSet() const;

                    /**
                     * 获取Policy List
                     * @return PolicySet Policy List
                     * 
                     */
                    std::vector<std::string> GetPolicySet() const;

                    /**
                     * 设置Policy List
                     * @param _policySet Policy List
                     * 
                     */
                    void SetPolicySet(const std::vector<std::string>& _policySet);

                    /**
                     * 判断参数 PolicySet 是否已赋值
                     * @return PolicySet 是否已赋值
                     * 
                     */
                    bool PolicySetHasBeenSet() const;

                    /**
                     * 获取Number of calls.
                     * @return CallCount Number of calls.
                     * 
                     */
                    int64_t GetCallCount() const;

                    /**
                     * 设置Number of calls.
                     * @param _callCount Number of calls.
                     * 
                     */
                    void SetCallCount(const int64_t& _callCount);

                    /**
                     * 判断参数 CallCount 是否已赋值
                     * @return CallCount 是否已赋值
                     * 
                     */
                    bool CallCountHasBeenSet() const;

                    /**
                     * 获取Error code.
0: Successful
                     * @return Code Error code.
0: Successful
                     * 
                     */
                    int64_t GetCode() const;

                    /**
                     * 设置Error code.
0: Successful
                     * @param _code Error code.
0: Successful
                     * 
                     */
                    void SetCode(const int64_t& _code);

                    /**
                     * 判断参数 Code 是否已赋值
                     * @return Code 是否已赋值
                     * 
                     */
                    bool CodeHasBeenSet() const;

                    /**
                     * 获取First time call time.
                     * @return FirstCallTime First time call time.
                     * 
                     */
                    std::string GetFirstCallTime() const;

                    /**
                     * 设置First time call time.
                     * @param _firstCallTime First time call time.
                     * 
                     */
                    void SetFirstCallTime(const std::string& _firstCallTime);

                    /**
                     * 判断参数 FirstCallTime 是否已赋值
                     * @return FirstCallTime 是否已赋值
                     * 
                     */
                    bool FirstCallTimeHasBeenSet() const;

                    /**
                     * 获取Call time.
                     * @return LastCallTime Call time.
                     * 
                     */
                    std::string GetLastCallTime() const;

                    /**
                     * 设置Call time.
                     * @param _lastCallTime Call time.
                     * 
                     */
                    void SetLastCallTime(const std::string& _lastCallTime);

                    /**
                     * 判断参数 LastCallTime 是否已赋值
                     * @return LastCallTime 是否已赋值
                     * 
                     */
                    bool LastCallTimeHasBeenSet() const;

                    /**
                     * 获取IP associated asset ID. if an empty string, means not associated with.
                     * @return InstanceID IP associated asset ID. if an empty string, means not associated with.
                     * 
                     */
                    std::string GetInstanceID() const;

                    /**
                     * 设置IP associated asset ID. if an empty string, means not associated with.
                     * @param _instanceID IP associated asset ID. if an empty string, means not associated with.
                     * 
                     */
                    void SetInstanceID(const std::string& _instanceID);

                    /**
                     * 判断参数 InstanceID 是否已赋值
                     * @return InstanceID 是否已赋值
                     * 
                     */
                    bool InstanceIDHasBeenSet() const;

                    /**
                     * 获取Associated asset name of the IP.
                     * @return InstanceName Associated asset name of the IP.
                     * 
                     */
                    std::string GetInstanceName() const;

                    /**
                     * 设置Associated asset name of the IP.
                     * @param _instanceName Associated asset name of the IP.
                     * 
                     */
                    void SetInstanceName(const std::string& _instanceName);

                    /**
                     * 判断参数 InstanceName 是否已赋值
                     * @return InstanceName 是否已赋值
                     * 
                     */
                    bool InstanceNameHasBeenSet() const;

                    /**
                     * 获取Aggregate date.
                     * @return Date Aggregate date.
                     * 
                     */
                    std::string GetDate() const;

                    /**
                     * 设置Aggregate date.
                     * @param _date Aggregate date.
                     * 
                     */
                    void SetDate(const std::string& _date);

                    /**
                     * 判断参数 Date 是否已赋值
                     * @return Date 是否已赋值
                     * 
                     */
                    bool DateHasBeenSet() const;

                    /**
                     * 获取appid
                     * @return AppID appid
                     * 
                     */
                    int64_t GetAppID() const;

                    /**
                     * 设置appid
                     * @param _appID appid
                     * 
                     */
                    void SetAppID(const int64_t& _appID);

                    /**
                     * 判断参数 AppID 是否已赋值
                     * @return AppID 是否已赋值
                     * 
                     */
                    bool AppIDHasBeenSet() const;

                    /**
                     * 获取Display status.
                     * @return ShowStatus Display status.
                     * 
                     */
                    bool GetShowStatus() const;

                    /**
                     * 设置Display status.
                     * @param _showStatus Display status.
                     * 
                     */
                    void SetShowStatus(const bool& _showStatus);

                    /**
                     * 判断参数 ShowStatus 是否已赋值
                     * @return ShowStatus 是否已赋值
                     * 
                     */
                    bool ShowStatusHasBeenSet() const;

                    /**
                     * 获取Carrier.
                     * @return ISP Carrier.
                     * 
                     */
                    std::string GetISP() const;

                    /**
                     * 设置Carrier.
                     * @param _iSP Carrier.
                     * 
                     */
                    void SetISP(const std::string& _iSP);

                    /**
                     * 判断参数 ISP 是否已赋值
                     * @return ISP 是否已赋值
                     * 
                     */
                    bool ISPHasBeenSet() const;

                    /**
                     * 获取vpc information list outside the account.
                     * @return VpcInfo vpc information list outside the account.
                     * 
                     */
                    std::vector<SourceIPVpcInfo> GetVpcInfo() const;

                    /**
                     * 设置vpc information list outside the account.
                     * @param _vpcInfo vpc information list outside the account.
                     * 
                     */
                    void SetVpcInfo(const std::vector<SourceIPVpcInfo>& _vpcInfo);

                    /**
                     * 判断参数 VpcInfo 是否已赋值
                     * @return VpcInfo 是否已赋值
                     * 
                     */
                    bool VpcInfoHasBeenSet() const;

                    /**
                     * 获取Request client list.
                     * @return ReqClient Request client list.
                     * 
                     */
                    std::vector<std::string> GetReqClient() const;

                    /**
                     * 设置Request client list.
                     * @param _reqClient Request client list.
                     * 
                     */
                    void SetReqClient(const std::vector<std::string>& _reqClient);

                    /**
                     * 判断参数 ReqClient 是否已赋值
                     * @return ReqClient 是否已赋值
                     * 
                     */
                    bool ReqClientHasBeenSet() const;

                private:

                    /**
                     * Invocation record ID.
                     */
                    std::string m_callID;
                    bool m_callIDHasBeenSet;

                    /**
                     * Access key.
                     */
                    std::string m_accessKey;
                    bool m_accessKeyHasBeenSet;

                    /**
                     * Access key remark.
                     */
                    std::string m_accessKeyRemark;
                    bool m_accessKeyRemarkHasBeenSet;

                    /**
                     * Access key ID.
                     */
                    uint64_t m_accessKeyID;
                    bool m_accessKeyIDHasBeenSet;

                    /**
                     * Source IP of the call.
                     */
                    std::string m_sourceIP;
                    bool m_sourceIPHasBeenSet;

                    /**
                     * Source IP of the call remark.
                     */
                    std::string m_sourceIPRemark;
                    bool m_sourceIPRemarkHasBeenSet;

                    /**
                     * Source IP region of the call.
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * IP type 0: within the account (unremarked) 1: outside the account (unremarked) 2: within the account (remarked) 3: outside the account (remarked).
                     */
                    int64_t m_iPType;
                    bool m_iPTypeHasBeenSet;

                    /**
                     * Call interface name.
                     */
                    std::string m_eventName;
                    bool m_eventNameHasBeenSet;

                    /**
                     * Call the product name.
                     */
                    std::string m_productName;
                    bool m_productNameHasBeenSet;

                    /**
                     * Invocation type.
0: console invocation.
1:API
                     */
                    int64_t m_eventType;
                    bool m_eventTypeHasBeenSet;

                    /**
                     * Type of user: CAMUser/root/AssumedRole.

                     */
                    std::string m_userType;
                    bool m_userTypeHasBeenSet;

                    /**
                     * User/Role name.
                     */
                    std::string m_userName;
                    bool m_userNameHasBeenSet;

                    /**
                     * Policy List
                     */
                    std::vector<std::string> m_policySet;
                    bool m_policySetHasBeenSet;

                    /**
                     * Number of calls.
                     */
                    int64_t m_callCount;
                    bool m_callCountHasBeenSet;

                    /**
                     * Error code.
0: Successful
                     */
                    int64_t m_code;
                    bool m_codeHasBeenSet;

                    /**
                     * First time call time.
                     */
                    std::string m_firstCallTime;
                    bool m_firstCallTimeHasBeenSet;

                    /**
                     * Call time.
                     */
                    std::string m_lastCallTime;
                    bool m_lastCallTimeHasBeenSet;

                    /**
                     * IP associated asset ID. if an empty string, means not associated with.
                     */
                    std::string m_instanceID;
                    bool m_instanceIDHasBeenSet;

                    /**
                     * Associated asset name of the IP.
                     */
                    std::string m_instanceName;
                    bool m_instanceNameHasBeenSet;

                    /**
                     * Aggregate date.
                     */
                    std::string m_date;
                    bool m_dateHasBeenSet;

                    /**
                     * appid
                     */
                    int64_t m_appID;
                    bool m_appIDHasBeenSet;

                    /**
                     * Display status.
                     */
                    bool m_showStatus;
                    bool m_showStatusHasBeenSet;

                    /**
                     * Carrier.
                     */
                    std::string m_iSP;
                    bool m_iSPHasBeenSet;

                    /**
                     * vpc information list outside the account.
                     */
                    std::vector<SourceIPVpcInfo> m_vpcInfo;
                    bool m_vpcInfoHasBeenSet;

                    /**
                     * Request client list.
                     */
                    std::vector<std::string> m_reqClient;
                    bool m_reqClientHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_CALLRECORD_H_
