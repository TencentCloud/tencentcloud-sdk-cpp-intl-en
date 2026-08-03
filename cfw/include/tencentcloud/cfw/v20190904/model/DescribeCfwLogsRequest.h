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

#ifndef TENCENTCLOUD_CFW_V20190904_MODEL_DESCRIBECFWLOGSREQUEST_H_
#define TENCENTCLOUD_CFW_V20190904_MODEL_DESCRIBECFWLOGSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cfw
    {
        namespace V20190904
        {
            namespace Model
            {
                /**
                * DescribeCfwLogs request structure.
                */
                class DescribeCfwLogsRequest : public AbstractModel
                {
                public:
                    DescribeCfwLogsRequest();
                    ~DescribeCfwLogsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Log type. Required for the initial query; cannot be passed when using NextToken for continuation. cfw_netflow_border=Internet boundary traffic, cfw_netflow_vpc=VPC east-west traffic, cfw_netflow_nat=NAT firewall traffic, cfw_netflow_nta=NDR/NTA traffic, cfw_netflow_dns=DNS firewall log, cfw_rule_threatinfo=Intrusion defense/Threat Intelligence Alarm, cfw_rule_acl=Internet Boundary Access Control log, cfw_rule_vpc_acl=VPC access control log, cfw_rule_nat_acl=NAT access control log, cfw_ndr_subject_risk=NDR topic risk, cfw_ndr_dataleak_entry=NDR sensitive data leak, cfw_ndr_ai_audit=NDR AI application identification and Large Model Invocation audit, cfw_feature_collect=Statistical feature and baseline anomaly, cfw_behavior_collect=Beacon/DNS/port/cert/VPC mutual access behavior, operate_log_all=Operation audit log.
                     * @return LogType Log type. Required for the initial query; cannot be passed when using NextToken for continuation. cfw_netflow_border=Internet boundary traffic, cfw_netflow_vpc=VPC east-west traffic, cfw_netflow_nat=NAT firewall traffic, cfw_netflow_nta=NDR/NTA traffic, cfw_netflow_dns=DNS firewall log, cfw_rule_threatinfo=Intrusion defense/Threat Intelligence Alarm, cfw_rule_acl=Internet Boundary Access Control log, cfw_rule_vpc_acl=VPC access control log, cfw_rule_nat_acl=NAT access control log, cfw_ndr_subject_risk=NDR topic risk, cfw_ndr_dataleak_entry=NDR sensitive data leak, cfw_ndr_ai_audit=NDR AI application identification and Large Model Invocation audit, cfw_feature_collect=Statistical feature and baseline anomaly, cfw_behavior_collect=Beacon/DNS/port/cert/VPC mutual access behavior, operate_log_all=Operation audit log.
                     * 
                     */
                    std::string GetLogType() const;

                    /**
                     * 设置Log type. Required for the initial query; cannot be passed when using NextToken for continuation. cfw_netflow_border=Internet boundary traffic, cfw_netflow_vpc=VPC east-west traffic, cfw_netflow_nat=NAT firewall traffic, cfw_netflow_nta=NDR/NTA traffic, cfw_netflow_dns=DNS firewall log, cfw_rule_threatinfo=Intrusion defense/Threat Intelligence Alarm, cfw_rule_acl=Internet Boundary Access Control log, cfw_rule_vpc_acl=VPC access control log, cfw_rule_nat_acl=NAT access control log, cfw_ndr_subject_risk=NDR topic risk, cfw_ndr_dataleak_entry=NDR sensitive data leak, cfw_ndr_ai_audit=NDR AI application identification and Large Model Invocation audit, cfw_feature_collect=Statistical feature and baseline anomaly, cfw_behavior_collect=Beacon/DNS/port/cert/VPC mutual access behavior, operate_log_all=Operation audit log.
                     * @param _logType Log type. Required for the initial query; cannot be passed when using NextToken for continuation. cfw_netflow_border=Internet boundary traffic, cfw_netflow_vpc=VPC east-west traffic, cfw_netflow_nat=NAT firewall traffic, cfw_netflow_nta=NDR/NTA traffic, cfw_netflow_dns=DNS firewall log, cfw_rule_threatinfo=Intrusion defense/Threat Intelligence Alarm, cfw_rule_acl=Internet Boundary Access Control log, cfw_rule_vpc_acl=VPC access control log, cfw_rule_nat_acl=NAT access control log, cfw_ndr_subject_risk=NDR topic risk, cfw_ndr_dataleak_entry=NDR sensitive data leak, cfw_ndr_ai_audit=NDR AI application identification and Large Model Invocation audit, cfw_feature_collect=Statistical feature and baseline anomaly, cfw_behavior_collect=Beacon/DNS/port/cert/VPC mutual access behavior, operate_log_all=Operation audit log.
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
                     * 获取Log filter expression. Default * means no filtering; for example src_ip:1.1.1.1. Queryable fields vary with LogType. You should preferentially use the field name returned in the corresponding Items. Do not guess non-existing fields. It cannot be passed when using NextToken for continued query.
                     * @return Query Log filter expression. Default * means no filtering; for example src_ip:1.1.1.1. Queryable fields vary with LogType. You should preferentially use the field name returned in the corresponding Items. Do not guess non-existing fields. It cannot be passed when using NextToken for continued query.
                     * 
                     */
                    std::string GetQuery() const;

                    /**
                     * 设置Log filter expression. Default * means no filtering; for example src_ip:1.1.1.1. Queryable fields vary with LogType. You should preferentially use the field name returned in the corresponding Items. Do not guess non-existing fields. It cannot be passed when using NextToken for continued query.
                     * @param _query Log filter expression. Default * means no filtering; for example src_ip:1.1.1.1. Queryable fields vary with LogType. You should preferentially use the field name returned in the corresponding Items. Do not guess non-existing fields. It cannot be passed when using NextToken for continued query.
                     * 
                     */
                    void SetQuery(const std::string& _query);

                    /**
                     * 判断参数 Query 是否已赋值
                     * @return Query 是否已赋值
                     * 
                     */
                    bool QueryHasBeenSet() const;

                    /**
                     * 获取Query start time. Supports RFC3339, YYYY-MM-DD HH:MM:SS, YYYY-MM-DD, or Unix timestamp. Input to query the TimeRange backward from this time. Cannot be imported when using NextToken for continued querying.
                     * @return StartTime Query start time. Supports RFC3339, YYYY-MM-DD HH:MM:SS, YYYY-MM-DD, or Unix timestamp. Input to query the TimeRange backward from this time. Cannot be imported when using NextToken for continued querying.
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置Query start time. Supports RFC3339, YYYY-MM-DD HH:MM:SS, YYYY-MM-DD, or Unix timestamp. Input to query the TimeRange backward from this time. Cannot be imported when using NextToken for continued querying.
                     * @param _startTime Query start time. Supports RFC3339, YYYY-MM-DD HH:MM:SS, YYYY-MM-DD, or Unix timestamp. Input to query the TimeRange backward from this time. Cannot be imported when using NextToken for continued querying.
                     * 
                     */
                    void SetStartTime(const std::string& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     * 
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取Query time range. Default 1h; format is positive integer plus unit m/h/d, such as 5m, 1h, 24h, 7d; cannot be passed when using NextToken for continuation.
                     * @return TimeRange Query time range. Default 1h; format is positive integer plus unit m/h/d, such as 5m, 1h, 24h, 7d; cannot be passed when using NextToken for continuation.
                     * 
                     */
                    std::string GetTimeRange() const;

                    /**
                     * 设置Query time range. Default 1h; format is positive integer plus unit m/h/d, such as 5m, 1h, 24h, 7d; cannot be passed when using NextToken for continuation.
                     * @param _timeRange Query time range. Default 1h; format is positive integer plus unit m/h/d, such as 5m, 1h, 24h, 7d; cannot be passed when using NextToken for continuation.
                     * 
                     */
                    void SetTimeRange(const std::string& _timeRange);

                    /**
                     * 判断参数 TimeRange 是否已赋值
                     * @return TimeRange 是否已赋值
                     * 
                     */
                    bool TimeRangeHasBeenSet() const;

                    /**
                     * 获取Return limit. Selectable for initial query, default 100; value 1 to 1000; cannot be passed when using NextToken for continued query.
                     * @return Limit Return limit. Selectable for initial query, default 100; value 1 to 1000; cannot be passed when using NextToken for continued query.
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置Return limit. Selectable for initial query, default 100; value 1 to 1000; cannot be passed when using NextToken for continued query.
                     * @param _limit Return limit. Selectable for initial query, default 100; value 1 to 1000; cannot be passed when using NextToken for continued query.
                     * 
                     */
                    void SetLimit(const int64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取Previous page opaque continuation token returned by Response.Data. Not required for initial query; only required for continuation query with NextToken. Invalid, tampered, or mismatched tenant will be rejected.
                     * @return NextToken Previous page opaque continuation token returned by Response.Data. Not required for initial query; only required for continuation query with NextToken. Invalid, tampered, or mismatched tenant will be rejected.
                     * 
                     */
                    std::string GetNextToken() const;

                    /**
                     * 设置Previous page opaque continuation token returned by Response.Data. Not required for initial query; only required for continuation query with NextToken. Invalid, tampered, or mismatched tenant will be rejected.
                     * @param _nextToken Previous page opaque continuation token returned by Response.Data. Not required for initial query; only required for continuation query with NextToken. Invalid, tampered, or mismatched tenant will be rejected.
                     * 
                     */
                    void SetNextToken(const std::string& _nextToken);

                    /**
                     * 判断参数 NextToken 是否已赋值
                     * @return NextToken 是否已赋值
                     * 
                     */
                    bool NextTokenHasBeenSet() const;

                private:

                    /**
                     * Log type. Required for the initial query; cannot be passed when using NextToken for continuation. cfw_netflow_border=Internet boundary traffic, cfw_netflow_vpc=VPC east-west traffic, cfw_netflow_nat=NAT firewall traffic, cfw_netflow_nta=NDR/NTA traffic, cfw_netflow_dns=DNS firewall log, cfw_rule_threatinfo=Intrusion defense/Threat Intelligence Alarm, cfw_rule_acl=Internet Boundary Access Control log, cfw_rule_vpc_acl=VPC access control log, cfw_rule_nat_acl=NAT access control log, cfw_ndr_subject_risk=NDR topic risk, cfw_ndr_dataleak_entry=NDR sensitive data leak, cfw_ndr_ai_audit=NDR AI application identification and Large Model Invocation audit, cfw_feature_collect=Statistical feature and baseline anomaly, cfw_behavior_collect=Beacon/DNS/port/cert/VPC mutual access behavior, operate_log_all=Operation audit log.
                     */
                    std::string m_logType;
                    bool m_logTypeHasBeenSet;

                    /**
                     * Log filter expression. Default * means no filtering; for example src_ip:1.1.1.1. Queryable fields vary with LogType. You should preferentially use the field name returned in the corresponding Items. Do not guess non-existing fields. It cannot be passed when using NextToken for continued query.
                     */
                    std::string m_query;
                    bool m_queryHasBeenSet;

                    /**
                     * Query start time. Supports RFC3339, YYYY-MM-DD HH:MM:SS, YYYY-MM-DD, or Unix timestamp. Input to query the TimeRange backward from this time. Cannot be imported when using NextToken for continued querying.
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * Query time range. Default 1h; format is positive integer plus unit m/h/d, such as 5m, 1h, 24h, 7d; cannot be passed when using NextToken for continuation.
                     */
                    std::string m_timeRange;
                    bool m_timeRangeHasBeenSet;

                    /**
                     * Return limit. Selectable for initial query, default 100; value 1 to 1000; cannot be passed when using NextToken for continued query.
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * Previous page opaque continuation token returned by Response.Data. Not required for initial query; only required for continuation query with NextToken. Invalid, tampered, or mismatched tenant will be rejected.
                     */
                    std::string m_nextToken;
                    bool m_nextTokenHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFW_V20190904_MODEL_DESCRIBECFWLOGSREQUEST_H_
