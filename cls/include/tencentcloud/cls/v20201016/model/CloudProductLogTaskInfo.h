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

#ifndef TENCENTCLOUD_CLS_V20201016_MODEL_CLOUDPRODUCTLOGTASKINFO_H_
#define TENCENTCLOUD_CLS_V20201016_MODEL_CLOUDPRODUCTLOGTASKINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                * Cloud Product log delivery task info
                */
                class CloudProductLogTaskInfo : public AbstractModel
                {
                public:
                    CloudProductLogTaskInfo();
                    ~CloudProductLogTaskInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Log service region</p>
                     * @return ClsRegion <p>Log service region</p>
                     * 
                     */
                    std::string GetClsRegion() const;

                    /**
                     * 设置<p>Log service region</p>
                     * @param _clsRegion <p>Log service region</p>
                     * 
                     */
                    void SetClsRegion(const std::string& _clsRegion);

                    /**
                     * 判断参数 ClsRegion 是否已赋值
                     * @return ClsRegion 是否已赋值
                     * 
                     */
                    bool ClsRegionHasBeenSet() const;

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
                     * 获取<p>Logset ID</p>
                     * @return LogsetId <p>Logset ID</p>
                     * 
                     */
                    std::string GetLogsetId() const;

                    /**
                     * 设置<p>Logset ID</p>
                     * @param _logsetId <p>Logset ID</p>
                     * 
                     */
                    void SetLogsetId(const std::string& _logsetId);

                    /**
                     * 判断参数 LogsetId 是否已赋值
                     * @return LogsetId 是否已赋值
                     * 
                     */
                    bool LogsetIdHasBeenSet() const;

                    /**
                     * 获取<p>Log topic ID.</p>
                     * @return TopicId <p>Log topic ID.</p>
                     * 
                     */
                    std::string GetTopicId() const;

                    /**
                     * 设置<p>Log topic ID.</p>
                     * @param _topicId <p>Log topic ID.</p>
                     * 
                     */
                    void SetTopicId(const std::string& _topicId);

                    /**
                     * 判断参数 TopicId 是否已赋值
                     * @return TopicId 是否已赋值
                     * 
                     */
                    bool TopicIdHasBeenSet() const;

                    /**
                     * 获取<p>Extended information for logging configuration, generally used to store additional log delivery configuration</p>
                     * @return Extend <p>Extended information for logging configuration, generally used to store additional log delivery configuration</p>
                     * 
                     */
                    std::string GetExtend() const;

                    /**
                     * 设置<p>Extended information for logging configuration, generally used to store additional log delivery configuration</p>
                     * @param _extend <p>Extended information for logging configuration, generally used to store additional log delivery configuration</p>
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
                     * 获取<p>Log type, supports enumeration: CDS-AUDIT, CDS-RISK, CDB-AUDIT, TDSQL-C-AUDIT, MongoDB-AUDIT, MongoDB-SlowLog, MongoDB-ErrorLog, TDMYSQL-SLOW, DCDB-AUDIT, DCDB-SLOW, DCDB-ERROR, MariaDB-AUDIT, MariaDB-SLOW, MariaDB-ERROR, PostgreSQL-SLOW, PostgreSQL-ERROR, PostgreSQL-AUDIT, BH-FILELOG, BH-COMMANDLOG, APIS-ACCESS</p>
                     * @return LogType <p>Log type, supports enumeration: CDS-AUDIT, CDS-RISK, CDB-AUDIT, TDSQL-C-AUDIT, MongoDB-AUDIT, MongoDB-SlowLog, MongoDB-ErrorLog, TDMYSQL-SLOW, DCDB-AUDIT, DCDB-SLOW, DCDB-ERROR, MariaDB-AUDIT, MariaDB-SLOW, MariaDB-ERROR, PostgreSQL-SLOW, PostgreSQL-ERROR, PostgreSQL-AUDIT, BH-FILELOG, BH-COMMANDLOG, APIS-ACCESS</p>
                     * 
                     */
                    std::string GetLogType() const;

                    /**
                     * 设置<p>Log type, supports enumeration: CDS-AUDIT, CDS-RISK, CDB-AUDIT, TDSQL-C-AUDIT, MongoDB-AUDIT, MongoDB-SlowLog, MongoDB-ErrorLog, TDMYSQL-SLOW, DCDB-AUDIT, DCDB-SLOW, DCDB-ERROR, MariaDB-AUDIT, MariaDB-SLOW, MariaDB-ERROR, PostgreSQL-SLOW, PostgreSQL-ERROR, PostgreSQL-AUDIT, BH-FILELOG, BH-COMMANDLOG, APIS-ACCESS</p>
                     * @param _logType <p>Log type, supports enumeration: CDS-AUDIT, CDS-RISK, CDB-AUDIT, TDSQL-C-AUDIT, MongoDB-AUDIT, MongoDB-SlowLog, MongoDB-ErrorLog, TDMYSQL-SLOW, DCDB-AUDIT, DCDB-SLOW, DCDB-ERROR, MariaDB-AUDIT, MariaDB-SLOW, MariaDB-ERROR, PostgreSQL-SLOW, PostgreSQL-ERROR, PostgreSQL-AUDIT, BH-FILELOG, BH-COMMANDLOG, APIS-ACCESS</p>
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
                     * 获取<p>Task status: 0 creating, 1 creation completed, 2 deleting</p>
                     * @return Status <p>Task status: 0 creating, 1 creation completed, 2 deleting</p>
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置<p>Task status: 0 creating, 1 creation completed, 2 deleting</p>
                     * @param _status <p>Task status: 0 creating, 1 creation completed, 2 deleting</p>
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
                     * 获取<p>Tag information of the topic associated with the delivery task</p>
                     * @return TopicTags <p>Tag information of the topic associated with the delivery task</p>
                     * 
                     */
                    std::vector<Tag> GetTopicTags() const;

                    /**
                     * 设置<p>Tag information of the topic associated with the delivery task</p>
                     * @param _topicTags <p>Tag information of the topic associated with the delivery task</p>
                     * 
                     */
                    void SetTopicTags(const std::vector<Tag>& _topicTags);

                    /**
                     * 判断参数 TopicTags 是否已赋值
                     * @return TopicTags 是否已赋值
                     * 
                     */
                    bool TopicTagsHasBeenSet() const;

                    /**
                     * 获取<p>Tag information of the logset associated with the delivery task</p>
                     * @return LogsetTags <p>Tag information of the logset associated with the delivery task</p>
                     * 
                     */
                    std::vector<Tag> GetLogsetTags() const;

                    /**
                     * 设置<p>Tag information of the logset associated with the delivery task</p>
                     * @param _logsetTags <p>Tag information of the logset associated with the delivery task</p>
                     * 
                     */
                    void SetLogsetTags(const std::vector<Tag>& _logsetTags);

                    /**
                     * 判断参数 LogsetTags 是否已赋值
                     * @return LogsetTags 是否已赋值
                     * 
                     */
                    bool LogsetTagsHasBeenSet() const;

                private:

                    /**
                     * <p>Log service region</p>
                     */
                    std::string m_clsRegion;
                    bool m_clsRegionHasBeenSet;

                    /**
                     * <p>Instance ID.</p>
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * <p>Logset ID</p>
                     */
                    std::string m_logsetId;
                    bool m_logsetIdHasBeenSet;

                    /**
                     * <p>Log topic ID.</p>
                     */
                    std::string m_topicId;
                    bool m_topicIdHasBeenSet;

                    /**
                     * <p>Extended information for logging configuration, generally used to store additional log delivery configuration</p>
                     */
                    std::string m_extend;
                    bool m_extendHasBeenSet;

                    /**
                     * <p>Log type, supports enumeration: CDS-AUDIT, CDS-RISK, CDB-AUDIT, TDSQL-C-AUDIT, MongoDB-AUDIT, MongoDB-SlowLog, MongoDB-ErrorLog, TDMYSQL-SLOW, DCDB-AUDIT, DCDB-SLOW, DCDB-ERROR, MariaDB-AUDIT, MariaDB-SLOW, MariaDB-ERROR, PostgreSQL-SLOW, PostgreSQL-ERROR, PostgreSQL-AUDIT, BH-FILELOG, BH-COMMANDLOG, APIS-ACCESS</p>
                     */
                    std::string m_logType;
                    bool m_logTypeHasBeenSet;

                    /**
                     * <p>Task status: 0 creating, 1 creation completed, 2 deleting</p>
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>Tag information of the topic associated with the delivery task</p>
                     */
                    std::vector<Tag> m_topicTags;
                    bool m_topicTagsHasBeenSet;

                    /**
                     * <p>Tag information of the logset associated with the delivery task</p>
                     */
                    std::vector<Tag> m_logsetTags;
                    bool m_logsetTagsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLS_V20201016_MODEL_CLOUDPRODUCTLOGTASKINFO_H_
