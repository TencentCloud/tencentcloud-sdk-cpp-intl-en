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
CreateCfsSnapshot: create a snapshot.
DeleteCfsSnapshot: delete snapshot.
CreateCfsFileSystem: create a file system.
UpdateCfsSnapshotAttribute: update snapshot.
                     * @return Action Operation type
CreateCfsSnapshot: create a snapshot.
DeleteCfsSnapshot: delete snapshot.
CreateCfsFileSystem: create a file system.
UpdateCfsSnapshotAttribute: update snapshot.
                     * 
                     */
                    std::string GetAction() const;

                    /**
                     * 设置Operation type
CreateCfsSnapshot: create a snapshot.
DeleteCfsSnapshot: delete snapshot.
CreateCfsFileSystem: create a file system.
UpdateCfsSnapshotAttribute: update snapshot.
                     * @param _action Operation type
CreateCfsSnapshot: create a snapshot.
DeleteCfsSnapshot: delete snapshot.
CreateCfsFileSystem: create a file system.
UpdateCfsSnapshotAttribute: update snapshot.
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
                     * 获取Operation name.
CreateCfsSnapshot
DeleteCfsSnapshot
CreateCfsFileSystem
UpdateCfsSnapshotAttribute
                     * @return ActionName Operation name.
CreateCfsSnapshot
DeleteCfsSnapshot
CreateCfsFileSystem
UpdateCfsSnapshotAttribute
                     * 
                     */
                    std::string GetActionName() const;

                    /**
                     * 设置Operation name.
CreateCfsSnapshot
DeleteCfsSnapshot
CreateCfsFileSystem
UpdateCfsSnapshotAttribute
                     * @param _actionName Operation name.
CreateCfsSnapshot
DeleteCfsSnapshot
CreateCfsFileSystem
UpdateCfsSnapshotAttribute
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
                     * 获取Operator uin.
                     * @return Operator Operator uin.
                     * 
                     */
                    std::string GetOperator() const;

                    /**
                     * 设置Operator uin.
                     * @param _operator Operator uin.
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
                     * 获取1- task in progress; 2- task success; 3- task failure.
                     * @return Result 1- task in progress; 2- task success; 3- task failure.
                     * 
                     */
                    uint64_t GetResult() const;

                    /**
                     * 设置1- task in progress; 2- task success; 3- task failure.
                     * @param _result 1- task in progress; 2- task success; 3- task failure.
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
CreateCfsSnapshot: create a snapshot.
DeleteCfsSnapshot: delete snapshot.
CreateCfsFileSystem: create a file system.
UpdateCfsSnapshotAttribute: update snapshot.
                     */
                    std::string m_action;
                    bool m_actionHasBeenSet;

                    /**
                     * Operation time
                     */
                    std::string m_actionTime;
                    bool m_actionTimeHasBeenSet;

                    /**
                     * Operation name.
CreateCfsSnapshot
DeleteCfsSnapshot
CreateCfsFileSystem
UpdateCfsSnapshotAttribute
                     */
                    std::string m_actionName;
                    bool m_actionNameHasBeenSet;

                    /**
                     * Operator uin.
                     */
                    std::string m_operator;
                    bool m_operatorHasBeenSet;

                    /**
                     * 1- task in progress; 2- task success; 3- task failure.
                     */
                    uint64_t m_result;
                    bool m_resultHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFS_V20190719_MODEL_SNAPSHOTOPERATELOG_H_
