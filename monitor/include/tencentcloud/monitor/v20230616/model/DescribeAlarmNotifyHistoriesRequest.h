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

#ifndef TENCENTCLOUD_MONITOR_V20230616_MODEL_DESCRIBEALARMNOTIFYHISTORIESREQUEST_H_
#define TENCENTCLOUD_MONITOR_V20230616_MODEL_DESCRIBEALARMNOTIFYHISTORIESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/monitor/v20230616/model/PageByNoParams.h>


namespace TencentCloud
{
    namespace Monitor
    {
        namespace V20230616
        {
            namespace Model
            {
                /**
                * DescribeAlarmNotifyHistories request structure.
                */
                class DescribeAlarmNotifyHistoriesRequest : public AbstractModel
                {
                public:
                    DescribeAlarmNotifyHistoriesRequest();
                    ~DescribeAlarmNotifyHistoriesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Monitoring type
                     * @return MonitorType Monitoring type
                     * 
                     */
                    std::string GetMonitorType() const;

                    /**
                     * 设置Monitoring type
                     * @param _monitorType Monitoring type
                     * 
                     */
                    void SetMonitorType(const std::string& _monitorType);

                    /**
                     * 判断参数 MonitorType 是否已赋值
                     * @return MonitorType 是否已赋值
                     * 
                     */
                    bool MonitorTypeHasBeenSet() const;

                    /**
                     * 获取Start time, used as a Unix timestamp in seconds.
                     * @return QueryBaseTime Start time, used as a Unix timestamp in seconds.
                     * 
                     */
                    int64_t GetQueryBaseTime() const;

                    /**
                     * 设置Start time, used as a Unix timestamp in seconds.
                     * @param _queryBaseTime Start time, used as a Unix timestamp in seconds.
                     * 
                     */
                    void SetQueryBaseTime(const int64_t& _queryBaseTime);

                    /**
                     * 判断参数 QueryBaseTime 是否已赋值
                     * @return QueryBaseTime 是否已赋值
                     * 
                     */
                    bool QueryBaseTimeHasBeenSet() const;

                    /**
                     * 获取Period to query before QueryBaseTime, in seconds.
                     * @return QueryBeforeSeconds Period to query before QueryBaseTime, in seconds.
                     * 
                     */
                    int64_t GetQueryBeforeSeconds() const;

                    /**
                     * 设置Period to query before QueryBaseTime, in seconds.
                     * @param _queryBeforeSeconds Period to query before QueryBaseTime, in seconds.
                     * 
                     */
                    void SetQueryBeforeSeconds(const int64_t& _queryBeforeSeconds);

                    /**
                     * 判断参数 QueryBeforeSeconds 是否已赋值
                     * @return QueryBeforeSeconds 是否已赋值
                     * 
                     */
                    bool QueryBeforeSecondsHasBeenSet() const;

                    /**
                     * 获取Pagination parameter.
                     * @return PageParams Pagination parameter.
                     * 
                     */
                    PageByNoParams GetPageParams() const;

                    /**
                     * 设置Pagination parameter.
                     * @param _pageParams Pagination parameter.
                     * 
                     */
                    void SetPageParams(const PageByNoParams& _pageParams);

                    /**
                     * 判断参数 PageParams 是否已赋值
                     * @return PageParams 是否已赋值
                     * 
                     */
                    bool PageParamsHasBeenSet() const;

                    /**
                     * 获取Fill in when the monitoring type is MT_QCE. Namespace of the affiliation.
                     * @return Namespace Fill in when the monitoring type is MT_QCE. Namespace of the affiliation.
                     * 
                     */
                    std::string GetNamespace() const;

                    /**
                     * 设置Fill in when the monitoring type is MT_QCE. Namespace of the affiliation.
                     * @param _namespace Fill in when the monitoring type is MT_QCE. Namespace of the affiliation.
                     * 
                     */
                    void SetNamespace(const std::string& _namespace);

                    /**
                     * 判断参数 Namespace 是否已赋值
                     * @return Namespace 是否已赋值
                     * 
                     */
                    bool NamespaceHasBeenSet() const;

                    /**
                     * 获取Fill in when the monitoring type is MT_QCE. Alarm policy type
                     * @return ModelName Fill in when the monitoring type is MT_QCE. Alarm policy type
                     * 
                     */
                    std::string GetModelName() const;

                    /**
                     * 设置Fill in when the monitoring type is MT_QCE. Alarm policy type
                     * @param _modelName Fill in when the monitoring type is MT_QCE. Alarm policy type
                     * 
                     */
                    void SetModelName(const std::string& _modelName);

                    /**
                     * 判断参数 ModelName 是否已赋值
                     * @return ModelName 是否已赋值
                     * 
                     */
                    bool ModelNameHasBeenSet() const;

                    /**
                     * 获取Query the notification history of a policy
                     * @return PolicyId Query the notification history of a policy
                     * 
                     */
                    std::string GetPolicyId() const;

                    /**
                     * 设置Query the notification history of a policy
                     * @param _policyId Query the notification history of a policy
                     * 
                     */
                    void SetPolicyId(const std::string& _policyId);

                    /**
                     * 判断参数 PolicyId 是否已赋值
                     * @return PolicyId 是否已赋值
                     * 
                     */
                    bool PolicyIdHasBeenSet() const;

                private:

                    /**
                     * Monitoring type
                     */
                    std::string m_monitorType;
                    bool m_monitorTypeHasBeenSet;

                    /**
                     * Start time, used as a Unix timestamp in seconds.
                     */
                    int64_t m_queryBaseTime;
                    bool m_queryBaseTimeHasBeenSet;

                    /**
                     * Period to query before QueryBaseTime, in seconds.
                     */
                    int64_t m_queryBeforeSeconds;
                    bool m_queryBeforeSecondsHasBeenSet;

                    /**
                     * Pagination parameter.
                     */
                    PageByNoParams m_pageParams;
                    bool m_pageParamsHasBeenSet;

                    /**
                     * Fill in when the monitoring type is MT_QCE. Namespace of the affiliation.
                     */
                    std::string m_namespace;
                    bool m_namespaceHasBeenSet;

                    /**
                     * Fill in when the monitoring type is MT_QCE. Alarm policy type
                     */
                    std::string m_modelName;
                    bool m_modelNameHasBeenSet;

                    /**
                     * Query the notification history of a policy
                     */
                    std::string m_policyId;
                    bool m_policyIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONITOR_V20230616_MODEL_DESCRIBEALARMNOTIFYHISTORIESREQUEST_H_
