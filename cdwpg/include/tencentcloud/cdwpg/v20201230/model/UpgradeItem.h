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

#ifndef TENCENTCLOUD_CDWPG_V20201230_MODEL_UPGRADEITEM_H_
#define TENCENTCLOUD_CDWPG_V20201230_MODEL_UPGRADEITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cdwpg
    {
        namespace V20201230
        {
            namespace Model
            {
                /**
                * Upgrade information
                */
                class UpgradeItem : public AbstractModel
                {
                public:
                    UpgradeItem();
                    ~UpgradeItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Task name.

Note: This field may return null, indicating that no valid values can be obtained.
                     * @return TaskName Task name.

Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetTaskName() const;

                    /**
                     * 设置Task name.

Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _taskName Task name.

Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetTaskName(const std::string& _taskName);

                    /**
                     * 判断参数 TaskName 是否已赋值
                     * @return TaskName 是否已赋值
                     * 
                     */
                    bool TaskNameHasBeenSet() const;

                    /**
                     * 获取Original kernel version.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return SourceVersion Original kernel version.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetSourceVersion() const;

                    /**
                     * 设置Original kernel version.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _sourceVersion Original kernel version.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetSourceVersion(const std::string& _sourceVersion);

                    /**
                     * 判断参数 SourceVersion 是否已赋值
                     * @return SourceVersion 是否已赋值
                     * 
                     */
                    bool SourceVersionHasBeenSet() const;

                    /**
                     * 获取Target kernel version.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return TargetVersion Target kernel version.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetTargetVersion() const;

                    /**
                     * 设置Target kernel version.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _targetVersion Target kernel version.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetTargetVersion(const std::string& _targetVersion);

                    /**
                     * 判断参数 TargetVersion 是否已赋值
                     * @return TargetVersion 是否已赋值
                     * 
                     */
                    bool TargetVersionHasBeenSet() const;

                    /**
                     * 获取Task creation time.

Note: This field may return null, indicating that no valid values can be obtained.
                     * @return CreateTime Task creation time.

Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置Task creation time.

Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _createTime Task creation time.

Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取Task end time.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return EndTime Task end time.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置Task end time.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _endTime Task end time.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetEndTime(const std::string& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     * 
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取Task completion status.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Status Task completion status.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置Task completion status.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _status Task completion status.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取Operator.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return OperateUin Operator.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetOperateUin() const;

                    /**
                     * 设置Operator.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _operateUin Operator.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetOperateUin(const std::string& _operateUin);

                    /**
                     * 判断参数 OperateUin 是否已赋值
                     * @return OperateUin 是否已赋值
                     * 
                     */
                    bool OperateUinHasBeenSet() const;

                private:

                    /**
                     * Task name.

Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_taskName;
                    bool m_taskNameHasBeenSet;

                    /**
                     * Original kernel version.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_sourceVersion;
                    bool m_sourceVersionHasBeenSet;

                    /**
                     * Target kernel version.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_targetVersion;
                    bool m_targetVersionHasBeenSet;

                    /**
                     * Task creation time.

Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * Task end time.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * Task completion status.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Operator.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_operateUin;
                    bool m_operateUinHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDWPG_V20201230_MODEL_UPGRADEITEM_H_
