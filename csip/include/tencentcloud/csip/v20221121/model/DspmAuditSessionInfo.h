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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_DSPMAUDITSESSIONINFO_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_DSPMAUDITSESSIONINFO_H_

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
                * Audit session list information.
                */
                class DspmAuditSessionInfo : public AbstractModel
                {
                public:
                    DspmAuditSessionInfo();
                    ~DspmAuditSessionInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Audit log count.</p>
                     * @return SqlCount <p>Audit log count.</p>
                     * 
                     */
                    int64_t GetSqlCount() const;

                    /**
                     * 设置<p>Audit log count.</p>
                     * @param _sqlCount <p>Audit log count.</p>
                     * 
                     */
                    void SetSqlCount(const int64_t& _sqlCount);

                    /**
                     * 判断参数 SqlCount 是否已赋值
                     * @return SqlCount 是否已赋值
                     * 
                     */
                    bool SqlCountHasBeenSet() const;

                    /**
                     * 获取<p>Logout time.</p>
                     * @return LogoutTime <p>Logout time.</p>
                     * 
                     */
                    int64_t GetLogoutTime() const;

                    /**
                     * 设置<p>Logout time.</p>
                     * @param _logoutTime <p>Logout time.</p>
                     * 
                     */
                    void SetLogoutTime(const int64_t& _logoutTime);

                    /**
                     * 判断参数 LogoutTime 是否已赋值
                     * @return LogoutTime 是否已赋值
                     * 
                     */
                    bool LogoutTimeHasBeenSet() const;

                    /**
                     * 获取<p>Client IP</p>
                     * @return ClientIp <p>Client IP</p>
                     * 
                     */
                    std::string GetClientIp() const;

                    /**
                     * 设置<p>Client IP</p>
                     * @param _clientIp <p>Client IP</p>
                     * 
                     */
                    void SetClientIp(const std::string& _clientIp);

                    /**
                     * 判断参数 ClientIp 是否已赋值
                     * @return ClientIp 是否已赋值
                     * 
                     */
                    bool ClientIpHasBeenSet() const;

                    /**
                     * 获取<p>Client port</p>
                     * @return ClientPort <p>Client port</p>
                     * 
                     */
                    int64_t GetClientPort() const;

                    /**
                     * 设置<p>Client port</p>
                     * @param _clientPort <p>Client port</p>
                     * 
                     */
                    void SetClientPort(const int64_t& _clientPort);

                    /**
                     * 判断参数 ClientPort 是否已赋值
                     * @return ClientPort 是否已赋值
                     * 
                     */
                    bool ClientPortHasBeenSet() const;

                    /**
                     * 获取<p>Database IP</p>
                     * @return DbIp <p>Database IP</p>
                     * 
                     */
                    std::string GetDbIp() const;

                    /**
                     * 设置<p>Database IP</p>
                     * @param _dbIp <p>Database IP</p>
                     * 
                     */
                    void SetDbIp(const std::string& _dbIp);

                    /**
                     * 判断参数 DbIp 是否已赋值
                     * @return DbIp 是否已赋值
                     * 
                     */
                    bool DbIpHasBeenSet() const;

                    /**
                     * 获取<p>Database name</p>
                     * @return DbName <p>Database name</p>
                     * 
                     */
                    std::string GetDbName() const;

                    /**
                     * 设置<p>Database name</p>
                     * @param _dbName <p>Database name</p>
                     * 
                     */
                    void SetDbName(const std::string& _dbName);

                    /**
                     * 判断参数 DbName 是否已赋值
                     * @return DbName 是否已赋值
                     * 
                     */
                    bool DbNameHasBeenSet() const;

                    /**
                     * 获取<p>Database port</p>
                     * @return DbPort <p>Database port</p>
                     * 
                     */
                    int64_t GetDbPort() const;

                    /**
                     * 设置<p>Database port</p>
                     * @param _dbPort <p>Database port</p>
                     * 
                     */
                    void SetDbPort(const int64_t& _dbPort);

                    /**
                     * 判断参数 DbPort 是否已赋值
                     * @return DbPort 是否已赋值
                     * 
                     */
                    bool DbPortHasBeenSet() const;

                    /**
                     * 获取<p>Database users.</p>
                     * @return DbUser <p>Database users.</p>
                     * 
                     */
                    std::string GetDbUser() const;

                    /**
                     * 设置<p>Database users.</p>
                     * @param _dbUser <p>Database users.</p>
                     * 
                     */
                    void SetDbUser(const std::string& _dbUser);

                    /**
                     * 判断参数 DbUser 是否已赋值
                     * @return DbUser 是否已赋值
                     * 
                     */
                    bool DbUserHasBeenSet() const;

                    /**
                     * 获取<p>Audit unit ID</p>
                     * @return InstanceId <p>Audit unit ID</p>
                     * 
                     */
                    int64_t GetInstanceId() const;

                    /**
                     * 设置<p>Audit unit ID</p>
                     * @param _instanceId <p>Audit unit ID</p>
                     * 
                     */
                    void SetInstanceId(const int64_t& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取<p>Operation time.</p>
                     * @return OpTime <p>Operation time.</p>
                     * 
                     */
                    int64_t GetOpTime() const;

                    /**
                     * 设置<p>Operation time.</p>
                     * @param _opTime <p>Operation time.</p>
                     * 
                     */
                    void SetOpTime(const int64_t& _opTime);

                    /**
                     * 判断参数 OpTime 是否已赋值
                     * @return OpTime 是否已赋值
                     * 
                     */
                    bool OpTimeHasBeenSet() const;

                    /**
                     * 获取<p>Status code</p>
                     * @return RetNo <p>Status code</p>
                     * 
                     */
                    int64_t GetRetNo() const;

                    /**
                     * 设置<p>Status code</p>
                     * @param _retNo <p>Status code</p>
                     * 
                     */
                    void SetRetNo(const int64_t& _retNo);

                    /**
                     * 判断参数 RetNo 是否已赋值
                     * @return RetNo 是否已赋值
                     * 
                     */
                    bool RetNoHasBeenSet() const;

                    /**
                     * 获取<p>Session Id</p>
                     * @return SessionId <p>Session Id</p>
                     * 
                     */
                    std::string GetSessionId() const;

                    /**
                     * 设置<p>Session Id</p>
                     * @param _sessionId <p>Session Id</p>
                     * 
                     */
                    void SetSessionId(const std::string& _sessionId);

                    /**
                     * 判断参数 SessionId 是否已赋值
                     * @return SessionId 是否已赋值
                     * 
                     */
                    bool SessionIdHasBeenSet() const;

                    /**
                     * 获取<p>Login time.</p>
                     * @return LoginTime <p>Login time.</p>
                     * 
                     */
                    int64_t GetLoginTime() const;

                    /**
                     * 设置<p>Login time.</p>
                     * @param _loginTime <p>Login time.</p>
                     * 
                     */
                    void SetLoginTime(const int64_t& _loginTime);

                    /**
                     * 判断参数 LoginTime 是否已赋值
                     * @return LoginTime 是否已赋值
                     * 
                     */
                    bool LoginTimeHasBeenSet() const;

                    /**
                     * 获取<p>Data asset name.</p>
                     * @return InstanceName <p>Data asset name.</p>
                     * 
                     */
                    std::string GetInstanceName() const;

                    /**
                     * 设置<p>Data asset name.</p>
                     * @param _instanceName <p>Data asset name.</p>
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
                     * 获取<p>Data asset name.</p>
                     * @return AssetName <p>Data asset name.</p>
                     * 
                     */
                    std::string GetAssetName() const;

                    /**
                     * 设置<p>Data asset name.</p>
                     * @param _assetName <p>Data asset name.</p>
                     * 
                     */
                    void SetAssetName(const std::string& _assetName);

                    /**
                     * 判断参数 AssetName 是否已赋值
                     * @return AssetName 是否已赋值
                     * 
                     */
                    bool AssetNameHasBeenSet() const;

                    /**
                     * 获取<p>Traffic source.</p>
                     * @return SourceType <p>Traffic source.</p>
                     * 
                     */
                    std::string GetSourceType() const;

                    /**
                     * 设置<p>Traffic source.</p>
                     * @param _sourceType <p>Traffic source.</p>
                     * 
                     */
                    void SetSourceType(const std::string& _sourceType);

                    /**
                     * 判断参数 SourceType 是否已赋值
                     * @return SourceType 是否已赋值
                     * 
                     */
                    bool SourceTypeHasBeenSet() const;

                    /**
                     * 获取<p>Traffic source in English</p>
                     * @return SourceTypeEn <p>Traffic source in English</p>
                     * 
                     */
                    std::string GetSourceTypeEn() const;

                    /**
                     * 设置<p>Traffic source in English</p>
                     * @param _sourceTypeEn <p>Traffic source in English</p>
                     * 
                     */
                    void SetSourceTypeEn(const std::string& _sourceTypeEn);

                    /**
                     * 判断参数 SourceTypeEn 是否已赋值
                     * @return SourceTypeEn 是否已赋值
                     * 
                     */
                    bool SourceTypeEnHasBeenSet() const;

                    /**
                     * 获取<p>app id of the account associated with the asset</p>
                     * @return AppId <p>app id of the account associated with the asset</p>
                     * 
                     */
                    uint64_t GetAppId() const;

                    /**
                     * 设置<p>app id of the account associated with the asset</p>
                     * @param _appId <p>app id of the account associated with the asset</p>
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
                     * 获取<p>Traffic source.</p>
                     * @return SourceTypeEnDisplayName <p>Traffic source.</p>
                     * 
                     */
                    std::string GetSourceTypeEnDisplayName() const;

                    /**
                     * 设置<p>Traffic source.</p>
                     * @param _sourceTypeEnDisplayName <p>Traffic source.</p>
                     * 
                     */
                    void SetSourceTypeEnDisplayName(const std::string& _sourceTypeEnDisplayName);

                    /**
                     * 判断参数 SourceTypeEnDisplayName 是否已赋值
                     * @return SourceTypeEnDisplayName 是否已赋值
                     * 
                     */
                    bool SourceTypeEnDisplayNameHasBeenSet() const;

                    /**
                     * 获取<p>Nickname</p>
                     * @return NickName <p>Nickname</p>
                     * 
                     */
                    std::string GetNickName() const;

                    /**
                     * 设置<p>Nickname</p>
                     * @param _nickName <p>Nickname</p>
                     * 
                     */
                    void SetNickName(const std::string& _nickName);

                    /**
                     * 判断参数 NickName 是否已赋值
                     * @return NickName 是否已赋值
                     * 
                     */
                    bool NickNameHasBeenSet() const;

                    /**
                     * 获取<p>uid</p>
                     * @return Uin <p>uid</p>
                     * 
                     */
                    std::string GetUin() const;

                    /**
                     * 设置<p>uid</p>
                     * @param _uin <p>uid</p>
                     * 
                     */
                    void SetUin(const std::string& _uin);

                    /**
                     * 判断参数 Uin 是否已赋值
                     * @return Uin 是否已赋值
                     * 
                     */
                    bool UinHasBeenSet() const;

                    /**
                     * 获取<p>Database type</p><p>Enumeration values:</p><ul><li>MongoDB: mongodb</li></ul>
                     * @return DbType <p>Database type</p><p>Enumeration values:</p><ul><li>MongoDB: mongodb</li></ul>
                     * 
                     */
                    std::string GetDbType() const;

                    /**
                     * 设置<p>Database type</p><p>Enumeration values:</p><ul><li>MongoDB: mongodb</li></ul>
                     * @param _dbType <p>Database type</p><p>Enumeration values:</p><ul><li>MongoDB: mongodb</li></ul>
                     * 
                     */
                    void SetDbType(const std::string& _dbType);

                    /**
                     * 判断参数 DbType 是否已赋值
                     * @return DbType 是否已赋值
                     * 
                     */
                    bool DbTypeHasBeenSet() const;

                    /**
                     * 获取<p>Asset type</p><p>Enumeration values:</p><ul><li>cdb: mysql</li><li>mongodb: mongodb</li></ul>
                     * @return AssetType <p>Asset type</p><p>Enumeration values:</p><ul><li>cdb: mysql</li><li>mongodb: mongodb</li></ul>
                     * 
                     */
                    std::string GetAssetType() const;

                    /**
                     * 设置<p>Asset type</p><p>Enumeration values:</p><ul><li>cdb: mysql</li><li>mongodb: mongodb</li></ul>
                     * @param _assetType <p>Asset type</p><p>Enumeration values:</p><ul><li>cdb: mysql</li><li>mongodb: mongodb</li></ul>
                     * 
                     */
                    void SetAssetType(const std::string& _assetType);

                    /**
                     * 判断参数 AssetType 是否已赋值
                     * @return AssetType 是否已赋值
                     * 
                     */
                    bool AssetTypeHasBeenSet() const;

                private:

                    /**
                     * <p>Audit log count.</p>
                     */
                    int64_t m_sqlCount;
                    bool m_sqlCountHasBeenSet;

                    /**
                     * <p>Logout time.</p>
                     */
                    int64_t m_logoutTime;
                    bool m_logoutTimeHasBeenSet;

                    /**
                     * <p>Client IP</p>
                     */
                    std::string m_clientIp;
                    bool m_clientIpHasBeenSet;

                    /**
                     * <p>Client port</p>
                     */
                    int64_t m_clientPort;
                    bool m_clientPortHasBeenSet;

                    /**
                     * <p>Database IP</p>
                     */
                    std::string m_dbIp;
                    bool m_dbIpHasBeenSet;

                    /**
                     * <p>Database name</p>
                     */
                    std::string m_dbName;
                    bool m_dbNameHasBeenSet;

                    /**
                     * <p>Database port</p>
                     */
                    int64_t m_dbPort;
                    bool m_dbPortHasBeenSet;

                    /**
                     * <p>Database users.</p>
                     */
                    std::string m_dbUser;
                    bool m_dbUserHasBeenSet;

                    /**
                     * <p>Audit unit ID</p>
                     */
                    int64_t m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * <p>Operation time.</p>
                     */
                    int64_t m_opTime;
                    bool m_opTimeHasBeenSet;

                    /**
                     * <p>Status code</p>
                     */
                    int64_t m_retNo;
                    bool m_retNoHasBeenSet;

                    /**
                     * <p>Session Id</p>
                     */
                    std::string m_sessionId;
                    bool m_sessionIdHasBeenSet;

                    /**
                     * <p>Login time.</p>
                     */
                    int64_t m_loginTime;
                    bool m_loginTimeHasBeenSet;

                    /**
                     * <p>Data asset name.</p>
                     */
                    std::string m_instanceName;
                    bool m_instanceNameHasBeenSet;

                    /**
                     * <p>Data asset name.</p>
                     */
                    std::string m_assetName;
                    bool m_assetNameHasBeenSet;

                    /**
                     * <p>Traffic source.</p>
                     */
                    std::string m_sourceType;
                    bool m_sourceTypeHasBeenSet;

                    /**
                     * <p>Traffic source in English</p>
                     */
                    std::string m_sourceTypeEn;
                    bool m_sourceTypeEnHasBeenSet;

                    /**
                     * <p>app id of the account associated with the asset</p>
                     */
                    uint64_t m_appId;
                    bool m_appIdHasBeenSet;

                    /**
                     * <p>Traffic source.</p>
                     */
                    std::string m_sourceTypeEnDisplayName;
                    bool m_sourceTypeEnDisplayNameHasBeenSet;

                    /**
                     * <p>Nickname</p>
                     */
                    std::string m_nickName;
                    bool m_nickNameHasBeenSet;

                    /**
                     * <p>uid</p>
                     */
                    std::string m_uin;
                    bool m_uinHasBeenSet;

                    /**
                     * <p>Database type</p><p>Enumeration values:</p><ul><li>MongoDB: mongodb</li></ul>
                     */
                    std::string m_dbType;
                    bool m_dbTypeHasBeenSet;

                    /**
                     * <p>Asset type</p><p>Enumeration values:</p><ul><li>cdb: mysql</li><li>mongodb: mongodb</li></ul>
                     */
                    std::string m_assetType;
                    bool m_assetTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_DSPMAUDITSESSIONINFO_H_
