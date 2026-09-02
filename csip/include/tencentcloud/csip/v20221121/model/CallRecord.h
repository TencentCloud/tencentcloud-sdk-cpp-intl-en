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
                * Call log details
                */
                class CallRecord : public AbstractModel
                {
                public:
                    CallRecord();
                    ~CallRecord() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Call record ID
                     * @return CallID Call record ID
                     * 
                     */
                    std::string GetCallID() const;

                    /**
                     * 设置Call record ID
                     * @param _callID Call record ID
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
                     * 获取Access key
                     * @return AccessKey Access key
                     * 
                     */
                    std::string GetAccessKey() const;

                    /**
                     * 设置Access key
                     * @param _accessKey Access key
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
                     * 获取Access key remark
                     * @return AccessKeyRemark Access key remark
                     * 
                     */
                    std::string GetAccessKeyRemark() const;

                    /**
                     * 设置Access key remark
                     * @param _accessKeyRemark Access key remark
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
                     * 获取Access Key ID
                     * @return AccessKeyID Access Key ID
                     * 
                     */
                    uint64_t GetAccessKeyID() const;

                    /**
                     * 设置Access Key ID
                     * @param _accessKeyID Access Key ID
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
                     * 获取Source IP for calls
                     * @return SourceIP Source IP for calls
                     * 
                     */
                    std::string GetSourceIP() const;

                    /**
                     * 设置Source IP for calls
                     * @param _sourceIP Source IP for calls
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
                     * 获取Source IP remark of a call
                     * @return SourceIPRemark Source IP remark of a call
                     * 
                     */
                    std::string GetSourceIPRemark() const;

                    /**
                     * 设置Source IP remark of a call
                     * @param _sourceIPRemark Source IP remark of a call
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
                     * 获取Region of the source IP
                     * @return Region Region of the source IP
                     * 
                     */
                    std::string GetRegion() const;

                    /**
                     * 设置Region of the source IP
                     * @param _region Region of the source IP
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
                     * 获取IP type. 0: within the account (no remark). 1: outside the account (no remark). 2: within the account (remarked). 3: outside the account (remarked)
                     * @return IPType IP type. 0: within the account (no remark). 1: outside the account (no remark). 2: within the account (remarked). 3: outside the account (remarked)
                     * 
                     */
                    int64_t GetIPType() const;

                    /**
                     * 设置IP type. 0: within the account (no remark). 1: outside the account (no remark). 2: within the account (remarked). 3: outside the account (remarked)
                     * @param _iPType IP type. 0: within the account (no remark). 1: outside the account (no remark). 2: within the account (remarked). 3: outside the account (remarked)
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
                     * 获取Name of the called API
                     * @return EventName Name of the called API
                     * 
                     */
                    std::string GetEventName() const;

                    /**
                     * 设置Name of the called API
                     * @param _eventName Name of the called API
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
                     * 获取API call product name
                     * @return ProductName API call product name
                     * 
                     */
                    std::string GetProductName() const;

                    /**
                     * 设置API call product name
                     * @param _productName API call product name
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
                     * 获取Invocation type
0: Console invocation
1:API
                     * @return EventType Invocation type
0: Console invocation
1:API
                     * 
                     */
                    int64_t GetEventType() const;

                    /**
                     * 设置Invocation type
0: Console invocation
1:API
                     * @param _eventType Invocation type
0: Console invocation
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
                     * 获取Type of user. Valid values: `CAMUser`, `root`, `AssumedRole`.

                     * @return UserType Type of user. Valid values: `CAMUser`, `root`, `AssumedRole`.

                     * 
                     */
                    std::string GetUserType() const;

                    /**
                     * 设置Type of user. Valid values: `CAMUser`, `root`, `AssumedRole`.

                     * @param _userType Type of user. Valid values: `CAMUser`, `root`, `AssumedRole`.

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
                     * 获取User/role name
                     * @return UserName User/role name
                     * 
                     */
                    std::string GetUserName() const;

                    /**
                     * 设置User/role name
                     * @param _userName User/role name
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
                     * 获取Call count
                     * @return CallCount Call count
                     * 
                     */
                    int64_t GetCallCount() const;

                    /**
                     * 设置Call count
                     * @param _callCount Call count
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
                     * 获取Call error code
0: Successful
                     * @return Code Call error code
0: Successful
                     * 
                     */
                    int64_t GetCode() const;

                    /**
                     * 设置Call error code
0: Successful
                     * @param _code Call error code
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
                     * 获取First call time
                     * @return FirstCallTime First call time
                     * 
                     */
                    std::string GetFirstCallTime() const;

                    /**
                     * 设置First call time
                     * @param _firstCallTime First call time
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
                     * 获取Last call time
                     * @return LastCallTime Last call time
                     * 
                     */
                    std::string GetLastCallTime() const;

                    /**
                     * 设置Last call time
                     * @param _lastCallTime Last call time
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
                     * 获取ID of the associated asset for the IP. If it is an empty string, the IP is not associated with any asset.
                     * @return InstanceID ID of the associated asset for the IP. If it is an empty string, the IP is not associated with any asset.
                     * 
                     */
                    std::string GetInstanceID() const;

                    /**
                     * 设置ID of the associated asset for the IP. If it is an empty string, the IP is not associated with any asset.
                     * @param _instanceID ID of the associated asset for the IP. If it is an empty string, the IP is not associated with any asset.
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
                     * 获取IP associated asset name
                     * @return InstanceName IP associated asset name
                     * 
                     */
                    std::string GetInstanceName() const;

                    /**
                     * 设置IP associated asset name
                     * @param _instanceName IP associated asset name
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
                     * 获取Aggregation date
                     * @return Date Aggregation date
                     * 
                     */
                    std::string GetDate() const;

                    /**
                     * 设置Aggregation date
                     * @param _date Aggregation date
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
                     * 获取Internet service provider.
                     * @return ISP Internet service provider.
                     * 
                     */
                    std::string GetISP() const;

                    /**
                     * 设置Internet service provider.
                     * @param _iSP Internet service provider.
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
                     * 获取List of vpc information outside the account
                     * @return VpcInfo List of vpc information outside the account
                     * 
                     */
                    std::vector<SourceIPVpcInfo> GetVpcInfo() const;

                    /**
                     * 设置List of vpc information outside the account
                     * @param _vpcInfo List of vpc information outside the account
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
                     * 获取List of call request clients
                     * @return ReqClient List of call request clients
                     * 
                     */
                    std::vector<std::string> GetReqClient() const;

                    /**
                     * 设置List of call request clients
                     * @param _reqClient List of call request clients
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
                     * Call record ID
                     */
                    std::string m_callID;
                    bool m_callIDHasBeenSet;

                    /**
                     * Access key
                     */
                    std::string m_accessKey;
                    bool m_accessKeyHasBeenSet;

                    /**
                     * Access key remark
                     */
                    std::string m_accessKeyRemark;
                    bool m_accessKeyRemarkHasBeenSet;

                    /**
                     * Access Key ID
                     */
                    uint64_t m_accessKeyID;
                    bool m_accessKeyIDHasBeenSet;

                    /**
                     * Source IP for calls
                     */
                    std::string m_sourceIP;
                    bool m_sourceIPHasBeenSet;

                    /**
                     * Source IP remark of a call
                     */
                    std::string m_sourceIPRemark;
                    bool m_sourceIPRemarkHasBeenSet;

                    /**
                     * Region of the source IP
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * IP type. 0: within the account (no remark). 1: outside the account (no remark). 2: within the account (remarked). 3: outside the account (remarked)
                     */
                    int64_t m_iPType;
                    bool m_iPTypeHasBeenSet;

                    /**
                     * Name of the called API
                     */
                    std::string m_eventName;
                    bool m_eventNameHasBeenSet;

                    /**
                     * API call product name
                     */
                    std::string m_productName;
                    bool m_productNameHasBeenSet;

                    /**
                     * Invocation type
0: Console invocation
1:API
                     */
                    int64_t m_eventType;
                    bool m_eventTypeHasBeenSet;

                    /**
                     * Type of user. Valid values: `CAMUser`, `root`, `AssumedRole`.

                     */
                    std::string m_userType;
                    bool m_userTypeHasBeenSet;

                    /**
                     * User/role name
                     */
                    std::string m_userName;
                    bool m_userNameHasBeenSet;

                    /**
                     * Policy List
                     */
                    std::vector<std::string> m_policySet;
                    bool m_policySetHasBeenSet;

                    /**
                     * Call count
                     */
                    int64_t m_callCount;
                    bool m_callCountHasBeenSet;

                    /**
                     * Call error code
0: Successful
                     */
                    int64_t m_code;
                    bool m_codeHasBeenSet;

                    /**
                     * First call time
                     */
                    std::string m_firstCallTime;
                    bool m_firstCallTimeHasBeenSet;

                    /**
                     * Last call time
                     */
                    std::string m_lastCallTime;
                    bool m_lastCallTimeHasBeenSet;

                    /**
                     * ID of the associated asset for the IP. If it is an empty string, the IP is not associated with any asset.
                     */
                    std::string m_instanceID;
                    bool m_instanceIDHasBeenSet;

                    /**
                     * IP associated asset name
                     */
                    std::string m_instanceName;
                    bool m_instanceNameHasBeenSet;

                    /**
                     * Aggregation date
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
                     * Internet service provider.
                     */
                    std::string m_iSP;
                    bool m_iSPHasBeenSet;

                    /**
                     * List of vpc information outside the account
                     */
                    std::vector<SourceIPVpcInfo> m_vpcInfo;
                    bool m_vpcInfoHasBeenSet;

                    /**
                     * List of call request clients
                     */
                    std::vector<std::string> m_reqClient;
                    bool m_reqClientHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_CALLRECORD_H_
