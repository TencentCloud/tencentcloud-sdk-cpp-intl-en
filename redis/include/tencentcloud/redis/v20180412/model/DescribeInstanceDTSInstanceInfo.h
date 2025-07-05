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

#ifndef TENCENTCLOUD_REDIS_V20180412_MODEL_DESCRIBEINSTANCEDTSINSTANCEINFO_H_
#define TENCENTCLOUD_REDIS_V20180412_MODEL_DESCRIBEINSTANCEDTSINSTANCEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Redis
    {
        namespace V20180412
        {
            namespace Model
            {
                /**
                * Details of instances in the DTS task
                */
                class DescribeInstanceDTSInstanceInfo : public AbstractModel
                {
                public:
                    DescribeInstanceDTSInstanceInfo();
                    ~DescribeInstanceDTSInstanceInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Region ID.
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return RegionId Region ID.
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    int64_t GetRegionId() const;

                    /**
                     * 设置Region ID.
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _regionId Region ID.
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetRegionId(const int64_t& _regionId);

                    /**
                     * 判断参数 RegionId 是否已赋值
                     * @return RegionId 是否已赋值
                     * 
                     */
                    bool RegionIdHasBeenSet() const;

                    /**
                     * 获取Instance ID.
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return InstanceId Instance ID.
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置Instance ID.
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _instanceId Instance ID.
Note: This field may return null, indicating that no valid value can be obtained.
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
                     * 获取Warehouse ID.
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return SetId Warehouse ID.
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    int64_t GetSetId() const;

                    /**
                     * 设置Warehouse ID.
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _setId Warehouse ID.
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetSetId(const int64_t& _setId);

                    /**
                     * 判断参数 SetId 是否已赋值
                     * @return SetId 是否已赋值
                     * 
                     */
                    bool SetIdHasBeenSet() const;

                    /**
                     * 获取AZ ID.
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return ZoneId AZ ID.
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    int64_t GetZoneId() const;

                    /**
                     * 设置AZ ID.
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _zoneId AZ ID.
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetZoneId(const int64_t& _zoneId);

                    /**
                     * 判断参数 ZoneId 是否已赋值
                     * @return ZoneId 是否已赋值
                     * 
                     */
                    bool ZoneIdHasBeenSet() const;

                    /**
                     * 获取Instance type.
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return Type Instance type.
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    int64_t GetType() const;

                    /**
                     * 设置Instance type.
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _type Instance type.
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetType(const int64_t& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取Instance name.
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return InstanceName Instance name.
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetInstanceName() const;

                    /**
                     * 设置Instance name.
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _instanceName Instance name.
Note: This field may return null, indicating that no valid value can be obtained.
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
                     * 获取Instance access address.
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return Vip Instance access address.
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetVip() const;

                    /**
                     * 设置Instance access address.
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _vip Instance access address.
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetVip(const std::string& _vip);

                    /**
                     * 判断参数 Vip 是否已赋值
                     * @return Vip 是否已赋值
                     * 
                     */
                    bool VipHasBeenSet() const;

                    /**
                     * 获取Status.
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return Status Status.
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置Status.
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _status Status.
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetStatus(const int64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                private:

                    /**
                     * Region ID.
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    int64_t m_regionId;
                    bool m_regionIdHasBeenSet;

                    /**
                     * Instance ID.
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * Warehouse ID.
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    int64_t m_setId;
                    bool m_setIdHasBeenSet;

                    /**
                     * AZ ID.
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    int64_t m_zoneId;
                    bool m_zoneIdHasBeenSet;

                    /**
                     * Instance type.
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    int64_t m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * Instance name.
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_instanceName;
                    bool m_instanceNameHasBeenSet;

                    /**
                     * Instance access address.
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_vip;
                    bool m_vipHasBeenSet;

                    /**
                     * Status.
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_REDIS_V20180412_MODEL_DESCRIBEINSTANCEDTSINSTANCEINFO_H_
