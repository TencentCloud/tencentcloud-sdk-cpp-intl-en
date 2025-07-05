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

#ifndef TENCENTCLOUD_DTS_V20211206_MODEL_MIGRATEACTION_H_
#define TENCENTCLOUD_DTS_V20211206_MODEL_MIGRATEACTION_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dts
    {
        namespace V20211206
        {
            namespace Model
            {
                /**
                * Task operation information, which contains the list of all operations in the migration task as well as the list of allowed operations under the current status.
                */
                class MigrateAction : public AbstractModel
                {
                public:
                    MigrateAction();
                    ~MigrateAction() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取List of all operations in the task
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return AllAction List of all operations in the task
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<std::string> GetAllAction() const;

                    /**
                     * 设置List of all operations in the task
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _allAction List of all operations in the task
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetAllAction(const std::vector<std::string>& _allAction);

                    /**
                     * 判断参数 AllAction 是否已赋值
                     * @return AllAction 是否已赋值
                     * 
                     */
                    bool AllActionHasBeenSet() const;

                    /**
                     * 获取List of allowed operations in the task under the current status
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return AllowedAction List of allowed operations in the task under the current status
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<std::string> GetAllowedAction() const;

                    /**
                     * 设置List of allowed operations in the task under the current status
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _allowedAction List of allowed operations in the task under the current status
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetAllowedAction(const std::vector<std::string>& _allowedAction);

                    /**
                     * 判断参数 AllowedAction 是否已赋值
                     * @return AllowedAction 是否已赋值
                     * 
                     */
                    bool AllowedActionHasBeenSet() const;

                private:

                    /**
                     * List of all operations in the task
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<std::string> m_allAction;
                    bool m_allActionHasBeenSet;

                    /**
                     * List of allowed operations in the task under the current status
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<std::string> m_allowedAction;
                    bool m_allowedActionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DTS_V20211206_MODEL_MIGRATEACTION_H_
