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
#include <tencentcloud/cls/v20201016/model/Tag.h>


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
                     * 获取<p>Cloud product identifier, supports enumerate: CDS, CWP, CDB, TDSQL-C, MongoDB, TDStore, DCDB, MariaDB, PostgreSQL, BH, APIS</p>
                     * @return AssumerName <p>Cloud product identifier, supports enumerate: CDS, CWP, CDB, TDSQL-C, MongoDB, TDStore, DCDB, MariaDB, PostgreSQL, BH, APIS</p>
                     * 
                     */
                    std::string GetAssumerName() const;

                    /**
                     * 设置<p>Cloud product identifier, supports enumerate: CDS, CWP, CDB, TDSQL-C, MongoDB, TDStore, DCDB, MariaDB, PostgreSQL, BH, APIS</p>
                     * @param _assumerName <p>Cloud product identifier, supports enumerate: CDS, CWP, CDB, TDSQL-C, MongoDB, TDStore, DCDB, MariaDB, PostgreSQL, BH, APIS</p>
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
                     * 获取<p>Log type. Supports enumeration: CDS-AUDIT, CDS-RISK, CDB-AUDIT, TDSQL-C-AUDIT, MongoDB-AUDIT, MongoDB-SlowLog, MongoDB  ErrorLog, TDMYSQL-SLOW, DCDB-AUDIT, DCDB-SLOW, DCDB-ERROR, MariaDB-AUDIT, MariaDB-SLOW, MariaDB-ERROR, PostgreSQL-SLOW, PostgreSQL-ERROR, PostgreSQL-AUDIT, BH-FILELOG, BH-COMMANDLOG, APIS-ACCESS</p>
                     * @return LogType <p>Log type. Supports enumeration: CDS-AUDIT, CDS-RISK, CDB-AUDIT, TDSQL-C-AUDIT, MongoDB-AUDIT, MongoDB-SlowLog, MongoDB  ErrorLog, TDMYSQL-SLOW, DCDB-AUDIT, DCDB-SLOW, DCDB-ERROR, MariaDB-AUDIT, MariaDB-SLOW, MariaDB-ERROR, PostgreSQL-SLOW, PostgreSQL-ERROR, PostgreSQL-AUDIT, BH-FILELOG, BH-COMMANDLOG, APIS-ACCESS</p>
                     * 
                     */
                    std::string GetLogType() const;

                    /**
                     * 设置<p>Log type. Supports enumeration: CDS-AUDIT, CDS-RISK, CDB-AUDIT, TDSQL-C-AUDIT, MongoDB-AUDIT, MongoDB-SlowLog, MongoDB  ErrorLog, TDMYSQL-SLOW, DCDB-AUDIT, DCDB-SLOW, DCDB-ERROR, MariaDB-AUDIT, MariaDB-SLOW, MariaDB-ERROR, PostgreSQL-SLOW, PostgreSQL-ERROR, PostgreSQL-AUDIT, BH-FILELOG, BH-COMMANDLOG, APIS-ACCESS</p>
                     * @param _logType <p>Log type. Supports enumeration: CDS-AUDIT, CDS-RISK, CDB-AUDIT, TDSQL-C-AUDIT, MongoDB-AUDIT, MongoDB-SlowLog, MongoDB  ErrorLog, TDMYSQL-SLOW, DCDB-AUDIT, DCDB-SLOW, DCDB-ERROR, MariaDB-AUDIT, MariaDB-SLOW, MariaDB-ERROR, PostgreSQL-SLOW, PostgreSQL-ERROR, PostgreSQL-AUDIT, BH-FILELOG, BH-COMMANDLOG, APIS-ACCESS</p>
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
                     * 获取<p>Product region. Different log types have different region input formats. Refer to the following example:</p><ul><li>All CDS log types: ap-guangzhou</li><li>CDB-AUDIT: gz</li><li>TDSQL-C-AUDIT: gz</li><li>MongoDB-AUDIT: gz</li><li>MongoDB-SlowLog: ap-guangzhou</li><li>MongoDB-ErrorLog: ap-guangzhou</li><li>TDMYSQL-SLOW: gz</li><li>All DCDB log types: gz</li><li>All MariaDB log types: gz</li><li>All PostgreSQL log types: gz</li><li>All BH log types: overseas-polaris(Hong Kong (China) and other)/fsi-polaris(financial district)/general-polaris(general zone)/intl-sg-prod(international site)</li><li>All APIS log types: gz</li></ul>
                     * @return CloudProductRegion <p>Product region. Different log types have different region input formats. Refer to the following example:</p><ul><li>All CDS log types: ap-guangzhou</li><li>CDB-AUDIT: gz</li><li>TDSQL-C-AUDIT: gz</li><li>MongoDB-AUDIT: gz</li><li>MongoDB-SlowLog: ap-guangzhou</li><li>MongoDB-ErrorLog: ap-guangzhou</li><li>TDMYSQL-SLOW: gz</li><li>All DCDB log types: gz</li><li>All MariaDB log types: gz</li><li>All PostgreSQL log types: gz</li><li>All BH log types: overseas-polaris(Hong Kong (China) and other)/fsi-polaris(financial district)/general-polaris(general zone)/intl-sg-prod(international site)</li><li>All APIS log types: gz</li></ul>
                     * 
                     */
                    std::string GetCloudProductRegion() const;

                    /**
                     * 设置<p>Product region. Different log types have different region input formats. Refer to the following example:</p><ul><li>All CDS log types: ap-guangzhou</li><li>CDB-AUDIT: gz</li><li>TDSQL-C-AUDIT: gz</li><li>MongoDB-AUDIT: gz</li><li>MongoDB-SlowLog: ap-guangzhou</li><li>MongoDB-ErrorLog: ap-guangzhou</li><li>TDMYSQL-SLOW: gz</li><li>All DCDB log types: gz</li><li>All MariaDB log types: gz</li><li>All PostgreSQL log types: gz</li><li>All BH log types: overseas-polaris(Hong Kong (China) and other)/fsi-polaris(financial district)/general-polaris(general zone)/intl-sg-prod(international site)</li><li>All APIS log types: gz</li></ul>
                     * @param _cloudProductRegion <p>Product region. Different log types have different region input formats. Refer to the following example:</p><ul><li>All CDS log types: ap-guangzhou</li><li>CDB-AUDIT: gz</li><li>TDSQL-C-AUDIT: gz</li><li>MongoDB-AUDIT: gz</li><li>MongoDB-SlowLog: ap-guangzhou</li><li>MongoDB-ErrorLog: ap-guangzhou</li><li>TDMYSQL-SLOW: gz</li><li>All DCDB log types: gz</li><li>All MariaDB log types: gz</li><li>All PostgreSQL log types: gz</li><li>All BH log types: overseas-polaris(Hong Kong (China) and other)/fsi-polaris(financial district)/general-polaris(general zone)/intl-sg-prod(international site)</li><li>All APIS log types: gz</li></ul>
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
                     * 获取<p>Logging configuration extended information, generally used to store additional log delivery configuration</p>
                     * @return Extend <p>Logging configuration extended information, generally used to store additional log delivery configuration</p>
                     * 
                     */
                    std::string GetExtend() const;

                    /**
                     * 设置<p>Logging configuration extended information, generally used to store additional log delivery configuration</p>
                     * @param _extend <p>Logging configuration extended information, generally used to store additional log delivery configuration</p>
                     * 
                     */
                    void SetExtend(const std::string& _extend);

                    /**
                     * 判断参数 Extend 是否已赋值
                     * @return Extend 是否已赋值
                     * 
                     */
                    bool ExtendHasBeenSet() const;

                    /**
                     * 获取<p>Description list of tags. By specifying this parameter, you can simultaneously bind tags to the appropriate logset and topic. Supports a maximum of 10 tag key-value pairs. The same resource can only be bound to the same tag key.</p>
                     * @return Tags <p>Description list of tags. By specifying this parameter, you can simultaneously bind tags to the appropriate logset and topic. Supports a maximum of 10 tag key-value pairs. The same resource can only be bound to the same tag key.</p>
                     * 
                     */
                    std::vector<Tag> GetTags() const;

                    /**
                     * 设置<p>Description list of tags. By specifying this parameter, you can simultaneously bind tags to the appropriate logset and topic. Supports a maximum of 10 tag key-value pairs. The same resource can only be bound to the same tag key.</p>
                     * @param _tags <p>Description list of tags. By specifying this parameter, you can simultaneously bind tags to the appropriate logset and topic. Supports a maximum of 10 tag key-value pairs. The same resource can only be bound to the same tag key.</p>
                     * 
                     */
                    void SetTags(const std::vector<Tag>& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     * 
                     */
                    bool TagsHasBeenSet() const;

                private:

                    /**
                     * <p>Instance ID.</p>
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * <p>Cloud product identifier, supports enumerate: CDS, CWP, CDB, TDSQL-C, MongoDB, TDStore, DCDB, MariaDB, PostgreSQL, BH, APIS</p>
                     */
                    std::string m_assumerName;
                    bool m_assumerNameHasBeenSet;

                    /**
                     * <p>Log type. Supports enumeration: CDS-AUDIT, CDS-RISK, CDB-AUDIT, TDSQL-C-AUDIT, MongoDB-AUDIT, MongoDB-SlowLog, MongoDB  ErrorLog, TDMYSQL-SLOW, DCDB-AUDIT, DCDB-SLOW, DCDB-ERROR, MariaDB-AUDIT, MariaDB-SLOW, MariaDB-ERROR, PostgreSQL-SLOW, PostgreSQL-ERROR, PostgreSQL-AUDIT, BH-FILELOG, BH-COMMANDLOG, APIS-ACCESS</p>
                     */
                    std::string m_logType;
                    bool m_logTypeHasBeenSet;

                    /**
                     * <p>Product region. Different log types have different region input formats. Refer to the following example:</p><ul><li>All CDS log types: ap-guangzhou</li><li>CDB-AUDIT: gz</li><li>TDSQL-C-AUDIT: gz</li><li>MongoDB-AUDIT: gz</li><li>MongoDB-SlowLog: ap-guangzhou</li><li>MongoDB-ErrorLog: ap-guangzhou</li><li>TDMYSQL-SLOW: gz</li><li>All DCDB log types: gz</li><li>All MariaDB log types: gz</li><li>All PostgreSQL log types: gz</li><li>All BH log types: overseas-polaris(Hong Kong (China) and other)/fsi-polaris(financial district)/general-polaris(general zone)/intl-sg-prod(international site)</li><li>All APIS log types: gz</li></ul>
                     */
                    std::string m_cloudProductRegion;
                    bool m_cloudProductRegionHasBeenSet;

                    /**
                     * <p>Logging configuration extended information, generally used to store additional log delivery configuration</p>
                     */
                    std::string m_extend;
                    bool m_extendHasBeenSet;

                    /**
                     * <p>Description list of tags. By specifying this parameter, you can simultaneously bind tags to the appropriate logset and topic. Supports a maximum of 10 tag key-value pairs. The same resource can only be bound to the same tag key.</p>
                     */
                    std::vector<Tag> m_tags;
                    bool m_tagsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLS_V20201016_MODEL_MODIFYCLOUDPRODUCTLOGCOLLECTIONREQUEST_H_
