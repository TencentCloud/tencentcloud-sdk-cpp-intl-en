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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_EDRSCANTASKHOSTITEM_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_EDRSCANTASKHOSTITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                * Host asset scan details item
                */
                class EDRScanTaskHostItem : public AbstractModel
                {
                public:
                    EDRScanTaskHostItem();
                    ~EDRScanTaskHostItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Host unique identifier</p>
                     * @return Quuid <p>Host unique identifier</p>
                     * 
                     */
                    std::string GetQuuid() const;

                    /**
                     * 设置<p>Host unique identifier</p>
                     * @param _quuid <p>Host unique identifier</p>
                     * 
                     */
                    void SetQuuid(const std::string& _quuid);

                    /**
                     * 判断参数 Quuid 是否已赋值
                     * @return Quuid 是否已赋值
                     * 
                     */
                    bool QuuidHasBeenSet() const;

                    /**
                     * 获取<p>Host name.</p>
                     * @return HostName <p>Host name.</p>
                     * 
                     */
                    std::string GetHostName() const;

                    /**
                     * 设置<p>Host name.</p>
                     * @param _hostName <p>Host name.</p>
                     * 
                     */
                    void SetHostName(const std::string& _hostName);

                    /**
                     * 判断参数 HostName 是否已赋值
                     * @return HostName 是否已赋值
                     * 
                     */
                    bool HostNameHasBeenSet() const;

                    /**
                     * 获取<p>Instance ID.</p>
                     * @return InstanceId <p>Instance ID.</p>
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置<p>Instance ID.</p>
                     * @param _instanceId <p>Instance ID.</p>
                     * 
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取<p>Public IP address</p>
                     * @return PublicIp <p>Public IP address</p>
                     * 
                     */
                    std::string GetPublicIp() const;

                    /**
                     * 设置<p>Public IP address</p>
                     * @param _publicIp <p>Public IP address</p>
                     * 
                     */
                    void SetPublicIp(const std::string& _publicIp);

                    /**
                     * 判断参数 PublicIp 是否已赋值
                     * @return PublicIp 是否已赋值
                     * 
                     */
                    bool PublicIpHasBeenSet() const;

                    /**
                     * 获取<p>Private IP address.</p>
                     * @return PrivateIp <p>Private IP address.</p>
                     * 
                     */
                    std::string GetPrivateIp() const;

                    /**
                     * 设置<p>Private IP address.</p>
                     * @param _privateIp <p>Private IP address.</p>
                     * 
                     */
                    void SetPrivateIp(const std::string& _privateIp);

                    /**
                     * 判断参数 PrivateIp 是否已赋值
                     * @return PrivateIp 是否已赋值
                     * 
                     */
                    bool PrivateIpHasBeenSet() const;

                    /**
                     * 获取<p>Operating system.</p>
                     * @return OsType <p>Operating system.</p>
                     * 
                     */
                    std::string GetOsType() const;

                    /**
                     * 设置<p>Operating system.</p>
                     * @param _osType <p>Operating system.</p>
                     * 
                     */
                    void SetOsType(const std::string& _osType);

                    /**
                     * 判断参数 OsType 是否已赋值
                     * @return OsType 是否已赋值
                     * 
                     */
                    bool OsTypeHasBeenSet() const;

                    /**
                     * 获取<p>Account name of asset ownership (enriched from the backend)</p>
                     * @return AccountName <p>Account name of asset ownership (enriched from the backend)</p>
                     * 
                     */
                    std::string GetAccountName() const;

                    /**
                     * 设置<p>Account name of asset ownership (enriched from the backend)</p>
                     * @param _accountName <p>Account name of asset ownership (enriched from the backend)</p>
                     * 
                     */
                    void SetAccountName(const std::string& _accountName);

                    /**
                     * 判断参数 AccountName 是否已赋值
                     * @return AccountName 是否已赋值
                     * 
                     */
                    bool AccountNameHasBeenSet() const;

                    /**
                     * 获取<p>AppId of the account associated with the asset</p>
                     * @return AppId <p>AppId of the account associated with the asset</p>
                     * 
                     */
                    uint64_t GetAppId() const;

                    /**
                     * 设置<p>AppId of the account associated with the asset</p>
                     * @param _appId <p>AppId of the account associated with the asset</p>
                     * 
                     */
                    void SetAppId(const uint64_t& _appId);

                    /**
                     * 判断参数 AppId 是否已赋值
                     * @return AppId 是否已赋值
                     * 
                     */
                    bool AppIdHasBeenSet() const;

                    /**
                     * 获取<p>Cloud type</p>
                     * @return CloudType <p>Cloud type</p>
                     * 
                     */
                    int64_t GetCloudType() const;

                    /**
                     * 设置<p>Cloud type</p>
                     * @param _cloudType <p>Cloud type</p>
                     * 
                     */
                    void SetCloudType(const int64_t& _cloudType);

                    /**
                     * 判断参数 CloudType 是否已赋值
                     * @return CloudType 是否已赋值
                     * 
                     */
                    bool CloudTypeHasBeenSet() const;

                    /**
                     * 获取<p>Scan status: WAIT/SCANNING/FINISHED/FAILED</p>
                     * @return Status <p>Scan status: WAIT/SCANNING/FINISHED/FAILED</p>
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置<p>Scan status: WAIT/SCANNING/FINISHED/FAILED</p>
                     * @param _status <p>Scan status: WAIT/SCANNING/FINISHED/FAILED</p>
                     * 
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取<p>Risk count</p>
                     * @return RiskCount <p>Risk count</p>
                     * 
                     */
                    int64_t GetRiskCount() const;

                    /**
                     * 设置<p>Risk count</p>
                     * @param _riskCount <p>Risk count</p>
                     * 
                     */
                    void SetRiskCount(const int64_t& _riskCount);

                    /**
                     * 判断参数 RiskCount 是否已赋值
                     * @return RiskCount 是否已赋值
                     * 
                     */
                    bool RiskCountHasBeenSet() const;

                    /**
                     * 获取<p>Failure reason</p>
                     * @return FailReason <p>Failure reason</p>
                     * 
                     */
                    std::string GetFailReason() const;

                    /**
                     * 设置<p>Failure reason</p>
                     * @param _failReason <p>Failure reason</p>
                     * 
                     */
                    void SetFailReason(const std::string& _failReason);

                    /**
                     * 判断参数 FailReason 是否已赋值
                     * @return FailReason 是否已赋值
                     * 
                     */
                    bool FailReasonHasBeenSet() const;

                    /**
                     * 获取<p>Solution.</p>
                     * @return FixSuggestion <p>Solution.</p>
                     * 
                     */
                    std::string GetFixSuggestion() const;

                    /**
                     * 设置<p>Solution.</p>
                     * @param _fixSuggestion <p>Solution.</p>
                     * 
                     */
                    void SetFixSuggestion(const std::string& _fixSuggestion);

                    /**
                     * 判断参数 FixSuggestion 是否已赋值
                     * @return FixSuggestion 是否已赋值
                     * 
                     */
                    bool FixSuggestionHasBeenSet() const;

                private:

                    /**
                     * <p>Host unique identifier</p>
                     */
                    std::string m_quuid;
                    bool m_quuidHasBeenSet;

                    /**
                     * <p>Host name.</p>
                     */
                    std::string m_hostName;
                    bool m_hostNameHasBeenSet;

                    /**
                     * <p>Instance ID.</p>
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * <p>Public IP address</p>
                     */
                    std::string m_publicIp;
                    bool m_publicIpHasBeenSet;

                    /**
                     * <p>Private IP address.</p>
                     */
                    std::string m_privateIp;
                    bool m_privateIpHasBeenSet;

                    /**
                     * <p>Operating system.</p>
                     */
                    std::string m_osType;
                    bool m_osTypeHasBeenSet;

                    /**
                     * <p>Account name of asset ownership (enriched from the backend)</p>
                     */
                    std::string m_accountName;
                    bool m_accountNameHasBeenSet;

                    /**
                     * <p>AppId of the account associated with the asset</p>
                     */
                    uint64_t m_appId;
                    bool m_appIdHasBeenSet;

                    /**
                     * <p>Cloud type</p>
                     */
                    int64_t m_cloudType;
                    bool m_cloudTypeHasBeenSet;

                    /**
                     * <p>Scan status: WAIT/SCANNING/FINISHED/FAILED</p>
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>Risk count</p>
                     */
                    int64_t m_riskCount;
                    bool m_riskCountHasBeenSet;

                    /**
                     * <p>Failure reason</p>
                     */
                    std::string m_failReason;
                    bool m_failReasonHasBeenSet;

                    /**
                     * <p>Solution.</p>
                     */
                    std::string m_fixSuggestion;
                    bool m_fixSuggestionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_EDRSCANTASKHOSTITEM_H_
