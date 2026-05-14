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

#ifndef TENCENTCLOUD_APM_V20210622_MODEL_SERVICEDETAIL_H_
#define TENCENTCLOUD_APM_V20210622_MODEL_SERVICEDETAIL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/apm/v20210622/model/ApmTag.h>


namespace TencentCloud
{
    namespace Apm
    {
        namespace V20210622
        {
            namespace Model
            {
                /**
                * Detailed information about applications.
                */
                class ServiceDetail : public AbstractModel
                {
                public:
                    ServiceDetail();
                    ~ServiceDetail() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Application ID</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ServiceID <p>Application ID</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetServiceID() const;

                    /**
                     * 设置<p>Application ID</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _serviceID <p>Application ID</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetServiceID(const std::string& _serviceID);

                    /**
                     * 判断参数 ServiceID 是否已赋值
                     * @return ServiceID 是否已赋值
                     * 
                     */
                    bool ServiceIDHasBeenSet() const;

                    /**
                     * 获取<p>Business system ID</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return InstanceKey <p>Business system ID</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetInstanceKey() const;

                    /**
                     * 设置<p>Business system ID</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _instanceKey <p>Business system ID</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetInstanceKey(const std::string& _instanceKey);

                    /**
                     * 判断参数 InstanceKey 是否已赋值
                     * @return InstanceKey 是否已赋值
                     * 
                     */
                    bool InstanceKeyHasBeenSet() const;

                    /**
                     * 获取<p>User appid</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return AppID <p>User appid</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetAppID() const;

                    /**
                     * 设置<p>User appid</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _appID <p>User appid</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetAppID(const int64_t& _appID);

                    /**
                     * 判断参数 AppID 是否已赋值
                     * @return AppID 是否已赋值
                     * 
                     */
                    bool AppIDHasBeenSet() const;

                    /**
                     * 获取<p>main account uin</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return CreateUIN <p>main account uin</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetCreateUIN() const;

                    /**
                     * 设置<p>main account uin</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _createUIN <p>main account uin</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetCreateUIN(const std::string& _createUIN);

                    /**
                     * 判断参数 CreateUIN 是否已赋值
                     * @return CreateUIN 是否已赋值
                     * 
                     */
                    bool CreateUINHasBeenSet() const;

                    /**
                     * 获取<p>Application name</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ServiceName <p>Application name</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetServiceName() const;

                    /**
                     * 设置<p>Application name</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _serviceName <p>Application name</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetServiceName(const std::string& _serviceName);

                    /**
                     * 判断参数 ServiceName 是否已赋值
                     * @return ServiceName 是否已赋值
                     * 
                     */
                    bool ServiceNameHasBeenSet() const;

                    /**
                     * 获取<p>Application description</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ServiceDescription <p>Application description</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetServiceDescription() const;

                    /**
                     * 设置<p>Application description</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _serviceDescription <p>Application description</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetServiceDescription(const std::string& _serviceDescription);

                    /**
                     * 判断参数 ServiceDescription 是否已赋值
                     * @return ServiceDescription 是否已赋值
                     * 
                     */
                    bool ServiceDescriptionHasBeenSet() const;

                    /**
                     * 获取<p>Region</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Region <p>Region</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetRegion() const;

                    /**
                     * 设置<p>Region</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _region <p>Region</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetRegion(const std::string& _region);

                    /**
                     * 判断参数 Region 是否已赋值
                     * @return Region 是否已赋值
                     * 
                     */
                    bool RegionHasBeenSet() const;

                    /**
                     * 获取<p>Tag</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Tags <p>Tag</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<ApmTag> GetTags() const;

                    /**
                     * 设置<p>Tag</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _tags <p>Tag</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetTags(const std::vector<ApmTag>& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     * 
                     */
                    bool TagsHasBeenSet() const;

                    /**
                     * 获取<p>Business system name</p>
                     * @return InstanceName <p>Business system name</p>
                     * 
                     */
                    std::string GetInstanceName() const;

                    /**
                     * 设置<p>Business system name</p>
                     * @param _instanceName <p>Business system name</p>
                     * 
                     */
                    void SetInstanceName(const std::string& _instanceName);

