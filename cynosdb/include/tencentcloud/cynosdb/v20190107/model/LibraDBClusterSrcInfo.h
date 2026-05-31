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

#ifndef TENCENTCLOUD_CYNOSDB_V20190107_MODEL_LIBRADBCLUSTERSRCINFO_H_
#define TENCENTCLOUD_CYNOSDB_V20190107_MODEL_LIBRADBCLUSTERSRCINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cynosdb
    {
        namespace V20190107
        {
            namespace Model
            {
                /**
                * Source database information of the libra analysis cluster
                */
                class LibraDBClusterSrcInfo : public AbstractModel
                {
                public:
                    LibraDBClusterSrcInfo();
                    ~LibraDBClusterSrcInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Source endpoint type
                     * @return SrcInstanceType Source endpoint type
                     * 
                     */
                    std::string GetSrcInstanceType() const;

                    /**
                     * 设置Source endpoint type
                     * @param _srcInstanceType Source endpoint type
                     * 
                     */
                    void SetSrcInstanceType(const std::string& _srcInstanceType);

                    /**
                     * 判断参数 SrcInstanceType 是否已赋值
                     * @return SrcInstanceType 是否已赋值
                     * 
                     */
                    bool SrcInstanceTypeHasBeenSet() const;

                    /**
                     * 获取Network type.
                     * @return AccessType Network type.
                     * 
                     */
                    std::string GetAccessType() const;

                    /**
                     * 设置Network type.
                     * @param _accessType Network type.
                     * 
                     */
                    void SetAccessType(const std::string& _accessType);

                    /**
                     * 判断参数 AccessType 是否已赋值
                     * @return AccessType 是否已赋值
                     * 
                     */
                    bool AccessTypeHasBeenSet() const;

                    /**
                     * 获取Source instance ID
                     * @return SrcInstanceId Source instance ID
                     * 
                     */
                    std::string GetSrcInstanceId() const;

                    /**
                     * 设置Source instance ID
                     * @param _srcInstanceId Source instance ID
                     * 
                     */
                    void SetSrcInstanceId(const std::string& _srcInstanceId);

                    /**
                     * 判断参数 SrcInstanceId 是否已赋值
                     * @return SrcInstanceId 是否已赋值
                     * 
                     */
                    bool SrcInstanceIdHasBeenSet() const;

                    /**
                     * 获取Source cluster ID
                     * @return SrcClusterId Source cluster ID
                     * 
                     */
                    std::string GetSrcClusterId() const;

                    /**
                     * 设置Source cluster ID
                     * @param _srcClusterId Source cluster ID
                     * 
                     */
                    void SetSrcClusterId(const std::string& _srcClusterId);

                    /**
                     * 判断参数 SrcClusterId 是否已赋值
                     * @return SrcClusterId 是否已赋值
                     * 
                     */
                    bool SrcClusterIdHasBeenSet() const;

                    /**
                     * 获取Address.
                     * @return IP Address.
                     * 
                     */
                    std::string GetIP() const;

                    /**
                     * 设置Address.
                     * @param _iP Address.
                     * 
                     */
                    void SetIP(const std::string& _iP);

                    /**
                     * 判断参数 IP 是否已赋值
                     * @return IP 是否已赋值
                     * 
                     */
                    bool IPHasBeenSet() const;

                    /**
                     * 获取Port.
                     * @return Port Port.
                     * 
                     */
                    std::string GetPort() const;

                    /**
                     * 设置Port.
                     * @param _port Port.
                     * 
                     */
                    void SetPort(const std::string& _port);

                    /**
                     * 判断参数 Port 是否已赋值
                     * @return Port 是否已赋值
                     * 
                     */
                    bool PortHasBeenSet() const;

                    /**
                     * 获取Username.
                     * @return User Username.
                     * 
                     */
                    std::string GetUser() const;

                    /**
                     * 设置Username.
                     * @param _user Username.
                     * 
                     */
                    void SetUser(const std::string& _user);

                    /**
                     * 判断参数 User 是否已赋值
                     * @return User 是否已赋值
                     * 
                     */
                    bool UserHasBeenSet() const;

                    /**
                     * 获取Password.
                     * @return Password Password.
                     * 
                     */
                    std::string GetPassword() const;

                    /**
                     * 设置Password.
                     * @param _password Password.
                     * 
                     */
                    void SetPassword(const std::string& _password);

                    /**
                     * 判断参数 Password 是否已赋值
                     * @return Password 是否已赋值
                     * 
                     */
                    bool PasswordHasBeenSet() const;

                    /**
                     * 获取Source sql mode
                     * @return SqlMode Source sql mode
                     * 
                     */
                    std::string GetSqlMode() const;

                    /**
                     * 设置Source sql mode
                     * @param _sqlMode Source sql mode
                     * 
                     */
                    void SetSqlMode(const std::string& _sqlMode);

                    /**
                     * 判断参数 SqlMode 是否已赋值
                     * @return SqlMode 是否已赋值
                     * 
                     */
                    bool SqlModeHasBeenSet() const;

                    /**
                     * 获取Source application id
                     * @return SrcAppId Source application id
                     * 
                     */
                    int64_t GetSrcAppId() const;

                    /**
                     * 设置Source application id
                     * @param _srcAppId Source application id
                     * 
                     */
                    void SetSrcAppId(const int64_t& _srcAppId);

                    /**
                     * 判断参数 SrcAppId 是否已赋值
                     * @return SrcAppId 是否已赋值
                     * 
                     */
                    bool SrcAppIdHasBeenSet() const;

                    /**
                     * 获取source account
                     * @return SrcUin source account
                     * 
                     */
                    std::string GetSrcUin() const;

                    /**
                     * 设置source account
                     * @param _srcUin source account
                     * 
                     */
                    void SetSrcUin(const std::string& _srcUin);

                    /**
                     * 判断参数 SrcUin 是否已赋值
                     * @return SrcUin 是否已赋值
                     * 
                     */
                    bool SrcUinHasBeenSet() const;

                    /**
                     * 获取sub-account
                     * @return SrcSubAccountUin sub-account
                     * 
                     */
                    std::string GetSrcSubAccountUin() const;

                    /**
                     * 设置sub-account
                     * @param _srcSubAccountUin sub-account
                     * 
                     */
                    void SetSrcSubAccountUin(const std::string& _srcSubAccountUin);

                    /**
                     * 判断参数 SrcSubAccountUin 是否已赋值
                     * @return SrcSubAccountUin 是否已赋值
                     * 
                     */
                    bool SrcSubAccountUinHasBeenSet() const;

                    /**
                     * 获取Account
                     * @return AccountMode Account
                     * 
                     */
                    std::string GetAccountMode() const;

                    /**
                     * 设置Account
                     * @param _accountMode Account
                     * 
                     */
                    void SetAccountMode(const std::string& _accountMode);

                    /**
                     * 判断参数 AccountMode 是否已赋值
                     * @return AccountMode 是否已赋值
                     * 
                     */
                    bool AccountModeHasBeenSet() const;

                    /**
                     * 获取Source instance region
                     * @return Region Source instance region
                     * 
                     */
                    std::string GetRegion() const;

                    /**
                     * 设置Source instance region
                     * @param _region Source instance region
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
                     * 获取Operation of the source instance
                     * @return Operation Operation of the source instance
                     * 
                     */
                    std::string GetOperation() const;

                    /**
                     * 设置Operation of the source instance
                     * @param _operation Operation of the source instance
                     * 
                     */
                    void SetOperation(const std::string& _operation);

                    /**
                     * 判断参数 Operation 是否已赋值
                     * @return Operation 是否已赋值
                     * 
                     */
                    bool OperationHasBeenSet() const;

                private:

                    /**
                     * Source endpoint type
                     */
                    std::string m_srcInstanceType;
                    bool m_srcInstanceTypeHasBeenSet;

                    /**
                     * Network type.
                     */
                    std::string m_accessType;
                    bool m_accessTypeHasBeenSet;

                    /**
                     * Source instance ID
                     */
                    std::string m_srcInstanceId;
                    bool m_srcInstanceIdHasBeenSet;

                    /**
                     * Source cluster ID
                     */
                    std::string m_srcClusterId;
                    bool m_srcClusterIdHasBeenSet;

                    /**
                     * Address.
                     */
                    std::string m_iP;
                    bool m_iPHasBeenSet;

                    /**
                     * Port.
                     */
                    std::string m_port;
                    bool m_portHasBeenSet;

                    /**
                     * Username.
                     */
                    std::string m_user;
                    bool m_userHasBeenSet;

                    /**
                     * Password.
                     */
                    std::string m_password;
                    bool m_passwordHasBeenSet;

                    /**
                     * Source sql mode
                     */
                    std::string m_sqlMode;
                    bool m_sqlModeHasBeenSet;

                    /**
                     * Source application id
                     */
                    int64_t m_srcAppId;
                    bool m_srcAppIdHasBeenSet;

                    /**
                     * source account
                     */
                    std::string m_srcUin;
                    bool m_srcUinHasBeenSet;

                    /**
                     * sub-account
                     */
                    std::string m_srcSubAccountUin;
                    bool m_srcSubAccountUinHasBeenSet;

                    /**
                     * Account
                     */
                    std::string m_accountMode;
                    bool m_accountModeHasBeenSet;

                    /**
                     * Source instance region
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * Operation of the source instance
                     */
                    std::string m_operation;
                    bool m_operationHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CYNOSDB_V20190107_MODEL_LIBRADBCLUSTERSRCINFO_H_
