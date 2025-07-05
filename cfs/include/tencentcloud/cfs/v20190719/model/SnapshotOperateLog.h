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

#ifndef TENCENTCLOUD_CFS_V20190719_MODEL_SNAPSHOTOPERATELOG_H_
#define TENCENTCLOUD_CFS_V20190719_MODEL_SNAPSHOTOPERATELOG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cfs
    {
        namespace V20190719
        {
            namespace Model
            {
                /**
                * Snapshot operation log
                */
                class SnapshotOperateLog : public AbstractModel
                {
                public:
                    SnapshotOperateLog();
                    ~SnapshotOperateLog() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Operation type
                     * @return Action Operation type
                     * 
                     */
                    std::string GetAction() const;

                    /**
                     * 设置Operation type
                     * @param _action Operation type
                     * 
                     */
                    void SetAction(const std::string& _action);

                    /**
                     * 判断参数 Action 是否已赋值
                     * @return Action 是否已赋值
                     * 
                     */
                    bool ActionHasBeenSet() const;

                    /**
                     * 获取Operation time
                     * @return ActionTime Operation time
                     * 
                     */
                    std::string GetActionTime() const;

                    /**
                     * 设置Operation time
                     * @param _actionTime Operation time
                     * 
                     */
                    void SetActionTime(const std::string& _actionTime);

                    /**
                     * 判断参数 ActionTime 是否已赋值
                     * @return ActionTime 是否已赋值
                     * 
                     */
                    bool ActionTimeHasBeenSet() const;

                    /**
                     * 获取Operation name
                     * @return ActionName Operation name
                     * 
                     */
                    std::string GetActionName() const;

                    /**
                     * 设置Operation name
                     * @param _actionName Operation name
                     * 
                     */
                    void SetActionName(const std::string& _actionName);

                    /**
                     * 判断参数 ActionName 是否已赋值
                     * @return ActionName 是否已赋值
                     * 
                     */
                    bool ActionNameHasBeenSet() const;

                    /**
                     * 获取Operator
                     * @return Operator Operator
                     * 
                     */
                    std::string GetOperator() const;

                    /**
                     * 设置Operator
                     * @param _operator Operator
                     * 
                     */
                    void SetOperator(const std::string& _operator);

                    /**
                     * 判断参数 Operator 是否已赋值
                     * @return Operator 是否已赋值
                     * 
                     */
                    bool OperatorHasBeenSet() const;

                    /**
                     * 获取Result
                     * @return Result Result
                     * 
                     */
                    uint64_t GetResult() const;

                    /**
                     * 设置Result
                     * @param _result Result
                     * 
                     */
                    void SetResult(const uint64_t& _result);

                    /**
                     * 判断参数 Result 是否已赋值
                     * @return Result 是否已赋值
                     * 
                     */
                    bool ResultHasBeenSet() const;

                private:

                    /**
                     * Operation type
                     */
                    std::string m_action;
                    bool m_actionHasBeenSet;

                    /**
                     * Operation time
                     */
                    std::string m_actionTime;
                    bool m_actionTimeHasBeenSet;

                    /**
                     * Operation name
                     */
                    std::string m_actionName;
                    bool m_actionNameHasBeenSet;

                    /**
                     * Operator
                     */
                    std::string m_operator;
                    bool m_operatorHasBeenSet;

                    /**
                     * Result
                     */
                    uint64_t m_result;
                    bool m_resultHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFS_V20190719_MODEL_SNAPSHOTOPERATELOG_H_
