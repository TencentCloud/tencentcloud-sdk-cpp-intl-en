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

#ifndef TENCENTCLOUD_CLB_V20180317_MODEL_TARGETGROUPINFO_H_
#define TENCENTCLOUD_CLB_V20180317_MODEL_TARGETGROUPINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/clb/v20180317/model/AssociationItem.h>


namespace TencentCloud
{
    namespace Clb
    {
        namespace V20180317
        {
            namespace Model
            {
                /**
                * Target group information
                */
                class TargetGroupInfo : public AbstractModel
                {
                public:
                    TargetGroupInfo();
                    ~TargetGroupInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Target group ID
                     * @return TargetGroupId Target group ID
                     * 
                     */
                    std::string GetTargetGroupId() const;

                    /**
                     * 设置Target group ID
                     * @param _targetGroupId Target group ID
                     * 
                     */
                    void SetTargetGroupId(const std::string& _targetGroupId);

                    /**
                     * 判断参数 TargetGroupId 是否已赋值
                     * @return TargetGroupId 是否已赋值
                     * 
                     */
                    bool TargetGroupIdHasBeenSet() const;

                    /**
                     * 获取`vpcid` of target group
                     * @return VpcId `vpcid` of target group
                     * 
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置`vpcid` of target group
                     * @param _vpcId `vpcid` of target group
                     * 
                     */
                    void SetVpcId(const std::string& _vpcId);

                    /**
                     * 判断参数 VpcId 是否已赋值
                     * @return VpcId 是否已赋值
                     * 
                     */
                    bool VpcIdHasBeenSet() const;

                    /**
                     * 获取Target group name
                     * @return TargetGroupName Target group name
                     * 
                     */
                    std::string GetTargetGroupName() const;

                    /**
                     * 设置Target group name
                     * @param _targetGroupName Target group name
                     * 
                     */
                    void SetTargetGroupName(const std::string& _targetGroupName);

                    /**
                     * 判断参数 TargetGroupName 是否已赋值
                     * @return TargetGroupName 是否已赋值
                     * 
                     */
                    bool TargetGroupNameHasBeenSet() const;

                    /**
                     * 获取Default port of target group
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return Port Default port of target group
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetPort() const;

                    /**
                     * 设置Default port of target group
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _port Default port of target group
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetPort(const uint64_t& _port);

                    /**
                     * 判断参数 Port 是否已赋值
                     * @return Port 是否已赋值
                     * 
                     */
                    bool PortHasBeenSet() const;

                    /**
                     * 获取Target group creation time
                     * @return CreatedTime Target group creation time
                     * 
                     */
                    std::string GetCreatedTime() const;

                    /**
                     * 设置Target group creation time
                     * @param _createdTime Target group creation time
                     * 
                     */
                    void SetCreatedTime(const std::string& _createdTime);

                    /**
                     * 判断参数 CreatedTime 是否已赋值
                     * @return CreatedTime 是否已赋值
                     * 
                     */
                    bool CreatedTimeHasBeenSet() const;

                    /**
                     * 获取Target group modification time
                     * @return UpdatedTime Target group modification time
                     * 
                     */
                    std::string GetUpdatedTime() const;

                    /**
                     * 设置Target group modification time
                     * @param _updatedTime Target group modification time
                     * 
                     */
                    void SetUpdatedTime(const std::string& _updatedTime);

                    /**
                     * 判断参数 UpdatedTime 是否已赋值
                     * @return UpdatedTime 是否已赋值
                     * 
                     */
                    bool UpdatedTimeHasBeenSet() const;

                    /**
                     * 获取Associated rule array. This parameter cannot be obtained when the DescribeTargetGroupList API is called.Note: This field may return null, indicating that no valid values can be obtained.
                     * @return AssociatedRule Associated rule array. This parameter cannot be obtained when the DescribeTargetGroupList API is called.Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<AssociationItem> GetAssociatedRule() const;

                    /**
                     * 设置Associated rule array. This parameter cannot be obtained when the DescribeTargetGroupList API is called.Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _associatedRule Associated rule array. This parameter cannot be obtained when the DescribeTargetGroupList API is called.Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetAssociatedRule(const std::vector<AssociationItem>& _associatedRule);

                    /**
                     * 判断参数 AssociatedRule 是否已赋值
                     * @return AssociatedRule 是否已赋值
                     * 
                     */
                    bool AssociatedRuleHasBeenSet() const;

                private:

                    /**
                     * Target group ID
                     */
                    std::string m_targetGroupId;
                    bool m_targetGroupIdHasBeenSet;

                    /**
                     * `vpcid` of target group
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * Target group name
                     */
                    std::string m_targetGroupName;
                    bool m_targetGroupNameHasBeenSet;

                    /**
                     * Default port of target group
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_port;
                    bool m_portHasBeenSet;

                    /**
                     * Target group creation time
                     */
                    std::string m_createdTime;
                    bool m_createdTimeHasBeenSet;

                    /**
                     * Target group modification time
                     */
                    std::string m_updatedTime;
                    bool m_updatedTimeHasBeenSet;

                    /**
                     * Associated rule array. This parameter cannot be obtained when the DescribeTargetGroupList API is called.Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<AssociationItem> m_associatedRule;
                    bool m_associatedRuleHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLB_V20180317_MODEL_TARGETGROUPINFO_H_
