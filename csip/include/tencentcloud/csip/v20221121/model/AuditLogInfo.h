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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_AUDITLOGINFO_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_AUDITLOGINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/csip/v20221121/model/HitRules.h>
#include <tencentcloud/csip/v20221121/model/Location.h>
#include <tencentcloud/csip/v20221121/model/TableField.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * Audit log list information.
                */
                class AuditLogInfo : public AbstractModel
                {
                public:
                    AuditLogInfo();
                    ~AuditLogInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取AI score.
                     * @return AiScore AI score.
                     * 
                     */
                    double GetAiScore() const;

                    /**
                     * 设置AI score.
                     * @param _aiScore AI score.
                     * 
                     */
                    void SetAiScore(const double& _aiScore);

                    /**
                     * 判断参数 AiScore 是否已赋值
                     * @return AiScore 是否已赋值
                     * 
                     */
                    bool AiScoreHasBeenSet() const;

                    /**
                     * 获取Application user.
                     * @return AppUser Application user.
                     * 
                     */
                    std::string GetAppUser() const;

                    /**
                     * 设置Application user.
                     * @param _appUser Application user.
                     * 
                     */
                    void SetAppUser(const std::string& _appUser);

                    /**
                     * 判断参数 AppUser 是否已赋值
                     * @return AppUser 是否已赋值
                     * 
                     */
                    bool AppUserHasBeenSet() const;

                    /**
                     * 获取Backup data package.
                     * @return BackPacket Backup data package.
                     * 
                     */
                    std::string GetBackPacket() const;

                    /**
                     * 设置Backup data package.
                     * @param _backPacket Backup data package.
                     * 
                     */
                    void SetBackPacket(const std::string& _backPacket);

                    /**
                     * 判断参数 BackPacket 是否已赋值
                     * @return BackPacket 是否已赋值
                     * 
                     */
                    bool BackPacketHasBeenSet() const;

                    /**
                     * 获取Client IP
                     * @return ClientIp Client IP
                     * 
                     */
                    std::string GetClientIp() const;

                    /**
                     * 设置Client IP
                     * @param _clientIp Client IP
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
                     * 获取Client Mac.
                     * @return ClientMac Client Mac.
                     * 
                     */
                    std::string GetClientMac() const;

                    /**
                     * 设置Client Mac.
                     * @param _clientMac Client Mac.
                     * 
                     */
                    void SetClientMac(const std::string& _clientMac);

                    /**
                     * 判断参数 ClientMac 是否已赋值
                     * @return ClientMac 是否已赋值
                     * 
                     */
                    bool ClientMacHasBeenSet() const;

                    /**
                     * 获取Terminal name. When the value is Proxy, it indicates CASB proxy traffic. Otherwise, it indicates agent traffic.
                     * @return ClientName Terminal name. When the value is Proxy, it indicates CASB proxy traffic. Otherwise, it indicates agent traffic.
                     * 
                     */
                    std::string GetClientName() const;

                    /**
                     * 设置Terminal name. When the value is Proxy, it indicates CASB proxy traffic. Otherwise, it indicates agent traffic.
                     * @param _clientName Terminal name. When the value is Proxy, it indicates CASB proxy traffic. Otherwise, it indicates agent traffic.
                     * 
                     */
                    void SetClientName(const std::string& _clientName);

                    /**
                     * 判断参数 ClientName 是否已赋值
                     * @return ClientName 是否已赋值
                     * 
                     */
                    bool ClientNameHasBeenSet() const;

                    /**
                     * 获取Client user.
                     * @return ClientUser Client user.
                     * 
                     */
                    std::string GetClientUser() const;

                    /**
                     * 设置Client user.
                     * @param _clientUser Client user.
                     * 
                     */
                    void SetClientUser(const std::string& _clientUser);

                    /**
                     * 判断参数 ClientUser 是否已赋值
                     * @return ClientUser 是否已赋值
                     * 
                     */
                    bool ClientUserHasBeenSet() const;

                    /**
                     * 获取Client port
                     * @return ClientPort Client port
                     * 
                     */
                    uint64_t GetClientPort() const;

                    /**
                     * 设置Client port
                     * @param _clientPort Client port
                     * 
                     */
                    void SetClientPort(const uint64_t& _clientPort);

                    /**
                     * 判断参数 ClientPort 是否已赋值
                     * @return ClientPort 是否已赋值
                     * 
                     */
                    bool ClientPortHasBeenSet() const;

                    /**
                     * 获取Risk level
                     * @return DangerLevel Risk level
                     * 
                     */
                    uint64_t GetDangerLevel() const;

                    /**
                     * 设置Risk level
                     * @param _dangerLevel Risk level
                     * 
                     */
                    void SetDangerLevel(const uint64_t& _dangerLevel);

                    /**
                     * 判断参数 DangerLevel 是否已赋值
                     * @return DangerLevel 是否已赋值
                     * 
                     */
                    bool DangerLevelHasBeenSet() const;

                    /**
                     * 获取Database IP.
                     * @return DbIp Database IP.
                     * 
                     */
                    std::string GetDbIp() const;

                    /**
                     * 设置Database IP.
                     * @param _dbIp Database IP.
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
                     * 获取Database name.
                     * @return DbName Database name.
                     * 
                     */
                    std::string GetDbName() const;

                    /**
                     * 设置Database name.
                     * @param _dbName Database name.
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
                     * 获取Database port.
                     * @return DbPort Database port.
                     * 
                     */
                    uint64_t GetDbPort() const;

                    /**
                     * 设置Database port.
                     * @param _dbPort Database port.
                     * 
                     */
                    void SetDbPort(const uint64_t& _dbPort);

                    /**
                     * 判断参数 DbPort 是否已赋值
                     * @return DbPort 是否已赋值
                     * 
                     */
                    bool DbPortHasBeenSet() const;

                    /**
                     * 获取Database user
                     * @return DbUser Database user
                     * 
                     */
                    std::string GetDbUser() const;

                    /**
                     * 设置Database user
                     * @param _dbUser Database user
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
                     * 获取Number of affected rows
                     * @return EffectRow Number of affected rows
                     * 
                     */
                    uint64_t GetEffectRow() const;

                    /**
                     * 设置Number of affected rows
                     * @param _effectRow Number of affected rows
                     * 
                     */
                    void SetEffectRow(const uint64_t& _effectRow);

                    /**
                     * 判断参数 EffectRow 是否已赋值
                     * @return EffectRow 是否已赋值
                     * 
                     */
                    bool EffectRowHasBeenSet() const;

                    /**
                     * 获取Execution time, unit: ms
                     * @return ExecTime Execution time, unit: ms
                     * 
                     */
                    uint64_t GetExecTime() const;

                    /**
                     * 设置Execution time, unit: ms
                     * @param _execTime Execution time, unit: ms
                     * 
                     */
                    void SetExecTime(const uint64_t& _execTime);

                    /**
                     * 判断参数 ExecTime 是否已赋值
                     * @return ExecTime 是否已赋值
                     * 
                     */
                    bool ExecTimeHasBeenSet() const;

                    /**
                     * 获取Matched rule
                     * @return HitRule Matched rule
                     * 
                     */
                    std::string GetHitRule() const;

                    /**
                     * 设置Matched rule
                     * @param _hitRule Matched rule
                     * 
                     */
                    void SetHitRule(const std::string& _hitRule);

                    /**
                     * 判断参数 HitRule 是否已赋值
                     * @return HitRule 是否已赋值
                     * 
                     */
                    bool HitRuleHasBeenSet() const;

                    /**
                     * 获取Log ID
                     * @return Id Log ID
                     * 
                     */
                    uint64_t GetId() const;

                    /**
                     * 设置Log ID
                     * @param _id Log ID
                     * 
                     */
                    void SetId(const uint64_t& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取Data asset name
                     * @return InstanceId Data asset name
                     * 
                     */
                    uint64_t GetInstanceId() const;

                    /**
                     * 设置Data asset name
                     * @param _instanceId Data asset name
                     * 
                     */
                    void SetInstanceId(const uint64_t& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取Audit unit name.
                     * @return InstanceName Audit unit name.
                     * 
                     */
                    std::string GetInstanceName() const;

                    /**
                     * 设置Audit unit name.
                     * @param _instanceName Audit unit name.
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
                     * 获取Operational statement (SQL statement).
                     * @return OpSql Operational statement (SQL statement).
                     * 
                     */
                    std::string GetOpSql() const;

                    /**
                     * 设置Operational statement (SQL statement).
                     * @param _opSql Operational statement (SQL statement).
                     * 
                     */
                    void SetOpSql(const std::string& _opSql);

                    /**
                     * 判断参数 OpSql 是否已赋值
                     * @return OpSql 是否已赋值
                     * 
                     */
                    bool OpSqlHasBeenSet() const;

                    /**
                     * 获取Operation time (time).
                     * @return OpTime Operation time (time).
                     * 
                     */
                    uint64_t GetOpTime() const;

                    /**
                     * 设置Operation time (time).
                     * @param _opTime Operation time (time).
                     * 
                     */
                    void SetOpTime(const uint64_t& _opTime);

                    /**
                     * 判断参数 OpTime 是否已赋值
                     * @return OpTime 是否已赋值
                     * 
                     */
                    bool OpTimeHasBeenSet() const;

                    /**
                     * 获取message
                     * @return RetMsg message
                     * 
                     */
                    std::string GetRetMsg() const;

                    /**
                     * 设置message
                     * @param _retMsg message
                     * 
                     */
                    void SetRetMsg(const std::string& _retMsg);

                    /**
                     * 判断参数 RetMsg 是否已赋值
                     * @return RetMsg 是否已赋值
                     * 
                     */
                    bool RetMsgHasBeenSet() const;

                    /**
                     * 获取code
                     * @return RetNo code
                     * 
                     */
                    uint64_t GetRetNo() const;

                    /**
                     * 设置code
                     * @param _retNo code
                     * 
                     */
                    void SetRetNo(const uint64_t& _retNo);

                    /**
                     * 判断参数 RetNo 是否已赋值
                     * @return RetNo 是否已赋值
                     * 
                     */
                    bool RetNoHasBeenSet() const;

                    /**
                     * 获取Session ID
                     * @return SessionId Session ID
                     * 
                     */
                    std::string GetSessionId() const;

                    /**
                     * 设置Session ID
                     * @param _sessionId Session ID
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
                     * 获取Operation type.
                     * @return SqlType Operation type.
                     * 
                     */
                    std::string GetSqlType() const;

                    /**
                     * 设置Operation type.
                     * @param _sqlType Operation type.
                     * 
                     */
                    void SetSqlType(const std::string& _sqlType);

                    /**
                     * 判断参数 SqlType 是否已赋值
                     * @return SqlType 是否已赋值
                     * 
                     */
                    bool SqlTypeHasBeenSet() const;

                    /**
                     * 获取Table name
                     * @return TableName Table name
                     * 
                     */
                    std::string GetTableName() const;

                    /**
                     * 设置Table name
                     * @param _tableName Table name
                     * 
                     */
                    void SetTableName(const std::string& _tableName);

                    /**
                     * 判断参数 TableName 是否已赋值
                     * @return TableName 是否已赋值
                     * 
                     */
                    bool TableNameHasBeenSet() const;

                    /**
                     * 获取Data asset name
                     * @return AssetName Data asset name
                     * 
                     */
                    std::string GetAssetName() const;

                    /**
                     * 设置Data asset name
                     * @param _assetName Data asset name
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
                     * 获取Rule set.
                     * @return HitRules Rule set.
                     * 
                     */
                    std::vector<HitRules> GetHitRules() const;

                    /**
                     * 设置Rule set.
                     * @param _hitRules Rule set.
                     * 
                     */
                    void SetHitRules(const std::vector<HitRules>& _hitRules);

                    /**
                     * 判断参数 HitRules 是否已赋值
                     * @return HitRules 是否已赋值
                     * 
                     */
                    bool HitRulesHasBeenSet() const;

                    /**
                     * 获取Traffic source
                     * @return SourceType Traffic source
                     * 
                     */
                    std::string GetSourceType() const;

                    /**
                     * 设置Traffic source
                     * @param _sourceType Traffic source
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
                     * 获取Single audit log ID.
                     * @return ReqId Single audit log ID.
                     * 
                     */
                    std::string GetReqId() const;

                    /**
                     * 设置Single audit log ID.
                     * @param _reqId Single audit log ID.
                     * 
                     */
                    void SetReqId(const std::string& _reqId);

                    /**
                     * 判断参数 ReqId 是否已赋值
                     * @return ReqId 是否已赋值
                     * 
                     */
                    bool ReqIdHasBeenSet() const;

                    /**
                     * 获取Main SQL types: DML, DDL, DCL, and TCL.
                     * @return SqlMainType Main SQL types: DML, DDL, DCL, and TCL.
                     * 
                     */
                    std::string GetSqlMainType() const;

                    /**
                     * 设置Main SQL types: DML, DDL, DCL, and TCL.
                     * @param _sqlMainType Main SQL types: DML, DDL, DCL, and TCL.
                     * 
                     */
                    void SetSqlMainType(const std::string& _sqlMainType);

                    /**
                     * 判断参数 SqlMainType 是否已赋值
                     * @return SqlMainType 是否已赋值
                     * 
                     */
                    bool SqlMainTypeHasBeenSet() const;

                    /**
                     * 获取Table name collection.
                     * @return TableNames Table name collection.
                     * 
                     */
                    std::vector<std::string> GetTableNames() const;

                    /**
                     * 设置Table name collection.
                     * @param _tableNames Table name collection.
                     * 
                     */
                    void SetTableNames(const std::vector<std::string>& _tableNames);

                    /**
                     * 判断参数 TableNames 是否已赋值
                     * @return TableNames 是否已赋值
                     * 
                     */
                    bool TableNamesHasBeenSet() const;

                    /**
                     * 获取Field name collection
                     * @return FieldNames Field name collection
                     * 
                     */
                    std::vector<std::string> GetFieldNames() const;

                    /**
                     * 设置Field name collection
                     * @param _fieldNames Field name collection
                     * 
                     */
                    void SetFieldNames(const std::vector<std::string>& _fieldNames);

                    /**
                     * 判断参数 FieldNames 是否已赋值
                     * @return FieldNames 是否已赋值
                     * 
                     */
                    bool FieldNamesHasBeenSet() const;

                    /**
                     * 获取Field name
                     * @return FieldName Field name
                     * 
                     */
                    std::string GetFieldName() const;

                    /**
                     * 设置Field name
                     * @param _fieldName Field name
                     * 
                     */
                    void SetFieldName(const std::string& _fieldName);

                    /**
                     * 判断参数 FieldName 是否已赋值
                     * @return FieldName 是否已赋值
                     * 
                     */
                    bool FieldNameHasBeenSet() const;

                    /**
                     * 获取Database type
                     * @return DbType Database type
                     * 
                     */
                    std::string GetDbType() const;

                    /**
                     * 设置Database type
                     * @param _dbType Database type
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
                     * 获取Client tool.
                     * @return ClientDriverName Client tool.
                     * 
                     */
                    std::string GetClientDriverName() const;

                    /**
                     * 设置Client tool.
                     * @param _clientDriverName Client tool.
                     * 
                     */
                    void SetClientDriverName(const std::string& _clientDriverName);

                    /**
                     * 判断参数 ClientDriverName 是否已赋值
                     * @return ClientDriverName 是否已赋值
                     * 
                     */
                    bool ClientDriverNameHasBeenSet() const;

                    /**
                     * 获取Location information
                     * @return Location Location information
                     * 
                     */
                    Location GetLocation() const;

                    /**
                     * 设置Location information
                     * @param _location Location information
                     * 
                     */
                    void SetLocation(const Location& _location);

                    /**
                     * 判断参数 Location 是否已赋值
                     * @return Location 是否已赋值
                     * 
                     */
                    bool LocationHasBeenSet() const;

                    /**
                     * 获取Field information (contains sensitive information).
                     * @return FieldDetails Field information (contains sensitive information).
                     * 
                     */
                    std::vector<TableField> GetFieldDetails() const;

                    /**
                     * 设置Field information (contains sensitive information).
                     * @param _fieldDetails Field information (contains sensitive information).
                     * 
                     */
                    void SetFieldDetails(const std::vector<TableField>& _fieldDetails);

                    /**
                     * 判断参数 FieldDetails 是否已赋值
                     * @return FieldDetails 是否已赋值
                     * 
                     */
                    bool FieldDetailsHasBeenSet() const;

                    /**
                     * 获取app id of the account that owns the asset
                     * @return AppId app id of the account that owns the asset
                     * 
                     */
                    uint64_t GetAppId() const;

                    /**
                     * 设置app id of the account that owns the asset
                     * @param _appId app id of the account that owns the asset
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
                     * 获取Account nickname
                     * @return NickName Account nickname
                     * 
                     */
                    std::string GetNickName() const;

                    /**
                     * 设置Account nickname
                     * @param _nickName Account nickname
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
                     * 获取Account uin of the asset owner
                     * @return Uin Account uin of the asset owner
                     * 
                     */
                    std::string GetUin() const;

                    /**
                     * 设置Account uin of the asset owner
                     * @param _uin Account uin of the asset owner
                     * 
                     */
                    void SetUin(const std::string& _uin);

                    /**
                     * 判断参数 Uin 是否已赋值
                     * @return Uin 是否已赋值
                     * 
                     */
                    bool UinHasBeenSet() const;

                private:

                    /**
                     * AI score.
                     */
                    double m_aiScore;
                    bool m_aiScoreHasBeenSet;

                    /**
                     * Application user.
                     */
                    std::string m_appUser;
                    bool m_appUserHasBeenSet;

                    /**
                     * Backup data package.
                     */
                    std::string m_backPacket;
                    bool m_backPacketHasBeenSet;

                    /**
                     * Client IP
                     */
                    std::string m_clientIp;
                    bool m_clientIpHasBeenSet;

                    /**
                     * Client Mac.
                     */
                    std::string m_clientMac;
                    bool m_clientMacHasBeenSet;

                    /**
                     * Terminal name. When the value is Proxy, it indicates CASB proxy traffic. Otherwise, it indicates agent traffic.
                     */
                    std::string m_clientName;
                    bool m_clientNameHasBeenSet;

                    /**
                     * Client user.
                     */
                    std::string m_clientUser;
                    bool m_clientUserHasBeenSet;

                    /**
                     * Client port
                     */
                    uint64_t m_clientPort;
                    bool m_clientPortHasBeenSet;

                    /**
                     * Risk level
                     */
                    uint64_t m_dangerLevel;
                    bool m_dangerLevelHasBeenSet;

                    /**
                     * Database IP.
                     */
                    std::string m_dbIp;
                    bool m_dbIpHasBeenSet;

                    /**
                     * Database name.
                     */
                    std::string m_dbName;
                    bool m_dbNameHasBeenSet;

                    /**
                     * Database port.
                     */
                    uint64_t m_dbPort;
                    bool m_dbPortHasBeenSet;

                    /**
                     * Database user
                     */
                    std::string m_dbUser;
                    bool m_dbUserHasBeenSet;

                    /**
                     * Number of affected rows
                     */
                    uint64_t m_effectRow;
                    bool m_effectRowHasBeenSet;

                    /**
                     * Execution time, unit: ms
                     */
                    uint64_t m_execTime;
                    bool m_execTimeHasBeenSet;

                    /**
                     * Matched rule
                     */
                    std::string m_hitRule;
                    bool m_hitRuleHasBeenSet;

                    /**
                     * Log ID
                     */
                    uint64_t m_id;
                    bool m_idHasBeenSet;

                    /**
                     * Data asset name
                     */
                    uint64_t m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * Audit unit name.
                     */
                    std::string m_instanceName;
                    bool m_instanceNameHasBeenSet;

                    /**
                     * Operational statement (SQL statement).
                     */
                    std::string m_opSql;
                    bool m_opSqlHasBeenSet;

                    /**
                     * Operation time (time).
                     */
                    uint64_t m_opTime;
                    bool m_opTimeHasBeenSet;

                    /**
                     * message
                     */
                    std::string m_retMsg;
                    bool m_retMsgHasBeenSet;

                    /**
                     * code
                     */
                    uint64_t m_retNo;
                    bool m_retNoHasBeenSet;

                    /**
                     * Session ID
                     */
                    std::string m_sessionId;
                    bool m_sessionIdHasBeenSet;

                    /**
                     * Operation type.
                     */
                    std::string m_sqlType;
                    bool m_sqlTypeHasBeenSet;

                    /**
                     * Table name
                     */
                    std::string m_tableName;
                    bool m_tableNameHasBeenSet;

                    /**
                     * Data asset name
                     */
                    std::string m_assetName;
                    bool m_assetNameHasBeenSet;

                    /**
                     * Rule set.
                     */
                    std::vector<HitRules> m_hitRules;
                    bool m_hitRulesHasBeenSet;

                    /**
                     * Traffic source
                     */
                    std::string m_sourceType;
                    bool m_sourceTypeHasBeenSet;

                    /**
                     * Single audit log ID.
                     */
                    std::string m_reqId;
                    bool m_reqIdHasBeenSet;

                    /**
                     * Main SQL types: DML, DDL, DCL, and TCL.
                     */
                    std::string m_sqlMainType;
                    bool m_sqlMainTypeHasBeenSet;

                    /**
                     * Table name collection.
                     */
                    std::vector<std::string> m_tableNames;
                    bool m_tableNamesHasBeenSet;

                    /**
                     * Field name collection
                     */
                    std::vector<std::string> m_fieldNames;
                    bool m_fieldNamesHasBeenSet;

                    /**
                     * Field name
                     */
                    std::string m_fieldName;
                    bool m_fieldNameHasBeenSet;

                    /**
                     * Database type
                     */
                    std::string m_dbType;
                    bool m_dbTypeHasBeenSet;

                    /**
                     * Client tool.
                     */
                    std::string m_clientDriverName;
                    bool m_clientDriverNameHasBeenSet;

                    /**
                     * Location information
                     */
                    Location m_location;
                    bool m_locationHasBeenSet;

                    /**
                     * Field information (contains sensitive information).
                     */
                    std::vector<TableField> m_fieldDetails;
                    bool m_fieldDetailsHasBeenSet;

                    /**
                     * app id of the account that owns the asset
                     */
                    uint64_t m_appId;
                    bool m_appIdHasBeenSet;

                    /**
                     * Account nickname
                     */
                    std::string m_nickName;
                    bool m_nickNameHasBeenSet;

                    /**
                     * Account uin of the asset owner
                     */
                    std::string m_uin;
                    bool m_uinHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_AUDITLOGINFO_H_
