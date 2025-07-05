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

#ifndef TENCENTCLOUD_WAF_V20180125_MODEL_DESCRIBEPEAKPOINTSREQUEST_H_
#define TENCENTCLOUD_WAF_V20180125_MODEL_DESCRIBEPEAKPOINTSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Waf
    {
        namespace V20180125
        {
            namespace Model
            {
                /**
                * DescribePeakPoints request structure.
                */
                class DescribePeakPointsRequest : public AbstractModel
                {
                public:
                    DescribePeakPointsRequest();
                    ~DescribePeakPointsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Query start time
                     * @return FromTime Query start time
                     * 
                     */
                    std::string GetFromTime() const;

                    /**
                     * 设置Query start time
                     * @param _fromTime Query start time
                     * 
                     */
                    void SetFromTime(const std::string& _fromTime);

                    /**
                     * 判断参数 FromTime 是否已赋值
                     * @return FromTime 是否已赋值
                     * 
                     */
                    bool FromTimeHasBeenSet() const;

                    /**
                     * 获取Query End Time
                     * @return ToTime Query End Time
                     * 
                     */
                    std::string GetToTime() const;

                    /**
                     * 设置Query End Time
                     * @param _toTime Query End Time
                     * 
                     */
                    void SetToTime(const std::string& _toTime);

                    /**
                     * 判断参数 ToTime 是否已赋值
                     * @return ToTime 是否已赋值
                     * 
                     */
                    bool ToTimeHasBeenSet() const;

                    /**
                     * 获取The domain to query, leave this parameter blank if querying data for all domains
                     * @return Domain The domain to query, leave this parameter blank if querying data for all domains
                     * 
                     */
                    std::string GetDomain() const;

                    /**
                     * 设置The domain to query, leave this parameter blank if querying data for all domains
                     * @param _domain The domain to query, leave this parameter blank if querying data for all domains
                     * 
                     */
                    void SetDomain(const std::string& _domain);

                    /**
                     * 判断参数 Domain 是否已赋值
                     * @return Domain 是否已赋值
                     * 
                     */
                    bool DomainHasBeenSet() const;

                    /**
                     * 获取Only two values are valid: sparta-waf, clb-waf. No filtering if not input.
                     * @return Edition Only two values are valid: sparta-waf, clb-waf. No filtering if not input.
                     * 
                     */
                    std::string GetEdition() const;

                    /**
                     * 设置Only two values are valid: sparta-waf, clb-waf. No filtering if not input.
                     * @param _edition Only two values are valid: sparta-waf, clb-waf. No filtering if not input.
                     * 
                     */
                    void SetEdition(const std::string& _edition);

                    /**
                     * 判断参数 Edition 是否已赋值
                     * @return Edition 是否已赋值
                     * 
                     */
                    bool EditionHasBeenSet() const;

                    /**
                     * 获取WAF instance ID. No filter will be carried out if it is not input.
                     * @return InstanceID WAF instance ID. No filter will be carried out if it is not input.
                     * 
                     */
                    std::string GetInstanceID() const;

                    /**
                     * 设置WAF instance ID. No filter will be carried out if it is not input.
                     * @param _instanceID WAF instance ID. No filter will be carried out if it is not input.
                     * 
                     */
                    void SetInstanceID(const std::string& _instanceID);

                    /**
                     * 判断参数 InstanceID 是否已赋值
                     * @return InstanceID 是否已赋值
                     * 
                     */
                    bool InstanceIDHasBeenSet() const;

                    /**
                     * 获取Twelve available values:
access: peak QPS trend chart
botAccess: peak bot QPS trend chart
down: downstream peak bandwidth trend chart
up: upstream peak bandwidth trend chart
attack: trend chart of total web attacks
cc: trend chart of total CC attacks
bw: trend chart of total attacks from blocklisted IP addresses
tamper: trend chart of total tampering attacks
leak: total leakage trend chart
acl: trend chart of total access control attacks
http_status: status code trend chart
wx_access: trend chart of peak WeChat mini program QPS
                     * @return MetricName Twelve available values:
access: peak QPS trend chart
botAccess: peak bot QPS trend chart
down: downstream peak bandwidth trend chart
up: upstream peak bandwidth trend chart
attack: trend chart of total web attacks
cc: trend chart of total CC attacks
bw: trend chart of total attacks from blocklisted IP addresses
tamper: trend chart of total tampering attacks
leak: total leakage trend chart
acl: trend chart of total access control attacks
http_status: status code trend chart
wx_access: trend chart of peak WeChat mini program QPS
                     * 
                     */
                    std::string GetMetricName() const;

                    /**
                     * 设置Twelve available values:
access: peak QPS trend chart
botAccess: peak bot QPS trend chart
down: downstream peak bandwidth trend chart
up: upstream peak bandwidth trend chart
attack: trend chart of total web attacks
cc: trend chart of total CC attacks
bw: trend chart of total attacks from blocklisted IP addresses
tamper: trend chart of total tampering attacks
leak: total leakage trend chart
acl: trend chart of total access control attacks
http_status: status code trend chart
wx_access: trend chart of peak WeChat mini program QPS
                     * @param _metricName Twelve available values:
access: peak QPS trend chart
botAccess: peak bot QPS trend chart
down: downstream peak bandwidth trend chart
up: upstream peak bandwidth trend chart
attack: trend chart of total web attacks
cc: trend chart of total CC attacks
bw: trend chart of total attacks from blocklisted IP addresses
tamper: trend chart of total tampering attacks
leak: total leakage trend chart
acl: trend chart of total access control attacks
http_status: status code trend chart
wx_access: trend chart of peak WeChat mini program QPS
                     * 
                     */
                    void SetMetricName(const std::string& _metricName);

                    /**
                     * 判断参数 MetricName 是否已赋值
                     * @return MetricName 是否已赋值
                     * 
                     */
                    bool MetricNameHasBeenSet() const;

                private:

                    /**
                     * Query start time
                     */
                    std::string m_fromTime;
                    bool m_fromTimeHasBeenSet;

                    /**
                     * Query End Time
                     */
                    std::string m_toTime;
                    bool m_toTimeHasBeenSet;

                    /**
                     * The domain to query, leave this parameter blank if querying data for all domains
                     */
                    std::string m_domain;
                    bool m_domainHasBeenSet;

                    /**
                     * Only two values are valid: sparta-waf, clb-waf. No filtering if not input.
                     */
                    std::string m_edition;
                    bool m_editionHasBeenSet;

                    /**
                     * WAF instance ID. No filter will be carried out if it is not input.
                     */
                    std::string m_instanceID;
                    bool m_instanceIDHasBeenSet;

                    /**
                     * Twelve available values:
access: peak QPS trend chart
botAccess: peak bot QPS trend chart
down: downstream peak bandwidth trend chart
up: upstream peak bandwidth trend chart
attack: trend chart of total web attacks
cc: trend chart of total CC attacks
bw: trend chart of total attacks from blocklisted IP addresses
tamper: trend chart of total tampering attacks
leak: total leakage trend chart
acl: trend chart of total access control attacks
http_status: status code trend chart
wx_access: trend chart of peak WeChat mini program QPS
                     */
                    std::string m_metricName;
                    bool m_metricNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WAF_V20180125_MODEL_DESCRIBEPEAKPOINTSREQUEST_H_
