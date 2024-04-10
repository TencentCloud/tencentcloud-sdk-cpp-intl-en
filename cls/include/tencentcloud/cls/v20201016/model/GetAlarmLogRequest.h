/*
 * Copyright (c) 2017-2019 THL A29 Limited, a Tencent company. All Rights Reserved.
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

#ifndef TENCENTCLOUD_CLS_V20201016_MODEL_GETALARMLOGREQUEST_H_
#define TENCENTCLOUD_CLS_V20201016_MODEL_GETALARMLOGREQUEST_H_

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
                * GetAlarmLog request structure.
                */
                class GetAlarmLogRequest : public AbstractModel
                {
                public:
                    GetAlarmLogRequest();
                    ~GetAlarmLogRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Start time of the execution detail to be queried, Unix timestamp, unit: ms.
                     * @return From Start time of the execution detail to be queried, Unix timestamp, unit: ms.
                     * 
                     */
                    int64_t GetFrom() const;

                    /**
                     * 设置Start time of the execution detail to be queried, Unix timestamp, unit: ms.
                     * @param _from Start time of the execution detail to be queried, Unix timestamp, unit: ms.
                     * 
                     */
                    void SetFrom(const int64_t& _from);

                    /**
                     * 判断参数 From 是否已赋值
                     * @return From 是否已赋值
                     * 
                     */
                    bool FromHasBeenSet() const;

                    /**
                     * 获取End time of the execution detail to be queried, Unix timestamp, unit: ms.
                     * @return To End time of the execution detail to be queried, Unix timestamp, unit: ms.
                     * 
                     */
                    int64_t GetTo() const;

                    /**
                     * 设置End time of the execution detail to be queried, Unix timestamp, unit: ms.
                     * @param _to End time of the execution detail to be queried, Unix timestamp, unit: ms.
                     * 
                     */
                    void SetTo(const int64_t& _to);

                    /**
                     * 判断参数 To 是否已赋值
                     * @return To 是否已赋值
                     * 
                     */
                    bool ToHasBeenSet() const;

                    /**
                     * 获取Query filter criteria, for example:
- Query by alert policy ID: `alert_id:"alarm-0745ec00-e605-xxxx-b50b-54afe61fc971"`
- Query by monitoring object ID: `monitored_object:"823d8bfa-76a7-xxxx-8399-8cda74d4009b" `
- Query by alarm policy ID and monitoring object ID: `alert_id:"alarm-0745ec00-e605-xxxx-b50b-54afe61fc971" AND monitored_object:"823d8bfa-76a7-xxxx-8399-8cda74d4009b"`
- Query by alarm policy ID and monitoring object ID, supports SQL statement: `(alert_id:"alarm-5ce45495-09e8-4d58-xxxx-768134bf330c") AND (monitored_object:"3c514e84-6f1f-46ec-xxxx-05de6163f7fe") AND NOT condition_evaluate_result: "Skip" AND condition_evaluate_result:[* TO *] | SELECT count(*) as top50StatisticsTotalCount, count_if(condition_evaluate_result='ProcessError') as top50StatisticsFailureCount, count_if(notification_send_result!='NotSend') as top50NoticeTotalCount, count_if(notification_send_result='SendPartFail' or notification_send_result='SendFail') as top50NoticeFailureCount, alert_id, alert_name, monitored_object, topic_type, happen_threshold, alert_threshold, notify_template group by alert_id, alert_name, monitored_object, topic_type, happen_threshold, alert_threshold, notify_template order by top50StatisticsTotalCount desc limit 1`
                     * @return Query Query filter criteria, for example:
- Query by alert policy ID: `alert_id:"alarm-0745ec00-e605-xxxx-b50b-54afe61fc971"`
- Query by monitoring object ID: `monitored_object:"823d8bfa-76a7-xxxx-8399-8cda74d4009b" `
- Query by alarm policy ID and monitoring object ID: `alert_id:"alarm-0745ec00-e605-xxxx-b50b-54afe61fc971" AND monitored_object:"823d8bfa-76a7-xxxx-8399-8cda74d4009b"`
- Query by alarm policy ID and monitoring object ID, supports SQL statement: `(alert_id:"alarm-5ce45495-09e8-4d58-xxxx-768134bf330c") AND (monitored_object:"3c514e84-6f1f-46ec-xxxx-05de6163f7fe") AND NOT condition_evaluate_result: "Skip" AND condition_evaluate_result:[* TO *] | SELECT count(*) as top50StatisticsTotalCount, count_if(condition_evaluate_result='ProcessError') as top50StatisticsFailureCount, count_if(notification_send_result!='NotSend') as top50NoticeTotalCount, count_if(notification_send_result='SendPartFail' or notification_send_result='SendFail') as top50NoticeFailureCount, alert_id, alert_name, monitored_object, topic_type, happen_threshold, alert_threshold, notify_template group by alert_id, alert_name, monitored_object, topic_type, happen_threshold, alert_threshold, notify_template order by top50StatisticsTotalCount desc limit 1`
                     * 
                     */
                    std::string GetQuery() const;

                    /**
                     * 设置Query filter criteria, for example:
- Query by alert policy ID: `alert_id:"alarm-0745ec00-e605-xxxx-b50b-54afe61fc971"`
- Query by monitoring object ID: `monitored_object:"823d8bfa-76a7-xxxx-8399-8cda74d4009b" `
- Query by alarm policy ID and monitoring object ID: `alert_id:"alarm-0745ec00-e605-xxxx-b50b-54afe61fc971" AND monitored_object:"823d8bfa-76a7-xxxx-8399-8cda74d4009b"`
- Query by alarm policy ID and monitoring object ID, supports SQL statement: `(alert_id:"alarm-5ce45495-09e8-4d58-xxxx-768134bf330c") AND (monitored_object:"3c514e84-6f1f-46ec-xxxx-05de6163f7fe") AND NOT condition_evaluate_result: "Skip" AND condition_evaluate_result:[* TO *] | SELECT count(*) as top50StatisticsTotalCount, count_if(condition_evaluate_result='ProcessError') as top50StatisticsFailureCount, count_if(notification_send_result!='NotSend') as top50NoticeTotalCount, count_if(notification_send_result='SendPartFail' or notification_send_result='SendFail') as top50NoticeFailureCount, alert_id, alert_name, monitored_object, topic_type, happen_threshold, alert_threshold, notify_template group by alert_id, alert_name, monitored_object, topic_type, happen_threshold, alert_threshold, notify_template order by top50StatisticsTotalCount desc limit 1`
                     * @param _query Query filter criteria, for example:
- Query by alert policy ID: `alert_id:"alarm-0745ec00-e605-xxxx-b50b-54afe61fc971"`
- Query by monitoring object ID: `monitored_object:"823d8bfa-76a7-xxxx-8399-8cda74d4009b" `
- Query by alarm policy ID and monitoring object ID: `alert_id:"alarm-0745ec00-e605-xxxx-b50b-54afe61fc971" AND monitored_object:"823d8bfa-76a7-xxxx-8399-8cda74d4009b"`
- Query by alarm policy ID and monitoring object ID, supports SQL statement: `(alert_id:"alarm-5ce45495-09e8-4d58-xxxx-768134bf330c") AND (monitored_object:"3c514e84-6f1f-46ec-xxxx-05de6163f7fe") AND NOT condition_evaluate_result: "Skip" AND condition_evaluate_result:[* TO *] | SELECT count(*) as top50StatisticsTotalCount, count_if(condition_evaluate_result='ProcessError') as top50StatisticsFailureCount, count_if(notification_send_result!='NotSend') as top50NoticeTotalCount, count_if(notification_send_result='SendPartFail' or notification_send_result='SendFail') as top50NoticeFailureCount, alert_id, alert_name, monitored_object, topic_type, happen_threshold, alert_threshold, notify_template group by alert_id, alert_name, monitored_object, topic_type, happen_threshold, alert_threshold, notify_template order by top50StatisticsTotalCount desc limit 1`
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
                     * 获取The maximum number of execution details returned in a single query is 1000.
                     * @return Limit The maximum number of execution details returned in a single query is 1000.
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置The maximum number of execution details returned in a single query is 1000.
                     * @param _limit The maximum number of execution details returned in a single query is 1000.
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
                     * 获取Pass the Context value returned by the last API call to retrieve more subsequent logs. A total of up to 10,000 raw logs can be obtained, with an expiration time of 1 hour.Note:* When passing this parameter, do not modify any other parameters except for this one* This is only valid when the retrieval analysis statement (Query) does not contain SQL. For obtaining subsequent SQL results, refer to <a href="https://intl.cloud.tencent.com/document/product/614/58977?from_cn_redirect=1" target="_blank">SQL LIMIT Syntax</a>
                     * @return Context Pass the Context value returned by the last API call to retrieve more subsequent logs. A total of up to 10,000 raw logs can be obtained, with an expiration time of 1 hour.Note:* When passing this parameter, do not modify any other parameters except for this one* This is only valid when the retrieval analysis statement (Query) does not contain SQL. For obtaining subsequent SQL results, refer to <a href="https://intl.cloud.tencent.com/document/product/614/58977?from_cn_redirect=1" target="_blank">SQL LIMIT Syntax</a>
                     * 
                     */
                    std::string GetContext() const;

                    /**
                     * 设置Pass the Context value returned by the last API call to retrieve more subsequent logs. A total of up to 10,000 raw logs can be obtained, with an expiration time of 1 hour.Note:* When passing this parameter, do not modify any other parameters except for this one* This is only valid when the retrieval analysis statement (Query) does not contain SQL. For obtaining subsequent SQL results, refer to <a href="https://intl.cloud.tencent.com/document/product/614/58977?from_cn_redirect=1" target="_blank">SQL LIMIT Syntax</a>
                     * @param _context Pass the Context value returned by the last API call to retrieve more subsequent logs. A total of up to 10,000 raw logs can be obtained, with an expiration time of 1 hour.Note:* When passing this parameter, do not modify any other parameters except for this one* This is only valid when the retrieval analysis statement (Query) does not contain SQL. For obtaining subsequent SQL results, refer to <a href="https://intl.cloud.tencent.com/document/product/614/58977?from_cn_redirect=1" target="_blank">SQL LIMIT Syntax</a>
                     * 
                     */
                    void SetContext(const std::string& _context);

                    /**
                     * 判断参数 Context 是否已赋值
                     * @return Context 是否已赋值
                     * 
                     */
                    bool ContextHasBeenSet() const;

                    /**
                     * 获取Whether the original logs are returned in time order. Optional values are: asc (ascending) or desc (descending). The default is descNote:* This is only valid when the search and analysis statement (Query) does not contain SQL* For SQL result sorting, refer to <a href="https://intl.cloud.tencent.com/document/product/614/58978?from_cn_redirect=1" target="_blank">SQL ORDER BY Syntax</a>
                     * @return Sort Whether the original logs are returned in time order. Optional values are: asc (ascending) or desc (descending). The default is descNote:* This is only valid when the search and analysis statement (Query) does not contain SQL* For SQL result sorting, refer to <a href="https://intl.cloud.tencent.com/document/product/614/58978?from_cn_redirect=1" target="_blank">SQL ORDER BY Syntax</a>
                     * 
                     */
                    std::string GetSort() const;

                    /**
                     * 设置Whether the original logs are returned in time order. Optional values are: asc (ascending) or desc (descending). The default is descNote:* This is only valid when the search and analysis statement (Query) does not contain SQL* For SQL result sorting, refer to <a href="https://intl.cloud.tencent.com/document/product/614/58978?from_cn_redirect=1" target="_blank">SQL ORDER BY Syntax</a>
                     * @param _sort Whether the original logs are returned in time order. Optional values are: asc (ascending) or desc (descending). The default is descNote:* This is only valid when the search and analysis statement (Query) does not contain SQL* For SQL result sorting, refer to <a href="https://intl.cloud.tencent.com/document/product/614/58978?from_cn_redirect=1" target="_blank">SQL ORDER BY Syntax</a>
                     * 
                     */
                    void SetSort(const std::string& _sort);

                    /**
                     * 判断参数 Sort 是否已赋值
                     * @return Sort 是否已赋值
                     * 
                     */
                    bool SortHasBeenSet() const;

                    /**
                     * 获取true: Indicates the use of the new retrieval result return method, with valid output parameters AnalysisRecords and Columns.false: Indicates the use of the old retrieval result return method, with valid output parameters AnalysisResults and ColNames.There is a slight difference in encoding format between the two return methods, and it is recommended to use true.
                     * @return UseNewAnalysis true: Indicates the use of the new retrieval result return method, with valid output parameters AnalysisRecords and Columns.false: Indicates the use of the old retrieval result return method, with valid output parameters AnalysisResults and ColNames.There is a slight difference in encoding format between the two return methods, and it is recommended to use true.
                     * 
                     */
                    bool GetUseNewAnalysis() const;

                    /**
                     * 设置true: Indicates the use of the new retrieval result return method, with valid output parameters AnalysisRecords and Columns.false: Indicates the use of the old retrieval result return method, with valid output parameters AnalysisResults and ColNames.There is a slight difference in encoding format between the two return methods, and it is recommended to use true.
                     * @param _useNewAnalysis true: Indicates the use of the new retrieval result return method, with valid output parameters AnalysisRecords and Columns.false: Indicates the use of the old retrieval result return method, with valid output parameters AnalysisResults and ColNames.There is a slight difference in encoding format between the two return methods, and it is recommended to use true.
                     * 
                     */
                    void SetUseNewAnalysis(const bool& _useNewAnalysis);

                    /**
                     * 判断参数 UseNewAnalysis 是否已赋值
                     * @return UseNewAnalysis 是否已赋值
                     * 
                     */
                    bool UseNewAnalysisHasBeenSet() const;

                private:

                    /**
                     * Start time of the execution detail to be queried, Unix timestamp, unit: ms.
                     */
                    int64_t m_from;
                    bool m_fromHasBeenSet;

                    /**
                     * End time of the execution detail to be queried, Unix timestamp, unit: ms.
                     */
                    int64_t m_to;
                    bool m_toHasBeenSet;

                    /**
                     * Query filter criteria, for example:
- Query by alert policy ID: `alert_id:"alarm-0745ec00-e605-xxxx-b50b-54afe61fc971"`
- Query by monitoring object ID: `monitored_object:"823d8bfa-76a7-xxxx-8399-8cda74d4009b" `
- Query by alarm policy ID and monitoring object ID: `alert_id:"alarm-0745ec00-e605-xxxx-b50b-54afe61fc971" AND monitored_object:"823d8bfa-76a7-xxxx-8399-8cda74d4009b"`
- Query by alarm policy ID and monitoring object ID, supports SQL statement: `(alert_id:"alarm-5ce45495-09e8-4d58-xxxx-768134bf330c") AND (monitored_object:"3c514e84-6f1f-46ec-xxxx-05de6163f7fe") AND NOT condition_evaluate_result: "Skip" AND condition_evaluate_result:[* TO *] | SELECT count(*) as top50StatisticsTotalCount, count_if(condition_evaluate_result='ProcessError') as top50StatisticsFailureCount, count_if(notification_send_result!='NotSend') as top50NoticeTotalCount, count_if(notification_send_result='SendPartFail' or notification_send_result='SendFail') as top50NoticeFailureCount, alert_id, alert_name, monitored_object, topic_type, happen_threshold, alert_threshold, notify_template group by alert_id, alert_name, monitored_object, topic_type, happen_threshold, alert_threshold, notify_template order by top50StatisticsTotalCount desc limit 1`
                     */
                    std::string m_query;
                    bool m_queryHasBeenSet;

                    /**
                     * The maximum number of execution details returned in a single query is 1000.
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * Pass the Context value returned by the last API call to retrieve more subsequent logs. A total of up to 10,000 raw logs can be obtained, with an expiration time of 1 hour.Note:* When passing this parameter, do not modify any other parameters except for this one* This is only valid when the retrieval analysis statement (Query) does not contain SQL. For obtaining subsequent SQL results, refer to <a href="https://intl.cloud.tencent.com/document/product/614/58977?from_cn_redirect=1" target="_blank">SQL LIMIT Syntax</a>
                     */
                    std::string m_context;
                    bool m_contextHasBeenSet;

                    /**
                     * Whether the original logs are returned in time order. Optional values are: asc (ascending) or desc (descending). The default is descNote:* This is only valid when the search and analysis statement (Query) does not contain SQL* For SQL result sorting, refer to <a href="https://intl.cloud.tencent.com/document/product/614/58978?from_cn_redirect=1" target="_blank">SQL ORDER BY Syntax</a>
                     */
                    std::string m_sort;
                    bool m_sortHasBeenSet;

                    /**
                     * true: Indicates the use of the new retrieval result return method, with valid output parameters AnalysisRecords and Columns.false: Indicates the use of the old retrieval result return method, with valid output parameters AnalysisResults and ColNames.There is a slight difference in encoding format between the two return methods, and it is recommended to use true.
                     */
                    bool m_useNewAnalysis;
                    bool m_useNewAnalysisHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLS_V20201016_MODEL_GETALARMLOGREQUEST_H_
