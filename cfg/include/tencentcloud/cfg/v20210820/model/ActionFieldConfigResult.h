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

#ifndef TENCENTCLOUD_CFG_V20210820_MODEL_ACTIONFIELDCONFIGRESULT_H_
#define TENCENTCLOUD_CFG_V20210820_MODEL_ACTIONFIELDCONFIGRESULT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cfg/v20210820/model/ActionFieldConfigDetail.h>


namespace TencentCloud
{
    namespace Cfg
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * Action field configuration result
                */
                class ActionFieldConfigResult : public AbstractModel
                {
                public:
                    ActionFieldConfigResult();
                    ~ActionFieldConfigResult() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Action ID
                     * @return ActionId Action ID
                     * 
                     */
                    uint64_t GetActionId() const;

                    /**
                     * 设置Action ID
                     * @param _actionId Action ID
                     * 
                     */
                    void SetActionId(const uint64_t& _actionId);

                    /**
                     * 判断参数 ActionId 是否已赋值
                     * @return ActionId 是否已赋值
                     * 
                     */
                    bool ActionIdHasBeenSet() const;

                    /**
                     * 获取Action name
                     * @return ActionName Action name
                     * 
                     */
                    std::string GetActionName() const;

                    /**
                     * 设置Action name
                     * @param _actionName Action name
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
                     * 获取Filed configuration details corresponding to the action
                     * @return ConfigDetail Filed configuration details corresponding to the action
                     * 
                     */
                    std::vector<ActionFieldConfigDetail> GetConfigDetail() const;

                    /**
                     * 设置Filed configuration details corresponding to the action
                     * @param _configDetail Filed configuration details corresponding to the action
                     * 
                     */
                    void SetConfigDetail(const std::vector<ActionFieldConfigDetail>& _configDetail);

                    /**
                     * 判断参数 ConfigDetail 是否已赋值
                     * @return ConfigDetail 是否已赋值
                     * 
                     */
                    bool ConfigDetailHasBeenSet() const;

                private:

                    /**
                     * Action ID
                     */
                    uint64_t m_actionId;
                    bool m_actionIdHasBeenSet;

                    /**
                     * Action name
                     */
                    std::string m_actionName;
                    bool m_actionNameHasBeenSet;

                    /**
                     * Filed configuration details corresponding to the action
                     */
                    std::vector<ActionFieldConfigDetail> m_configDetail;
                    bool m_configDetailHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFG_V20210820_MODEL_ACTIONFIELDCONFIGRESULT_H_
