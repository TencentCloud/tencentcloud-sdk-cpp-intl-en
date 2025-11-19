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
                     * 获取Application ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ServiceID Application ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetServiceID() const;

                    /**
                     * 设置Application ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _serviceID Application ID
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
                     * 获取Business system ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return InstanceKey Business system ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetInstanceKey() const;

                    /**
                     * 设置Business system ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _instanceKey Business system ID
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
                     * 获取User appid.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return AppID User appid.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetAppID() const;

                    /**
                     * 设置User appid.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _appID User appid.
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
                     * 获取Host account UIN
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return CreateUIN Host account UIN
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetCreateUIN() const;

                    /**
                     * 设置Host account UIN
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _createUIN Host account UIN
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
                     * 获取Application name
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ServiceName Application name
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetServiceName() const;

                    /**
                     * 设置Application name
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _serviceName Application name
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
                     * 获取Application description
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ServiceDescription Application description
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetServiceDescription() const;

                    /**
                     * 设置Application description
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _serviceDescription Application description
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
                     * 获取Region.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Region Region.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetRegion() const;

                    /**
                     * 设置Region.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _region Region.
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
                     * 获取Tag.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Tags Tag.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<ApmTag> GetTags() const;

                    /**
                     * 设置Tag.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _tags Tag.
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
                     * 获取Business system name.
                     * @return InstanceName Business system name.
                     * 
                     */
                    std::string GetInstanceName() const;

                    /**
                     * 设置Business system name.
                     * @param _instanceName Business system name.
                     * 
                     */
                    void SetInstanceName(const std::string& _instanceName);

                    /**
                     * 判断参数 InstanceName 是否已赋值
                     * @return InstanceName 是否已赋值
                     * 
                     */
                    bool InstanceNameHasBeenSet() const;

                private:

                    /**
                     * Application ID
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_serviceID;
                    bool m_serviceIDHasBeenSet;

                    /**
                     * Business system ID
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_instanceKey;
                    bool m_instanceKeyHasBeenSet;

                    /**
                     * User appid.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_appID;
                    bool m_appIDHasBeenSet;

                    /**
                     * Host account UIN
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_createUIN;
                    bool m_createUINHasBeenSet;

                    /**
                     * Application name
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_serviceName;
                    bool m_serviceNameHasBeenSet;

                    /**
                     * Application description
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_serviceDescription;
                    bool m_serviceDescriptionHasBeenSet;

                    /**
                     * Region.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * Tag.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<ApmTag> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * Business system name.
                     */
                    std::string m_instanceName;
                    bool m_instanceNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_APM_V20210622_MODEL_SERVICEDETAIL_H_
