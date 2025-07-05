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

#ifndef TENCENTCLOUD_WAF_V20180125_MODEL_DESCRIBEHISTOGRAMREQUEST_H_
#define TENCENTCLOUD_WAF_V20180125_MODEL_DESCRIBEHISTOGRAMREQUEST_H_

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
                * DescribeHistogram request structure.
                */
                class DescribeHistogramRequest : public AbstractModel
                {
                public:
                    DescribeHistogramRequest();
                    ~DescribeHistogramRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Start time
                     * @return FromTime Start time
                     * 
                     */
                    std::string GetFromTime() const;

                    /**
                     * 设置Start time
                     * @param _fromTime Start time
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
                     * 获取End time
                     * @return ToTime End time
                     * 
                     */
                    std::string GetToTime() const;

                    /**
                     * 设置End time
                     * @param _toTime End time
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
                     * 获取Clustering fields. ip: IP aggregation; art: response time aggregation; url: URL aggregation; local: city aggregation after IP conversion; qps: second-level peak request count aggregation; up: peak upstream bandwidth aggregation; down: peak downstream bandwidth aggregation
                     * @return QueryField Clustering fields. ip: IP aggregation; art: response time aggregation; url: URL aggregation; local: city aggregation after IP conversion; qps: second-level peak request count aggregation; up: peak upstream bandwidth aggregation; down: peak downstream bandwidth aggregation
                     * 
                     */
                    std::string GetQueryField() const;

                    /**
                     * 设置Clustering fields. ip: IP aggregation; art: response time aggregation; url: URL aggregation; local: city aggregation after IP conversion; qps: second-level peak request count aggregation; up: peak upstream bandwidth aggregation; down: peak downstream bandwidth aggregation
                     * @param _queryField Clustering fields. ip: IP aggregation; art: response time aggregation; url: URL aggregation; local: city aggregation after IP conversion; qps: second-level peak request count aggregation; up: peak upstream bandwidth aggregation; down: peak downstream bandwidth aggregation
                     * 
                     */
                    void SetQueryField(const std::string& _queryField);

                    /**
                     * 判断参数 QueryField 是否已赋值
                     * @return QueryField 是否已赋值
                     * 
                     */
                    bool QueryFieldHasBeenSet() const;

                    /**
                     * 获取Condition, access for access logs, attack for attack logs
                     * @return Source Condition, access for access logs, attack for attack logs
                     * 
                     */
                    std::string GetSource() const;

                    /**
                     * 设置Condition, access for access logs, attack for attack logs
                     * @param _source Condition, access for access logs, attack for attack logs
                     * 
                     */
                    void SetSource(const std::string& _source);

                    /**
                     * 判断参数 Source 是否已赋值
                     * @return Source 是否已赋值
                     * 
                     */
                    bool SourceHasBeenSet() const;

                    /**
                     * 获取Compatible host, gradually phasing out Host field
                     * @return Host Compatible host, gradually phasing out Host field
                     * 
                     */
                    std::string GetHost() const;

                    /**
                     * 设置Compatible host, gradually phasing out Host field
                     * @param _host Compatible host, gradually phasing out Host field
                     * 
                     */
                    void SetHost(const std::string& _host);

                    /**
                     * 判断参数 Host 是否已赋值
                     * @return Host 是否已赋值
                     * 
                     */
                    bool HostHasBeenSet() const;

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
                     * 获取Domain filtering, not applied if not input, used to replace Host field and phase out Host
                     * @return Domain Domain filtering, not applied if not input, used to replace Host field and phase out Host
                     * 
                     */
                    std::string GetDomain() const;

                    /**
                     * 设置Domain filtering, not applied if not input, used to replace Host field and phase out Host
                     * @param _domain Domain filtering, not applied if not input, used to replace Host field and phase out Host
                     * 
                     */
                    void SetDomain(const std::string& _domain);

                    /**
                     * 判断参数 Domain 是否已赋值
                     * @return Domain 是否已赋值
                     * 
                     */
                    bool DomainHasBeenSet() const;

                private:

                    /**
                     * Start time
                     */
                    std::string m_fromTime;
                    bool m_fromTimeHasBeenSet;

                    /**
                     * End time
                     */
                    std::string m_toTime;
                    bool m_toTimeHasBeenSet;

                    /**
                     * Clustering fields. ip: IP aggregation; art: response time aggregation; url: URL aggregation; local: city aggregation after IP conversion; qps: second-level peak request count aggregation; up: peak upstream bandwidth aggregation; down: peak downstream bandwidth aggregation
                     */
                    std::string m_queryField;
                    bool m_queryFieldHasBeenSet;

                    /**
                     * Condition, access for access logs, attack for attack logs
                     */
                    std::string m_source;
                    bool m_sourceHasBeenSet;

                    /**
                     * Compatible host, gradually phasing out Host field
                     */
                    std::string m_host;
                    bool m_hostHasBeenSet;

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
                     * Domain filtering, not applied if not input, used to replace Host field and phase out Host
                     */
                    std::string m_domain;
                    bool m_domainHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WAF_V20180125_MODEL_DESCRIBEHISTOGRAMREQUEST_H_
