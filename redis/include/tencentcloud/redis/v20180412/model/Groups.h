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

#ifndef TENCENTCLOUD_REDIS_V20180412_MODEL_GROUPS_H_
#define TENCENTCLOUD_REDIS_V20180412_MODEL_GROUPS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/redis/v20180412/model/Instances.h>


namespace TencentCloud
{
    namespace Redis
    {
        namespace V20180412
        {
            namespace Model
            {
                /**
                * Replication group info
                */
                class Groups : public AbstractModel
                {
                public:
                    Groups();
                    ~Groups() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取User APPID, which is the unique application ID that matches an account. Some Tencent Cloud products use this APPID.
                     * @return AppId User APPID, which is the unique application ID that matches an account. Some Tencent Cloud products use this APPID.
                     * 
                     */
                    int64_t GetAppId() const;

                    /**
                     * 设置User APPID, which is the unique application ID that matches an account. Some Tencent Cloud products use this APPID.
                     * @param _appId User APPID, which is the unique application ID that matches an account. Some Tencent Cloud products use this APPID.
                     * 
                     */
                    void SetAppId(const int64_t& _appId);

                    /**
                     * 判断参数 AppId 是否已赋值
                     * @return AppId 是否已赋值
                     * 
                     */
                    bool AppIdHasBeenSet() const;

                    /**
                     * 获取Region ID. Valid values:
- `1`: Guangzhou 
- `4`: Shanghai 
- `5`: Hong Kong (China) 
- `6`: Toronto 
- `7`: Shanghai Finance 
- `8`: Beijing 
- `9`: Singapore
- `11`: Shenzhen Finance
- `15`: Silicon Valley (West US)
- `16`: Chengdu 
- `17`: Germany 
- `18`: South Korea 
- `19`: Chongqing 
- `21`: India 
- `22`: Virginia (East US)
- `23`: Thailand 
- `25`: Japan
                     * @return RegionId Region ID. Valid values:
- `1`: Guangzhou 
- `4`: Shanghai 
- `5`: Hong Kong (China) 
- `6`: Toronto 
- `7`: Shanghai Finance 
- `8`: Beijing 
- `9`: Singapore
- `11`: Shenzhen Finance
- `15`: Silicon Valley (West US)
- `16`: Chengdu 
- `17`: Germany 
- `18`: South Korea 
- `19`: Chongqing 
- `21`: India 
- `22`: Virginia (East US)
- `23`: Thailand 
- `25`: Japan
                     * 
                     */
                    int64_t GetRegionId() const;

                    /**
                     * 设置Region ID. Valid values:
- `1`: Guangzhou 
- `4`: Shanghai 
- `5`: Hong Kong (China) 
- `6`: Toronto 
- `7`: Shanghai Finance 
- `8`: Beijing 
- `9`: Singapore
- `11`: Shenzhen Finance
- `15`: Silicon Valley (West US)
- `16`: Chengdu 
- `17`: Germany 
- `18`: South Korea 
- `19`: Chongqing 
- `21`: India 
- `22`: Virginia (East US)
- `23`: Thailand 
- `25`: Japan
                     * @param _regionId Region ID. Valid values:
- `1`: Guangzhou 
- `4`: Shanghai 
- `5`: Hong Kong (China) 
- `6`: Toronto 
- `7`: Shanghai Finance 
- `8`: Beijing 
- `9`: Singapore
- `11`: Shenzhen Finance
- `15`: Silicon Valley (West US)
- `16`: Chengdu 
- `17`: Germany 
- `18`: South Korea 
- `19`: Chongqing 
- `21`: India 
- `22`: Virginia (East US)
- `23`: Thailand 
- `25`: Japan
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
                     * 获取Replication group ID in the format of "crs-rpl-deind****"
                     * @return GroupId Replication group ID in the format of "crs-rpl-deind****"
                     * 
                     */
                    std::string GetGroupId() const;

                    /**
                     * 设置Replication group ID in the format of "crs-rpl-deind****"
                     * @param _groupId Replication group ID in the format of "crs-rpl-deind****"
                     * 
                     */
                    void SetGroupId(const std::string& _groupId);

                    /**
                     * 判断参数 GroupId 是否已赋值
                     * @return GroupId 是否已赋值
                     * 
                     */
                    bool GroupIdHasBeenSet() const;