                    /**
                     * 判断参数 InstanceName 是否已赋值
                     * @return InstanceName 是否已赋值
                     * 
                     */
                    bool InstanceNameHasBeenSet() const;

                    /**
                     * 获取<p>Threshold configuration switch. true means use application level threshold; false means use business system level threshold.</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return EnableThresholdConfig <p>Threshold configuration switch. true means use application level threshold; false means use business system level threshold.</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    bool GetEnableThresholdConfig() const;

                    /**
                     * 设置<p>Threshold configuration switch. true means use application level threshold; false means use business system level threshold.</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _enableThresholdConfig <p>Threshold configuration switch. true means use application level threshold; false means use business system level threshold.</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetEnableThresholdConfig(const bool& _enableThresholdConfig);

                    /**
                     * 判断参数 EnableThresholdConfig 是否已赋值
                     * @return EnableThresholdConfig 是否已赋值
                     * 
                     */
                    bool EnableThresholdConfigHasBeenSet() const;

                    /**
                     * 获取<p>Error rate threshold (%) used to judge the application health status as "red".</p><p>Unit: %</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ErrRateThreshold <p>Error rate threshold (%) used to judge the application health status as "red".</p><p>Unit: %</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetErrRateThreshold() const;

                    /**
                     * 设置<p>Error rate threshold (%) used to judge the application health status as "red".</p><p>Unit: %</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _errRateThreshold <p>Error rate threshold (%) used to judge the application health status as "red".</p><p>Unit: %</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetErrRateThreshold(const int64_t& _errRateThreshold);

                    /**
                     * 判断参数 ErrRateThreshold 是否已赋值
                     * @return ErrRateThreshold 是否已赋值
                     * 
                     */
                    bool ErrRateThresholdHasBeenSet() const;

                    /**
                     * 获取<p>Alert threshold for response time (ms), used to judge application health status as "yellow".</p><p>Unit: ms</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ResponseDurationWarningThreshold <p>Alert threshold for response time (ms), used to judge application health status as "yellow".</p><p>Unit: ms</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetResponseDurationWarningThreshold() const;

                    /**
                     * 设置<p>Alert threshold for response time (ms), used to judge application health status as "yellow".</p><p>Unit: ms</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _responseDurationWarningThreshold <p>Alert threshold for response time (ms), used to judge application health status as "yellow".</p><p>Unit: ms</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetResponseDurationWarningThreshold(const int64_t& _responseDurationWarningThreshold);

                    /**
                     * 判断参数 ResponseDurationWarningThreshold 是否已赋值
                     * @return ResponseDurationWarningThreshold 是否已赋值
                     * 
                     */
                    bool ResponseDurationWarningThresholdHasBeenSet() const;

                private:

                    /**
                     * <p>Application ID</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_serviceID;
                    bool m_serviceIDHasBeenSet;

                    /**
                     * <p>Business system ID</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_instanceKey;
                    bool m_instanceKeyHasBeenSet;

                    /**
                     * <p>User appid</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_appID;
                    bool m_appIDHasBeenSet;

                    /**
                     * <p>main account uin</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_createUIN;
                    bool m_createUINHasBeenSet;

                    /**
                     * <p>Application name</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_serviceName;
                    bool m_serviceNameHasBeenSet;

                    /**
                     * <p>Application description</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_serviceDescription;
                    bool m_serviceDescriptionHasBeenSet;

                    /**
                     * <p>Region</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * <p>Tag</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<ApmTag> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * <p>Business system name</p>
                     */
                    std::string m_instanceName;
                    bool m_instanceNameHasBeenSet;

                    /**
                     * <p>Threshold configuration switch. true means use application level threshold; false means use business system level threshold.</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    bool m_enableThresholdConfig;
                    bool m_enableThresholdConfigHasBeenSet;

                    /**
                     * <p>Error rate threshold (%) used to judge the application health status as "red".</p><p>Unit: %</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_errRateThreshold;
                    bool m_errRateThresholdHasBeenSet;

                    /**
                     * <p>Alert threshold for response time (ms), used to judge application health status as "yellow".</p><p>Unit: ms</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_responseDurationWarningThreshold;
                    bool m_responseDurationWarningThresholdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_APM_V20210622_MODEL_SERVICEDETAIL_H_
