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

#ifndef TENCENTCLOUD_BILLING_V20180709_MODEL_DESCRIBERENEWINSTANCESREQUEST_H_
#define TENCENTCLOUD_BILLING_V20180709_MODEL_DESCRIBERENEWINSTANCESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Billing
    {
        namespace V20180709
        {
            namespace Model
            {
                /**
                * DescribeRenewInstances request structure.
                */
                class DescribeRenewInstancesRequest : public AbstractModel
                {
                public:
                    DescribeRenewInstancesRequest();
                    ~DescribeRenewInstancesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Maximum number of instances per page. Value range: 1-100.
                     * @return MaxResults Maximum number of instances per page. Value range: 1-100.
                     * 
                     */
                    uint64_t GetMaxResults() const;

                    /**
                     * 设置Maximum number of instances per page. Value range: 1-100.
                     * @param _maxResults Maximum number of instances per page. Value range: 1-100.
                     * 
                     */
                    void SetMaxResults(const uint64_t& _maxResults);

                    /**
                     * 判断参数 MaxResults 是否已赋值
                     * @return MaxResults 是否已赋值
                     * 
                     */
                    bool MaxResultsHasBeenSet() const;

                    /**
                     * 获取Token for querying the next page of returned results. NextToken is not needed when calling the API for the first time.
                     * @return NextToken Token for querying the next page of returned results. NextToken is not needed when calling the API for the first time.
                     * 
                     */
                    std::string GetNextToken() const;

                    /**
                     * 设置Token for querying the next page of returned results. NextToken is not needed when calling the API for the first time.
                     * @param _nextToken Token for querying the next page of returned results. NextToken is not needed when calling the API for the first time.
                     * 
                     */
                    void SetNextToken(const std::string& _nextToken);

                    /**
                     * 判断参数 NextToken 是否已赋值
                     * @return NextToken 是否已赋值
                     * 
                     */
                    bool NextTokenHasBeenSet() const;

                    /**
                     * 获取Get the sorting order of the instance. The enumerated values are as follows:
false = Ascending (default)
true=Descending
                     * @return Reverse Get the sorting order of the instance. The enumerated values are as follows:
false = Ascending (default)
true=Descending
                     * 
                     */
                    bool GetReverse() const;

                    /**
                     * 设置Get the sorting order of the instance. The enumerated values are as follows:
false = Ascending (default)
true=Descending
                     * @param _reverse Get the sorting order of the instance. The enumerated values are as follows:
false = Ascending (default)
true=Descending
                     * 
                     */
                    void SetReverse(const bool& _reverse);

                    /**
                     * 判断参数 Reverse 是否已赋值
                     * @return Reverse 是否已赋值
                     * 
                     */
                    bool ReverseHasBeenSet() const;

                    /**
                     * 获取Renewal flag. Multiple values separated by commas. Enumeration value as follows:
NOTIFY_AND_MANUAL_RENEW: manual renewal.
NOTIFY_AND_AUTO_RENEW: automatic renewal.
DISABLE_NOTIFY_AND_MANUAL_RENEW: non-renewal upon expiration.
                     * @return RenewFlagList Renewal flag. Multiple values separated by commas. Enumeration value as follows:
NOTIFY_AND_MANUAL_RENEW: manual renewal.
NOTIFY_AND_AUTO_RENEW: automatic renewal.
DISABLE_NOTIFY_AND_MANUAL_RENEW: non-renewal upon expiration.
                     * 
                     */
                    std::vector<std::string> GetRenewFlagList() const;

                    /**
                     * 设置Renewal flag. Multiple values separated by commas. Enumeration value as follows:
NOTIFY_AND_MANUAL_RENEW: manual renewal.
NOTIFY_AND_AUTO_RENEW: automatic renewal.
DISABLE_NOTIFY_AND_MANUAL_RENEW: non-renewal upon expiration.
                     * @param _renewFlagList Renewal flag. Multiple values separated by commas. Enumeration value as follows:
NOTIFY_AND_MANUAL_RENEW: manual renewal.
NOTIFY_AND_AUTO_RENEW: automatic renewal.
DISABLE_NOTIFY_AND_MANUAL_RENEW: non-renewal upon expiration.
                     * 
                     */
                    void SetRenewFlagList(const std::vector<std::string>& _renewFlagList);

                    /**
                     * 判断参数 RenewFlagList 是否已赋值
                     * @return RenewFlagList 是否已赋值
                     * 
                     */
                    bool RenewFlagListHasBeenSet() const;

                    /**
                     * 获取Instance ID. Multiple IDs separated by commas, with a maximum of 100.
                     * @return InstanceIdList Instance ID. Multiple IDs separated by commas, with a maximum of 100.
                     * 
                     */
                    std::vector<std::string> GetInstanceIdList() const;

                    /**
                     * 设置Instance ID. Multiple IDs separated by commas, with a maximum of 100.
                     * @param _instanceIdList Instance ID. Multiple IDs separated by commas, with a maximum of 100.
                     * 
                     */
                    void SetInstanceIdList(const std::vector<std::string>& _instanceIdList);

                    /**
                     * 判断参数 InstanceIdList 是否已赋值
                     * @return InstanceIdList 是否已赋值
                     * 
                     */
                    bool InstanceIdListHasBeenSet() const;

                    /**
                     * 获取Expiry time start, format yyyy-MM-dd HH:mm:ss.
                     * @return ExpireTimeStart Expiry time start, format yyyy-MM-dd HH:mm:ss.
                     * 
                     */
                    std::string GetExpireTimeStart() const;

                    /**
                     * 设置Expiry time start, format yyyy-MM-dd HH:mm:ss.
                     * @param _expireTimeStart Expiry time start, format yyyy-MM-dd HH:mm:ss.
                     * 
                     */
                    void SetExpireTimeStart(const std::string& _expireTimeStart);

                    /**
                     * 判断参数 ExpireTimeStart 是否已赋值
                     * @return ExpireTimeStart 是否已赋值
                     * 
                     */
                    bool ExpireTimeStartHasBeenSet() const;

                    /**
                     * 获取Expiry time in the format of yyyy-MM-dd HH:mm:ss.
                     * @return ExpireTimeEnd Expiry time in the format of yyyy-MM-dd HH:mm:ss.
                     * 
                     */
                    std::string GetExpireTimeEnd() const;

                    /**
                     * 设置Expiry time in the format of yyyy-MM-dd HH:mm:ss.
                     * @param _expireTimeEnd Expiry time in the format of yyyy-MM-dd HH:mm:ss.
                     * 
                     */
                    void SetExpireTimeEnd(const std::string& _expireTimeEnd);

                    /**
                     * 判断参数 ExpireTimeEnd 是否已赋值
                     * @return ExpireTimeEnd 是否已赋值
                     * 
                     */
                    bool ExpireTimeEndHasBeenSet() const;

                private:

                    /**
                     * Maximum number of instances per page. Value range: 1-100.
                     */
                    uint64_t m_maxResults;
                    bool m_maxResultsHasBeenSet;

                    /**
                     * Token for querying the next page of returned results. NextToken is not needed when calling the API for the first time.
                     */
                    std::string m_nextToken;
                    bool m_nextTokenHasBeenSet;

                    /**
                     * Get the sorting order of the instance. The enumerated values are as follows:
false = Ascending (default)
true=Descending
                     */
                    bool m_reverse;
                    bool m_reverseHasBeenSet;

                    /**
                     * Renewal flag. Multiple values separated by commas. Enumeration value as follows:
NOTIFY_AND_MANUAL_RENEW: manual renewal.
NOTIFY_AND_AUTO_RENEW: automatic renewal.
DISABLE_NOTIFY_AND_MANUAL_RENEW: non-renewal upon expiration.
                     */
                    std::vector<std::string> m_renewFlagList;
                    bool m_renewFlagListHasBeenSet;

                    /**
                     * Instance ID. Multiple IDs separated by commas, with a maximum of 100.
                     */
                    std::vector<std::string> m_instanceIdList;
                    bool m_instanceIdListHasBeenSet;

                    /**
                     * Expiry time start, format yyyy-MM-dd HH:mm:ss.
                     */
                    std::string m_expireTimeStart;
                    bool m_expireTimeStartHasBeenSet;

                    /**
                     * Expiry time in the format of yyyy-MM-dd HH:mm:ss.
                     */
                    std::string m_expireTimeEnd;
                    bool m_expireTimeEndHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BILLING_V20180709_MODEL_DESCRIBERENEWINSTANCESREQUEST_H_
