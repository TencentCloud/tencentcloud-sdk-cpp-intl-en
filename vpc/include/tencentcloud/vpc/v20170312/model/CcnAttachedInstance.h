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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_CCNATTACHEDINSTANCE_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_CCNATTACHEDINSTANCE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Vpc
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * The instance object associated with a CCN
                */
                class CcnAttachedInstance : public AbstractModel
                {
                public:
                    CcnAttachedInstance();
                    ~CcnAttachedInstance() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取The ID of a CCN instance.
                     * @return CcnId The ID of a CCN instance.
                     * 
                     */
                    std::string GetCcnId() const;

                    /**
                     * 设置The ID of a CCN instance.
                     * @param _ccnId The ID of a CCN instance.
                     * 
                     */
                    void SetCcnId(const std::string& _ccnId);

                    /**
                     * 判断参数 CcnId 是否已赋值
                     * @return CcnId 是否已赋值
                     * 
                     */
                    bool CcnIdHasBeenSet() const;

                    /**
                     * 获取The type of associated instances:
<li>`VPC`: VPC</li>
<li>`DIRECTCONNECT`: Direct Connect</li>
<li>`BMVPC`: BM VPC</li>
                     * @return InstanceType The type of associated instances:
<li>`VPC`: VPC</li>
<li>`DIRECTCONNECT`: Direct Connect</li>
<li>`BMVPC`: BM VPC</li>
                     * 
                     */
                    std::string GetInstanceType() const;

                    /**
                     * 设置The type of associated instances:
<li>`VPC`: VPC</li>
<li>`DIRECTCONNECT`: Direct Connect</li>
<li>`BMVPC`: BM VPC</li>
                     * @param _instanceType The type of associated instances:
<li>`VPC`: VPC</li>
<li>`DIRECTCONNECT`: Direct Connect</li>
<li>`BMVPC`: BM VPC</li>
                     * 
                     */
                    void SetInstanceType(const std::string& _instanceType);

                    /**
                     * 判断参数 InstanceType 是否已赋值
                     * @return InstanceType 是否已赋值
                     * 
                     */
                    bool InstanceTypeHasBeenSet() const;

                    /**
                     * 获取The ID of the associated instance.
                     * @return InstanceId The ID of the associated instance.
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置The ID of the associated instance.
                     * @param _instanceId The ID of the associated instance.
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
                     * 获取The name of the associated instance.
                     * @return InstanceName The name of the associated instance.
                     * 
                     */
                    std::string GetInstanceName() const;

                    /**
                     * 设置The name of the associated instance.
                     * @param _instanceName The name of the associated instance.
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
                     * 获取The region to which the associated instance belongs, such as `ap-guangzhou`.
                     * @return InstanceRegion The region to which the associated instance belongs, such as `ap-guangzhou`.
                     * 
                     */
                    std::string GetInstanceRegion() const;

                    /**
                     * 设置The region to which the associated instance belongs, such as `ap-guangzhou`.
                     * @param _instanceRegion The region to which the associated instance belongs, such as `ap-guangzhou`.
                     * 
                     */
                    void SetInstanceRegion(const std::string& _instanceRegion);

                    /**
                     * 判断参数 InstanceRegion 是否已赋值
                     * @return InstanceRegion 是否已赋值
                     * 
                     */
                    bool InstanceRegionHasBeenSet() const;

                    /**
                     * 获取The UIN (root account) to which the associated instance belongs.
                     * @return InstanceUin The UIN (root account) to which the associated instance belongs.
                     * 
                     */
                    std::string GetInstanceUin() const;

                    /**
                     * 设置The UIN (root account) to which the associated instance belongs.
                     * @param _instanceUin The UIN (root account) to which the associated instance belongs.
                     * 
                     */
                    void SetInstanceUin(const std::string& _instanceUin);

                    /**
                     * 判断参数 InstanceUin 是否已赋值
                     * @return InstanceUin 是否已赋值
                     * 
                     */
                    bool InstanceUinHasBeenSet() const;

                    /**
                     * 获取The CIDR of the associated instance.
                     * @return CidrBlock The CIDR of the associated instance.
                     * 
                     */
                    std::vector<std::string> GetCidrBlock() const;

                    /**
                     * 设置The CIDR of the associated instance.
                     * @param _cidrBlock The CIDR of the associated instance.
                     * 
                     */
                    void SetCidrBlock(const std::vector<std::string>& _cidrBlock);

                    /**
                     * 判断参数 CidrBlock 是否已赋值
                     * @return CidrBlock 是否已赋值
                     * 
                     */
                    bool CidrBlockHasBeenSet() const;

                    /**
                     * 获取The status of the associated instance:
<li>`PENDING`: In application</li>
<li>`ACTIVE`: Connected</li>
<li>`EXPIRED`: Expired</li>
<li>`REJECTED`: Rejected</li>
<li>`DELETED`: Deleted</li>
<li>`FAILED`: Failed (it will be asynchronously unbound after 2 hours)</li>
<li>`ATTACHING`: binding</li>
<li>`DETACHING`: Unbinding</li>
<li>`DETACHFAILED`: The unbinding failed (it will be asynchronously unbound after 2 hours)</li>
                     * @return State The status of the associated instance:
<li>`PENDING`: In application</li>
<li>`ACTIVE`: Connected</li>
<li>`EXPIRED`: Expired</li>
<li>`REJECTED`: Rejected</li>
<li>`DELETED`: Deleted</li>
<li>`FAILED`: Failed (it will be asynchronously unbound after 2 hours)</li>
<li>`ATTACHING`: binding</li>
<li>`DETACHING`: Unbinding</li>
<li>`DETACHFAILED`: The unbinding failed (it will be asynchronously unbound after 2 hours)</li>
                     * 
                     */
                    std::string GetState() const;

                    /**
                     * 设置The status of the associated instance:
<li>`PENDING`: In application</li>
<li>`ACTIVE`: Connected</li>
<li>`EXPIRED`: Expired</li>
<li>`REJECTED`: Rejected</li>
<li>`DELETED`: Deleted</li>
<li>`FAILED`: Failed (it will be asynchronously unbound after 2 hours)</li>
<li>`ATTACHING`: binding</li>
<li>`DETACHING`: Unbinding</li>
<li>`DETACHFAILED`: The unbinding failed (it will be asynchronously unbound after 2 hours)</li>
                     * @param _state The status of the associated instance:
<li>`PENDING`: In application</li>
<li>`ACTIVE`: Connected</li>
<li>`EXPIRED`: Expired</li>
<li>`REJECTED`: Rejected</li>
<li>`DELETED`: Deleted</li>
<li>`FAILED`: Failed (it will be asynchronously unbound after 2 hours)</li>
<li>`ATTACHING`: binding</li>
<li>`DETACHING`: Unbinding</li>
<li>`DETACHFAILED`: The unbinding failed (it will be asynchronously unbound after 2 hours)</li>
                     * 
                     */
                    void SetState(const std::string& _state);

                    /**
                     * 判断参数 State 是否已赋值
                     * @return State 是否已赋值
                     * 
                     */
                    bool StateHasBeenSet() const;

                    /**
                     * 获取Association Time.
                     * @return AttachedTime Association Time.
                     * 
                     */
                    std::string GetAttachedTime() const;

                    /**
                     * 设置Association Time.
                     * @param _attachedTime Association Time.
                     * 
                     */
                    void SetAttachedTime(const std::string& _attachedTime);

                    /**
                     * 判断参数 AttachedTime 是否已赋值
                     * @return AttachedTime 是否已赋值
                     * 
                     */
                    bool AttachedTimeHasBeenSet() const;

                    /**
                     * 获取The UIN (root account) to which the CCN belongs.
                     * @return CcnUin The UIN (root account) to which the CCN belongs.
                     * 
                     */
                    std::string GetCcnUin() const;

                    /**
                     * 设置The UIN (root account) to which the CCN belongs.
                     * @param _ccnUin The UIN (root account) to which the CCN belongs.
                     * 
                     */
                    void SetCcnUin(const std::string& _ccnUin);

                    /**
                     * 判断参数 CcnUin 是否已赋值
                     * @return CcnUin 是否已赋值
                     * 
                     */
                    bool CcnUinHasBeenSet() const;

                    /**
                     * 获取General location of the associated instance, such as CHINA_MAINLAND.
                     * @return InstanceArea General location of the associated instance, such as CHINA_MAINLAND.
                     * 
                     */
                    std::string GetInstanceArea() const;

                    /**
                     * 设置General location of the associated instance, such as CHINA_MAINLAND.
                     * @param _instanceArea General location of the associated instance, such as CHINA_MAINLAND.
                     * 
                     */
                    void SetInstanceArea(const std::string& _instanceArea);

                    /**
                     * 判断参数 InstanceArea 是否已赋值
                     * @return InstanceArea 是否已赋值
                     * 
                     */
                    bool InstanceAreaHasBeenSet() const;

                    /**
                     * 获取Description
                     * @return Description Description
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置Description
                     * @param _description Description
                     * 
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                    /**
                     * 获取Route table ID
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @return RouteTableId Route table ID
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetRouteTableId() const;

                    /**
                     * 设置Route table ID
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @param _routeTableId Route table ID
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetRouteTableId(const std::string& _routeTableId);

                    /**
                     * 判断参数 RouteTableId 是否已赋值
                     * @return RouteTableId 是否已赋值
                     * 
                     */
                    bool RouteTableIdHasBeenSet() const;

                    /**
                     * 获取Route table name
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @return RouteTableName Route table name
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetRouteTableName() const;

                    /**
                     * 设置Route table name
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @param _routeTableName Route table name
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetRouteTableName(const std::string& _routeTableName);

                    /**
                     * 判断参数 RouteTableName 是否已赋值
                     * @return RouteTableName 是否已赋值
                     * 
                     */
                    bool RouteTableNameHasBeenSet() const;

                private:

                    /**
                     * The ID of a CCN instance.
                     */
                    std::string m_ccnId;
                    bool m_ccnIdHasBeenSet;

                    /**
                     * The type of associated instances:
<li>`VPC`: VPC</li>
<li>`DIRECTCONNECT`: Direct Connect</li>
<li>`BMVPC`: BM VPC</li>
                     */
                    std::string m_instanceType;
                    bool m_instanceTypeHasBeenSet;

                    /**
                     * The ID of the associated instance.
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * The name of the associated instance.
                     */
                    std::string m_instanceName;
                    bool m_instanceNameHasBeenSet;

                    /**
                     * The region to which the associated instance belongs, such as `ap-guangzhou`.
                     */
                    std::string m_instanceRegion;
                    bool m_instanceRegionHasBeenSet;

                    /**
                     * The UIN (root account) to which the associated instance belongs.
                     */
                    std::string m_instanceUin;
                    bool m_instanceUinHasBeenSet;

                    /**
                     * The CIDR of the associated instance.
                     */
                    std::vector<std::string> m_cidrBlock;
                    bool m_cidrBlockHasBeenSet;

                    /**
                     * The status of the associated instance:
<li>`PENDING`: In application</li>
<li>`ACTIVE`: Connected</li>
<li>`EXPIRED`: Expired</li>
<li>`REJECTED`: Rejected</li>
<li>`DELETED`: Deleted</li>
<li>`FAILED`: Failed (it will be asynchronously unbound after 2 hours)</li>
<li>`ATTACHING`: binding</li>
<li>`DETACHING`: Unbinding</li>
<li>`DETACHFAILED`: The unbinding failed (it will be asynchronously unbound after 2 hours)</li>
                     */
                    std::string m_state;
                    bool m_stateHasBeenSet;

                    /**
                     * Association Time.
                     */
                    std::string m_attachedTime;
                    bool m_attachedTimeHasBeenSet;

                    /**
                     * The UIN (root account) to which the CCN belongs.
                     */
                    std::string m_ccnUin;
                    bool m_ccnUinHasBeenSet;

                    /**
                     * General location of the associated instance, such as CHINA_MAINLAND.
                     */
                    std::string m_instanceArea;
                    bool m_instanceAreaHasBeenSet;

                    /**
                     * Description
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * Route table ID
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string m_routeTableId;
                    bool m_routeTableIdHasBeenSet;

                    /**
                     * Route table name
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string m_routeTableName;
                    bool m_routeTableNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_CCNATTACHEDINSTANCE_H_
