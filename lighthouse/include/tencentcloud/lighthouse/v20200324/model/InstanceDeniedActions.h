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

#ifndef TENCENTCLOUD_LIGHTHOUSE_V20200324_MODEL_INSTANCEDENIEDACTIONS_H_
#define TENCENTCLOUD_LIGHTHOUSE_V20200324_MODEL_INSTANCEDENIEDACTIONS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/lighthouse/v20200324/model/DeniedAction.h>


namespace TencentCloud
{
    namespace Lighthouse
    {
        namespace V20200324
        {
            namespace Model
            {
                /**
                * List of instance operation limits.
                */
                class InstanceDeniedActions : public AbstractModel
                {
                public:
                    InstanceDeniedActions();
                    ~InstanceDeniedActions() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Instance ID.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return InstanceId Instance ID.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置Instance ID.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _instanceId Instance ID.
Note: this field may return null, indicating that no valid values can be obtained.
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
                     * 获取List of operation limits.
                     * @return DeniedActions List of operation limits.
                     * 
                     */
                    std::vector<DeniedAction> GetDeniedActions() const;

                    /**
                     * 设置List of operation limits.
                     * @param _deniedActions List of operation limits.
                     * 
                     */
                    void SetDeniedActions(const std::vector<DeniedAction>& _deniedActions);

                    /**
                     * 判断参数 DeniedActions 是否已赋值
                     * @return DeniedActions 是否已赋值
                     * 
                     */
                    bool DeniedActionsHasBeenSet() const;

                private:

                    /**
                     * Instance ID.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * List of operation limits.
                     */
                    std::vector<DeniedAction> m_deniedActions;
                    bool m_deniedActionsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LIGHTHOUSE_V20200324_MODEL_INSTANCEDENIEDACTIONS_H_
