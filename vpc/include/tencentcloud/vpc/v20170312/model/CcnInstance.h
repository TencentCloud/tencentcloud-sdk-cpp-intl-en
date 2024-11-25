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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_CCNINSTANCE_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_CCNINSTANCE_H_

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
                * The instance object associated with a CCN.
                */
                class CcnInstance : public AbstractModel
                {
                public:
                    CcnInstance();
                    ~CcnInstance() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取The type of the associated instance. Available values are:
<li>`VPC`: VPC</li>
<li>`DIRECTCONNECT`: Direct Connect</li>
<li>`BMVPC`: BM VPC</li>
                     * @return InstanceType The type of the associated instance. Available values are:
<li>`VPC`: VPC</li>
<li>`DIRECTCONNECT`: Direct Connect</li>
<li>`BMVPC`: BM VPC</li>
                     * 
                     */
                    std::string GetInstanceType() const;

                    /**
                     * 设置The type of the associated instance. Available values are:
<li>`VPC`: VPC</li>
<li>`DIRECTCONNECT`: Direct Connect</li>
<li>`BMVPC`: BM VPC</li>
                     * @param _instanceType The type of the associated instance. Available values are:
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
                     * 获取The region to which the associated instance ID belongs, such as `ap-guangzhou`.
                     * @return InstanceRegion The region to which the associated instance ID belongs, such as `ap-guangzhou`.
                     * 
                     */
                    std::string GetInstanceRegion() const;

                    /**
                     * 设置The region to which the associated instance ID belongs, such as `ap-guangzhou`.
                     * @param _instanceRegion The region to which the associated instance ID belongs, such as `ap-guangzhou`.
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
                     * 获取The ID of the route table associated with the instance
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @return RouteTableId The ID of the route table associated with the instance
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetRouteTableId() const;

                    /**
                     * 设置The ID of the route table associated with the instance
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @param _routeTableId The ID of the route table associated with the instance
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

                private:

                    /**
                     * The type of the associated instance. Available values are:
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
                     * The region to which the associated instance ID belongs, such as `ap-guangzhou`.
                     */
                    std::string m_instanceRegion;
                    bool m_instanceRegionHasBeenSet;

                    /**
                     * Description
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * The ID of the route table associated with the instance
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string m_routeTableId;
                    bool m_routeTableIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_CCNINSTANCE_H_
