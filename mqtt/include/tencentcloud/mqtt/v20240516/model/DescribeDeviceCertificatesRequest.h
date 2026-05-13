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

#ifndef TENCENTCLOUD_MQTT_V20240516_MODEL_DESCRIBEDEVICECERTIFICATESREQUEST_H_
#define TENCENTCLOUD_MQTT_V20240516_MODEL_DESCRIBEDEVICECERTIFICATESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mqtt/v20240516/model/Filter.h>


namespace TencentCloud
{
    namespace Mqtt
    {
        namespace V20240516
        {
            namespace Model
            {
                /**
                * DescribeDeviceCertificates request structure.
                */
                class DescribeDeviceCertificatesRequest : public AbstractModel
                {
                public:
                    DescribeDeviceCertificatesRequest();
                    ~DescribeDeviceCertificatesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Tencent Cloud MQTT instance ID can be obtained from the console.
                     * @return InstanceId Tencent Cloud MQTT instance ID can be obtained from the console.
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置Tencent Cloud MQTT instance ID can be obtained from the console.
                     * @param _instanceId Tencent Cloud MQTT instance ID can be obtained from the console.
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
                     * 获取Support search parameter
Client id: Client id, obtained based on actual business operations.
CaSn: The SN serial number of the CA certificate belonging to it can be obtained by querying the cluster CA certificate list (https://www.tencentcloud.com/document/api/1778/116206?from_cn_redirect=1) or through business operations.
DeviceCertificateSn: SN serial number of the device certificate. Can be obtained from [Query Device Certificate Detail](https://www.tencentcloud.com/document/api/1778/113748?from_cn_redirect=1).
DeviceCertificateCn: The device certificate CN.
OrganizationalUnit: Cert OU
NotAfterEnd: Certificates with expiration time less than or equal to the specified time
NotAfterStart: Cert with expiration time equal to or greater than the specified time
Status: Device certificate status. ACTIVE (activated); INACTIVE (inactive); REVOKED (revoked); PENDING_ACTIVATION (to be activated).

                     * @return Filters Support search parameter
Client id: Client id, obtained based on actual business operations.
CaSn: The SN serial number of the CA certificate belonging to it can be obtained by querying the cluster CA certificate list (https://www.tencentcloud.com/document/api/1778/116206?from_cn_redirect=1) or through business operations.
DeviceCertificateSn: SN serial number of the device certificate. Can be obtained from [Query Device Certificate Detail](https://www.tencentcloud.com/document/api/1778/113748?from_cn_redirect=1).
DeviceCertificateCn: The device certificate CN.
OrganizationalUnit: Cert OU
NotAfterEnd: Certificates with expiration time less than or equal to the specified time
NotAfterStart: Cert with expiration time equal to or greater than the specified time
Status: Device certificate status. ACTIVE (activated); INACTIVE (inactive); REVOKED (revoked); PENDING_ACTIVATION (to be activated).

                     * 
                     */
                    std::vector<Filter> GetFilters() const;

                    /**
                     * 设置Support search parameter
Client id: Client id, obtained based on actual business operations.
CaSn: The SN serial number of the CA certificate belonging to it can be obtained by querying the cluster CA certificate list (https://www.tencentcloud.com/document/api/1778/116206?from_cn_redirect=1) or through business operations.
DeviceCertificateSn: SN serial number of the device certificate. Can be obtained from [Query Device Certificate Detail](https://www.tencentcloud.com/document/api/1778/113748?from_cn_redirect=1).
DeviceCertificateCn: The device certificate CN.
OrganizationalUnit: Cert OU
NotAfterEnd: Certificates with expiration time less than or equal to the specified time
NotAfterStart: Cert with expiration time equal to or greater than the specified time
Status: Device certificate status. ACTIVE (activated); INACTIVE (inactive); REVOKED (revoked); PENDING_ACTIVATION (to be activated).

                     * @param _filters Support search parameter
Client id: Client id, obtained based on actual business operations.
CaSn: The SN serial number of the CA certificate belonging to it can be obtained by querying the cluster CA certificate list (https://www.tencentcloud.com/document/api/1778/116206?from_cn_redirect=1) or through business operations.
DeviceCertificateSn: SN serial number of the device certificate. Can be obtained from [Query Device Certificate Detail](https://www.tencentcloud.com/document/api/1778/113748?from_cn_redirect=1).
DeviceCertificateCn: The device certificate CN.
OrganizationalUnit: Cert OU
NotAfterEnd: Certificates with expiration time less than or equal to the specified time
NotAfterStart: Cert with expiration time equal to or greater than the specified time
Status: Device certificate status. ACTIVE (activated); INACTIVE (inactive); REVOKED (revoked); PENDING_ACTIVATION (to be activated).

                     * 
                     */
                    void SetFilters(const std::vector<Filter>& _filters);

                    /**
                     * 判断参数 Filters 是否已赋值
                     * @return Filters 是否已赋值
                     * 
                     */
                    bool FiltersHasBeenSet() const;

                    /**
                     * 获取Pagination limit. Default 20. Maximum 100.
                     * @return Limit Pagination limit. Default 20. Maximum 100.
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置Pagination limit. Default 20. Maximum 100.
                     * @param _limit Pagination limit. Default 20. Maximum 100.
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
                     * 获取Pagination offset, default 0
                     * @return Offset Pagination offset, default 0
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置Pagination offset, default 0
                     * @param _offset Pagination offset, default 0
                     * 
                     */
                    void SetOffset(const int64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取Sorting rule
CREATE_TIME_DESC, descending order by creation time
CREATE_TIME_ASC, sort by creation time in ascending order
UPDATE_TIME_DESC, descending order by update time
UPDATE_TIME_ASC, update time in ascending order
                     * @return OrderBy Sorting rule
CREATE_TIME_DESC, descending order by creation time
CREATE_TIME_ASC, sort by creation time in ascending order
UPDATE_TIME_DESC, descending order by update time
UPDATE_TIME_ASC, update time in ascending order
                     * 
                     */
                    std::string GetOrderBy() const;

                    /**
                     * 设置Sorting rule
CREATE_TIME_DESC, descending order by creation time
CREATE_TIME_ASC, sort by creation time in ascending order
UPDATE_TIME_DESC, descending order by update time
UPDATE_TIME_ASC, update time in ascending order
                     * @param _orderBy Sorting rule
CREATE_TIME_DESC, descending order by creation time
CREATE_TIME_ASC, sort by creation time in ascending order
UPDATE_TIME_DESC, descending order by update time
UPDATE_TIME_ASC, update time in ascending order
                     * 
                     */
                    void SetOrderBy(const std::string& _orderBy);

                    /**
                     * 判断参数 OrderBy 是否已赋值
                     * @return OrderBy 是否已赋值
                     * 
                     */
                    bool OrderByHasBeenSet() const;

                private:

                    /**
                     * Tencent Cloud MQTT instance ID can be obtained from the console.
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * Support search parameter
Client id: Client id, obtained based on actual business operations.
CaSn: The SN serial number of the CA certificate belonging to it can be obtained by querying the cluster CA certificate list (https://www.tencentcloud.com/document/api/1778/116206?from_cn_redirect=1) or through business operations.
DeviceCertificateSn: SN serial number of the device certificate. Can be obtained from [Query Device Certificate Detail](https://www.tencentcloud.com/document/api/1778/113748?from_cn_redirect=1).
DeviceCertificateCn: The device certificate CN.
OrganizationalUnit: Cert OU
NotAfterEnd: Certificates with expiration time less than or equal to the specified time
NotAfterStart: Cert with expiration time equal to or greater than the specified time
Status: Device certificate status. ACTIVE (activated); INACTIVE (inactive); REVOKED (revoked); PENDING_ACTIVATION (to be activated).

                     */
                    std::vector<Filter> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * Pagination limit. Default 20. Maximum 100.
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * Pagination offset, default 0
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * Sorting rule
CREATE_TIME_DESC, descending order by creation time
CREATE_TIME_ASC, sort by creation time in ascending order
UPDATE_TIME_DESC, descending order by update time
UPDATE_TIME_ASC, update time in ascending order
                     */
                    std::string m_orderBy;
                    bool m_orderByHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MQTT_V20240516_MODEL_DESCRIBEDEVICECERTIFICATESREQUEST_H_
