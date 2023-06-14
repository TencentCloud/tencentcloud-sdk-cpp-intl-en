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

#ifndef TENCENTCLOUD_SQLSERVER_V20180328_MODEL_MIGRATIONACTION_H_
#define TENCENTCLOUD_SQLSERVER_V20180328_MODEL_MIGRATIONACTION_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Sqlserver
    {
        namespace V20180328
        {
            namespace Model
            {
                /**
                * Operation allowed by a cold backup import task
                */
                class MigrationAction : public AbstractModel
                {
                public:
                    MigrationAction();
                    ~MigrationAction() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取All the allowed operations. Values include: view (viewing a task), modify (modifying a task), start (starting a task), incremental (creating an incremental task), delete (deleting a task), and upload (obtaining the upload permission).
                     * @return AllAction All the allowed operations. Values include: view (viewing a task), modify (modifying a task), start (starting a task), incremental (creating an incremental task), delete (deleting a task), and upload (obtaining the upload permission).
                     * 
                     */
                    std::vector<std::string> GetAllAction() const;

                    /**
                     * 设置All the allowed operations. Values include: view (viewing a task), modify (modifying a task), start (starting a task), incremental (creating an incremental task), delete (deleting a task), and upload (obtaining the upload permission).
                     * @param _allAction All the allowed operations. Values include: view (viewing a task), modify (modifying a task), start (starting a task), incremental (creating an incremental task), delete (deleting a task), and upload (obtaining the upload permission).
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
                     * 获取Operation allowed in the current status. If the subset of AllAction is left empty, no operations will be allowed.
                     * @return AllowedAction Operation allowed in the current status. If the subset of AllAction is left empty, no operations will be allowed.
                     * 
                     */
                    std::vector<std::string> GetAllowedAction() const;

                    /**
                     * 设置Operation allowed in the current status. If the subset of AllAction is left empty, no operations will be allowed.
                     * @param _allowedAction Operation allowed in the current status. If the subset of AllAction is left empty, no operations will be allowed.
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
                     * All the allowed operations. Values include: view (viewing a task), modify (modifying a task), start (starting a task), incremental (creating an incremental task), delete (deleting a task), and upload (obtaining the upload permission).
                     */
                    std::vector<std::string> m_allAction;
                    bool m_allActionHasBeenSet;

                    /**
                     * Operation allowed in the current status. If the subset of AllAction is left empty, no operations will be allowed.
                     */
                    std::vector<std::string> m_allowedAction;
                    bool m_allowedActionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SQLSERVER_V20180328_MODEL_MIGRATIONACTION_H_
