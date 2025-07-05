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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_ORIGINACLENTITY_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_ORIGINACLENTITY_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * Instances that require configuration origin ACLs.
                */
                class OriginACLEntity : public AbstractModel
                {
                public:
                    OriginACLEntity();
                    ~OriginACLEntity() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Instance type. Valid values:
-l7: L7 acceleration domain;
-l4: L4 proxy instance.
                     * @return Type Instance type. Valid values:
-l7: L7 acceleration domain;
-l4: L4 proxy instance.
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置Instance type. Valid values:
-l7: L7 acceleration domain;
-l4: L4 proxy instance.
                     * @param _type Instance type. Valid values:
-l7: L7 acceleration domain;
-l4: L4 proxy instance.
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取Instance detail. Valid values:
-When Type = l7, please enter the L7 acceleration domain.
-When Type = l4, please enter the L4 proxy instance ID.
                     * @return Instances Instance detail. Valid values:
-When Type = l7, please enter the L7 acceleration domain.
-When Type = l4, please enter the L4 proxy instance ID.
                     * 
                     */
                    std::vector<std::string> GetInstances() const;

                    /**
                     * 设置Instance detail. Valid values:
-When Type = l7, please enter the L7 acceleration domain.
-When Type = l4, please enter the L4 proxy instance ID.
                     * @param _instances Instance detail. Valid values:
-When Type = l7, please enter the L7 acceleration domain.
-When Type = l4, please enter the L4 proxy instance ID.
                     * 
                     */
                    void SetInstances(const std::vector<std::string>& _instances);

                    /**
                     * 判断参数 Instances 是否已赋值
                     * @return Instances 是否已赋值
                     * 
                     */
                    bool InstancesHasBeenSet() const;

                    /**
                     * 获取Operation mode. Valid values:.
- enable: enabled L7/L4 instances.
- disable: disable L7/L4 instances.
                     * @return OperationMode Operation mode. Valid values:.
- enable: enabled L7/L4 instances.
- disable: disable L7/L4 instances.
                     * 
                     */
                    std::string GetOperationMode() const;

                    /**
                     * 设置Operation mode. Valid values:.
- enable: enabled L7/L4 instances.
- disable: disable L7/L4 instances.
                     * @param _operationMode Operation mode. Valid values:.
- enable: enabled L7/L4 instances.
- disable: disable L7/L4 instances.
                     * 
                     */
                    void SetOperationMode(const std::string& _operationMode);

                    /**
                     * 判断参数 OperationMode 是否已赋值
                     * @return OperationMode 是否已赋值
                     * 
                     */
                    bool OperationModeHasBeenSet() const;

                private:

                    /**
                     * Instance type. Valid values:
-l7: L7 acceleration domain;
-l4: L4 proxy instance.
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * Instance detail. Valid values:
-When Type = l7, please enter the L7 acceleration domain.
-When Type = l4, please enter the L4 proxy instance ID.
                     */
                    std::vector<std::string> m_instances;
                    bool m_instancesHasBeenSet;

                    /**
                     * Operation mode. Valid values:.
- enable: enabled L7/L4 instances.
- disable: disable L7/L4 instances.
                     */
                    std::string m_operationMode;
                    bool m_operationModeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_ORIGINACLENTITY_H_
