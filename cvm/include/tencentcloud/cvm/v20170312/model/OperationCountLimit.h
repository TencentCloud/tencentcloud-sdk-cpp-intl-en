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

#ifndef TENCENTCLOUD_CVM_V20170312_MODEL_OPERATIONCOUNTLIMIT_H_
#define TENCENTCLOUD_CVM_V20170312_MODEL_OPERATIONCOUNTLIMIT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cvm
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * Describes the maximum number of times you can perform an operation on a single instance.
                */
                class OperationCountLimit : public AbstractModel
                {
                public:
                    OperationCountLimit();
                    ~OperationCountLimit() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Instance operation. Valid values: <br><li>`INSTANCE_DEGRADE`: downgrade an instance<br><li>`INTERNET_CHARGE_TYPE_CHANGE`: modify the billing plan of the network connection
                     * @return Operation Instance operation. Valid values: <br><li>`INSTANCE_DEGRADE`: downgrade an instance<br><li>`INTERNET_CHARGE_TYPE_CHANGE`: modify the billing plan of the network connection
                     */
                    std::string GetOperation() const;

                    /**
                     * 设置Instance operation. Valid values: <br><li>`INSTANCE_DEGRADE`: downgrade an instance<br><li>`INTERNET_CHARGE_TYPE_CHANGE`: modify the billing plan of the network connection
                     * @param Operation Instance operation. Valid values: <br><li>`INSTANCE_DEGRADE`: downgrade an instance<br><li>`INTERNET_CHARGE_TYPE_CHANGE`: modify the billing plan of the network connection
                     */
                    void SetOperation(const std::string& _operation);

                    /**
                     * 判断参数 Operation 是否已赋值
                     * @return Operation 是否已赋值
                     */
                    bool OperationHasBeenSet() const;

                    /**
                     * 获取Instance ID.
                     * @return InstanceId Instance ID.
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置Instance ID.
                     * @param InstanceId Instance ID.
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取Number of operations already performed. If it returns `-1`, it means there is no limit on the times of the operation.
                     * @return CurrentCount Number of operations already performed. If it returns `-1`, it means there is no limit on the times of the operation.
                     */
                    int64_t GetCurrentCount() const;

                    /**
                     * 设置Number of operations already performed. If it returns `-1`, it means there is no limit on the times of the operation.
                     * @param CurrentCount Number of operations already performed. If it returns `-1`, it means there is no limit on the times of the operation.
                     */
                    void SetCurrentCount(const int64_t& _currentCount);

                    /**
                     * 判断参数 CurrentCount 是否已赋值
                     * @return CurrentCount 是否已赋值
                     */
                    bool CurrentCountHasBeenSet() const;

                    /**
                     * 获取Maximum number of times you can perform an operation. If it returns `-1`, it means there is no limit on the times of the operation. If it returns `0`, it means that configuration modification is not supported.
                     * @return LimitCount Maximum number of times you can perform an operation. If it returns `-1`, it means there is no limit on the times of the operation. If it returns `0`, it means that configuration modification is not supported.
                     */
                    int64_t GetLimitCount() const;

                    /**
                     * 设置Maximum number of times you can perform an operation. If it returns `-1`, it means there is no limit on the times of the operation. If it returns `0`, it means that configuration modification is not supported.
                     * @param LimitCount Maximum number of times you can perform an operation. If it returns `-1`, it means there is no limit on the times of the operation. If it returns `0`, it means that configuration modification is not supported.
                     */
                    void SetLimitCount(const int64_t& _limitCount);

                    /**
                     * 判断参数 LimitCount 是否已赋值
                     * @return LimitCount 是否已赋值
                     */
                    bool LimitCountHasBeenSet() const;

                private:

                    /**
                     * Instance operation. Valid values: <br><li>`INSTANCE_DEGRADE`: downgrade an instance<br><li>`INTERNET_CHARGE_TYPE_CHANGE`: modify the billing plan of the network connection
                     */
                    std::string m_operation;
                    bool m_operationHasBeenSet;

                    /**
                     * Instance ID.
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * Number of operations already performed. If it returns `-1`, it means there is no limit on the times of the operation.
                     */
                    int64_t m_currentCount;
                    bool m_currentCountHasBeenSet;

                    /**
                     * Maximum number of times you can perform an operation. If it returns `-1`, it means there is no limit on the times of the operation. If it returns `0`, it means that configuration modification is not supported.
                     */
                    int64_t m_limitCount;
                    bool m_limitCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CVM_V20170312_MODEL_OPERATIONCOUNTLIMIT_H_
