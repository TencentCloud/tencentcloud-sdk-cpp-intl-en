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

#ifndef TENCENTCLOUD_CLS_V20201016_MODEL_MODIFYCLOUDPRODUCTLOGCOLLECTIONREQUEST_H_
#define TENCENTCLOUD_CLS_V20201016_MODEL_MODIFYCLOUDPRODUCTLOGCOLLECTIONREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cls
    {
        namespace V20201016
        {
            namespace Model
            {
                /**
                * ModifyCloudProductLogCollection request structure.
                */
                class ModifyCloudProductLogCollectionRequest : public AbstractModel
                {
                public:
                    ModifyCloudProductLogCollectionRequest();
                    ~ModifyCloudProductLogCollectionRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Instance ID.
                     * @return InstanceId Instance ID.
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置Instance ID.
                     * @param _instanceId Instance ID.
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
                     * 获取Cloud product identifier, support enumerate: CDS, CWP, CDB, TDSQL-C, MongoDB, TDStore, DCDB, MariaDB, PostgreSQL, BH, APIS.
                     * @return AssumerName Cloud product identifier, support enumerate: CDS, CWP, CDB, TDSQL-C, MongoDB, TDStore, DCDB, MariaDB, PostgreSQL, BH, APIS.
                     * 
                     */
                    std::string GetAssumerName() const;

                    /**
                     * 设置Cloud product identifier, support enumerate: CDS, CWP, CDB, TDSQL-C, MongoDB, TDStore, DCDB, MariaDB, PostgreSQL, BH, APIS.
                     * @param _assumerName Cloud product identifier, support enumerate: CDS, CWP, CDB, TDSQL-C, MongoDB, TDStore, DCDB, MariaDB, PostgreSQL, BH, APIS.
                     * 
                     */
                    void SetAssumerName(const std::string& _assumerName);

                    /**
                     * 判断参数 AssumerName 是否已赋值
                     * @return AssumerName 是否已赋值
                     * 
                     */
                    bool AssumerNameHasBeenSet() const;

                    /**
                     * 获取Log type, support enumerate: CDS-AUDIT, CDS-RISK, CDB-AUDIT, TDSQL-C-AUDIT, MongoDB-AUDIT, MongoDB-SlowLog, MongoDB-ErrorLog, TDMYSQL-SLOW, DCDB-AUDIT, DCDB-SLOW, DCDB-ERROR, MariaDB-AUDIT, MariaDB-SLOW, MariaDB-ERROR, PostgreSQL-SLOW, PostgreSQL-ERROR, PostgreSQL-AUDIT, BH-FILELOG, BH-COMMANDLOG, APIS-ACCESS
                     * @return LogType Log type, support enumerate: CDS-AUDIT, CDS-RISK, CDB-AUDIT, TDSQL-C-AUDIT, MongoDB-AUDIT, MongoDB-SlowLog, MongoDB-ErrorLog, TDMYSQL-SLOW, DCDB-AUDIT, DCDB-SLOW, DCDB-ERROR, MariaDB-AUDIT, MariaDB-SLOW, MariaDB-ERROR, PostgreSQL-SLOW, PostgreSQL-ERROR, PostgreSQL-AUDIT, BH-FILELOG, BH-COMMANDLOG, APIS-ACCESS
                     * 
                     */
                    std::string GetLogType() const;

                    /**
                     * 设置Log type, support enumerate: CDS-AUDIT, CDS-RISK, CDB-AUDIT, TDSQL-C-AUDIT, MongoDB-AUDIT, MongoDB-SlowLog, MongoDB-ErrorLog, TDMYSQL-SLOW, DCDB-AUDIT, DCDB-SLOW, DCDB-ERROR, MariaDB-AUDIT, MariaDB-SLOW, MariaDB-ERROR, PostgreSQL-SLOW, PostgreSQL-ERROR, PostgreSQL-AUDIT, BH-FILELOG, BH-COMMANDLOG, APIS-ACCESS
                     * @param _logType Log type, support enumerate: CDS-AUDIT, CDS-RISK, CDB-AUDIT, TDSQL-C-AUDIT, MongoDB-AUDIT, MongoDB-SlowLog, MongoDB-ErrorLog, TDMYSQL-SLOW, DCDB-AUDIT, DCDB-SLOW, DCDB-ERROR, MariaDB-AUDIT, MariaDB-SLOW, MariaDB-ERROR, PostgreSQL-SLOW, PostgreSQL-ERROR, PostgreSQL-AUDIT, BH-FILELOG, BH-COMMANDLOG, APIS-ACCESS
                     * 
                     */
                    void SetLogType(const std::string& _logType);

                    /**
                     * 判断参数 LogType 是否已赋值
                     * @return LogType 是否已赋值
                     * 
                     */
                    bool LogTypeHasBeenSet() const;

                    /**
                     * 获取Cloud product region. Data discrepancies exist in the format of region input parameters for different log types (LogType). Refer to the following example:
-All log types of CDS: ap-guangzhou
- CDB-AUDIT: gz
- TDSQL-C-AUDIT: gz
- MongoDB-AUDIT: gz
- MongoDB-SlowLog:ap-guangzhou
- MongoDB-ErrorLog:ap-guangzhou
- TDMYSQL-SLOW:gz
-All log types of DCDB: gz
-All log types of MariaDB: gz
-PostgreSQL all log types: gz
-BH all log types: overseas-polaris (Hong Kong (China) and other)/fsi-polaris (financial district)/general-polaris (general zone)/intl-sg-prod (international site)
-All log types of APIS: gz
                     * @return CloudProductRegion Cloud product region. Data discrepancies exist in the format of region input parameters for different log types (LogType). Refer to the following example:
-All log types of CDS: ap-guangzhou
- CDB-AUDIT: gz
- TDSQL-C-AUDIT: gz
- MongoDB-AUDIT: gz
- MongoDB-SlowLog:ap-guangzhou
- MongoDB-ErrorLog:ap-guangzhou
- TDMYSQL-SLOW:gz
-All log types of DCDB: gz
-All log types of MariaDB: gz
-PostgreSQL all log types: gz
-BH all log types: overseas-polaris (Hong Kong (China) and other)/fsi-polaris (financial district)/general-polaris (general zone)/intl-sg-prod (international site)
-All log types of APIS: gz
                     * 
                     */
                    std::string GetCloudProductRegion() const;

                    /**
                     * 设置Cloud product region. Data discrepancies exist in the format of region input parameters for different log types (LogType). Refer to the following example:
-All log types of CDS: ap-guangzhou
- CDB-AUDIT: gz
- TDSQL-C-AUDIT: gz
- MongoDB-AUDIT: gz
- MongoDB-SlowLog:ap-guangzhou
- MongoDB-ErrorLog:ap-guangzhou
- TDMYSQL-SLOW:gz
-All log types of DCDB: gz
-All log types of MariaDB: gz
-PostgreSQL all log types: gz
-BH all log types: overseas-polaris (Hong Kong (China) and other)/fsi-polaris (financial district)/general-polaris (general zone)/intl-sg-prod (international site)
-All log types of APIS: gz
                     * @param _cloudProductRegion Cloud product region. Data discrepancies exist in the format of region input parameters for different log types (LogType). Refer to the following example:
-All log types of CDS: ap-guangzhou
- CDB-AUDIT: gz
- TDSQL-C-AUDIT: gz
- MongoDB-AUDIT: gz
- MongoDB-SlowLog:ap-guangzhou
- MongoDB-ErrorLog:ap-guangzhou
- TDMYSQL-SLOW:gz
-All log types of DCDB: gz
-All log types of MariaDB: gz
-PostgreSQL all log types: gz
-BH all log types: overseas-polaris (Hong Kong (China) and other)/fsi-polaris (financial district)/general-polaris (general zone)/intl-sg-prod (international site)
-All log types of APIS: gz
                     * 
                     */
                    void SetCloudProductRegion(const std::string& _cloudProductRegion);

                    /**
                     * 判断参数 CloudProductRegion 是否已赋值
                     * @return CloudProductRegion 是否已赋值
                     * 
                     */
                    bool CloudProductRegionHasBeenSet() const;

                    /**
                     * 获取Logging configuration extended information, normally used to store additional log shipping configuration
                     * @return Extend Logging configuration extended information, normally used to store additional log shipping configuration
                     * 
                     */
                    std::string GetExtend() const;

                    /**
                     * 设置Logging configuration extended information, normally used to store additional log shipping configuration
                     * @param _extend Logging configuration extended information, normally used to store additional log shipping configuration
                     * 
                     */
                    void SetExtend(const std::string& _extend);

                    /**
                     * 判断参数 Extend 是否已赋值
                     * @return Extend 是否已赋值
                     * 
                     */
                    bool ExtendHasBeenSet() const;

                private:

                    /**
                     * Instance ID.
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * Cloud product identifier, support enumerate: CDS, CWP, CDB, TDSQL-C, MongoDB, TDStore, DCDB, MariaDB, PostgreSQL, BH, APIS.
                     */
                    std::string m_assumerName;
                    bool m_assumerNameHasBeenSet;

                    /**
                     * Log type, support enumerate: CDS-AUDIT, CDS-RISK, CDB-AUDIT, TDSQL-C-AUDIT, MongoDB-AUDIT, MongoDB-SlowLog, MongoDB-ErrorLog, TDMYSQL-SLOW, DCDB-AUDIT, DCDB-SLOW, DCDB-ERROR, MariaDB-AUDIT, MariaDB-SLOW, MariaDB-ERROR, PostgreSQL-SLOW, PostgreSQL-ERROR, PostgreSQL-AUDIT, BH-FILELOG, BH-COMMANDLOG, APIS-ACCESS
                     */
                    std::string m_logType;
                    bool m_logTypeHasBeenSet;

                    /**
                     * Cloud product region. Data discrepancies exist in the format of region input parameters for different log types (LogType). Refer to the following example:
-All log types of CDS: ap-guangzhou
- CDB-AUDIT: gz
- TDSQL-C-AUDIT: gz
- MongoDB-AUDIT: gz
- MongoDB-SlowLog:ap-guangzhou
- MongoDB-ErrorLog:ap-guangzhou
- TDMYSQL-SLOW:gz
-All log types of DCDB: gz
-All log types of MariaDB: gz
-PostgreSQL all log types: gz
-BH all log types: overseas-polaris (Hong Kong (China) and other)/fsi-polaris (financial district)/general-polaris (general zone)/intl-sg-prod (international site)
-All log types of APIS: gz
                     */
                    std::string m_cloudProductRegion;
                    bool m_cloudProductRegionHasBeenSet;

                    /**
                     * Logging configuration extended information, normally used to store additional log shipping configuration
                     */
                    std::string m_extend;
                    bool m_extendHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLS_V20201016_MODEL_MODIFYCLOUDPRODUCTLOGCOLLECTIONREQUEST_H_