                    /**
                     * 获取Replication group name
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return GroupName Replication group name
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetGroupName() const;

                    /**
                     * 设置Replication group name
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _groupName Replication group name
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetGroupName(const std::string& _groupName);

                    /**
                     * 判断参数 GroupName 是否已赋值
                     * @return GroupName 是否已赋值
                     * 
                     */
                    bool GroupNameHasBeenSet() const;

                    /**
                     * 获取Status of replication group
- `37`: Associating replication group
- `38`: Reconnecting to replication group
- `51`: Disassociating replication group
- `52`: Switching with master instance in replication group
- `53`: Modifying the roles
                     * @return Status Status of replication group
- `37`: Associating replication group
- `38`: Reconnecting to replication group
- `51`: Disassociating replication group
- `52`: Switching with master instance in replication group
- `53`: Modifying the roles
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置Status of replication group
- `37`: Associating replication group
- `38`: Reconnecting to replication group
- `51`: Disassociating replication group
- `52`: Switching with master instance in replication group
- `53`: Modifying the roles
                     * @param _status Status of replication group
- `37`: Associating replication group
- `38`: Reconnecting to replication group
- `51`: Disassociating replication group
- `52`: Switching with master instance in replication group
- `53`: Modifying the roles
                     * 
                     */
                    void SetStatus(const int64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取Number of replication groups
                     * @return InstanceCount Number of replication groups
                     * 
                     */
                    int64_t GetInstanceCount() const;

                    /**
                     * 设置Number of replication groups
                     * @param _instanceCount Number of replication groups
                     * 
                     */
                    void SetInstanceCount(const int64_t& _instanceCount);

                    /**
                     * 判断参数 InstanceCount 是否已赋值
                     * @return InstanceCount 是否已赋值
                     * 
                     */
                    bool InstanceCountHasBeenSet() const;

                    /**
                     * 获取Instance information in replication groups
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Instances Instance information in replication groups
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<Instances> GetInstances() const;

                    /**
                     * 设置Instance information in replication groups
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _instances Instance information in replication groups
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetInstances(const std::vector<Instances>& _instances);

                    /**
                     * 判断参数 Instances 是否已赋值
                     * @return Instances 是否已赋值
                     * 
                     */
                    bool InstancesHasBeenSet() const;

                    /**
                     * 获取Remarks
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Remark Remarks
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetRemark() const;

                    /**
                     * 设置Remarks
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _remark Remarks
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetRemark(const std::string& _remark);

                    /**
                     * 判断参数 Remark 是否已赋值
                     * @return Remark 是否已赋值
                     * 
                     */
                    bool RemarkHasBeenSet() const;

                private:

                    /**
                     * User APPID, which is the unique application ID that matches an account. Some Tencent Cloud products use this APPID.
                     */
                    int64_t m_appId;
                    bool m_appIdHasBeenSet;

                    /**
                     * Region ID. Valid values:
- `1`: Guangzhou 
- `4`: Shanghai 
- `5`: Hong Kong (China) 
- `6`: Toronto 
- `7`: Shanghai Finance 
- `8`: Beijing 
- `9`: Singapore
- `11`: Shenzhen Finance
- `15`: Silicon Valley (West US)
- `16`: Chengdu 
- `17`: Germany 
- `18`: South Korea 
- `19`: Chongqing 
- `21`: India 
- `22`: Virginia (East US)
- `23`: Thailand 
- `25`: Japan
                     */
                    int64_t m_regionId;
                    bool m_regionIdHasBeenSet;

                    /**
                     * Replication group ID in the format of "crs-rpl-deind****"
                     */
                    std::string m_groupId;
                    bool m_groupIdHasBeenSet;

                    /**
                     * Replication group name
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_groupName;
                    bool m_groupNameHasBeenSet;

                    /**
                     * Status of replication group
- `37`: Associating replication group
- `38`: Reconnecting to replication group
- `51`: Disassociating replication group
- `52`: Switching with master instance in replication group
- `53`: Modifying the roles
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Number of replication groups
                     */
                    int64_t m_instanceCount;
                    bool m_instanceCountHasBeenSet;

                    /**
                     * Instance information in replication groups
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<Instances> m_instances;
                    bool m_instancesHasBeenSet;

                    /**
                     * Remarks
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_REDIS_V20180412_MODEL_GROUPS_H_
