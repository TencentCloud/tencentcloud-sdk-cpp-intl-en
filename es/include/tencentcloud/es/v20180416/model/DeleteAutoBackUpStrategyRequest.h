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

#ifndef TENCENTCLOUD_ES_V20180416_MODEL_DELETEAUTOBACKUPSTRATEGYREQUEST_H_
#define TENCENTCLOUD_ES_V20180416_MODEL_DELETEAUTOBACKUPSTRATEGYREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Es
    {
        namespace V20180416
        {
            namespace Model
            {
                /**
                * DeleteAutoBackUpStrategy request structure.
                */
                class DeleteAutoBackUpStrategyRequest : public AbstractModel
                {
                public:
                    DeleteAutoBackUpStrategyRequest();
                    ~DeleteAutoBackUpStrategyRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Instance name.
                     * @return InstanceId Instance name.
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置Instance name.
                     * @param _instanceId Instance name.
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
                     * 获取Policy name.
                     * @return StrategyName Policy name.
                     * 
                     */
                    std::vector<std::string> GetStrategyName() const;

                    /**
                     * 设置Policy name.
                     * @param _strategyName Policy name.
                     * 
                     */
                    void SetStrategyName(const std::vector<std::string>& _strategyName);

                    /**
                     * 判断参数 StrategyName 是否已赋值
                     * @return StrategyName 是否已赋值
                     * 
                     */
                    bool StrategyNameHasBeenSet() const;

                private:

                    /**
                     * Instance name.
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * Policy name.
                     */
                    std::vector<std::string> m_strategyName;
                    bool m_strategyNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ES_V20180416_MODEL_DELETEAUTOBACKUPSTRATEGYREQUEST_H_
