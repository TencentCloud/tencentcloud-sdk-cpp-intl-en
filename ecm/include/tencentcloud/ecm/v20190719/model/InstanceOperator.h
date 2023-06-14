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

#ifndef TENCENTCLOUD_ECM_V20190719_MODEL_INSTANCEOPERATOR_H_
#define TENCENTCLOUD_ECM_V20190719_MODEL_INSTANCEOPERATOR_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ecm/v20190719/model/OperatorAction.h>


namespace TencentCloud
{
    namespace Ecm
    {
        namespace V20190719
        {
            namespace Model
            {
                /**
                * Executable operations for the instance
                */
                class InstanceOperator : public AbstractModel
                {
                public:
                    InstanceOperator();
                    ~InstanceOperator() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Instance ID
                     * @return InstanceId Instance ID
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置Instance ID
                     * @param _instanceId Instance ID
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
                     * 获取Prohibited operations for the instance
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return DeniedActions Prohibited operations for the instance
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<OperatorAction> GetDeniedActions() const;

                    /**
                     * 设置Prohibited operations for the instance
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _deniedActions Prohibited operations for the instance
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetDeniedActions(const std::vector<OperatorAction>& _deniedActions);

                    /**
                     * 判断参数 DeniedActions 是否已赋值
                     * @return DeniedActions 是否已赋值
                     * 
                     */
                    bool DeniedActionsHasBeenSet() const;

                private:

                    /**
                     * Instance ID
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * Prohibited operations for the instance
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<OperatorAction> m_deniedActions;
                    bool m_deniedActionsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ECM_V20190719_MODEL_INSTANCEOPERATOR_H_
